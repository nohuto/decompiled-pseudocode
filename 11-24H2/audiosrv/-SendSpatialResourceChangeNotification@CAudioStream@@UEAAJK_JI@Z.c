/*
 * XREFs of ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800C9770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180020AB0 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800469F0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??1?$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18006B730 (--1-$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U-$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@s.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v21; // r8
  unsigned int *v23; // [rsp+38h] [rbp-59h] BYREF
  int v24; // [rsp+40h] [rbp-51h] BYREF
  __int64 v25; // [rsp+48h] [rbp-49h] BYREF
  __int64 v26; // [rsp+50h] [rbp-41h] BYREF
  char v27[32]; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v28; // [rsp+78h] [rbp-19h]
  __int64 v29; // [rsp+80h] [rbp-11h]
  __int64 *v30; // [rsp+88h] [rbp-9h]
  __int64 v31; // [rsp+90h] [rbp-1h]
  void **v32; // [rsp+98h] [rbp+7h]
  __int64 v33; // [rsp+A0h] [rbp+Fh]
  int *v34; // [rsp+A8h] [rbp+17h]
  __int64 v35; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v8 = AudioSrvTelemetryProvider::Instance();
  v9 = (_DWORD *)*((_QWORD *)v8 + 1);
  if ( *v9 > 4u && tlgKeywordOn(*((_QWORD *)v8 + 1), 512LL) )
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    v26 = *((_QWORD *)this + 51);
    LODWORD(v23) = a4;
    v34 = &v24;
    v25 = a3;
    v32 = (void **)&v23;
    v30 = &v25;
    v28 = &v26;
    v35 = 4LL;
    v33 = 4LL;
    v31 = 8LL;
    v29 = 8LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v9, byte_1801AAAF0, 0LL, 0LL, 6, (__int64)v27);
  }
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 656);
    v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
    v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
    v14 = (unsigned int *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v23 = v14;
    v15 = v14;
    if ( !v14 )
    {
      v16 = -2147024882;
      v17 = 1564LL;
      v18 = 2147942414LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)v18);
      std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>((void **)&v23);
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
      v17 = 1583LL;
LABEL_11:
      v18 = (unsigned int)MediaEvent;
      goto LABEL_12;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    MediaEvent = GenerateMediaEvent(v15, v20, v21);
    v16 = MediaEvent;
    if ( MediaEvent < 0 )
    {
      v17 = 1588LL;
      goto LABEL_11;
    }
    std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>((void **)&v23);
  }
  return 0LL;
}
