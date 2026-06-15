/*
 * XREFs of ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x18001EC10
 * Callers:
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x18001E880 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SkipVolumeChangeNotificationForContext@@YA_NPEBU_GUID@@@Z @ 0x18001F148 (-SkipVolumeChangeNotificationForContext@@YA_NPEBU_GUID@@@Z.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18001F178 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJ$$QEA.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18001F280 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x18001F3D4 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_DA.c)
 *     ??1?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAA@XZ @ 0x18001F3F8 (--1-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@5555555@Z @ 0x18006696C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeStrip::OnNotify(CVolumeStrip *this, __int64 a2, struct _GUID *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  _DWORD *v10; // rdi
  char *v11; // rax
  char *v12; // rbx
  __int64 v13; // r15
  GUID *v14; // rax
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  _WORD *v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  __int16 v24; // ax
  _WORD *v25; // rax
  _DWORD *v26; // rcx
  int v27; // r8d
  int v28; // r9d
  int v29; // eax
  void *v30; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  int v35; // [rsp+78h] [rbp-19h] BYREF
  int v36; // [rsp+7Ch] [rbp-15h] BYREF
  int v37; // [rsp+80h] [rbp-11h] BYREF
  int v38; // [rsp+84h] [rbp-Dh] BYREF
  int v39; // [rsp+88h] [rbp-9h] BYREF
  int v40; // [rsp+8Ch] [rbp-5h] BYREF
  int v41; // [rsp+90h] [rbp-1h] BYREF
  _DWORD *v42; // [rsp+98h] [rbp+7h] BYREF
  _QWORD v43[2]; // [rsp+A0h] [rbp+Fh] BYREF
  void *Src; // [rsp+B0h] [rbp+1Fh]
  _DWORD *v45; // [rsp+B8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  unsigned int v47; // [rsp+110h] [rbp+7Fh] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_ffca69456fc43fc517c726147dcc355b_Traceguids,
      (char *)this - 8);
  }
  if ( SkipVolumeChangeNotificationForContext(a3) )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(*((_QWORD *)this + 18) + 2 * v5) );
  v6 = *((_QWORD *)this + 20);
  v7 = 2 * v5 + 2;
  v47 = v7;
  v8 = 4 * (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  v9 = v7 + 2 * (v8 + 40);
  v42 = operator new[](v8 + 28, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v42;
  if ( !v42 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v11 = (char *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v43[0] = v11;
  v12 = v11;
  if ( v11 )
  {
    memset_0(v11, 0, v9);
    v13 = v47;
    v14 = &GUID_00000000_0000_0000_0000_000000000000;
    *(_DWORD *)v12 = v9;
    *((_DWORD *)v12 + 1) = 128;
    if ( a3 )
      v14 = a3;
    *(GUID *)(v12 + 24) = *v14;
    *((_DWORD *)v12 + 19) = v13;
    v15 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 80LL))(
            *((_QWORD *)this + 21),
            v12 + 40);
    v16 = v15;
    if ( v15 < 0 )
    {
      v32 = 477LL;
LABEL_36:
      v33 = (unsigned int)v15;
LABEL_37:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)v33);
      operator delete(v12, (const struct std::nothrow_t *)0x58);
      operator delete(v10, (const struct std::nothrow_t *)0x20);
      return v16;
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 20) + 120LL))(
            *((_QWORD *)this + 20),
            v12 + 44);
    v16 = v17;
    if ( v17 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 40LL))(*((_QWORD *)this + 20));
      *((_DWORD *)v12 + 12) = v18;
      v19 = *((_QWORD *)this + 20);
      Src = &v12[v13 + 80];
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 48LL))(v19, v18);
      v20 = (unsigned __int64)(unsigned int)v13 >> 1;
      if ( v20 )
      {
        v21 = v12 + 80;
        v22 = 2147483646 - v20;
        v23 = *((_QWORD *)this + 18) - (_QWORD)(v12 + 80);
        do
        {
          if ( !(v22 + v20) )
            break;
          v24 = *(_WORD *)((char *)v21 + v23);
          if ( !v24 )
            break;
          *v21++ = v24;
          --v20;
        }
        while ( v20 );
        v25 = v21 - 1;
        if ( v20 )
          v25 = v21;
        *v25 = 0;
        v16 = v20 == 0 ? 0x8007007A : 0;
        if ( v20 )
        {
          v17 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int64, __int64))(**((_QWORD **)this + 20) + 112LL))(
                  *((_QWORD *)this + 20),
                  v12 + 52,
                  v22,
                  v23);
          v16 = v17;
          if ( v17 < 0 )
          {
            v34 = 486LL;
          }
          else
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *, char *))(**((_QWORD **)this + 20) + 160LL))(
                    *((_QWORD *)this + 20),
                    0xFFFFFFFFLL,
                    v12 + 56,
                    v12 + 60,
                    v12 + 64);
            v16 = v17;
            if ( v17 < 0 )
            {
              v34 = 487LL;
            }
            else
            {
              v17 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 20) + 168LL))(
                      *((_QWORD *)this + 20),
                      v12 + 68,
                      v12 + 72);
              v16 = v17;
              if ( v17 >= 0 )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 20) + 56LL))(
                  *((_QWORD *)this + 20),
                  *((unsigned int *)v12 + 12),
                  &v12[v8 + 80 + v13]);
                v26 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
                if ( *v26 > 4u )
                {
                  v47 = *((_DWORD *)v12 + 18);
                  v35 = *((_DWORD *)v12 + 17);
                  v36 = *((_DWORD *)v12 + 16);
                  v37 = *((_DWORD *)v12 + 15);
                  v38 = *((_DWORD *)v12 + 14);
                  v39 = *((_DWORD *)v12 + 13);
                  v40 = *((_DWORD *)v12 + 11);
                  v41 = *((_DWORD *)v12 + 10);
                  v43[0] = v12 + 80;
                  v42 = v12 + 24;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (_DWORD)v26,
                    (unsigned int)&unk_1801A320F,
                    v27,
                    v28,
                    (__int64)v43,
                    (__int64)&v42,
                    (__int64)&v41,
                    (__int64)&v40,
                    (__int64)&v39,
                    (__int64)&v38,
                    (__int64)&v37,
                    (__int64)&v36,
                    (__int64)&v35,
                    (__int64)&v47);
                }
                v43[1] = v12;
                v43[0] = &CMasterVolumeNotification::`vftable';
                v15 = CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 16));
                v16 = v15;
                if ( v15 < 0 )
                {
                  v32 = 508LL;
                }
                else
                {
                  *(_OWORD *)v10 = *(_OWORD *)(v12 + 24);
                  v29 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 40LL))(*((_QWORD *)this + 20));
                  v30 = Src;
                  v10[6] = v29;
                  v10[4] = *((_DWORD *)v12 + 10);
                  v10[5] = *((_DWORD *)v12 + 11);
                  memcpy_0(v10 + 7, v30, v8);
                  v45 = v10;
                  Src = &CInternalVolumeNotification::`vftable';
                  v15 = CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::ForEachEntry((LPCRITICAL_SECTION)this + 2);
                  v16 = v15;
                  if ( v15 >= 0 )
                  {
                    operator delete(v12, (const struct std::nothrow_t *)0x58);
                    operator delete(v10, (const struct std::nothrow_t *)0x20);
                    return 0LL;
                  }
                  v32 = 516LL;
                }
                goto LABEL_36;
              }
              v34 = 488LL;
            }
          }
          goto LABEL_42;
        }
      }
      else
      {
        v16 = -2147024809;
      }
      v33 = v16;
      v32 = 484LL;
      goto LABEL_37;
    }
    v34 = 478LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D5,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
    (const char *)0x8007000ELL);
  v16 = -2147024882;
LABEL_30:
  std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::~unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>(v43);
  std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(&v42);
  return v16;
}
