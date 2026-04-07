/*
 * XREFs of ?MovePrevious@VisualCollectionIterator@@QEAA_NXZ @ 0x180105454
 * Callers:
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x18006ED10 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VisualCollectionIterator::MovePrevious(VisualCollectionIterator *this)
{
  __int64 v1; // rax
  int v2; // edx
  char v3; // al

  if ( *((_BYTE *)this + 16) )
  {
    v3 = *((_BYTE *)this + 17);
    if ( !v3 )
      --*((_DWORD *)this + 3);
  }
  else
  {
    v1 = *(_QWORD *)this;
    *((_BYTE *)this + 16) = 1;
    v2 = *(_DWORD *)(v1 + 40);
    v3 = *((_BYTE *)this + 17);
    *((_DWORD *)this + 3) = v2 - 1;
  }
  if ( *((_DWORD *)this + 3) == -1 )
  {
    *((_BYTE *)this + 17) = 1;
    v3 = 1;
  }
  return v3 == 0;
}
