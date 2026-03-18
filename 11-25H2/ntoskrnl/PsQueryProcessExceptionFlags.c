/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x1407645B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3)
{
  int v4; // edi
  int v6; // r15d
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int *v15; // rax
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _OWORD v21[3]; // [rsp+50h] [rbp-68h] BYREF

  memset(v21, 0, sizeof(v21));
  v4 = 0;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( !*(_QWORD *)(BugCheckParameter1 + 736) )
    return 3221225711LL;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 && !*(_QWORD *)(BugCheckParameter1 + 784) )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v8 = 0;
    if ( CurrentThread->Process != (_KPROCESS *)BugCheckParameter1 )
      v8 = 2;
  }
  else
  {
    v8 = 3;
  }
  if ( v8 >= 2 )
  {
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v9, v10, v11);
      return 3221225738LL;
    }
  }
  if ( (v8 & 1) != 0 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v21);
  if ( v6 )
  {
    v12 = *(__int64 **)(BugCheckParameter1 + 784);
    if ( !v12 || *(_WORD *)(BugCheckParameter1 + 1772) != 0x8664 )
    {
      v14 = 0LL;
      if ( v12 )
        v14 = *v12;
      v15 = (int *)(v14 + 40);
      goto LABEL_24;
    }
    v13 = *v12;
  }
  else
  {
    v13 = *(_QWORD *)(BugCheckParameter1 + 736);
  }
  v15 = (int *)(v13 + 80);
LABEL_24:
  v16 = *v15;
  if ( (v8 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v21, 0LL);
  if ( v8 >= 2 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v17, v18, v19);
  }
  *a3 = 0;
  if ( (v16 & 4) != 0 )
  {
    *a3 = 1;
    v4 = 1;
  }
  if ( (v16 & 8) != 0 )
    *a3 = v4 | 2;
  return 0LL;
}
