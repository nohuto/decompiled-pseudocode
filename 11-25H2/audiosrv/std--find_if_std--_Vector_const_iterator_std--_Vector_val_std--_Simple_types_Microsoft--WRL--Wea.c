/*
 * XREFs of std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_5b74153b8b2c834a9d652af584a9de1c___ @ 0x1800EE7E0
 * Callers:
 *     ?ContainsStream@CBaseStreamGroupProxy@@UEAA_NPEAUIAudioStreamInfo@@@Z @ 0x1800F0180 (-ContainsStream@CBaseStreamGroupProxy@@UEAA_NPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _lambda_5b74153b8b2c834a9d652af584a9de1c_::operator() @ 0x1800EEFA8 (_lambda_5b74153b8b2c834a9d652af584a9de1c_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_5b74153b8b2c834a9d652af584a9de1c___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        ...)
{
  __int64 *i; // rdi
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  for ( i = a2; i != a3; ++i )
  {
    v6 = *i;
    v8 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    if ( (unsigned __int8)lambda_5b74153b8b2c834a9d652af584a9de1c_::operator()((__int64 *)va, &v8) )
      break;
  }
  *a1 = i;
  return a1;
}
