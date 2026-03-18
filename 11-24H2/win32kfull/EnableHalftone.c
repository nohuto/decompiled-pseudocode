/*
 * XREFs of EnableHalftone @ 0x140203A70
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitializeSessionGlobals @ 0x140203B0C (HT_InitializeSessionGlobals.c)
 *     HT_InitSaneLimits @ 0x140203B88 (HT_InitSaneLimits.c)
 *     HT_UninitializeSessionGlobals @ 0x14026C388 (HT_UninitializeSessionGlobals.c)
 */

__int64 EnableHalftone()
{
  __int64 v0; // rdx
  int v1; // ecx
  __int64 v2; // rbx
  HSEMAPHORE Semaphore; // rax
  HSEMAPHORE v4; // rax
  HSEMAPHORE v5; // rax

  if ( (unsigned int)HT_InitializeSessionGlobals() )
  {
    v2 = *(_QWORD *)(W32GetSessionState(v1, v0) + 112);
    Semaphore = EngCreateSemaphore();
    *(_QWORD *)(v2 + 24) = Semaphore;
    if ( Semaphore )
    {
      *(_QWORD *)(v2 + 48) = 0LL;
      *(_QWORD *)(v2 + 60) = 0LL;
      *(_DWORD *)(v2 + 56) = 0;
      v4 = EngCreateSemaphore();
      *(_QWORD *)(v2 + 8) = v4;
      if ( v4 )
      {
        *(_WORD *)(v2 + 68) = 0;
        v5 = EngCreateSemaphore();
        *(_QWORD *)(v2 + 16) = v5;
        if ( v5 )
        {
          *(_WORD *)(v2 + 70) = 0;
          HT_InitSaneLimits();
          return 1LL;
        }
      }
    }
    HT_UninitializeSessionGlobals();
  }
  return 0LL;
}
