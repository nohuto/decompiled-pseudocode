/*
 * XREFs of _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::_lambda_af26cd4e336a58c3fc15d2bb79fbb070_ @ 0x1805E12E0
 * Callers:
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x1805E3A20 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_af26cd4e336a58c3fc15d2bb79fbb070_::_lambda_af26cd4e336a58c3fc15d2bb79fbb070_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _OWORD *a4)
{
  __int64 v4; // rax
  __int64 *v7; // rcx
  __int64 result; // rax

  v4 = *a3;
  *(_QWORD *)a1 = a2;
  v7 = (__int64 *)(a1 + 8);
  *v7 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
  result = a1;
  *(_OWORD *)(a1 + 16) = *a4;
  return result;
}
