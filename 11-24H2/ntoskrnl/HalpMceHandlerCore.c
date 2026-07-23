/*
 * XREFs of HalpMceHandlerCore @ 0x14053DD18
 * Callers:
 *     HalpMceHandler @ 0x14053DC04 (HalpMceHandler.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 *     HalpMcaReadErrorPresence @ 0x140478664 (HalpMcaReadErrorPresence.c)
 *     HalpGetMcaPcrContext @ 0x1404787C8 (HalpGetMcaPcrContext.c)
 *     HalpMcaClearError @ 0x14053D158 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x14053D70C (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x14053D9E4 (HalpMcaReportError.c)
 *     WheaIsAltContextAllocPossible @ 0x14065B500 (WheaIsAltContextAllocPossible.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpMceHandlerCore(__int64 a1, char a2, unsigned __int64 a3)
{
  _BYTE *v6; // r15
  char v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // rsi
  __int64 *McaPcrContext; // rax
  void *v14; // rbp
  __int64 v15; // rdx
  int v16; // eax
  int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0;
  v19 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = guard_dispatch_icall_no_overrides(a3, 378LL);
  if ( !a2 || (v10 = v8, LOBYTE(v10) = v8 & 3, (v8 & 3) != 1) && (v8 & 4) != 0 )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( !HalpMcaWheaReady
      || (McaPcrContext = (__int64 *)HalpGetMcaPcrContext(a3, v9), (v11 = McaPcrContext) == 0LL)
      || (v12 = *McaPcrContext, v6 = (_BYTE *)McaPcrContext[4], v14 = (void *)(*McaPcrContext + 80), !*McaPcrContext) )
    {
      v14 = &HalpMceBackupErrorBuffer;
    }
    while ( (int)HalpMcaReadErrorPresence(v10, a3) >= 0 )
    {
      while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpMceLock) )
        _mm_pause();
      if ( (int)HalpMcaReadError(16, v14, &v18, a1, a3) < 0 )
      {
        KxReleaseSpinLock(&HalpMceLock);
        return v7;
      }
      if ( v12 )
      {
        v16 = v18;
        *(_DWORD *)(v12 + 12) = 0;
        *(_DWORD *)(v12 + 20) = v16;
      }
      if ( a1 )
      {
        if ( v6 )
        {
          if ( v11 )
          {
            LOBYTE(v15) = *v6;
            *((_DWORD *)v11 + 10) = 0;
            LOBYTE(v15) = v15 & 0x10;
            if ( !(unsigned __int8)WheaIsAltContextAllocPossible(a1, v15, &v19) )
              *((_DWORD *)v11 + 10) = v19;
          }
        }
      }
      HalpProcessorInMceHandler = KeGetPcr()->Prcb.Number;
      HalpMcaReportError(v12, (__int64)v14, a3);
      if ( v11 )
        *((_DWORD *)v11 + 10) = 0;
      HalpProcessorInMceHandler = 2048;
      HalpMcaClearError((__int64)v14, a3);
      if ( McaWmiCallback )
        LOBYTE(HalpClockWorkUnion) = 1;
      KxReleaseSpinLock(&HalpMceLock);
      v7 = 1;
    }
  }
  return v7;
}
