/*
 * XREFs of ?AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ @ 0x18004A784
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18004A648 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800AAEC4 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

void __fastcall ATL::CSecurityDesc::AllocateAndInitializeSecurityDescriptor(ATL::CSecurityDesc *this)
{
  void *v2; // rax
  int Error; // ebx

  v2 = malloc(0x28uLL);
  *((_QWORD *)this + 1) = v2;
  if ( !v2 )
    ATL::AtlThrowImpl(-2147024882);
  if ( !InitializeSecurityDescriptor(v2, 1u) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    ATL::AtlThrowImpl(Error);
  }
}
