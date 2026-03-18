/*
 * XREFs of ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x18011BF44
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x18011C0BC (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 * Callees:
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x18011C02C (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CProjectedShadowReceiver::IsEmptyMaskContent(CProjectedShadowReceiver *this)
{
  struct CBrush *EffectiveMaskBrush; // rax
  bool result; // al
  char v3; // [rsp+30h] [rbp+8h] BYREF

  result = !*((_QWORD *)this + 9)
        || (EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(this),
            v3 = 1,
            !(*(unsigned __int8 (__fastcall **)(struct CBrush *, _QWORD, char *))(*(_QWORD *)EffectiveMaskBrush + 312LL))(
               EffectiveMaskBrush,
               0LL,
               &v3))
        || v3 != 0;
  return result;
}
