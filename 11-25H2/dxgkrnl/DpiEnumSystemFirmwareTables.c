/*
 * XREFs of DpiEnumSystemFirmwareTables @ 0x140243330
 * Callers:
 *     <none>
 * Callees:
 *     DpiQuerySystemFirmwareTables @ 0x140243CF4 (DpiQuerySystemFirmwareTables.c)
 */

__int64 __fastcall DpiEnumSystemFirmwareTables(__int64 a1, int a2, int a3, void *a4, _DWORD *a5)
{
  __int64 v5; // r10
  __int64 result; // rax

  if ( a1
    && (v5 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v5 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v5 + 20) - 2) <= 1 )
  {
    if ( *(_BYTE *)(v5 + 2719) )
    {
      *a5 = 0;
      return 3221226599LL;
    }
    else
    {
      return DpiQuerySystemFirmwareTables(0, a2, 0, a3, a4, (__int64)a5);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, -1073741585LL);
    result = 3221225711LL;
    WdLogGlobalForLineNumber = 4720;
  }
  return result;
}
