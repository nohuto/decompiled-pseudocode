/*
 * XREFs of KeVerifyContextXStateCetU @ 0x1403D59C0
 * Callers:
 *     KyRaiseException @ 0x1403D4170 (KyRaiseException.c)
 *     PspGetSetContextInternal @ 0x1409882C0 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x140237160 (RtlLocateExtendedFeature.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1403D5AB4 (KiVerifyContextXStateCetUEnabled.c)
 */

__int64 __fastcall KeVerifyContextXStateCetU(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  _QWORD *ExtendedFeature; // r8
  __int64 result; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // rdx

  if ( (*(_DWORD *)(a2 + 48) & 0x100040) != 0x100040 )
    return 0LL;
  ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a2 + 1232), 0xBu, 0LL);
  if ( !ExtendedFeature )
    return 0LL;
  v8 = *(int *)(a2 + 1248);
  v9 = __readmsr(0x6A7u);
  *a3 = v9;
  v10 = *(_QWORD *)(v8 + a2 + 1232) & 0x800LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
  {
    if ( v10 )
    {
      result = KiVerifyContextXStateCetUEnabled(ExtendedFeature, v9);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      *(_QWORD *)(v8 + a2 + 1232) |= 0x800uLL;
      *ExtendedFeature = 1LL;
      ExtendedFeature[1] = v9;
    }
    return 0LL;
  }
  if ( !v10 )
    return 0LL;
  if ( *ExtendedFeature )
    return 3221227018LL;
  else
    return ExtendedFeature[1] != 0LL ? 0xC000060A : 0;
}
