/*
 * XREFs of ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1802AFEAC
 * Callers:
 *     _lambda_05398b4549421d065ab404e0dbeea144_::operator() @ 0x1802AD378 (_lambda_05398b4549421d065ab404e0dbeea144_--operator().c)
 *     ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1802AD450 (-OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18019C774 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802AFDFC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 */

_QWORD *__fastcall CSharedSectionWrapper::GetSharedSectionData(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rdi
  gsl::details *v5; // rcx
  bool v6; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 72) )
    ModuleFailFastForHRESULT(0x8000FFFF, retaddr);
  if ( *(_DWORD *)(a1 + 84) == -1 )
    ModuleFailFastForHRESULT(0x8000FFFF, retaddr);
  v4 = CSharedSectionBase::ResolveAllocation(
         *(CSharedSectionBase **)(a1 + 72),
         *(unsigned int *)(a1 + 80),
         *(unsigned int *)(a1 + 84));
  gsl::details::extent_type<-1>::extent_type<-1>(a2, v3);
  v6 = *a2 == -1LL;
  a2[1] = v4;
  if ( v6 || !v4 && *a2 )
  {
    gsl::details::terminate(v5);
    __debugbreak();
  }
  return a2;
}
