/*
 * XREFs of ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x1800E3BC4
 * Callers:
 *     ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x1800DF4E0 (--$-RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E29F8 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x1800E3BE4 (-write_name@output_archive@tson@@AEAA_N_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tson::details::stack<enum tson::output_archive::node_type>::top(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 104);
  if ( v1 )
    return a1 + 4 * v1;
  *(_BYTE *)a1 = 1;
  return a1 + 4;
}
