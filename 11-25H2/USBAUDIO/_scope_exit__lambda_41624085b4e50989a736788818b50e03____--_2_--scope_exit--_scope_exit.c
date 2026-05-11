/*
 * XREFs of _scope_exit__lambda_41624085b4e50989a736788818b50e03____::_2_::scope_exit::_scope_exit @ 0x14000F318
 * Callers:
 *     ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x140013BF4 (-TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 * Callees:
 *     ?DeleteTopListFromNodeListStack@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@@Z @ 0x14000AF74 (-DeleteTopListFromNodeListStack@CSidebandDevice@@SAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall scope_exit__lambda_41624085b4e50989a736788818b50e03____::_2_::scope_exit::_scope_exit(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx

  if ( *(_BYTE *)(a1 + 8) )
  {
    while ( 1 )
    {
      v2 = *(struct _LIST_ENTRY **)a1;
      if ( v2->Flink == v2 )
        break;
      CSidebandDevice::DeleteTopListFromNodeListStack(v2);
    }
  }
}
