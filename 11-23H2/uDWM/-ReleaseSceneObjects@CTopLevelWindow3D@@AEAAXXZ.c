/*
 * XREFs of ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x18004FCC8
 * Callers:
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18004FB60 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow3D::ReleaseSceneObjects(CTopLevelWindow3D *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  __int64 v6; // rax

  v2 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 43) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 44);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 44) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 45);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 45) = 0LL;
  }
  *((_BYTE *)this + 300) = 0;
  v5 = (CBaseObject *)*((_QWORD *)this + 68);
  *((_QWORD *)this + 68) = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 616) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 16LL) + 344LL))(
    *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL),
    *(unsigned int *)(*(_QWORD *)(v6 + 16) + 24LL),
    0LL);
}
