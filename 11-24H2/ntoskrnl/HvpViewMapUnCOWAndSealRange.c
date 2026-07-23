/*
 * XREFs of HvpViewMapUnCOWAndSealRange @ 0x1409683D0
 * Callers:
 *     HvUnCOWReconciledPages @ 0x140427EB0 (HvUnCOWReconciledPages.c)
 * Callees:
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x140968440 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapFindViewForFileOffset @ 0x140968764 (HvpViewMapFindViewForFileOffset.c)
 */

void __fastcall HvpViewMapUnCOWAndSealRange(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 v3; // r10
  signed __int64 v4; // rdi
  __int64 ViewForFileOffset; // rax
  __int64 v7; // r10
  __int64 v8; // rbx

  v3 = (unsigned int)(a2 + 4096);
  v4 = v3 + a3;
  if ( v3 < v4 )
  {
    do
    {
      ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, v3);
      v8 = v4;
      if ( v4 >= *(_QWORD *)(ViewForFileOffset + 48) )
        v8 = *(_QWORD *)(ViewForFileOffset + 48);
      HvpViewMapMakeViewRangeUnCOWByCaller(a1, ViewForFileOffset, v7, v8);
      v3 = v8;
    }
    while ( v8 < v4 );
  }
}
