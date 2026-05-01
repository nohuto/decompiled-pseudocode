/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x1805470FC
 * Callers:
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180548C98 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x180547360 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_ed8ffcce051.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___(
        int a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 *v6; // r14
  int v10; // edx
  int v11; // r9d
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  v6 = a5;
  a5 = (__int64 *)*a5;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&a5);
  v13 = *a4;
  LODWORD(a4) = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___(
                  a1,
                  v10,
                  a3,
                  v11,
                  (__int64)&v13,
                  (__int64)&a5,
                  a6);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v6);
  return (unsigned int)a4;
}
