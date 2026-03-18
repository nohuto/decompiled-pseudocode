/*
 * XREFs of ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1401E4998
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

struct _SURFOBJ *__fastcall UMPDSURFOBJ::GetLockedSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2)
{
  SURFOBJ *v2; // rbx
  HSURF hsurf; // [rsp+20h] [rbp-38h]
  _BYTE v5[32]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h]

  v2 = 0LL;
  hsurf = 0LL;
  if ( a2 && a2[-1].lDelta == 1431130959 )
    hsurf = *(HSURF *)&a2[-1].iBitmapFormat;
  SURFREF::SURFREF((SURFREF *)v5, hsurf);
  if ( v6 && (*(_DWORD *)(v6 + 112) & 0x240000) == 0x240000 )
  {
    if ( *(_QWORD *)(v6 + 560) )
      v2 = EngLockSurface(hsurf);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v5);
    return v2;
  }
  else
  {
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v5);
    return 0LL;
  }
}
