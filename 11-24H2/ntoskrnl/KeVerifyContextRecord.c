/*
 * XREFs of KeVerifyContextRecord @ 0x1403D5B40
 * Callers:
 *     KyRaiseException @ 0x1403D4170 (KyRaiseException.c)
 *     PspGetSetContextInternal @ 0x1409882C0 (PspGetSetContextInternal.c)
 * Callees:
 *     KiVerifyContextIpForUserCet @ 0x1403D5CD8 (KiVerifyContextIpForUserCet.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1405C449C (KiLogUserCetSetContextIpValidationFailure.c)
 *     PsWow64GetProcessMachine @ 0x14091D9C0 (PsWow64GetProcessMachine.c)
 *     RtlGuardIsValidStackPointer @ 0x1409DE5F0 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140A3C85C (RtlGuardIsValidWow64StackPointer.c)
 */

__int64 __fastcall KeVerifyContextRecord(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned int v14; // ebp
  unsigned int v15; // ebp
  int v16; // ebx
  __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(v4 + 136) & 0x20) != 0 && (*(_DWORD *)(a2 + 48) & 0x100001) == 0x100001 )
  {
    v9 = *(_QWORD *)(a2 + 152);
    v10 = *(_QWORD *)(a1 + 240);
    if ( !(unsigned int)RtlGuardIsValidStackPointer(v9, v10, a3) )
    {
      if ( !*(_QWORD *)(v4 + 784) )
        return 3221225485LL;
      v17 = *(_WORD *)(v4 + 1772);
      if ( v17 != 332 && v17 != 452 )
        return 3221225485LL;
      if ( v9 >= 0xFFFFFFFF || !(unsigned int)RtlGuardIsValidWow64StackPointer((unsigned int)v9, v10) )
        return 3221225485LL;
    }
  }
  if ( (*(_DWORD *)(a2 + 48) & 0x100001) == 0x100001 )
  {
    v11 = *(_QWORD *)(a1 + 544);
    if ( (unsigned __int16)PsWow64GetProcessMachine(v11) != 332
      && (!*(_QWORD *)(v11 + 1600) || *(_WORD *)(a2 + 56) != 35) )
    {
      *(_WORD *)(a2 + 56) = 51;
    }
    if ( a3 )
    {
      v12 = *(_QWORD *)(a1 + 184);
      if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
      {
        v14 = *(_DWORD *)(v12 + 1876);
        if ( (v14 & 0x20000) != 0 )
        {
          v15 = v14 >> 31;
          v16 = KiVerifyContextIpForUserCet(a1, a2, (_DWORD)a3, (unsigned __int8)v15, a4);
          if ( v16 == -1073740278 )
          {
            v18 = *(_QWORD *)(a2 + 248);
            v19 = (unsigned __int8)v15 ^ 1u;
            v20 = *a3;
            if ( (*(_DWORD *)(v12 + 1876) & 0x40000) != 0 )
            {
              KiLogUserCetSetContextIpValidationFailure(1LL, v20, v18, v19);
              v16 = 0;
            }
            else
            {
              KiLogUserCetSetContextIpValidationFailure(2LL, v20, v18, v19);
            }
          }
          if ( v16 < 0 )
            return (unsigned int)v16;
        }
      }
    }
  }
  return 0LL;
}
