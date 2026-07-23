/*
 * XREFs of EtwpStackInitializeProcessor @ 0x14064E008
 * Callers:
 *     EtwInitializeProcessor @ 0x1407A671C (EtwInitializeProcessor.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     KeAllocateCalloutStackEx @ 0x140A61060 (KeAllocateCalloutStackEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    Pool2 = ExAllocatePool2(0x40uLL, 0x830uLL, 0x6C777445u);
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
