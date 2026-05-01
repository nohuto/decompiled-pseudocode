/*
 * XREFs of ??1?$unique_any@U?$handle_traits@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@Z$0A@@tlx@@@tlx@@QEAA@XZ @ 0x18009C378
 * Callers:
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x18009C70C (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 * Callees:
 *     FreeLibrary_0 @ 0x1800731CC (FreeLibrary_0.c)
 */

BOOL __fastcall tlx::unique_any<tlx::handle_traits<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),0>>::~unique_any<tlx::handle_traits<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),0>>(
        HMODULE *a1)
{
  HMODULE v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return FreeLibrary_0(v1);
  return result;
}
