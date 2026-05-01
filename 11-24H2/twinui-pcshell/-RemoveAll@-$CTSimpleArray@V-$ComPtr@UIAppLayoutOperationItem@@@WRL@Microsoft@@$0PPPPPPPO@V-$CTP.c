/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1804E6D80
 * Callers:
 *     ??1CAppTransitionTargetManager@@UEAA@XZ @ 0x1804E5F84 (--1CAppTransitionTargetManager@@UEAA@XZ.c)
 *     ?Reset@CAppTransitionTargetManager@@UEAAXXZ @ 0x1804E6DF0 (-Reset@CAppTransitionTargetManager@@UEAAXXZ.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x180515D70 (--1CAppLayoutOperation@@QEAA@XZ.c)
 *     ??1CDropFeedbackList@@UEAA@XZ @ 0x18053E050 (--1CDropFeedbackList@@UEAA@XZ.c)
 *     ?Cleanup@CDropFeedbackList@@UEAAJXZ @ 0x18053E1F0 (-Cleanup@CDropFeedbackList@@UEAAJXZ.c)
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1806C27A0 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1806C30D8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::RemoveAll(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8 * i));
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
