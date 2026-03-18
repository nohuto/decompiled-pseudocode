/*
 * XREFs of ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C00A35C0
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C005A1D0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003B918 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C005A528 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C005AA48 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005C068 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C006017C (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddS @ 0x1C00A1650 (WPP_RECORDER_AND_TRACE_SF_ddddddddddS.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x1C00A39A0 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1C01A5D54 (WPP_RECORDER_AND_TRACE_SF_qdddddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x1C01F52FC (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 */

char xxxGetWorkAreasFromShell(void)
{
  unsigned int v0; // r14d
  int v1; // edx
  int v2; // r8d
  char v3; // bl
  struct _SYNC_DISPLAY_CHANGE_DATA *v4; // rdx
  __int64 i; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r9
  char v9; // dl
  char v10; // dl
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  char v15; // r10
  char v16; // r13
  unsigned int v17; // r12d
  unsigned __int64 v18; // r15
  _DWORD *v19; // rsi
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // r14
  char v23; // dl
  __int64 v24; // rdx
  char v25; // dl
  __int64 v26; // rcx
  bool v27; // r10
  unsigned __int16 *v28; // rdi
  int v29; // eax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // rax
  char *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  PDEVICE_OBJECT v36; // rcx
  __int16 v37; // ax
  struct _UNICODE_STRING v38; // xmm0
  __int64 v39; // rcx
  int v40; // eax
  bool v41; // r10
  int v42; // eax
  int v43; // [rsp+28h] [rbp-110h]
  int v44; // [rsp+30h] [rbp-108h]
  int v45; // [rsp+38h] [rbp-100h]
  int v46; // [rsp+40h] [rbp-F8h]
  int v47; // [rsp+78h] [rbp-C0h]
  int v48; // [rsp+78h] [rbp-C0h]
  int v49; // [rsp+80h] [rbp-B8h]
  int v50; // [rsp+80h] [rbp-B8h]
  int v51; // [rsp+88h] [rbp-B0h]
  int v52; // [rsp+88h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-80h] BYREF
  _DWORD v54[6]; // [rsp+C8h] [rbp-70h] BYREF
  unsigned __int16 v55[596]; // [rsp+E0h] [rbp-58h] BYREF
  int v56; // [rsp+588h] [rbp+450h] BYREF
  _BYTE v57[324]; // [rsp+58Ch] [rbp+454h] BYREF
  size_t v58[65]; // [rsp+6D0h] [rbp+598h] BYREF
  WCHAR SourceString[32]; // [rsp+8D8h] [rbp+7A0h] BYREF

  v0 = *(_DWORD *)*gpDispInfo;
  if ( v0 > 4 )
    v0 = 4;
  memset_0(v54, 0, 0x4B4uLL);
  v3 = 1;
  LOBYTE(v1) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      (unsigned int)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
      4,
      7,
      15,
      (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
  }
  v4 = 0LL;
  v54[0] = 0;
  for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
    {
      if ( (unsigned int)v4 >= v0 )
      {
        v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v15,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            2u,
            7u,
            0x10u,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
        break;
      }
      v6 = 300LL * (unsigned int)v4;
      *(_DWORD *)&v55[v6 / 2 + 130] = *(_DWORD *)i;
      *(_DWORD *)&v55[v6 / 2 + 128] = i == *(_QWORD *)(gpDispInfo + 96LL);
      v54[v6 / 4 + 5] = *(unsigned __int16 *)(*(_QWORD *)(i + 40) + 60LL);
      *(_OWORD *)&v54[v6 / 4 + 1] = *(_OWORD *)(*(_QWORD *)(i + 40) + 28LL);
      *(_OWORD *)&v55[v6 / 2 + 132] = *(_OWORD *)(*(_QWORD *)(i + 40) + 44LL);
      memset_0(v57, 0, 0x344uLL);
      v7 = *(_QWORD *)(i + 80);
      v56 = 840;
      DestinationString = 0LL;
      if ( !(unsigned int)DrvGetHdevName(v7, SourceString)
        || (RtlInitUnicodeString(&DestinationString, SourceString),
            (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, &v56, 1, 0) < 0)
        || RtlStringCchCopyW(&v55[v6 / 2], 0x80uLL, v58) < 0 )
      {
        v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v9,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            17LL,
            2u,
            7u,
            0x11u,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
      }
      v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_ddddddddddS(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v8,
          v43,
          v44,
          v45,
          v46,
          v54[0],
          v54[v6 / 4 + 1],
          v54[v6 / 4 + 2],
          v54[v6 / 4 + 3],
          v54[v6 / 4 + 4],
          *(_DWORD *)&v55[v6 / 2 + 132],
          *(_DWORD *)&v55[v6 / 2 + 134],
          *(_DWORD *)&v55[v6 / 2 + 136],
          *(_DWORD *)&v55[v6 / 2 + 138],
          v54[v6 / 4 + 5],
          (const char *)&v55[v6 / 2]);
      v4 = (struct _SYNC_DISPLAY_CHANGE_DATA *)(unsigned int)++v54[0];
    }
  }
  if ( CallShell::xxxDisplayChangedHandler((CallShell *)v54, v4) )
  {
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        v13,
        4,
        7,
        20,
        (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
    }
    v16 = 0;
    v17 = 0;
    if ( !v54[0] )
      return v16;
    while ( 1 )
    {
      v18 = 300LL * v17;
      v19 = &v54[v18 / 4 + 1];
      v20 = ValidateHmonitorNoRip((unsigned int)v54[v18 / 4 + 71]);
      v22 = v20;
      if ( !v20 )
      {
        v23 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v23,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            21LL,
            3u,
            7u,
            0x15u,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
        goto LABEL_72;
      }
      v24 = *(_QWORD *)(v20 + 40);
      if ( *(unsigned __int16 *)(v24 + 60) != v19[4] )
      {
        v25 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qdd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v25,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            3u,
            7u,
            0x16u,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
        goto LABEL_72;
      }
      v26 = *(_QWORD *)v19 - *(_QWORD *)(v24 + 28);
      if ( *(_QWORD *)v19 == *(_QWORD *)(v24 + 28) )
        v26 = *((_QWORD *)v19 + 1) - *(_QWORD *)(v24 + 36);
      if ( v26 )
      {
        v41 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v52 = *(_DWORD *)(v24 + 40);
          v50 = *(_DWORD *)(v24 + 36);
          v48 = *(_DWORD *)(v24 + 32);
          v42 = *(_DWORD *)(v24 + 28);
          LOBYTE(v24) = v41;
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdddddddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v24,
            v21,
            (_DWORD)gFullLog,
            3,
            7,
            23,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
            v19[70],
            *v19,
            v19[1],
            v19[2],
            v19[3],
            v42,
            v48,
            v50,
            v52);
        }
        goto LABEL_72;
      }
      v27 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = (unsigned __int16 *)(v19 + 71);
        v51 = *(_DWORD *)(v24 + 56);
        v49 = *(_DWORD *)(v24 + 52);
        v47 = *(_DWORD *)(v24 + 48);
        v29 = *(_DWORD *)(v24 + 44);
        LOBYTE(v24) = v27;
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v24,
          v21,
          (_DWORD)gFullLog,
          v43,
          v44,
          v45,
          v46,
          v22,
          *v19,
          v54[75 * v17 + 2],
          v54[75 * v17 + 3],
          v54[75 * v17 + 4],
          v29,
          v47,
          v49,
          v51,
          v19[71],
          v19[72],
          v19[73],
          v19[74]);
      }
      else
      {
        v28 = &v55[v18 / 2 + 132];
      }
      DestinationString = 0LL;
      if ( IsRectEmptyInl((const struct tagRECT *)v28)
        || !(unsigned int)IntersectRect(&DestinationString, &v54[v18 / 4 + 1], v28) )
      {
        goto LABEL_126;
      }
      v32 = *(_QWORD *)v28;
      v33 = (char *)(*(_QWORD *)&DestinationString.Length - *(_QWORD *)v28);
      if ( *(_QWORD *)&DestinationString.Length == *(_QWORD *)v28 )
        v33 = (char *)DestinationString.Buffer - *((_QWORD *)v28 + 1);
      if ( v33 )
      {
LABEL_126:
        LOBYTE(v30) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v30,
            v31,
            (unsigned int)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
            2,
            7,
            25,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
        }
        goto LABEL_72;
      }
      v34 = *(_QWORD *)(v22 + 40);
      v35 = *(_QWORD *)(v34 + 44) - v32;
      if ( !v35 )
        v35 = *(_QWORD *)(v34 + 52) - *((_QWORD *)v28 + 1);
      if ( v35 )
      {
        v38 = *(struct _UNICODE_STRING *)(v34 + 44);
        *(_DWORD *)(v34 + 44) = v32;
        v16 = 1;
        v39 = *(_QWORD *)(v22 + 40);
        v40 = *((_DWORD *)v28 + 1);
        DestinationString = v38;
        *(_DWORD *)(v39 + 48) = v40;
        *(_DWORD *)(*(_QWORD *)(v22 + 40) + 52LL) = *((_DWORD *)v28 + 2);
        *(_DWORD *)(*(_QWORD *)(v22 + 40) + 56LL) = *((_DWORD *)v28 + 3);
        v36 = WPP_GLOBAL_Control;
        LOBYTE(v34) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_72;
        v37 = 27;
      }
      else
      {
        v36 = WPP_GLOBAL_Control;
        LOBYTE(v34) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_72;
        v37 = 26;
      }
      WPP_RECORDER_AND_TRACE_SF_(
        v36->AttachedDevice,
        v34,
        v31,
        (unsigned int)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
        4,
        7,
        v37,
        (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
LABEL_72:
      if ( ++v17 >= v54[0] )
      {
        if ( v16 )
          CTopologyManager::UpdateCurrent();
        return v16;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v3 = 0;
  }
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = v3;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      v13,
      4,
      7,
      19,
      (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
  }
  return 0;
}
