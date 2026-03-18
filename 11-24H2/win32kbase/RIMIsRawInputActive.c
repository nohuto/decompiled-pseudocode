/*
 * XREFs of RIMIsRawInputActive @ 0x14011573C
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x140063CD0 (RIMDirectStartStopDeviceRead.c)
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 * Callees:
 *     RIMHidTLCActive @ 0x14011577C (RIMHidTLCActive.c)
 */

__int64 __fastcall RIMIsRawInputActive(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 48) == 2 && (*(_DWORD *)(a1 + 168) & 0x20000) != 0 )
    return (unsigned int)RIMHidTLCActive(*(_QWORD *)(a1 + 448)) != 0;
  return v1;
}
