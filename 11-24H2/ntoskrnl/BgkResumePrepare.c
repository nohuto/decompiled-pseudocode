/*
 * XREFs of BgkResumePrepare @ 0x140B5368C
 * Callers:
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 *     PopMarkComponentsBootPhase @ 0x140B5D694 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     BgkpLockBgfxCodeSection @ 0x140BB04F0 (BgkpLockBgfxCodeSection.c)
 *     BgGetContext @ 0x140BB06A8 (BgGetContext.c)
 *     BgMarkHiberPhase @ 0x140BB078C (BgMarkHiberPhase.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140BB4910 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 __fastcall BgkResumePrepare(PVOID MemoryMap)
{
  unsigned int v1; // ebx
  __int64 Context; // rax
  void *v4; // rdi
  void *v5; // r8
  _QWORD *v6; // rdi
  void *v7; // r8

  v1 = 0;
  if ( MemoryMap )
  {
    BgkpLockBgfxCodeSection();
    Context = BgGetContext();
    v4 = (void *)Context;
    if ( !Context )
    {
      BgkpUnlockBgfxCodeSection();
      return (unsigned int)-1073741670;
    }
    v5 = *(void **)(Context + 16);
    if ( v5 )
      PoSetHiberRange(MemoryMap, 0x8000u, v5, *(unsigned int *)(Context + 24), 0x4B494742u);
    qword_140E65D88 = v4;
  }
  else
  {
    v6 = qword_140E65D88;
    if ( !qword_140E65D88 )
      return (unsigned int)-1073741670;
    PoSetHiberRange(0LL, 0x10000u, qword_140E65D88, *(unsigned int *)qword_140E65D88, 0);
    v7 = (void *)v6[2];
    if ( v7 )
      PoSetHiberRange(0LL, 0x10000u, v7, *((unsigned int *)v6 + 6), 0);
    return (unsigned int)BgMarkHiberPhase();
  }
  return v1;
}
