/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x1407741A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3, __int64 a4)
{
  int v5; // edi
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v9; // ebx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int *v13; // rax
  int v14; // r12d
  _OWORD v16[3]; // [rsp+50h] [rbp-68h] BYREF

  memset(v16, 0, sizeof(v16));
  v5 = 0;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( !*(_QWORD *)(BugCheckParameter1 + 736) )
    return 3221225711LL;
  v7 = a2 & 1;
  if ( (a2 & 1) != 0 && !*(_QWORD *)(BugCheckParameter1 + 784) )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v9 = 0;
    if ( CurrentThread->Process != (_KPROCESS *)BugCheckParameter1 )
      v9 = 2;
  }
  else
  {
    v9 = 3;
  }
  if ( v9 >= 2 )
  {
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      return 3221225738LL;
    }
  }
  if ( (v9 & 1) != 0 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v16);
  if ( v7 )
  {
    v10 = *(__int64 **)(BugCheckParameter1 + 784);
    if ( !v10 || *(_WORD *)(BugCheckParameter1 + 1772) != 0x8664 )
    {
      v12 = 0LL;
      if ( v10 )
        v12 = *v10;
      v13 = (int *)(v12 + 40);
      goto LABEL_24;
    }
    v11 = *v10;
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter1 + 736);
  }
  v13 = (int *)(v11 + 80);
LABEL_24:
  v14 = *v13;
  if ( (v9 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v16, 0, (__int64)a3, a4);
  if ( v9 >= 2 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  *a3 = 0;
  if ( (v14 & 4) != 0 )
  {
    *a3 = 1;
    v5 = 1;
  }
  if ( (v14 & 8) != 0 )
    *a3 = v5 | 2;
  return 0LL;
}
