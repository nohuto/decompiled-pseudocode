/*
 * XREFs of ?EmitUpdateCommands@CTranslateTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402293A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007DA70 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetOffsetYCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402266F8 (-EmitSetOffsetYCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetOffsetZCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140226768 (-EmitSetOffsetZCommand@CTranslateTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 */

char __fastcall DirectComposition::CTranslateTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CTranslateTransform3DMarshaler *this,
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
      *((_DWORD *)v5 + 1) = 655;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 18);
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    if ( DirectComposition::CTranslateTransform3DMarshaler::EmitSetOffsetYCommand(this, a2)
      && DirectComposition::CTranslateTransform3DMarshaler::EmitSetOffsetZCommand(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
