/*
 * XREFs of ??0CFade@@IEAA@XZ @ 0x1800D9180
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180013EB8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x1800D91B0 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x1800D91E0 (--0CFadeOut@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180013FA4 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CFade *__fastcall CFade::CFade(CFade *this)
{
  CFade *v1; // rcx
  CFade *result; // rax

  CStoryboard::CStoryboard(this, 0);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CFade::`vftable'{for `CBaseObject'};
  return result;
}
