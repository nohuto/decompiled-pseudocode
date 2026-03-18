/*
 * XREFs of ?Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z @ 0x1400A1628
 * Callers:
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1400A1548 (-CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CToken@@MEAAJXZ @ 0x140035AF0 (-Initialize@CToken@@MEAAJXZ.c)
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140073F20 (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipContentToken::Initialize(CFlipContentToken *this, unsigned int a2, const struct tagRECT *a3)
{
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // eax

  v6 = CToken::Initialize(this);
  if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = 0;
    if ( v6 >= 0 )
    {
      do
      {
        if ( v7 >= a2 )
          break;
        v8 = (*(__int64 (__fastcall **)(_QWORD, const struct tagRECT *))(**((_QWORD **)this + 12) + 40LL))(
               *((_QWORD *)this + 12),
               &a3[v7++]);
        v6 = v8;
      }
      while ( v8 >= 0 );
    }
  }
  return (unsigned int)v6;
}
