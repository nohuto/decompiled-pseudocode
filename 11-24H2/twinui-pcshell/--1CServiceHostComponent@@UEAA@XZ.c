/*
 * XREFs of ??1CServiceHostComponent@@UEAA@XZ @ 0x180583950
 * Callers:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCServiceHostComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1805837B0 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarke_ea_1805837B0.c)
 *     ??_ECServiceHostComponent@@UEAAPEAXI@Z @ 0x180583FE0 (--_ECServiceHostComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x1800C9E58 (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 */

void __fastcall CServiceHostComponent::~CServiceHostComponent(CServiceHostComponent *this)
{
  char *v1; // rbx

  *(_QWORD *)this = &CServiceHostComponent::`vftable'{for `IServiceHostComponent'};
  v1 = (char *)this + 24;
  *((_QWORD *)this + 1) = &CServiceHostComponentWithGITSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)this + 24);
  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)v1);
}
