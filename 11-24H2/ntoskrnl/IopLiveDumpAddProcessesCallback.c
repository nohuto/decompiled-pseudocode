/*
 * XREFs of IopLiveDumpAddProcessesCallback @ 0x140598090
 * Callers:
 *     <none>
 * Callees:
 *     IoAddProcessThreadsToDump @ 0x1405A00C0 (IoAddProcessThreadsToDump.c)
 */

__int64 __fastcall IopLiveDumpAddProcessesCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (*(_DWORD *)(a3 + 40) & 0x20) != 0 && (*(_BYTE *)(*(_QWORD *)(a3 + 1168) + 8LL) & 1) != 0 )
    return (unsigned int)IoAddProcessThreadsToDump(a1, a2, a3, 0LL);
  return v3;
}
