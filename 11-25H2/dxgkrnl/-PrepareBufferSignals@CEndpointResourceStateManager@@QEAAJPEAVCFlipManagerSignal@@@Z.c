/*
 * XREFs of ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x140008C68
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049C48 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050598 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C6F8 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14000A014 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareBufferSignals(
        CEndpointResourceStateManager *this,
        struct CFlipManagerSignal *a2,
        __int64 a3,
        __int64 a4)
{
  CEndpointResourceStateManager *v4; // rsi
  unsigned int v5; // ebx
  CEndpointResourceStateManager *v6; // r8
  unsigned int v7; // ebp
  bool v10; // zf
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 Pool2; // r14
  CEndpointResourceStateManager *v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rax
  CPoolBufferResource *v17; // rcx

  v4 = (CEndpointResourceStateManager *)((char *)this + 16);
  v5 = 0;
  v6 = (CEndpointResourceStateManager *)*((_QWORD *)this + 2);
  v7 = 0;
  if ( v6 != (CEndpointResourceStateManager *)((char *)this + 16) )
  {
    do
    {
      v10 = v6 == 0LL;
      v11 = (__int64)v6 + 40;
      v6 = *(CEndpointResourceStateManager **)v6;
      v12 = v7;
      if ( v10 )
        v11 = 48LL;
      ++v7;
      if ( !*(_QWORD *)v11 )
        v7 = v12;
    }
    while ( v6 != v4 );
    if ( v7 )
    {
      if ( is_mul_ok(v7, 8uLL) )
      {
        Pool2 = ExAllocatePool2(257LL, 8LL * v7, 1651721030LL, a4);
        if ( Pool2 )
        {
          v14 = *(CEndpointResourceStateManager **)v4;
          v15 = 0LL;
          while ( v14 != v4 )
          {
            v16 = (__int64)v14 + 40;
            if ( !v14 )
              v16 = 48LL;
            v17 = *(CPoolBufferResource **)v16;
            if ( *(_QWORD *)v16 )
            {
              ++*((_DWORD *)v17 + 6);
              *(_QWORD *)(Pool2 + 8 * v15) = v17;
              CPoolBufferResource::AddUsageReference(v17);
              v15 = (unsigned int)(v15 + 1);
            }
            v14 = *(CEndpointResourceStateManager **)v14;
          }
          *((_QWORD *)a2 + 4) = Pool2;
          *((_DWORD *)a2 + 10) = v7;
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
  return v5;
}
