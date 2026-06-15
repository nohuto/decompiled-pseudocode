/*
 * XREFs of ??R?$default_delete@VCDriverListener@@@std@@QEBAXPEAVCDriverListener@@@Z @ 0x180040640
 * Callers:
 *     ??$?4U?$default_delete@VCDriverListener@@@std@@$0A@@?$unique_ptr@VCDriverListener@@U?$default_delete@VCDriverListener@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003F1F4 (--$-4U-$default_delete@VCDriverListener@@@std@@$0A@@-$unique_ptr@VCDriverListener@@U-$default_de.c)
 *     ??1?$unique_ptr@VCDriverListener@@U?$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ @ 0x18003FD60 (--1-$unique_ptr@VCDriverListener@@U-$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::default_delete<CDriverListener>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
