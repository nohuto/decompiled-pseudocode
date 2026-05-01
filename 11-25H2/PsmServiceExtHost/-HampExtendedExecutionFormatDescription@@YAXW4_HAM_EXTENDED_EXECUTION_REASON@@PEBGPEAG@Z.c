/*
 * XREFs of ?HampExtendedExecutionFormatDescription@@YAXW4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAG@Z @ 0x180070490
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180045548 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180070518 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 __fastcall HampExtendedExecutionFormatDescription(int a1, const unsigned __int16 *a2, void *a3)
{
  const unsigned __int16 *v5; // rbx

  v5 = a2;
  if ( !a2 || !*a2 )
  {
    if ( a1 < 0 || (unsigned __int64)a1 >= 5 )
      v5 = L"BAD_INPUT";
    else
      v5 = (const unsigned __int16 *)(&EeDefaultDescription)[a1];
  }
  memset_0(a3, 0, 0x80uLL);
  return StringCbPrintfW((unsigned __int16 *)a3, 0x80uLL, L"Ee%d_%s", (unsigned int)a1, v5);
}
