/*
 * XREFs of ??$Make@VInputDestTarget@@AEBUtagINPUTDEST@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputDestTarget@@@12@AEBUtagINPUTDEST@@@Z @ 0x180091D24
 * Callers:
 *     ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x180091C44 (-GetExistingOrCreateNewInputTarget@InputDestTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x1800F3D94 (--0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
InputDestTarget **__fastcall Microsoft::WRL::Details::Make<InputDestTarget,tagINPUTDEST const &>(
        InputDestTarget **a1,
        const struct tagINPUTDEST *a2)
{
  InputDestTarget *v4; // rax
  InputDestTarget *v5; // rdi

  *a1 = 0LL;
  v4 = (InputDestTarget *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = InputDestTarget::InputDestTarget(v4, a2);
    if ( *a1 )
      (*(void (__fastcall **)(InputDestTarget *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
