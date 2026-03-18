/*
 * XREFs of ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1403CD138
 * Callers:
 *     ?GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIFORMAT@@@Z @ 0x1401C2B70 (-GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIF.c)
 *     DxgkDispMgrIsTargetOwned @ 0x1403CD120 (DxgkDispMgrIsTargetOwned.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??9DXGTARGETENTRY@@QEBA_NAEBV0@@Z @ 0x1403CD1F0 (--9DXGTARGETENTRY@@QEBA_NAEBV0@@Z.c)
 */

char __fastcall DXGDISPLAYMANAGEROBJECT::ContainsTarget(DXGDISPLAYMANAGEROBJECT *this, struct _LUID a2, int a3)
{
  DXGDISPLAYMANAGEROBJECT *v6; // rcx
  char v7; // bl
  char *v8; // r8
  __int64 v9; // r8
  DXGDISPLAYMANAGEROBJECT *v11; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-48h] BYREF
  void **v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+38h] [rbp-30h]
  struct _LUID v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+50h] [rbp-18h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v15 = a2;
  v6 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 13);
  v7 = 0;
  v13 = &SetElement::`vftable';
  v16 = a3;
  v8 = 0LL;
  if ( v6 != (DXGDISPLAYMANAGEROBJECT *)((char *)this + 104) )
    v8 = (char *)v6 - 8;
  v14 = 0LL;
  while ( v8 )
  {
    if ( !(unsigned __int8)DXGTARGETENTRY::operator!=(v8) )
    {
      v7 = 1;
      break;
    }
    v11 = *(DXGDISPLAYMANAGEROBJECT **)(v9 + 8);
    v8 = (char *)v11 - 8;
    if ( v11 == (DXGDISPLAYMANAGEROBJECT *)((char *)this + 104) )
      v8 = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
  return v7;
}
