/*
 * XREFs of KeVerifyContextIpForUserCet @ 0x1403D4570
 * Callers:
 *     PspGetSetContextInternal @ 0x1409882C0 (PspGetSetContextInternal.c)
 * Callees:
 *     KiVerifyContextIpForUserCet @ 0x1403D5CD8 (KiVerifyContextIpForUserCet.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1405C449C (KiLogUserCetSetContextIpValidationFailure.c)
 */

__int64 __fastcall KeVerifyContextIpForUserCet(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned int v8; // ebp
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx

  v5 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) == 0 )
    return 0LL;
  v8 = *(_DWORD *)(v5 + 1876);
  if ( (v8 & 0x20000) == 0 || (*(_DWORD *)(a2 + 48) & 0x100001) != 0x100001 )
    return 0LL;
  v9 = v8 >> 31;
  result = KiVerifyContextIpForUserCet(a1, a2, (_DWORD)a3, (unsigned __int8)v9, a4);
  v10 = result;
  if ( (_DWORD)result == -1073740278 )
  {
    v11 = *(_QWORD *)(a2 + 248);
    v12 = (unsigned __int8)v9 ^ 1u;
    v13 = *a3;
    if ( (*(_DWORD *)(v5 + 1876) & 0x40000) != 0 )
    {
      KiLogUserCetSetContextIpValidationFailure(1LL, v13, v11, v12);
      return 0LL;
    }
    else
    {
      KiLogUserCetSetContextIpValidationFailure(2LL, v13, v11, v12);
      return v10;
    }
  }
  return result;
}
