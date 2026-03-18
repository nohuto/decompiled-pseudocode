/*
 * XREFs of ??1SharedData@CPolygonShape@@UEAA@XZ @ 0x1801E42FC
 * Callers:
 *     ??_GSharedData@CPolygonShape@@UEAAPEAXI@Z @ 0x1801E42C0 (--_GSharedData@CPolygonShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPolygonShape::SharedData::~SharedData(CPolygonShape::SharedData *this)
{
  _QWORD *v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    v3 = (*((_QWORD *)this + 5) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v3 >= 0x1000 )
    {
      v3 += 39LL;
      if ( (unsigned __int64)v2 - *(v2 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v2 = (_QWORD *)*(v2 - 1);
    }
    operator delete(v2, v3);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
