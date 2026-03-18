/*
 * XREFs of KeGetTopologySiblingAffinityForProcessor @ 0x1404808CC
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140266270 (KeQueryLogicalProcessorRelationship.c)
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

void __fastcall KeGetTopologySiblingAffinityForProcessor(__int64 a1, int a2, struct _KAFFINITY_EX *a3)
{
  int v3; // edx
  int v4; // edx
  __int64 v5; // rax

  v3 = a2 - 2;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        __fastfail(5u);
      v5 = 35856LL;
    }
    else
    {
      v5 = 40128LL;
    }
  }
  else
  {
    v5 = 40720LL;
  }
  KiCopyAffinityEx(a3, a3->Size, (struct _KAFFINITY_EX *)(a1 + v5));
}
