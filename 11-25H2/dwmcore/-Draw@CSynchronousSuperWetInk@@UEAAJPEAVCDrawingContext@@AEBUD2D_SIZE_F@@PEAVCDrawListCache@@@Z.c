/*
 * XREFs of ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A8F40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1801A9184 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 *     ?GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ @ 0x1801A91B4 (-GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x1801A921C (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801AAC2C (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801AD340 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::Draw(
        CSynchronousSuperWetInk *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CSynchronousSuperWetInk *v6; // rcx
  CSuperWetInkManager *v8; // rdi
  unsigned int PerFrameDataId; // eax
  bool v10[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( CSynchronousSuperWetInk::IsSuperWetCompatible(this) )
  {
    v8 = *(CSuperWetInkManager **)(*((_QWORD *)v6 + 3) + 656LL);
    PerFrameDataId = CSynchronousSuperWetInk::GetPerFrameDataId(v6);
    v10[0] = 0;
    CSynchronousSuperWetInk::PullNewPerFrameData(this, PerFrameDataId, v10);
    if ( v10[0] )
    {
      CSuperWetInkManager::OnUpdatedInkReceived(v8, this);
      *((_BYTE *)this + 96) = 0;
    }
    v10[0] = 0;
    CSuperWetInkManager::TryRegisterSuperWetForDraw(v8, this, a2, 0, v10);
  }
  return 0LL;
}
