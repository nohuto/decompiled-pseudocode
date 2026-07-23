/*
 * XREFs of AlpcpLocateMessageLog @ 0x140AAF41C
 * Callers:
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408A161C (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140AAF380 (AlpcpEnterFreeEventMessageLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpLocateMessageLog(unsigned int a1)
{
  char *v2; // rax
  __int64 i; // rcx

  if ( AlpcpMessageLogLookupTable )
  {
    v2 = (char *)AlpcpMessageLogLookupTable + 16 * ((a1 >> 2) & 0x3FF);
    for ( i = *((_QWORD *)v2 + 1); (char *)i != v2; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)(i + 28) && *(_DWORD *)(i + 24) == a1 )
        return i - 16;
    }
  }
  return 0LL;
}
