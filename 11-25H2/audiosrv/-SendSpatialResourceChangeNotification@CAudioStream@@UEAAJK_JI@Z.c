/*
 * XREFs of ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800CA0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180009E10 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004C6C0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??1?$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18007DA70 (--1-$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U-$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@s.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::SendSpatialResourceChangeNotification(
        CAudioStream *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  struct AudioSrvTelemetryProvider *v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r14d
  unsigned int *v14; // rax
  unsigned int *v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r9
  int MediaEvent; // eax
  unsigned int v20; // eax
  unsigned int *v22; // [rsp+38h] [rbp-59h] BYREF
  int v23; // [rsp+40h] [rbp-51h] BYREF
  __int64 v24; // [rsp+48h] [rbp-49h] BYREF
  __int64 v25; // [rsp+50h] [rbp-41h] BYREF
  char v26[32]; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v27; // [rsp+78h] [rbp-19h]
  __int64 v28; // [rsp+80h] [rbp-11h]
  __int64 *v29; // [rsp+88h] [rbp-9h]
  __int64 v30; // [rsp+90h] [rbp-1h]
  void **v31; // [rsp+98h] [rbp+7h]
  __int64 v32; // [rsp+A0h] [rbp+Fh]
  int *v33; // [rsp+A8h] [rbp+17h]
  __int64 v34; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v8 = AudioSrvTelemetryProvider::Instance();
  v9 = (_DWORD *)*((_QWORD *)v8 + 1);
  if ( *v9 > 4u && tlgKeywordOn(*((_QWORD *)v8 + 1), 512LL) )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    v25 = *((_QWORD *)this + 51);
    LODWORD(v22) = a4;
    v33 = &v23;
    v24 = a3;
    v31 = (void **)&v22;
    v29 = &v24;
    v27 = &v25;
    v34 = 4LL;
    v32 = 4LL;
    v30 = 8LL;
    v28 = 8LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v9, byte_1801A0041, 0LL, 0LL, 6, (__int64)v26);
  }
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 656);
    v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
    v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
    v14 = (unsigned int *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v14;
    v15 = v14;
    if ( !v14 )
    {
      v16 = -2147024882;
      v17 = 1559LL;
      v18 = 2147942414LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)v18);
      std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>((void **)&v22);
      return v16;
    }
    *v14 = v13;
    *(GUID *)(v14 + 7) = GUID_00000000_0000_0000_0000_000000000000;
    v14[1] = 0x20000;
    v14[6] = v12;
    *((_QWORD *)v14 + 6) = *((_QWORD *)this + 51);
    *((_QWORD *)v14 + 7) = a3;
    v14[16] = a4;
    v14[17] = a2;
    MediaEvent = StringCbCopyW((char *)v14 + 72, v12, *(char **)(*((_QWORD *)this + 7) + 656LL));
    v16 = MediaEvent;
    if ( MediaEvent < 0 )
    {
      v17 = 1578LL;
LABEL_11:
      v18 = (unsigned int)MediaEvent;
      goto LABEL_12;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    MediaEvent = GenerateMediaEvent(v15, v20);
    v16 = MediaEvent;
    if ( MediaEvent < 0 )
    {
      v17 = 1583LL;
      goto LABEL_11;
    }
    std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>((void **)&v22);
  }
  return 0LL;
}
