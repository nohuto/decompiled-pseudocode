/*
 * XREFs of ?DeleteTopListFromNodeListStack@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@@Z @ 0x14000AF74
 * Callers:
 *     ?TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x14000AA50 (-TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_.c)
 *     _scope_exit__lambda_41624085b4e50989a736788818b50e03____::_2_::scope_exit::_scope_exit @ 0x14000F318 (_scope_exit__lambda_41624085b4e50989a736788818b50e03____--_2_--scope_exit--_scope_exit.c)
 *     ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x140013BF4 (-TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall CSidebandDevice::DeleteTopListFromNodeListStack(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v2; // rax
  struct _LIST_ENTRY *v3; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v5; // rax

  Flink = a1->Flink;
  if ( a1->Flink != a1 )
  {
    if ( Flink->Blink != a1 || (v2 = Flink->Flink, Flink->Flink->Blink != Flink) )
LABEL_11:
      __fastfail(3u);
    a1->Flink = v2;
    v3 = Flink + 1;
    v2->Blink = a1;
    while ( v3->Flink != v3 )
    {
      Blink = Flink[1].Blink;
      if ( Blink->Flink != v3 )
        goto LABEL_11;
      v5 = Blink->Blink;
      if ( v5->Flink != Blink )
        goto LABEL_11;
      Flink[1].Blink = v5;
      v5->Flink = v3;
      ExFreePool(Blink);
    }
    ExFreePool(Flink);
  }
}
