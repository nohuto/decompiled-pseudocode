/*
 * XREFs of ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180126964
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x1801258EC (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CoordMap::IsEmpty(CoordMap *this)
{
  return *((_QWORD *)this + 1) == *(_QWORD *)this
      && *((_QWORD *)this + 24) == *((_QWORD *)this + 23)
      && *((_QWORD *)this + 47) == *((_QWORD *)this + 46);
}
