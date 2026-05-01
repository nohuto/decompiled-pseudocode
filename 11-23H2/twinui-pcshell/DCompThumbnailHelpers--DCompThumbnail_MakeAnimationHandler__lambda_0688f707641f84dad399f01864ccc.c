/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18058E64C
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18058E700 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18058EE64 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lamb.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v10; // edi

  *a4 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___(
                                                               v6,
                                                               v7,
                                                               a2,
                                                               0LL);
    v9 = v8;
    if ( v8 )
    {
      v10 = (**v8)(v8, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
      goto LABEL_6;
    }
  }
  else
  {
    v9 = 0LL;
  }
  v10 = -2147024882;
LABEL_6:
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v10;
}
