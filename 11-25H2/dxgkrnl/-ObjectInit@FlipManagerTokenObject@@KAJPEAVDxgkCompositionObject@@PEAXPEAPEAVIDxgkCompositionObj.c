/*
 * XREFs of ?ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14004D300
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFlipManagerToken@@IEAAJAEAUFlipManagerTokenInitInfo@@@Z @ 0x14004D34C (-Initialize@CFlipManagerToken@@IEAAJAEAUFlipManagerTokenInitInfo@@@Z.c)
 *     ??0CFlipManagerToken@@QEAA@XZ @ 0x14004D3AC (--0CFlipManagerToken@@QEAA@XZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        struct FlipManagerTokenInitInfo *a2,
        struct IDxgkCompositionObject **a3)
{
  struct IDxgkCompositionObject *v3; // rbx

  v3 = (struct DxgkCompositionObject *)((char *)a1 + 32);
  if ( a1 != (struct DxgkCompositionObject *)-32LL )
    CFlipManagerToken::CFlipManagerToken((struct DxgkCompositionObject *)((char *)a1 + 32));
  *a3 = v3;
  return CFlipManagerToken::Initialize(v3, a2);
}
