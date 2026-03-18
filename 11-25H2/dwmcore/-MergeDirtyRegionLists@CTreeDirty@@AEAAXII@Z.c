/*
 * XREFs of ?MergeDirtyRegionLists@CTreeDirty@@AEAAXII@Z @ 0x1802497DC
 * Callers:
 *     ?Merge@CTreeDirty@@AEAAXII@Z @ 0x1802491C0 (-Merge@CTreeDirty@@AEAAXII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTreeDirty::MergeDirtyRegionLists(CTreeDirty *this, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // r10
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v3 = (_QWORD *)((char *)this + 16 * a3 + 456);
  v4 = a2;
  if ( (_QWORD *)*v3 != v3 )
  {
    v5 = 2 * (a3 + 29LL);
    v6 = 16LL * (unsigned int)v4;
    v7 = 2 * (v4 + 29);
    **((_QWORD **)this + v7) = *v3;
    *(_QWORD *)(*v3 + 8LL) = *((_QWORD *)this + v7);
    **((_QWORD **)this + v5) = (char *)this + v6 + 456;
    *((_QWORD *)this + v7) = *((_QWORD *)this + v5);
    v3[1] = v3;
    *v3 = v3;
  }
}
