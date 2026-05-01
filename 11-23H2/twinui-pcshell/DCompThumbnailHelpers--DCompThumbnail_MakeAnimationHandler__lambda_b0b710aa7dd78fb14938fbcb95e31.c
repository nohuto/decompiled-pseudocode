/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18058E700
 * Callers:
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18058E74C (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18058E938 (ElementDragData--MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18058E64C (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_0688f707641f84dad399f01864ccc.c)
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::_lambda_b0b710aa7dd78fb14938fbcb95e31413_ @ 0x18058ECEC (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--_lambda_b0b710aa7dd78fb14938fbcb95e31413_.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // r8
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  v4 = a3;
  v5 = (__int64 *)lambda_b0b710aa7dd78fb14938fbcb95e31413_::_lambda_b0b710aa7dd78fb14938fbcb95e31413_(v8, a1);
  LODWORD(v4) = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___(
                  0LL,
                  v5,
                  v6,
                  v4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  return (unsigned int)v4;
}
