/*
 * XREFs of EtwpStackInitializeProcessor @ 0x1406439BC
 * Callers:
 *     EtwInitializeProcessor @ 0x14079720C (EtwInitializeProcessor.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     KeAllocateCalloutStackEx @ 0x140A65040 (KeAllocateCalloutStackEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpStackInitializeProcessor(_SLIST_HEADER *a1, int a2)
{
  unsigned int i; // edi
  __int64 Pool2; // rax
  __int64 v6; // rdx
  _SLIST_ENTRY *v7; // rbx
  int CalloutStack; // esi

  for ( i = 0; i < 2; ++i )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v7 = (_SLIST_ENTRY *)Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    *(_DWORD *)(Pool2 + 16) = a2;
    LOBYTE(v6) = 1;
    CalloutStack = KeAllocateCalloutStackEx(2LL, v6, 0LL, Pool2 + 24);
    if ( CalloutStack < 0 )
    {
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)CalloutStack;
    }
    RtlpInterlockedPushEntrySList(a1 + 24, v7);
  }
  return 0LL;
}
