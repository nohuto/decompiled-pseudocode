/*
 * XREFs of ?__clone@?$__func@V_lambda_1e29e45a324d9aede31372fdd231015a_@@$$A6AJK@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJK@Z@23@@Z @ 0x1802E1410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_1e29e45a324d9aede31372fdd231015a_,long (unsigned long)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  v2 = a2 + 1;
  *a2 = &wistd::__function::__func<_lambda_7ec1cd49ee72ba5933b7d686c2907b0a_,long (unsigned long)>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 1);
  result = *(_QWORD *)(a1 + 16);
  v2[1] = result;
  return result;
}
