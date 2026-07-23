/*
 * XREFs of MiQueryVpabAccessedState @ 0x1403994CC
 * Callers:
 *     MiAgeTrimListsTail @ 0x14020B9B0 (MiAgeTrimListsTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140296100 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeWorkingSetTail @ 0x140296210 (MiAgeWorkingSetTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     VmpQueryAccessedState @ 0x140399630 (VmpQueryAccessedState.c)
 *     VslQueryPrivilegedAccessedState @ 0x140399854 (VslQueryPrivilegedAccessedState.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiQueryVpabAccessedState(__int64 a1, unsigned int *a2, int a3)
{
  __int64 v3; // r14
  __int64 v7; // r9
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v10; // rdx
  _BYTE v11[208]; // [rsp+30h] [rbp-108h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  MiReleaseWalkLocks(a1);
  if ( KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink )
  {
    VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink);
  }
  else
  {
    if ( (int)VslQueryPrivilegedAccessedState(a2 + 2) < 0 )
      KeBugCheckEx(0x1Au, 0x51515uLL, (ULONG_PTR)(a2 + 2), *a2, 0LL);
    if ( a3 )
    {
      memset_0(v11, 0, 0xC8uLL);
      MiInitializeTbFlushList((__int64)v11, *(_QWORD *)(a1 + 32), 20, 8, 2);
      for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
      {
        v10 = *(_QWORD *)&a2[2 * i + 2];
        if ( (v10 & 2) == 0 && (v10 & 1) != 0 )
          MiInsertTbFlushEntry((__int64)v11, v10 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
      }
      MiFlushTbList((__int64)v11);
    }
  }
  result = MiReacquireWalkLocks(a1, v3, 0LL, v7);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
