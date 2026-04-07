/*
 * XREFs of ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180023D54
 * Callers:
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180021D8C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180024708 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow3D::ReleaseSceneObjects(CTopLevelWindow3D *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CVisualProxy *v6; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 37) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 38) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 39) = 0LL;
  }
  *((_BYTE *)this + 252) = 0;
  v5 = (CBaseObject *)*((_QWORD *)this + 62);
  *((_QWORD *)this + 62) = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CVisualProxy *)*((_QWORD *)this + 2);
  *((_BYTE *)this + 568) = 0;
  CVisualProxy::SetClip(v6, 0LL);
}
