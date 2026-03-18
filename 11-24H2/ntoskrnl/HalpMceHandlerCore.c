/*
 * XREFs of HalpMceHandlerCore @ 0x140540418
 * Callers:
 *     HalpMceHandler @ 0x140540304 (HalpMceHandler.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x1404633C8 (KxTryToAcquireSpinLock.c)
 *     HalpMcaReadErrorPresence @ 0x14047D4D4 (HalpMcaReadErrorPresence.c)
 *     HalpGetMcaPcrContext @ 0x14047D638 (HalpGetMcaPcrContext.c)
 *     HalpMcaClearError @ 0x14053F858 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x14053FE0C (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x1405400E4 (HalpMcaReportError.c)
 *     WheaIsAltContextAllocPossible @ 0x14065CDE0 (WheaIsAltContextAllocPossible.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpMceHandlerCore(__int64 a1, char a2, unsigned __int64 a3, __int64 a4)
{
  _BYTE *v7; // r15
  char v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rdi
  __int64 v15; // rsi
  __int64 *McaPcrContext; // rax
  void *v17; // rbp
  __int64 v18; // rdx
  int v19; // eax
  int v21; // [rsp+68h] [rbp+10h] BYREF
  int v22; // [rsp+78h] [rbp+20h] BYREF

  v21 = 0;
  v22 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = guard_dispatch_icall_no_overrides(a3, 378LL, 0LL, a4);
  if ( !a2 || (v11 = v9, LOBYTE(v11) = v9 & 3, (v9 & 3) != 1) && (v9 & 4) != 0 )
  {
    v14 = 0LL;
    v15 = 0LL;
    if ( !HalpMcaWheaReady
      || (McaPcrContext = (__int64 *)HalpGetMcaPcrContext(a3, v10, v12, v13), (v14 = McaPcrContext) == 0LL)
      || (v15 = *McaPcrContext, v7 = (_BYTE *)McaPcrContext[4], v17 = (void *)(*McaPcrContext + 80), !*McaPcrContext) )
    {
      v17 = &HalpMceBackupErrorBuffer;
    }
    while ( (int)HalpMcaReadErrorPresence(v11, a3) >= 0 )
    {
      while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpMceLock) )
        _mm_pause();
      if ( (int)HalpMcaReadError(16, v17, &v21, a1, a3) < 0 )
      {
        KxReleaseSpinLock(&HalpMceLock);
        return v8;
      }
      if ( v15 )
      {
        v19 = v21;
        *(_DWORD *)(v15 + 12) = 0;
        *(_DWORD *)(v15 + 20) = v19;
      }
      if ( a1 )
      {
        if ( v7 )
        {
          if ( v14 )
          {
            LOBYTE(v18) = *v7;
            *((_DWORD *)v14 + 10) = 0;
            LOBYTE(v18) = v18 & 0x10;
            if ( !(unsigned __int8)WheaIsAltContextAllocPossible(a1, v18, &v22) )
              *((_DWORD *)v14 + 10) = v22;
          }
        }
      }
      HalpProcessorInMceHandler = KeGetPcr()->Prcb.Number;
      HalpMcaReportError(v15, (__int64)v17, a3);
      if ( v14 )
        *((_DWORD *)v14 + 10) = 0;
      HalpProcessorInMceHandler = 2048;
      HalpMcaClearError((__int64)v17, a3);
      if ( McaWmiCallback )
        LOBYTE(HalpClockWorkUnion) = 1;
      KxReleaseSpinLock(&HalpMceLock);
      v8 = 1;
    }
  }
  return v8;
}
