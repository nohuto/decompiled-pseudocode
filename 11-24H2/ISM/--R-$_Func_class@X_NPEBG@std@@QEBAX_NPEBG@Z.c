/*
 * XREFs of ??R?$_Func_class@X_NPEBG@std@@QEBAX_NPEBG@Z @ 0x180199B9C
 * Callers:
 *     ?ReportValidationError@CompliantHapticInterface@@AEAAXPEBG@Z @ 0x18019AB78 (-ReportValidationError@CompliantHapticInterface@@AEAAXPEBG@Z.c)
 *     ?ReportValidationMessage@CompliantHapticInterface@@AEAAXPEBG@Z @ 0x18019ABA4 (-ReportValidationMessage@CompliantHapticInterface@@AEAAXPEBG@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<void,bool,unsigned short const *>::operator()(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v3 + 16LL))(v3, &v5, &v6);
}
