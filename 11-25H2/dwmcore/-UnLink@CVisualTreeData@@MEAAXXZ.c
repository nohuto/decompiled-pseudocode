/*
 * XREFs of ?UnLink@CVisualTreeData@@MEAAXXZ @ 0x180107B00
 * Callers:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180107A70 (-Clear@CTreeData@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualTreeData::UnLink(CVisualTreeData *this)
{
  __int64 v1; // r9
  CVisualTreeData **v2; // r8
  CVisualTreeData **v3; // rdx
  CVisualTreeData **v4; // r8
  CVisualTreeData **v5; // rax

  if ( *((_BYTE *)this + 10) )
  {
    v1 = *((_QWORD *)this + 47);
    v2 = (CVisualTreeData **)*((_QWORD *)this + 45);
    if ( v2[1] != (CVisualTreeData *)((char *)this + 360)
      || (v3 = (CVisualTreeData **)*((_QWORD *)this + 46), *v3 != (CVisualTreeData *)((char *)this + 360))
      || (*v3 = (CVisualTreeData *)v2,
          v2[1] = (CVisualTreeData *)v3,
          --*(_DWORD *)(v1 + 2624),
          v4 = (CVisualTreeData **)*((_QWORD *)this + 43),
          v4[1] != (CVisualTreeData *)((char *)this + 344))
      || (v5 = (CVisualTreeData **)*((_QWORD *)this + 44), *v5 != (CVisualTreeData *)((char *)this + 344)) )
    {
      __fastfail(3u);
    }
    *v5 = (CVisualTreeData *)v4;
    v4[1] = (CVisualTreeData *)v5;
    *((_BYTE *)this + 10) = 0;
  }
}
