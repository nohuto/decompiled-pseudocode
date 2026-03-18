/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x140098D20
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromPoint @ 0x140027270 (_MonitorFromPoint.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x14006DDCC (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x14006F268 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     FindBestPos @ 0x140098F94 (FindBestPos.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(__int64 a1, __int64 a2, int a3, __int128 *a4, _DWORD *a5)
{
  __int64 *v7; // rsi
  unsigned __int64 *v8; // rdi
  int v9; // ebx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  struct tagMONITOR *v12; // r13
  int BestPos; // ebx
  _BYTE *v14; // rcx
  int v16; // ecx
  __int64 v17; // [rsp+50h] [rbp-A8h]
  __int64 v18; // [rsp+60h] [rbp-98h]
  __int64 v19[7]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v20; // [rsp+A8h] [rbp-50h] BYREF

  v7 = (__int64 *)a2;
  v8 = (unsigned __int64 *)a1;
  v19[2] = a1;
  v19[3] = a2;
  v20 = 0LL;
  v9 = 0;
  EnterCrit(0LL, 0LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v16 = 1004;
LABEL_24:
    UserSetLastError(v16);
    goto LABEL_22;
  }
  if ( !a5 )
  {
    v16 = 87;
    goto LABEL_24;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int128 *)MmUserProbeAddress;
    v20 = *a4;
    a4 = &v20;
  }
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v17 = *v7;
  if ( (int)*v7 < 0 || (HIDWORD(*v7) & 0x80000000) != 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (unsigned __int64 *)MmUserProbeAddress;
    v10 = *v8;
    v19[4] = v10;
    v18 = v10;
    v11 = HIDWORD(v10);
    v12 = (struct tagMONITOR *)MonitorFromPoint(v10, 2u, 0);
    if ( (a3 & 4) != 0 )
    {
      LODWORD(v10) = v10 - (int)v17 / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      LODWORD(v10) = v10 - v17;
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v11) = SHIDWORD(v17) / -2 + v11;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v11) = v11 - HIDWORD(v17);
    }
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>((__int64)v19);
    BestPos = FindBestPos(v10, v11, (__int64)a4, a3 | 0x20000u, (__int64)v19, v12, v18);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v19);
    v14 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[15] = v14[15];
    *a5 = (__int16)BestPos;
    a5[1] = SHIWORD(BestPos);
    a5[2] = v17 + (__int16)BestPos;
    a5[3] = SHIWORD(BestPos) + HIDWORD(v17);
    v9 = 1;
  }
LABEL_22:
  UserSessionSwitchLeaveCrit();
  return v9;
}
