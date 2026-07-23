/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x140A64F7C
 * Callers:
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpInitializeClassicStackTracing @ 0x140A391F0 (EtwpInitializeClassicStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     KeAllocateCalloutStackEx @ 0x140A65040 (KeAllocateCalloutStackEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 EtwpReferenceStackLookasideList()
{
  signed __int32 v0; // ebx
  __int64 Pool2; // rax
  __int64 v2; // rdx
  _SLIST_ENTRY *v3; // rdi
  __int64 result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140E28C50);
  while ( dword_140E28C54 < v0 )
  {
    if ( _InterlockedIncrement(&dword_140E28C54) > v0 )
      goto LABEL_8;
    Pool2 = ExAllocatePool2(0x40uLL);
    v3 = (_SLIST_ENTRY *)Pool2;
    if ( !Pool2 )
      goto LABEL_8;
    *(_DWORD *)(Pool2 + 16) = -1;
    LOBYTE(v2) = 1;
    if ( (int)KeAllocateCalloutStackEx(2LL, v2, 0LL, Pool2 + 24) < 0 )
    {
      ExFreePoolWithTag(v3, 0);
LABEL_8:
      _InterlockedDecrement(&dword_140E28C54);
      break;
    }
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, v3);
  }
  result = (unsigned int)dword_140E28C54;
  if ( dword_140E28C54 > dword_140E28C58 )
    return (unsigned int)_InterlockedExchange(&dword_140E28C58, dword_140E28C54);
  return result;
}
