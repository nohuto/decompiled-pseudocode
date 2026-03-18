/*
 * XREFs of DestroyThreadsObjects @ 0x1C004F800
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0045EE0 (ThreadUnlock1.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004EC10 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     IsCleanupW32ThreadLocksSupported @ 0x1C0050FBC (IsCleanupW32ThreadLocksSupported.c)
 *     DestroyCacheDCEntries @ 0x1C0050FE8 (DestroyCacheDCEntries.c)
 *     HMAssignmentUnlockWorker @ 0x1C0056D3C (HMAssignmentUnlockWorker.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rbp
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries(gptiCurrent);
  while ( *((_QWORD *)v0 + 52) )
    ThreadUnlock1();
  if ( (int)IsCleanupW32ThreadLocksSupported() >= 0 && qword_1C0295C60 )
    qword_1C0295C60(v0);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v9, v1, v2, v3);
  if ( *((_QWORD *)v0 + 139) )
  {
    if ( qword_1C0295C68 && (int)qword_1C0295C68() >= 0 && qword_1C0295C70 )
      qword_1C0295C70(*((_QWORD *)v0 + 139), 1LL);
    *((_QWORD *)v0 + 139) = 0LL;
  }
  if ( *((_QWORD *)v0 + 140) )
  {
    if ( qword_1C0295C78 && (int)qword_1C0295C78() >= 0 && qword_1C0295C80 )
      qword_1C0295C80(*((_QWORD *)v0 + 140), 1LL);
    *((_QWORD *)v0 + 140) = 0LL;
  }
  v4 = giheLast;
  if ( giheLast >= 0LL )
  {
    v5 = 24LL * giheLast;
    v6 = 32LL * giheLast;
    do
    {
      v7 = *((unsigned __int8 *)qword_1C028FE68 + v6 + 24);
      if ( (_BYTE)v7 )
      {
        if ( (*((_BYTE *)&unk_1C024292C + 24 * v7) & 2) != 0 )
        {
          if ( (_BYTE)v7 == 2 )
          {
            v8 = *(_QWORD *)((char *)gpKernelHandleTable + v5) + 80LL;
            if ( *(_QWORD *)v8 )
            {
              if ( *(struct tagTHREADINFO **)(*(_QWORD *)v8 + 16LL) == v0 )
                HMAssignmentUnlockWorker(v8);
            }
          }
        }
        else if ( *(struct tagTHREADINFO **)((char *)gpKernelHandleTable + v5 + 8) == v0
               && (*((_BYTE *)qword_1C028FE68 + v6 + 25) & 1) == 0 )
        {
          HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)((char *)qword_1C028FE68 + v6));
        }
      }
      v6 -= 32LL;
      v5 -= 24LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v9);
}
