/*
 * XREFs of ??0PendingDismissData@CMultitaskingViewControllerBase@@QEAA@_NPEAUISwitchItem@@@Z @ 0x1804C60B4
 * Callers:
 *     ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x1804C6D4C (-_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CMultitaskingViewControllerBase::PendingDismissData *__fastcall CMultitaskingViewControllerBase::PendingDismissData::PendingDismissData(
        CMultitaskingViewControllerBase::PendingDismissData *this,
        char a2,
        struct ISwitchItem *a3)
{
  __int64 *v4; // rcx

  *(_BYTE *)this = 1;
  *((_BYTE *)this + 1) = a2;
  v4 = (__int64 *)((char *)this + 8);
  *v4 = (__int64)a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  return this;
}
