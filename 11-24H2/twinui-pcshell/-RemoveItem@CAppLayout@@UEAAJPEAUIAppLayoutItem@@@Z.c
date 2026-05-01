/*
 * XREFs of ?RemoveItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@@Z @ 0x1806C4AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180086E70 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByItem@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806C3240 (--$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     ??4?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z @ 0x1806C34F8 (--4-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::RemoveItem(RTL_SRWLOCK *this, struct IAppLayoutItem *a2)
{
  RTL_SRWLOCK *v3; // rsi
  __int64 v4; // r8
  int v5; // ebx
  RTL_SRWLOCK *v7[5]; // [rsp+30h] [rbp-28h] BYREF
  struct IUnknown *v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v3 = this + 8;
  wil::AcquireSRWLockExclusive(v7, this + 2);
  v9 = 0LL;
  v10 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutItem>::operator=((__int64 *)&v8, (__int64)a2);
  v5 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByItem>(
         v3,
         &v8,
         v4,
         &v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  if ( v5 >= 0 )
    v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::RemoveAt(
           v3,
           v9);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v7);
  return (unsigned int)v5;
}
