/*
 * XREFs of NvmeControllerStartReenumeration @ 0x1400BF540
 * Callers:
 *     NvmeControllerGetLogPageCompletionForAER @ 0x1400EE2B0 (NvmeControllerGetLogPageCompletionForAER.c)
 * Callees:
 *     NvmeControllerAcquireRundown @ 0x1400BEB10 (NvmeControllerAcquireRundown.c)
 *     NvmeControllerInitReenumerationContext @ 0x1400BF21C (NvmeControllerInitReenumerationContext.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeControllerStartReenumeration(char *Context, _DWORD *Src)
{
  __int64 result; // rax
  char *v5; // rbx
  int inited; // ebp
  __int64 v7; // rcx

  result = NvmeControllerAcquireRundown((__int64)Context);
  if ( (int)result < 0 )
    return result;
  v5 = Context + 1656;
  inited = NvmeControllerInitReenumerationContext((__int64)Context);
  if ( inited >= 0 )
  {
    if ( !Src )
    {
LABEL_6:
      *(_DWORD *)(*(_QWORD *)v5 + 28LL) |= 0x100u;
LABEL_14:
      if ( !_interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)v5 + 28LL), 0) )
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(*(_QWORD *)v5 + 40LL),
          (PIO_WORKITEM_ROUTINE)NvmeControllerReenumerationRoutine,
          DelayedWorkQueue,
          Context);
      return 0LL;
    }
    v7 = *(_QWORD *)v5;
    if ( *Src == -1 )
    {
      *(_DWORD *)(v7 + 28) |= 4u;
      goto LABEL_6;
    }
    if ( *Src )
    {
      memmove(*(void **)(v7 + 48), Src, 0x1000uLL);
      goto LABEL_14;
    }
    *(_DWORD *)(v7 + 28) |= 0x10u;
  }
  if ( *(_QWORD *)v5 )
    *(_DWORD *)(*(_QWORD *)v5 + 28LL) &= ~0x100u;
  _interlockedbittestandreset((volatile signed __int32 *)Context + 268, 1u);
  _interlockedbittestandreset((volatile signed __int32 *)Context + 268, 2u);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 69));
  return (unsigned int)inited;
}
