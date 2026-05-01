/*
 * XREFs of ??$?0V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@?$CTaskWrapper@V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_7d4fab6c161d4dc93915730d1208882c_@@@Z @ 0x1802B1E7C
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18011F3C0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_7d4fab6c161d4dc93915730d1208882c_>::CTaskWrapper<_lambda_7d4fab6c161d4dc93915730d1208882c_>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  *a1 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_08bdecb53d2454d61d2a3b3bfe9078f8_>::`vftable';
  return a1;
}
