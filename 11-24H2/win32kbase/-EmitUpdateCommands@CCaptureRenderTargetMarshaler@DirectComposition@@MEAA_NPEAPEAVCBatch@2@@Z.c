/*
 * XREFs of ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140196B80
 * Callers:
 *     ?EmitUpdateCommands@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140237FB0 (-EmitUpdateCommands@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAV.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitFlipManager@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140147284 (-EmitFlipManager@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAdapterLUID@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014CDF4 (-EmitAdapterLUID@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1401969FC (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca68___ @ 0x14023792C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_65eada455be2f8b7c7375e2ea3e1ffee___ @ 0x1402379A0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_65eada455be2f8b7c7375e2ea3e1ffe.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b0f143660d608796e8832c4644cf1cba___ @ 0x140237A14 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b0f143660d608796e8832c4644cf1cb.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12e___ @ 0x140237A88 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fef86ed83f4735cb6cea83cf3eef1d1a___ @ 0x140237AFC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fef86ed83f4735cb6cea83cf3eef1d1.c)
 *     ?EmitFrameRequest@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140237B94 (-EmitFrameRequest@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // di
  char *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  void *v10; // [rsp+30h] [rbp+10h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v10 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
      return v2;
    v5 = (char *)v10;
    *(_DWORD *)v10 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 27;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    v6 = *((_QWORD *)this + 13);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 32);
    else
      v7 = 0;
    *((_DWORD *)v5 + 3) = v7;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CCaptureRenderTargetMarshaler::EmitFlipManager(this, a2)
    && DirectComposition::CCaptureRenderTargetMarshaler::EmitAdapterLUID(this, a2)
    && DirectComposition::CCaptureRenderTargetMarshaler::EmitBuffers(this, a2) )
  {
    v8 = *((_DWORD *)this + 4);
    v10 = this;
    if ( (v8 & 0x200) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca68___(
                               this,
                               a2,
                               &v10) )
        return v2;
      *((_DWORD *)this + 4) &= ~0x200u;
      v8 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v8 & 0x400) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12e___(
                               this,
                               a2,
                               &v10) )
        return v2;
      *((_DWORD *)this + 4) &= ~0x400u;
      v8 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v8 & 0x800) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_65eada455be2f8b7c7375e2ea3e1ffee___(
                               this,
                               a2,
                               &v10) )
        return v2;
      *((_DWORD *)this + 4) &= ~0x800u;
      v8 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v8 & 0x1000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b0f143660d608796e8832c4644cf1cba___(
                               this,
                               a2,
                               &v10) )
        return v2;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v8 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v8 & 0x2000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fef86ed83f4735cb6cea83cf3eef1d1a___(
                               this,
                               a2,
                               &v10) )
        return v2;
      *((_DWORD *)this + 4) &= ~0x2000u;
    }
    if ( DirectComposition::CCaptureRenderTargetMarshaler::EmitFrameRequest(this, a2) )
      return 1;
  }
  return v2;
}
