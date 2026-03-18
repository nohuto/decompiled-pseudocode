/*
 * XREFs of LinkNodeFindByNsObj @ 0x1400A8E68
 * Callers:
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeFindByNsObj(__int64 a1, __int64 *a2)
{
  __int64 i; // rax

  for ( i = LinkNodeListHead - 56; &LinkNodeListHead != (__int64 *)(i + 56); i = *(_QWORD *)(i + 56) - 56LL )
  {
    if ( *(_QWORD *)(i + 600) == a1 )
    {
      *a2 = i;
      return 0LL;
    }
  }
  return 3221226021LL;
}
