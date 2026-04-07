/*
 * XREFs of ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x18002DAD8
 * Callers:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18002DA94 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasedRectsVisual::RemoveAllAtlasImages(CAtlasedRectsVisual *this)
{
  __int64 v1; // rsi
  char *i; // rbx
  CBaseObject *v4; // rcx

  v1 = 0LL;
  for ( i = (char *)this + 200; (unsigned int)v1 < *((_DWORD *)this + 56); v1 = (unsigned int)(v1 + 1) )
  {
    v4 = *(CBaseObject **)(*(_QWORD *)i + 8 * v1);
    *((_QWORD *)v4 + 10) = 0LL;
    CBaseObject::Release(v4);
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)i, 8u);
  (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
}
