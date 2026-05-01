/*
 * XREFs of ??$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedback@@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x18053EBE4
 * Callers:
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18053F070 (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802277E4 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CDropFeedback@@QEAA@XZ @ 0x18053ECAC (--0CDropFeedback@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x18053F9B0 (-RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDropFeedback,CDropFeedback,IUnknown * &,LAYOUT_ENVIRONMENT_DETAILS const &,enum DROP_FEEDBACK_INIT_FLAGS &>(
        CDropFeedback **a1,
        __int64 *a2,
        __int64 a3,
        unsigned int *a4)
{
  void *v8; // rax
  int v9; // edi
  CDropFeedback *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  CDropFeedback *v13; // rbx
  void *v15; // [rsp+20h] [rbp-28h] BYREF
  CDropFeedback *v16; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v8;
  if ( v8 )
  {
    v10 = CDropFeedback::CDropFeedback((CDropFeedback *)v8);
    v11 = *a4;
    v12 = *a2;
    v13 = v10;
    v16 = v10;
    v9 = CDropFeedback::RuntimeClassInitialize(v10, v12, a3, v11, 0LL);
    if ( v9 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(CDropFeedback *))(*(_QWORD *)v13 + 8LL))(v13);
      *a1 = v13;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v16);
      v9 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v16);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v15);
  return (unsigned int)v9;
}
