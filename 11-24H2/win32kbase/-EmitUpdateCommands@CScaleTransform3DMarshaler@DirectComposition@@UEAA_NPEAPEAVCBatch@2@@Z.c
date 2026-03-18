/*
 * XREFs of ?EmitUpdateCommands@CScaleTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140228130
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007DA70 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetCenterXCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140225CD8 (-EmitSetCenterXCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterYCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140225E98 (-EmitSetCenterYCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterZCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140225FE8 (-EmitSetCenterZCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScaleYCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226A54 (-EmitSetScaleYCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScaleZCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226AC4 (-EmitSetScaleZCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CScaleTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CScaleTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  char *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
        return v4;
      v5 = (char *)v7;
      *(_DWORD *)v7 = 16;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 3) = 0;
      *((_DWORD *)v5 + 1) = 580;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 18);
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    if ( DirectComposition::CScaleTransform3DMarshaler::EmitSetScaleYCommand(this, a2)
      && DirectComposition::CScaleTransform3DMarshaler::EmitSetScaleZCommand(this, a2)
      && DirectComposition::CScaleTransform3DMarshaler::EmitSetCenterXCommand(this, a2)
      && DirectComposition::CScaleTransform3DMarshaler::EmitSetCenterYCommand(this, a2)
      && DirectComposition::CScaleTransform3DMarshaler::EmitSetCenterZCommand(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
