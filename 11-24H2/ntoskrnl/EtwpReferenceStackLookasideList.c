/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x140A60F90
 * Callers:
 *     EtwpInitializeClassicStackTracing @ 0x1409CF6F0 (EtwpInitializeClassicStackTracing.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     KeAllocateCalloutStackEx @ 0x140A61060 (KeAllocateCalloutStackEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 EtwpReferenceStackLookasideList()
{
  signed __int32 v0; // ebx
  __int64 Pool2; // rax
  __int64 v2; // rdx
  _SLIST_ENTRY *v3; // rdi
  __int64 result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140E28FD0);
  while ( dword_140E28FD4 < v0 )
  {
    if ( _InterlockedIncrement(&dword_140E28FD4) > v0 )
      goto LABEL_8;
    Pool2 = ExAllocatePool2(0x40uLL, 0x830uLL, 0x6C777445u);
    v3 = (_SLIST_ENTRY *)Pool2;
    if ( !Pool2 )
      goto LABEL_8;
    *(_DWORD *)(Pool2 + 16) = -1;
    LOBYTE(v2) = 1;
    if ( (int)KeAllocateCalloutStackEx(2LL, v2, 0LL, Pool2 + 24) < 0 )
    {
      ExFreePoolWithTag(v3, 0);
LABEL_8:
      _InterlockedDecrement(&dword_140E28FD4);
      break;
    }
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, v3);
  }
  result = (unsigned int)dword_140E28FD4;
  if ( dword_140E28FD4 > dword_140E28FD8 )
    return (unsigned int)_InterlockedExchange(&dword_140E28FD8, dword_140E28FD4);
  return result;
}
