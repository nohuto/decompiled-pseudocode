/*
 * XREFs of ?AddNodeToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@K@Z @ 0x14000AEF4
 * Callers:
 *     ?TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x14000AA50 (-TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_.c)
 *     ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x140013BF4 (-TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::AddNodeToNodeListStack(struct _LIST_ENTRY *a1, int a2)
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v6; // rcx
  struct _LIST_ENTRY *Flink; // rdx

  if ( a1->Flink == a1 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(64LL, 24LL, 1684174917LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 16) = a2;
  v6 = a1->Flink + 1;
  Flink = v6->Flink;
  if ( v6->Flink->Blink != v6 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = Flink;
  *(_QWORD *)(Pool2 + 8) = v6;
  Flink->Blink = (struct _LIST_ENTRY *)Pool2;
  v6->Flink = (struct _LIST_ENTRY *)Pool2;
  return 0LL;
}
