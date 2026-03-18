/*
 * XREFs of ?ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14004E900
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFlipManagerToken@@IEAAJAEAUFlipManagerTokenInitInfo@@@Z @ 0x14004E92C (-Initialize@CFlipManagerToken@@IEAAJAEAUFlipManagerTokenInitInfo@@@Z.c)
 *     ??0CFlipManagerToken@@QEAA@XZ @ 0x14004E98C (--0CFlipManagerToken@@QEAA@XZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        struct FlipManagerTokenInitInfo *a2,
        struct IDxgkCompositionObject **a3)
{
  struct FlipManagerTokenInitInfo *v3; // r9
  CFlipManagerToken *v4; // rcx

  v3 = a2;
  v4 = (struct DxgkCompositionObject *)((char *)a1 + 32);
  if ( v4 )
    CFlipManagerToken::CFlipManagerToken(v4);
  *a3 = v4;
  return CFlipManagerToken::Initialize(v4, v3);
}
