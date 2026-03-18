/*
 * XREFs of ?EmitUpdateCommands@CGdiSpriteBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B570
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C0213E88 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?EmitSetDirtyFromAccumulationCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217468 (-EmitSetDirtyFromAccumulationCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetMarginsCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218258 (-EmitSetMarginsCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPixelFormatCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02199E0 (-EmitSetPixelFormatCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSurfaceCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021A534 (-EmitSetSurfaceCommand@CGdiSpriteBitmapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::EmitUpdateCommands(
        DirectComposition::CGdiSpriteBitmapMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CMarshaledArrayBase::Marshal(
         (_QWORD *)this + 7,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         32,
         506,
         507,
         0x10uLL)
    && DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetPixelFormatCommand(this, a2)
    && DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetDirtyFromAccumulationCommand(this, a2)
    && DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetSurfaceCommand(this, a2) )
  {
    return DirectComposition::CGdiSpriteBitmapMarshaler::EmitSetMarginsCommand(this, a2) != 0;
  }
  return v4;
}
