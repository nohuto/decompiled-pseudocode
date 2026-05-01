/*
 * XREFs of ??$make_unique_nothrow@VCThreadRefHost@@A6AJPEAJPEAPEAUIUnknown@@@Z@wil@@YA?AV?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@A6AJPEAJPEAPEAUIUnknown@@@Z@Z @ 0x18018A550
 * Callers:
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x18018A1B0 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 * Callees:
 *     ?SHCreateDUIThreadRef@@YAJPEAJPEAPEAUIUnknown@@@Z @ 0x18018A5D8 (-SHCreateDUIThreadRef@@YAJPEAJPEAPEAUIUnknown@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::make_unique_nothrow<CThreadRefHost,long (&)(long *,IUnknown * *)>(_QWORD *a1)
{
  void *v2; // rdi

  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    *(_QWORD *)v2 = &CThreadRefHost::`vftable';
    *((_DWORD *)v2 + 2) = 0;
    *((_QWORD *)v2 + 2) = 0LL;
    SHCreateDUIThreadRef((int *)v2 + 2, (struct IUnknown **)v2 + 2);
    SHSetThreadRef(*((IUnknown **)v2 + 2));
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = v2;
  return a1;
}
