/*
 * XREFs of ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401B8A30
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1400CAC90 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1400148B8 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreDwmUseDeviceBitmaps @ 0x140014E60 (GreDwmUseDeviceBitmaps.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x140015140 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4 (--0SURFREF@@QEAA@XZ.c)
 *     ?vSetPID@SURFREF@@QEAAXK@Z @ 0x14019DB4C (-vSetPID@SURFREF@@QEAAXK@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1401B8C58 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x140259840 (--0SURFREF@@QEAA@$$QEAV0@@Z.c)
 */

SURFREF *__fastcall SpCreateSurface(SURFREF *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // eax
  __int64 v9; // r8
  struct SURFACE *v10; // [rsp+80h] [rbp-80h] BYREF
  char v11; // [rsp+88h] [rbp-78h]
  int v12; // [rsp+8Ch] [rbp-74h]
  _DWORD v13[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-60h]
  __int64 v15; // [rsp+A8h] [rbp-58h]
  _BYTE v16[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+D0h] [rbp-30h]
  HDC v18[18]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v19; // [rsp+1A8h] [rbp+A8h] BYREF

  v19 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 96LL)
    && (unsigned int)GreDwmUseDeviceBitmaps()
    || (unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v19) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18, (struct PDEVOBJ *)&v19);
    CreateCompatibleSurface((SURFREF *)v16, a2, 6, 0LL, *a3, a3[1], 1u, 0, 1, 1, 0, 0, 0, 0, 0, 0LL);
    if ( v17 )
    {
      SURFREF::vSetPID((SURFREF *)v16, 0LL, v9);
      GreMarkUndeletableBitmap(*(_QWORD *)(v17 + 32));
      SURFREF::SURFREF(a1, v16);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v16);
      DEVLOCKOBJ::~DEVLOCKOBJ(v18);
      return a1;
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v16);
    DEVLOCKOBJ::~DEVLOCKOBJ(v18);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v13[1] = *a3;
  v7 = a3[1];
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v13[3] = 0;
  v15 = 2049LL;
  v13[0] = 6;
  v13[2] = v7;
  v14 = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v10, (struct _DEVBITMAPINFO *)v13, 0LL, 0LL, 0, 0LL, 0LL, 1, 1, 0, 0) )
  {
    *((_QWORD *)v10 + 6) = a2;
    v11 |= 1u;
    *((_DWORD *)v10 + 28) |= 0x800u;
    EtwPhysicalSurfCreateEvent(*((_QWORD *)v10 + 4), 0LL, 0LL, v6);
    SURFREF::SURFREF(a1, v10);
  }
  else
  {
    SURFREF::SURFREF(a1);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v10);
  return a1;
}
