/*
 * XREFs of ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x1804C6D4C
 * Callers:
 *     ?DismissViewNoAnimate@CMultitaskingViewControllerBase@@UEAAXXZ @ 0x1804C6360 (-DismissViewNoAnimate@CMultitaskingViewControllerBase@@UEAAXXZ.c)
 *     ?OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x1804C6710 (-OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0PendingDismissData@CMultitaskingViewControllerBase@@QEAA@_NPEAUISwitchItem@@@Z @ 0x1804C60B4 (--0PendingDismissData@CMultitaskingViewControllerBase@@QEAA@_NPEAUISwitchItem@@@Z.c)
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1804C6168 (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::_DismissView(CMultitaskingViewControllerBase *this)
{
  CMultitaskingViewControllerBase::PendingDismissData *v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF
  CMultitaskingViewControllerBase *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 22);
  v2 = CMultitaskingViewControllerBase::PendingDismissData::PendingDismissData(
         (CMultitaskingViewControllerBase::PendingDismissData *)v8,
         0,
         0LL);
  v3 = 0LL;
  *((_BYTE *)this + 96) = *(_BYTE *)v2;
  *((_BYTE *)this + 97) = *((_BYTE *)v2 + 1);
  v4 = (__int64 *)((char *)v2 + 8);
  if ( &v7 != (__int64 *)((char *)v2 + 8) )
  {
    v5 = *v4;
    *v4 = 0LL;
    v3 = v5;
  }
  v6 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = v3;
  v7 = v6;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(&v10);
}
