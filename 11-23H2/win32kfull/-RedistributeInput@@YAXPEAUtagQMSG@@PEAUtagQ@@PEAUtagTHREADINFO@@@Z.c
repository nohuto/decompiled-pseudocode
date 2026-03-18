/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00399E8
 * Callers:
 *     zzzReattachThreads @ 0x1C0038F98 (zzzReattachThreads.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C0039524 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 * Callees:
 *     IsHiddenByInputService @ 0x1C000BD34 (IsHiddenByInputService.c)
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C000BD5C (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x1C00126A0 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0012810 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     IsProcessedByInputService @ 0x1C0039D60 (IsProcessedByInputService.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0044C94 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00794C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00D82E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C0118DF4 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     SetWakeBit @ 0x1C01190C0 (SetWakeBit.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C012B930 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C012BA20 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  __int64 v3; // r11
  struct tagTHREADINFO *v4; // r9
  struct tagQMSG *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r14
  struct tagQMSG *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rdx
  struct _DEVICE_OBJECT *v12; // r10
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  _DWORD *v17; // r12
  int v18; // eax
  __int64 v19; // rdx
  int v20; // r8d
  struct _DEVICE_OBJECT *v21; // r10
  __int64 v22; // r11
  __int64 v23; // rcx
  __int64 v24; // r14
  struct tagQMSG *v25; // rcx
  unsigned int v26; // r9d
  struct tagQMSG *v27; // rcx
  struct tagQMSG *v28; // rdi
  int v29; // r9d
  struct tagQMSG *v30; // r11
  int v31; // r9d
  __int64 v32; // rax
  struct tagQ *v33; // rdx
  __int64 v34; // r9
  char v35; // al
  void *v36; // rdx
  struct tagQMSG *v37; // rdi
  int v39; // r9d
  int v40; // r10d
  struct tagQ *v41; // r9
  __int64 v42; // r9
  __int64 v43; // rdx
  ULONG v44; // [rsp+20h] [rbp-E0h]
  int v45; // [rsp+28h] [rbp-D8h]
  __int64 v46; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v49; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v50; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v51; // [rsp+8Ch] [rbp-74h] BYREF
  int v52; // [rsp+90h] [rbp-70h] BYREF
  __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  int *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  unsigned int *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  unsigned int *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  unsigned int *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  int *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]

  v3 = 0LL;
  v4 = a3;
  v46 = 0LL;
  v6 = a1;
  v7 = 0LL;
  v8 = gptiCurrent;
  v9 = 0LL;
  v53 = gptiCurrent;
  if ( a1 )
  {
    while ( 1 )
    {
      v11 = *((_QWORD *)v6 + 13);
      v12 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
      v13 = v11;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 1272) & 0x20000000) != 0 && IsHiddenByInputService((__int64)v6) )
        {
          *(_DWORD *)(v11 + 1272) = v31 & 0xDFFFFFFF;
          v13 = *((_QWORD *)v6 + 13);
        }
        v4 = a3;
      }
      if ( (*(_DWORD *)(v8 + 1272) & 0x40000) != 0 )
      {
        v14 = *((_DWORD *)v6 + 6);
        if ( v13 == v8 )
        {
          v15 = v14 - 256;
          if ( (!v15 || (unsigned int)(v15 - 1) < 2) && v4 )
            *((_QWORD *)v6 + 13) = v4;
        }
        else if ( v14 == 513 || v14 == 516 )
        {
          LOBYTE(v11) = 1;
          v32 = HMValidateHandleNoSecure(*((_QWORD *)v6 + 2), v11);
          v3 = 0LL;
          v12 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
          if ( v32 )
          {
            if ( *(_QWORD *)(v32 + 16) == v8 )
              *((_QWORD *)v6 + 13) = v8;
          }
        }
      }
      v16 = *((_QWORD *)v6 + 13);
      if ( v6 == *((struct tagQMSG **)a2 + 11) )
      {
        v33 = *(struct tagQ **)(v16 + 432);
        if ( a2 != v33 && *((_QWORD *)v33 + 9) == v3 )
        {
          v34 = *((_QWORD *)a2 + 9);
          if ( v34 )
          {
            if ( *(struct tagQ **)(v34 + 432) == v33 )
            {
              if ( WPP_GLOBAL_Control == v12
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
                || (v35 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                v35 = v3;
              }
              if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v36 = &WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids;
                LOBYTE(v36) = v35;
                LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v36,
                  v13,
                  (_DWORD)gFullLog,
                  4,
                  18,
                  38,
                  (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
                  *(_QWORD *)(v16 + 432),
                  v8,
                  *((_QWORD *)a2 + 9));
                v3 = 0LL;
                v12 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
              }
              *(_QWORD *)(*(_QWORD *)(v16 + 432) + 72LL) = *((_QWORD *)a2 + 9);
              if ( WPP_GLOBAL_Control == v12
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
                || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v33) = v3;
              }
              if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v33,
                  v13,
                  (_DWORD)gFullLog,
                  4,
                  18,
                  39,
                  (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
                  (char)a2,
                  v8,
                  *((_QWORD *)a2 + 9));
                v3 = 0LL;
              }
              *((_QWORD *)a2 + 9) = v3;
            }
          }
        }
      }
      v17 = (_DWORD *)((char *)v6 + 96);
      v18 = IsProcessedByInputService(v6);
      v23 = v22;
      v24 = v22;
      if ( *((_DWORD *)v6 + 24) != 4 )
        v23 = v16;
      if ( !v18 )
        v24 = v23;
      if ( v24 )
      {
        if ( !v9 || v7 != v24 )
        {
          v19 = *(_QWORD *)(v24 + 432);
          v9 = *(struct tagQMSG **)(v19 + 32);
          if ( v9 && *((_DWORD *)v6 + 12) - *((_DWORD *)v9 + 12) >= 0 )
          {
            v19 += 24LL;
            v46 = v19;
          }
          else
          {
            v9 = (struct tagQMSG *)(v19 + 24);
            v46 = v19 + 24;
          }
        }
        v25 = *(struct tagQMSG **)v9;
        if ( *(_QWORD *)v9 )
        {
          LODWORD(v19) = *((_DWORD *)v6 + 12);
          do
          {
            if ( (int)v19 - *((_DWORD *)v25 + 12) < 0 )
              break;
            v9 = v25;
            v25 = *(struct tagQMSG **)v25;
          }
          while ( v25 );
        }
        *((_DWORD *)v6 + 25) &= 0xFFFE1FFF;
        v26 = *((_DWORD *)v6 + 6);
        if ( (v26 - 256 <= 9 || InputTraceLogging::IsMouseInputMessage(v26)) && (unsigned int)dword_1C0359080 > 4 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0359080, 16LL) )
          {
            v52 = v39;
            v48 = (unsigned __int16)v40 >> 15;
            v57 = (unsigned int)(v19 - 8);
            v49 = (unsigned int)(v40 << 17) >> 31;
            v50 = (unsigned int)(v40 << 18) >> 31;
            v54 = *((_QWORD *)v6 + 17);
            v66 = &v48;
            v64 = &v49;
            v62 = &v50;
            v60 = &v51;
            v58 = &v52;
            v56 = &v54;
            v51 = (unsigned int)(v40 << 15) >> 31;
            v67 = 4LL;
            v65 = 4LL;
            v63 = 4LL;
            v61 = 4LL;
            v59 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0359080, (int)&dword_1C031A3E1, 0, 0, v57, &v55);
            LODWORD(v22) = 0;
          }
        }
        v27 = v6;
        v28 = v6;
        v6 = *(struct tagQMSG **)v6;
        *(_QWORD *)v27 = *(_QWORD *)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v27 + 1) = *(_QWORD *)(*(_QWORD *)v9 + 8LL);
          *(_QWORD *)(*(_QWORD *)v9 + 8LL) = v28;
        }
        else
        {
          *((_QWORD *)v27 + 1) = *(_QWORD *)(v46 + 8);
          *(_QWORD *)(v46 + 8) = v27;
        }
        *(_QWORD *)v9 = v28;
        v9 = v28;
        v29 = *(_DWORD *)(v46 + 16) + 1;
        *(_DWORD *)(v46 + 16) = v29;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
          || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v19) = v22;
        }
        if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qiqdd(
            WPP_GLOBAL_Control->AttachedDevice,
            v19,
            v20,
            v29,
            v44,
            v45,
            41,
            (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
            (char)v28,
            *((_QWORD *)v28 + 17),
            v46,
            *(_DWORD *)(v46 + 20),
            v29);
          LODWORD(v22) = 0;
        }
        if ( *v17 != (_DWORD)v22 && (*(_DWORD *)(*(_QWORD *)(v24 + 448) + 8LL) & 0x2000) == 0 )
          SetWakeBit(v24, 8256LL);
        v30 = (struct tagQMSG *)*((_QWORD *)a2 + 11);
        if ( v28 != v30 || (v41 = *(struct tagQ **)(v24 + 432), a2 == v41) )
        {
          v3 = 0LL;
        }
        else
        {
          if ( !*((_QWORD *)v41 + 11) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
              || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
            {
              LOBYTE(v19) = 0;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              || (LOBYTE(v20) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            {
              LOBYTE(v20) = 0;
            }
            if ( (_BYTE)v19 || (_BYTE)v20 )
              WPP_RECORDER_AND_TRACE_SF_qqq(
                WPP_GLOBAL_Control->AttachedDevice,
                v19,
                v20,
                (_DWORD)gFullLog,
                5,
                18,
                42,
                (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
                (char)v30,
                (char)v41,
                *((_QWORD *)v41 + 11));
            *(_QWORD *)(*(_QWORD *)(v24 + 432) + 88LL) = *((_QWORD *)a2 + 11);
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
          {
            v3 = 0LL;
            LOBYTE(v19) = 0;
          }
          else
          {
            LOBYTE(v19) = 1;
            v3 = 0LL;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v20) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v20) = 0;
          }
          if ( (_BYTE)v19 || (_BYTE)v20 )
          {
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              v20,
              (_DWORD)gFullLog,
              5,
              18,
              43,
              (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
              (char)a2,
              *((_QWORD *)a2 + 11));
            v3 = 0LL;
          }
          *((_QWORD *)a2 + 11) = 0LL;
        }
        if ( !v6 )
          break;
        *((_QWORD *)v6 + 1) = 0LL;
        v7 = v24;
      }
      else
      {
        if ( *(_QWORD *)v6 )
          *(_QWORD *)(*(_QWORD *)v6 + 8LL) = v22;
        v37 = v6;
        v6 = *(struct tagQMSG **)v6;
        if ( v37 == *((struct tagQMSG **)a2 + 11) )
        {
          if ( WPP_GLOBAL_Control == v21
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
            || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v19) = v22;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v20) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v22) )
          {
            LOBYTE(v20) = v22;
          }
          if ( (_BYTE)v19 || (_BYTE)v20 )
          {
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              v20,
              (_DWORD)gFullLog,
              5,
              18,
              40,
              (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
              (char)a2,
              *((_QWORD *)a2 + 11));
            v22 = 0LL;
          }
          *((_QWORD *)a2 + 11) = v22;
        }
        CleanEventMessage(v37);
        FreeQEntry(v37);
        v3 = 0LL;
        if ( !v6 )
          break;
      }
      v8 = v53;
      v4 = a3;
    }
  }
  v10 = *((_QWORD *)a2 + 6);
  if ( v10 )
  {
    do
    {
      v42 = *(_QWORD *)(v10 + 8);
      if ( *(struct tagQ **)(*(_QWORD *)(v10 + 104) + 432LL) != a2 )
      {
        RemoveQMsgFromDeferList((struct tagQ *)((char *)a2 + 24), (struct tagQMSG *)v10);
        DeferMessage((struct tagMLIST *)(*(_QWORD *)(*(_QWORD *)(v43 + 104) + 432LL) + 24LL), (struct tagQMSG *)v43);
      }
      v10 = v42;
    }
    while ( v42 );
  }
}
