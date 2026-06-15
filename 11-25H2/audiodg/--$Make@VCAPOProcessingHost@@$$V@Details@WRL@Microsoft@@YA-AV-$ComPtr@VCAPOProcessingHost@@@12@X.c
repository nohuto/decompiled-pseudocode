/*
 * XREFs of ??$Make@VCAPOProcessingHost@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAPOProcessingHost@@@12@XZ @ 0x140034B28
 * Callers:
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140034710 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 * Callees:
 *     ??0CAPOProcessingHost@@QEAA@XZ @ 0x140034BCC (--0CAPOProcessingHost@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
CAPOProcessingHost **__fastcall Microsoft::WRL::Details::Make<CAPOProcessingHost,>(CAPOProcessingHost **a1)
{
  CAPOProcessingHost *v2; // rax
  CAPOProcessingHost *v3; // rbx
  CAPOProcessingHost *v4; // rbx

  *a1 = 0LL;
  v2 = (CAPOProcessingHost *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x208uLL);
    v4 = CAPOProcessingHost::CAPOProcessingHost(v3);
    if ( *a1 )
      (*(void (__fastcall **)(CAPOProcessingHost *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
    v3 = 0LL;
  }
  if ( v3 )
    operator delete(v3);
  return a1;
}
