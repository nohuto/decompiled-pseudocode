/*
 * XREFs of ?CitpStart@@YAJXZ @ 0x1400B5F6C
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1400B6048 (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1400B64F8 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140199C50 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140199F58 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x14019EC50 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x14023C27C (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

__int64 __fastcall CitpStart(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  struct _CIT_IMPACT_CONTEXT *v3; // rax
  const char *v4; // rdx
  struct _CIT_IMPACT_CONTEXT *v5; // rdi
  int v6; // ebp
  __int16 v7; // ax

  v1 = 0;
  v2 = *(_QWORD *)(W32GetUserSessionState(a1) + 18968);
  if ( *(_BYTE *)(v2 + 1) )
  {
    return (unsigned int)-1073741431;
  }
  else if ( CitpIsInteractiveSession() )
  {
    v3 = (struct _CIT_IMPACT_CONTEXT *)Win32AllocPoolZInitImpl(256LL, 0x138uLL, 0x49637355u);
    v5 = v3;
    if ( v3 )
    {
      CitpContextInitialize(v3);
      v6 = CitpContextTrackingDataStart(v5);
      if ( v6 < 0 )
      {
        CitpContextCleanup(v5);
        GreDeleteFastMutex((char *)v5);
        return (unsigned int)v6;
      }
      else
      {
        v7 = MEMORY[0xFFFFF780000002C4];
        if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
          v7 = -1;
        *((_WORD *)v5 + 58) = v7;
        *(_QWORD *)(v2 + 32) = v5;
      }
    }
    else
    {
      v1 = -1073741670;
      CitpLogFailureWorker(-1073741670, v4, 0x97u);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v1;
}
