/*
 * XREFs of ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x140236870
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEAUtagWND@@AEBU1@@Z @ 0x140026108 (-MiPConvertPoint@@YA-AUtagPOINT@@PEAUtagWND@@AEBU1@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x14009B33C (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1401964AC (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GeneratePointerMessageFromMouse(
        struct tagQMSG *a1,
        __int64 a2,
        struct tagQMSG *a3,
        struct tagWND *a4,
        int a5)
{
  unsigned int v7; // r13d
  struct tagTHREADINFO *v9; // rbx
  _DWORD *v10; // rax
  __int128 v11; // xmm0
  int NextFrameId; // eax
  _DWORD *v13; // r14
  __int64 v14; // r8
  int v15; // r8d
  struct tagPOINT v16; // rax
  bool v17; // zf
  int v18; // ecx
  __int64 v19; // rax
  _DWORD *v20; // rcx
  _DWORD *v22; // rax
  __int128 v23; // [rsp+38h] [rbp-21h] BYREF
  __int128 v24; // [rsp+48h] [rbp-11h]
  struct tagPOINT v25[2]; // [rsp+58h] [rbp-1h] BYREF
  __int128 v26; // [rsp+68h] [rbp+Fh]
  __int128 v27; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v28; // [rsp+88h] [rbp+2Fh] BYREF

  v7 = a2;
  v9 = PtiCurrent((__int64)a1, a2);
  memset_0(&v23, 0, 0x60uLL);
  v10 = (_DWORD *)*((_QWORD *)v9 + 189);
  if ( !v10 )
  {
    v10 = (_DWORD *)Win32AllocPoolZInit(392LL, 1347253077LL);
    if ( !v10 )
      goto LABEL_30;
    *((_QWORD *)v9 + 189) = v10;
  }
  if ( a5 && (*v10 & 0x10) != 0 )
  {
    *v10 &= ~0x10u;
    **((_DWORD **)v9 + 189) &= ~4u;
  }
  if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)a3 + 6)) )
  {
    v11 = *(_OWORD *)a3;
    *(_QWORD *)&v23 = 0x100000004LL;
    *(_OWORD *)a1 = v11;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)a1 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a1 + 3) = *((_OWORD *)a3 + 3);
    *((_OWORD *)a1 + 4) = *((_OWORD *)a3 + 4);
    *((_OWORD *)a1 + 5) = *((_OWORD *)a3 + 5);
    *((_OWORD *)a1 + 6) = *((_OWORD *)a3 + 6);
    *((_OWORD *)a1 + 7) = *((_OWORD *)a3 + 7);
    *((_OWORD *)a1 + 8) = *((_OWORD *)a3 + 8);
    *((_OWORD *)a1 + 9) = *((_OWORD *)a3 + 9);
    *((_QWORD *)a1 + 20) = *((_QWORD *)a3 + 20);
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    NextFrameId = GetNextFrameId();
    *(_QWORD *)&v24 = -1LL;
    DWORD2(v23) = NextFrameId;
    *((_QWORD *)&v24 + 1) = a4 ? *(_QWORD *)a4 : 0LL;
    v13 = (_DWORD *)((char *)a1 + 24);
    v14 = *((_QWORD *)a3 + 4);
    LODWORD(v27) = *((_DWORD *)a3 + 12);
    *(_QWORD *)&v28 = *((_QWORD *)a3 + 17);
    DWORD1(v27) = 1;
    HIDWORD(v23) = GetPointerFlagsFromMouse((char *)a1 + 24, v7, v14, (char *)&v27 + 12, (char *)&v28 + 8);
    v15 = HIDWORD(v23);
    if ( HIDWORD(v23) )
    {
      if ( (**((_DWORD **)v9 + 189) & 4) == 0 )
      {
        v15 = HIDWORD(v23) | 0x2000;
        HIDWORD(v23) |= 0x2000u;
      }
      if ( (*((_DWORD *)a3 + 25) & 0x1000) != 0 && *((_QWORD *)a4 + 34) )
        HIDWORD(v23) = v15 | 0x400000;
      v25[0].x = *((__int16 *)a3 + 20);
      v25[0].y = *((__int16 *)a3 + 21);
      v16 = MiPConvertPoint(a4, v25);
      v17 = (HIDWORD(v23) & 0x180000) == 0;
      *(struct tagPOINT *)&v26 = v25[0];
      v25[1] = v16;
      *((struct tagPOINT *)&v26 + 1) = v16;
      *((_QWORD *)a1 + 13) = v9;
      if ( v17 )
      {
        v18 = WORD6(v23) & 0xE1F7;
      }
      else
      {
        DWORD2(v27) = *((__int16 *)a3 + 17);
        v18 = WORD4(v27);
      }
      *((_QWORD *)a1 + 4) = (unsigned int)(v18 << 16) | 1LL;
      v19 = *((_QWORD *)v9 + 189);
      *(_OWORD *)(v19 + 24) = v23;
      *(_OWORD *)(v19 + 40) = v24;
      *(_OWORD *)(v19 + 56) = *(_OWORD *)&v25[0].x;
      *(_OWORD *)(v19 + 72) = v26;
      *(_OWORD *)(v19 + 88) = v27;
      *(_OWORD *)(v19 + 104) = v28;
      **((_DWORD **)v9 + 189) |= 1u;
      if ( a5 )
      {
        if ( ((*v13 - 579) & 0xFFFFFFFB) == 0 )
        {
          v20 = (_DWORD *)*((_QWORD *)v9 + 189);
          if ( (*v20 & 4) != 0 )
          {
            *v20 |= 0x10u;
            **((_DWORD **)v9 + 189) &= ~2u;
          }
        }
      }
      if ( *v13 == 577 || *v13 == 578 || (unsigned int)(*v13 - 581) < 2 )
      {
        *(_QWORD *)(*((_QWORD *)v9 + 189) + 384LL) = *((_QWORD *)a1 + 5);
        RefreshMiPIdleNotificationTimer(a4);
      }
      else
      {
        StopMiPIdleNotificationTimer(a4);
      }
      return 1LL;
    }
  }
LABEL_30:
  v22 = (_DWORD *)*((_QWORD *)v9 + 189);
  if ( v22 )
    *v22 &= ~1u;
  return 0LL;
}
