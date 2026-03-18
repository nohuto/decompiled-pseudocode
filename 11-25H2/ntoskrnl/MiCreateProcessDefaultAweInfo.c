/*
 * XREFs of MiCreateProcessDefaultAweInfo @ 0x1407E96D0
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x140ABCAD0 (MiCreateUserPhysicalView.c)
 * Callees:
 *     MiUnlockAweVadsExclusive @ 0x1404B4370 (MiUnlockAweVadsExclusive.c)
 *     MiLockAweVadsExclusive @ 0x1404B43C0 (MiLockAweVadsExclusive.c)
 *     MiAllocateAweInfo @ 0x1407E8328 (MiAllocateAweInfo.c)
 *     MiDeleteAweInfo @ 0x1407E9808 (MiDeleteAweInfo.c)
 */

__int64 __fastcall MiCreateProcessDefaultAweInfo(KPROCESSOR_MODE a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  volatile _KAFFINITY_EX *ActiveProcessors; // r15
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // edi
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  ActiveProcessors = Process[2].ActiveProcessors;
  v6 = ActiveProcessors[4].StaticBitmap[4];
  v9 = v6;
  if ( !v6 )
  {
    result = MiAllocateAweInfo(0LL, 1, 0, a1, (__int64 *)&v9);
    if ( (int)result < 0 )
      return result;
    v8 = 0;
    MiLockAweVadsExclusive((__int64)CurrentThread);
    v6 = v9;
    if ( !Process[2].ActiveProcessors[4].StaticBitmap[4] )
    {
      ActiveProcessors[4].StaticBitmap[4] = v9;
      v8 = 1;
    }
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    if ( !v8 )
    {
      MiDeleteAweInfo(KeGetCurrentThread()->ApcState.Process, v9);
      v6 = Process[2].ActiveProcessors[4].StaticBitmap[4];
    }
  }
  *a2 = v6;
  return 0LL;
}
