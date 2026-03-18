/*
 * XREFs of VidSchiAdjustWorkerThreadPriorityDirectSubmitAware @ 0x14004B0BC
 * Callers:
 *     VidSchiAdjustWorkerThreadPriority @ 0x140034510 (VidSchiAdjustWorkerThreadPriority.c)
 * Callees:
 *     VidSchiComputeWorkerThreadPriority @ 0x1400378F8 (VidSchiComputeWorkerThreadPriority.c)
 */

void __fastcall VidSchiAdjustWorkerThreadPriorityDirectSubmitAware(__int64 a1)
{
  __int64 v1; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v4; // rbx
  struct _KTHREAD *v5; // rdx
  int v6; // ebp
  struct _ERESOURCE *i; // rdi
  int v8; // eax
  struct _ERESOURCE *v9; // rcx
  KPRIORITY v10; // r14d

  v1 = *(_QWORD *)(a1 + 96);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(v1 + 24);
  v5 = *(struct _KTHREAD **)(v4 + 168);
  if ( (*(_DWORD *)(v4 + 2792) & 0x20) == 0 )
  {
    if ( CurrentThread == v5 )
      return;
    v9 = (struct _ERESOURCE *)(v4 + 1240);
    goto LABEL_16;
  }
  if ( CurrentThread != v5 )
  {
    v6 = 31;
    if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 < 31 )
      v6 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
    for ( i = (struct _ERESOURCE *)(v4 + 1240); ; ExAcquireResourceExclusiveLite(i, 1u) )
    {
LABEL_8:
      v8 = *(_DWORD *)(a1 + 780);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v4 + 168) )
      {
        if ( v8 )
          break;
      }
      else if ( !v8 )
      {
        break;
      }
      v10 = VidSchiComputeWorkerThreadPriority(a1, v6);
      if ( v10 == KeQueryPriorityThread(*(PKTHREAD *)(v4 + 168)) )
        break;
      ExReleaseResourceLite(i);
      KeSetPriorityThread(*(PKTHREAD *)(v4 + 168), v10);
    }
    v9 = i;
LABEL_16:
    ExReleaseResourceLite(v9);
    return;
  }
  if ( !*(_DWORD *)(a1 + 780) )
  {
    i = (struct _ERESOURCE *)(v4 + 1240);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1240), 1u);
    v6 = 16;
    goto LABEL_8;
  }
}
