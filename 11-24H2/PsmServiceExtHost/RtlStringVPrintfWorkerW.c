/*
 * XREFs of RtlStringVPrintfWorkerW @ 0x180092050
 * Callers:
 *     RtlStringCchPrintfW @ 0x180092004 (RtlStringCchPrintfW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringVPrintfWorkerW(wchar_t *a1, __int64 a2, __int64 a3, const wchar_t *a4, va_list Args)
{
  unsigned __int64 v5; // rdi
  unsigned int v7; // ebx
  int v8; // eax

  v5 = a2 - 1;
  v7 = 0;
  v8 = _vsnwprintf(a1, a2 - 1, a4, Args);
  if ( v8 < 0 || v8 > v5 )
  {
    a1[v5] = 0;
    return (unsigned int)-2147483643;
  }
  else if ( v8 == v5 )
  {
    a1[v5] = 0;
  }
  return v7;
}
