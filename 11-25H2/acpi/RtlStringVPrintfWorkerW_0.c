/*
 * XREFs of RtlStringVPrintfWorkerW_0 @ 0x14004321C
 * Callers:
 *     RtlStringCbPrintfExW @ 0x140043050 (RtlStringCbPrintfExW.c)
 *     RtlStringCbPrintfW @ 0x14005B4AC (RtlStringCbPrintfW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringVPrintfWorkerW_0(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rbx
  NTSTATUS v8; // ebp
  int v9; // eax

  v5 = cchDest - 1;
  v8 = 0;
  v9 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v9 < 0 )
  {
LABEL_5:
    v8 = -2147483643;
    goto LABEL_6;
  }
  if ( v9 != v5 )
  {
    if ( v9 <= v5 )
    {
      v5 = v9;
      goto LABEL_7;
    }
    goto LABEL_5;
  }
LABEL_6:
  pszDest[v5] = 0;
LABEL_7:
  if ( pcchNewDestLength )
    *pcchNewDestLength = v5;
  return v8;
}
