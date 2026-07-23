/*
 * XREFs of PopWin32kActivatorCallback @ 0x14074B620
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x14078DA44 (Pdcv2ActivationClientRenewActivation.c)
 */

__int64 __fastcall PopWin32kActivatorCallback(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  int v6; // ebx
  __int64 result; // rax
  _DWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  __int128 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 == 100 )
  {
    v11 = 0;
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopWin32kPowerRequestStatus);
    v6 = *((_DWORD *)&PopWin32kPowerRequestStatus + a4 + 6);
    result = PopReleaseRwLock(&PopWin32kPowerRequestStatus);
    if ( v6 )
    {
      v8[0] = 1;
      v8[1] = 300;
      v9 = 0LL;
      v10 = 0LL;
      return Pdcv2ActivationClientRenewActivation(a1, v8, &v11);
    }
  }
  return result;
}
