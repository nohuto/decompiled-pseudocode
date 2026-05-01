/*
 * XREFs of ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180540470
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C4860 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B7F2C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ?_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180540778 (-_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 *     ?_UpdateAutoGutters@CDropFeedback@@AEAAXXZ @ 0x180540994 (-_UpdateAutoGutters@CDropFeedback@@AEAAXXZ.c)
 *     ?_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180540CF4 (-_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::UpdateDropFeedback(
        CDropFeedback *this,
        struct IDropFeedbackArray *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rax
  unsigned int i; // r14d
  __int64 v9; // rax
  int (__fastcall *v10)(struct IDropFeedbackArray *, _QWORD, GUID *, struct IDropFeedbackItem **); // rbx
  int v11; // eax
  __int64 v13[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+30h] BYREF
  struct IDropFeedbackItem *v15; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 15) )
  {
    v15 = (struct IDropFeedbackItem *)*((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(
      v13,
      (__int64 *)&v15,
      (__int64)&unk_1807B2A18,
      (__int64)a3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v7 = *(_QWORD *)a2;
    v14 = 0;
    (*(void (__fastcall **)(struct IDropFeedbackArray *, unsigned int *))(v7 + 24))(a2, &v14);
    for ( i = 0; i < v14; ++i )
    {
      v9 = *(_QWORD *)a2;
      v15 = 0LL;
      v10 = *(int (__fastcall **)(struct IDropFeedbackArray *, _QWORD, GUID *, struct IDropFeedbackItem **))(v9 + 32);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
      if ( v10(a2, i, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v15) >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v15 + 88LL))(v15);
        if ( v11 )
        {
          if ( v11 == 1 )
            CDropFeedback::_UpdateItem((CDropFeedback *)((char *)this - 24), v15, a3);
        }
        else
        {
          CDropFeedback::_RegisterItem((CDropFeedback *)((char *)this - 24), v15, a3);
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v15);
    }
    CDropFeedback::_UpdateAutoGutters((CDropFeedback *)((char *)this - 24));
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v13);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v3;
}
