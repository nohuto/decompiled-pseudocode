/*
 * XREFs of ??1CD3DResourceLeakChecker@@IEAA@XZ @ 0x180227EC8
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1802232EC (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DResourceLeakChecker::~CD3DResourceLeakChecker(CD3DResourceLeakChecker *this)
{
  __int64 v1; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1) )
    {
      DebugBreak();
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
  }
}
