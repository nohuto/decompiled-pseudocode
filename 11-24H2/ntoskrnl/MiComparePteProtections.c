/*
 * XREFs of MiComparePteProtections @ 0x140440114
 * Callers:
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
 *     MiSecureVad @ 0x1409E51EC (MiSecureVad.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 */

__int64 __fastcall MiComparePteProtections(ULONG_PTR a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  int v7; // r14d
  unsigned __int64 v9; // rdi
  _KPROCESS *Process; // rsi
  unsigned __int8 v11; // r15
  int v12; // eax
  int v13; // ecx
  bool v14; // zf
  int v16; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-8h] BYREF
  __int16 v18; // [rsp+A8h] [rbp+48h] BYREF
  int v19; // [rsp+B0h] [rbp+50h] BYREF

  v5 = 0;
  v17 = 0LL;
  v7 = a4;
  v19 = 0;
  v16 = 0;
  v9 = a2;
  v18 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, a2, a3, a4);
  while ( v9 <= a3 )
  {
    v12 = MiQueryAddressState(v9, a3, v11, a1, 0LL, &v19, &v16, &v18, &v17);
    v13 = v19;
    if ( v12 == 0x2000 )
    {
      if ( v19 )
        goto LABEL_5;
      v13 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
      v19 = v13;
    }
    if ( !v13 )
      goto LABEL_12;
LABEL_5:
    if ( a5 )
    {
      if ( v13 != v7 )
        goto LABEL_12;
    }
    else if ( v13 == -1
           || (v13 & 0xFFFFFFF8) == 0x10
           || (v7 != 1 ? (v14 = (v13 & 4) == 0) : (v14 = (v13 & 7) == 0), v14) )
    {
LABEL_12:
      v5 = -1073741755;
      break;
    }
    v9 = v17;
  }
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v11);
  return v5;
}
