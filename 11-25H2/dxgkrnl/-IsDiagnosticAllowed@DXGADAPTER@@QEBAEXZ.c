/*
 * XREFs of ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x140188B3C
 * Callers:
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x14040D114 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x140062E2C (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x140063354 (-IsCurrentConsoleSession@@YAEXZ.c)
 */

bool __fastcall DXGADAPTER::IsDiagnosticAllowed(DXGADAPTER *this)
{
  __int64 v1; // rbx

  if ( *(_QWORD *)((char *)this + 4828) )
    v1 = *((unsigned int *)this + 1209);
  else
    v1 = 0x200000000LL;
  if ( IsCurrentProcessAdmin() )
    return 1;
  if ( v1 == 0x200000000LL )
    return IsCurrentConsoleSession();
  return (unsigned int)PsGetCurrentProcessSessionId() == (_DWORD)v1;
}
