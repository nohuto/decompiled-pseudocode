/*
 * XREFs of ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C01349A0
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C00217FC (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01340F4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 * Callees:
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00222C0 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0025B70 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreDwmUseDeviceBitmaps @ 0x1C0026144 (GreDwmUseDeviceBitmaps.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013D794 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264500 (--0SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x1C0264E28 (--0SURFREF@@QEAA@$$QEAV0@@Z.c)
 */

SURFREF *__fastcall SpCreateSurface(SURFREF *a1, HDEV a2, unsigned int *a3)
{
  unsigned int v6; // esi
  Gre::Base *v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // eax
  SURFACE *v10; // rdi
  SURFACE *v12; // [rsp+80h] [rbp-80h] BYREF
  char v13; // [rsp+88h] [rbp-78h]
  int v14; // [rsp+8Ch] [rbp-74h]
  _DWORD v15[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  _BYTE v18[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+D0h] [rbp-30h]
  __int128 v20; // [rsp+E0h] [rbp-20h] BYREF
  HDEV v21; // [rsp+F0h] [rbp-10h]
  int v22; // [rsp+F8h] [rbp-8h]
  _QWORD v23[10]; // [rsp+100h] [rbp+0h] BYREF
  HDEV v24; // [rsp+188h] [rbp+88h] BYREF

  v24 = a2;
  if ( (!*(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8696LL) || !(unsigned int)GreDwmUseDeviceBitmaps())
    && !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v24) )
  {
    v6 = 0;
LABEL_12:
    v15[1] = *a3;
    v9 = a3[1];
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
    v15[3] = 0;
    v17 = 2049LL;
    v15[0] = 6;
    v15[2] = v9;
    v16 = 0LL;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v12, (struct _DEVBITMAPINFO *)v15, 0LL, 0LL, 0, 0LL, 0LL, 1, 1, 0, 0) )
    {
      SURFACE::hdev(v12, a2);
      v13 |= 1u;
      *((_DWORD *)v12 + 28) |= 0x800u;
      EtwPhysicalSurfCreateEvent(*((_QWORD *)v12 + 4), 0LL, 0LL, v6);
      v10 = v12;
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
      if ( v10 )
      {
        *((_QWORD *)a1 + 4) = v10;
        INC_SHARE_REF_CNT(v10);
      }
    }
    else
    {
      SURFREF::SURFREF(a1);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v12);
    return a1;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v23);
  v23[8] = 0LL;
  v20 = 0LL;
  v23[7] = 0LL;
  v23[0] = 0LL;
  v22 = 1;
  if ( ((_DWORD)a2[10] & 1) != 0 )
  {
    Gre::Base::Globals(v7);
    *(_QWORD *)&v20 = *((_QWORD *)a2 + 6);
    v21 = a2;
    GreAcquireSemaphore(v20);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
  }
  CreateCompatibleSurface((SURFREF *)v18, a2, 6u, 0LL, *a3, a3[1], 1u, 0, 1, 1, 0, 0, 0, 0, 0, 0LL);
  if ( !v19 )
  {
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v20);
    v6 = 1;
    goto LABEL_12;
  }
  LOBYTE(v8) = 5;
  HmgSetOwner(*(_QWORD *)(v19 + 32), 0LL, v8);
  GreMarkUndeletableBitmap(*(_QWORD *)(v19 + 32));
  SURFREF::SURFREF(a1, v18);
  if ( v19 )
    DEC_SHARE_REF_CNT(v19);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v20);
  return a1;
}
