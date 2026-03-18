/*
 * XREFs of ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x140018168
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049338 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050018 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009EA58 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x140019548 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareBufferSignals(
        CEndpointResourceStateManager *this,
        struct CFlipManagerSignal *a2)
{
  CEndpointResourceStateManager *v2; // rsi
  unsigned int v3; // ebx
  CEndpointResourceStateManager *v4; // r8
  unsigned int v5; // ebp
  bool v8; // zf
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 Pool2; // r14
  CEndpointResourceStateManager *v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rax
  CPoolBufferResource *v15; // rcx

  v2 = (CEndpointResourceStateManager *)((char *)this + 16);
  v3 = 0;
  v4 = (CEndpointResourceStateManager *)*((_QWORD *)this + 2);
  v5 = 0;
  if ( v4 != (CEndpointResourceStateManager *)((char *)this + 16) )
  {
    do
    {
      v8 = v4 == 0LL;
      v9 = (__int64)v4 + 40;
      v4 = *(CEndpointResourceStateManager **)v4;
      v10 = v5;
      if ( v8 )
        v9 = 48LL;
      ++v5;
      if ( !*(_QWORD *)v9 )
        v5 = v10;
    }
    while ( v4 != v2 );
    if ( v5 )
    {
      if ( is_mul_ok(v5, 8uLL) )
      {
        Pool2 = ExAllocatePool2(257LL, 8LL * v5, 1651721030LL);
        if ( Pool2 )
        {
          v12 = *(CEndpointResourceStateManager **)v2;
          v13 = 0LL;
          while ( v12 != v2 )
          {
            v14 = (__int64)v12 + 40;
            if ( !v12 )
              v14 = 48LL;
            v15 = *(CPoolBufferResource **)v14;
            if ( *(_QWORD *)v14 )
            {
              ++*((_DWORD *)v15 + 6);
              *(_QWORD *)(Pool2 + 8 * v13) = v15;
              CPoolBufferResource::AddUsageReference(v15);
              v13 = (unsigned int)(v13 + 1);
            }
            v12 = *(CEndpointResourceStateManager **)v12;
          }
          *((_QWORD *)a2 + 4) = Pool2;
          *((_DWORD *)a2 + 10) = v5;
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return (unsigned int)-1073741675;
      }
    }
  }
  return v3;
}
