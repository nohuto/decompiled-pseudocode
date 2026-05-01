/*
 * XREFs of ??0_lambda_de7a847248f7e9ff51c83bca1460305a_@@QEAA@$$QEAV0@@Z @ 0x18009E5A0
 * Callers:
 *     ??$QueueTask@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_de7a847248f7e9ff51c83bca1460305a_@@@Z @ 0x18009D944 (--$QueueTask@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

_QWORD *__fastcall _lambda_de7a847248f7e9ff51c83bca1460305a_::_lambda_de7a847248f7e9ff51c83bca1460305a_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  *a1 = *a2;
  v4 = a1 + 1;
  *v4 = a2[1];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  v5 = a2[2];
  a1[2] = v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 56);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 56), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      return a1;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v6 + 16), (volatile int *)v5);
  }
  return a1;
}
