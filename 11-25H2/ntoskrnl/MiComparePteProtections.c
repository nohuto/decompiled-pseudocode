/*
 * XREFs of MiComparePteProtections @ 0x140246118
 * Callers:
 *     MiCheckSecuredVad @ 0x1408F8A18 (MiCheckSecuredVad.c)
 *     MiSecureVad @ 0x1409F01EC (MiSecureVad.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 */

__int64 __fastcall MiComparePteProtections(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v5; // ebx
  _KPROCESS *Process; // rsi
  __int64 v11; // rdx
  unsigned __int8 v12; // r15
  int v13; // eax
  int v14; // ecx
  bool v15; // zf
  int v17; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-8h] BYREF
  __int16 v19; // [rsp+A8h] [rbp+48h] BYREF
  int v20; // [rsp+B0h] [rbp+50h] BYREF

  v5 = 0;
  v18 = 0LL;
  v20 = 0;
  v17 = 0;
  v19 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink);
  while ( a2 <= a3 )
  {
    v13 = MiQueryAddressState(a2, a3, v12, a1, 0LL, &v20, &v17, &v19, (__int64 *)&v18);
    v14 = v20;
    if ( v13 == 0x2000 )
    {
      if ( v20 )
        goto LABEL_5;
      v14 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
      v20 = v14;
    }
    if ( !v14 )
      goto LABEL_13;
LABEL_5:
    if ( a5 )
    {
      if ( v14 != a4 )
        goto LABEL_13;
    }
    else if ( v14 == -1
           || (v14 & 0xFFFFFFF8) == 0x10
           || (a4 != 1 ? (v15 = (v14 & 4) == 0) : (v15 = (v14 & 7) == 0), v15) )
    {
LABEL_13:
      v5 = -1073741755;
      break;
    }
    a2 = v18;
  }
  LOBYTE(v11) = v12;
  MiUnlockWorkingSetShared(&Process[2].ReadyListHead.Blink, v11);
  return v5;
}
