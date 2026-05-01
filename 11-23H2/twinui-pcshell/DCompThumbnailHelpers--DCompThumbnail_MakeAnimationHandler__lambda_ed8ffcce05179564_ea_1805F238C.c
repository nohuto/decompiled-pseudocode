/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___ @ 0x1805F238C
 * Callers:
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805F4274 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___ @ 0x1805F2A14 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067_ea_1805F2A14.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v11; // edi

  *a4 = 0LL;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8
    && (v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___(
                                                                   v8,
                                                                   a1,
                                                                   a2,
                                                                   a3),
        (v10 = v9) != 0LL) )
  {
    v11 = (**v9)(v9, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v10)[2])(v10);
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a2);
  return v11;
}
