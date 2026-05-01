/*
 * XREFs of ?get_RequestedDisplayRegionIds@WindowingEnvironmentSettings@@UEAAJPEAPEAU?$IVectorView@I@Collections@Foundation@Windows@@@Z @ 0x1804261F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_agile_vector@I@cshell@@YA?A_PXZ @ 0x180417588 (--$make_agile_vector@I@cshell@@YA-A_PXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentSettings::get_RequestedDisplayRegionIds(__int64 a1, _QWORD *a2)
{
  unsigned int *v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  unsigned int *v7; // rbx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  try
  {
    cshell::make_agile_vector<unsigned int>((__int64 *)&v13);
    v7 = *(unsigned int **)(a1 + 128);
    v4 = *(unsigned int **)(a1 + 136);
    while ( 1 )
    {
      v5 = *v13;
      if ( v7 == v4 )
        break;
      v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v5 + 104))(v13, *v7);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x21D,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
          (const char *)(unsigned int)v6,
          v11);
      ++v7;
    }
    v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v5 + 64))(v13, a2);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x220,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
        (const char *)(unsigned int)v8,
        v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x223,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
                           v9);
  }
  return result;
}
