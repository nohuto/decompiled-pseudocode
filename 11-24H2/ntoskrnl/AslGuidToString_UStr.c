/*
 * XREFs of AslGuidToString_UStr @ 0x14080898C
 * Callers:
 *     SdbResolveDatabaseEx @ 0x140806D04 (SdbResolveDatabaseEx.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslGuidToString_UStr(__int64 a1, unsigned int *a2)
{
  wchar_t *v4; // r14
  __int64 v5; // rcx
  NTSTATUS v6; // ebx

  *(_DWORD *)a1 = 5111884;
  v4 = (wchar_t *)AslAlloc(a1, 78LL);
  if ( v4 )
  {
    v6 = RtlStringCchPrintfW(
           v4,
           (unsigned __int64)*(unsigned __int16 *)(a1 + 2) >> 1,
           L"{%08lx-%04hx-%04hx-%02hx%02hx-%02hx%02hx%02hx%02hx%02hx%02hx}",
           *a2,
           *((unsigned __int16 *)a2 + 2),
           *((unsigned __int16 *)a2 + 3),
           *((unsigned __int8 *)a2 + 8),
           *((unsigned __int8 *)a2 + 9),
           *((unsigned __int8 *)a2 + 10),
           *((unsigned __int8 *)a2 + 11),
           *((unsigned __int8 *)a2 + 12),
           *((unsigned __int8 *)a2 + 13),
           *((unsigned __int8 *)a2 + 14),
           *((unsigned __int8 *)a2 + 15));
    if ( v6 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      v6 = 0;
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"AslGuidToString_UStr", 266, (unsigned int)"RtlStringCchPrintfW failed [%x]");
    }
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"AslGuidToString_UStr", 246, (unsigned int)"Out of memory");
    v6 = -1073741801;
  }
  AslFree(v5);
  return (unsigned int)v6;
}
