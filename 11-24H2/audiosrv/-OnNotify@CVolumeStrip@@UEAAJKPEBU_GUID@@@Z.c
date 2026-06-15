/*
 * XREFs of ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180087430
 * Callers:
 *     ?OnEndpointStateChanged@CVolumeStrip@@UEAAX_N@Z @ 0x180116190 (-OnEndpointStateChanged@CVolumeStrip@@UEAAX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAA@XZ @ 0x18001A144 (--1-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180020AB0 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180047B18 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180054038 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJ$$QEA.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@5555555@Z @ 0x18005A2FC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x180063710 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_DA.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeStrip::OnNotify(CVolumeStrip *this, __int64 a2, struct _GUID *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  size_t v9; // r13
  unsigned int v10; // r12d
  _DWORD *v11; // rdi
  unsigned int v12; // esi
  char *v13; // rax
  char *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r9
  GUID *v17; // rax
  unsigned __int64 v18; // r12
  int v19; // eax
  int *v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  const void *v27; // rdx
  int v28; // [rsp+70h] [rbp-29h] BYREF
  int v29; // [rsp+74h] [rbp-25h] BYREF
  int v30; // [rsp+78h] [rbp-21h] BYREF
  int v31; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v32; // [rsp+80h] [rbp-19h] BYREF
  int v33; // [rsp+84h] [rbp-15h] BYREF
  _DWORD *v34; // [rsp+88h] [rbp-11h] BYREF
  void (__fastcall **v35[2])(_QWORD, _QWORD); // [rsp+90h] [rbp-9h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp+7h] BYREF
  char *v37; // [rsp+B0h] [rbp+17h] BYREF
  void *v38; // [rsp+B8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  unsigned __int64 v40; // [rsp+110h] [rbp+77h] BYREF
  int v41; // [rsp+118h] [rbp+7Fh] BYREF

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_ad74f306bfe33f421203cd208d411976_Traceguids,
      (char *)this - 8);
  }
  if ( a3
    && *(_QWORD *)&a3->Data1 == PBM_INITIATED_ENDPOINT_VOLUME_CHANGE
    && *(_QWORD *)a3->Data4 == 0x5936EC8617E85EAALL )
  {
    return 0LL;
  }
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(*((_QWORD *)this + 18) + 2 * v6) );
  v7 = *((_QWORD *)this + 20);
  v8 = 2 * v6 + 2;
  LODWORD(v40) = v8;
  v9 = 4 * (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  v10 = v8 + 2 * (v9 + 40);
  v34 = operator new[]((unsigned int)(v9 + 28), (const struct std::nothrow_t *)&std::nothrow);
  v11 = v34;
  if ( v34 )
  {
    v13 = (char *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v38 = v13;
    v14 = v13;
    if ( v13 )
    {
      memset_0(v13, 0, v10);
      *(_DWORD *)v14 = v10;
      v17 = &GUID_00000000_0000_0000_0000_000000000000;
      v18 = (unsigned int)v40;
      *((_DWORD *)v14 + 1) = 128;
      if ( a3 )
        v17 = a3;
      *(GUID *)(v14 + 24) = *v17;
      *((_DWORD *)v14 + 19) = v18;
      v19 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 96LL))(
              *((_QWORD *)this + 21),
              v14 + 40);
      v12 = v19;
      if ( v19 >= 0 )
      {
        v20 = (int *)(v14 + 44);
        v19 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 20) + 136LL))(
                *((_QWORD *)this + 20),
                v14 + 44);
        v12 = v19;
        if ( v19 >= 0 )
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 40LL))(*((_QWORD *)this + 20));
          *((_DWORD *)v14 + 12) = v21;
          v22 = *((_QWORD *)this + 20);
          Src[0] = &v14[v18 + 80];
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 48LL))(v22, v21);
          v19 = StringCbCopyW(v14 + 80, v18, *((char **)this + 18));
          v12 = v19;
          if ( v19 >= 0 )
          {
            v19 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 20) + 128LL))(
                    *((_QWORD *)this + 20),
                    v14 + 52);
            v12 = v19;
            if ( v19 >= 0 )
            {
              v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *, char *))(**((_QWORD **)this + 20) + 176LL))(
                      *((_QWORD *)this + 20),
                      0xFFFFFFFFLL,
                      v14 + 56,
                      v14 + 60,
                      v14 + 64);
              v12 = v19;
              if ( v19 >= 0 )
              {
                v19 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 20) + 184LL))(
                        *((_QWORD *)this + 20),
                        v14 + 68,
                        v14 + 72);
                v12 = v19;
                if ( v19 >= 0 )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 20) + 56LL))(
                    *((_QWORD *)this + 20),
                    *((unsigned int *)v14 + 12),
                    &v14[v9 + 80 + v18]);
                  v23 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
                  if ( *v23 > 4u )
                  {
                    LODWORD(v40) = *((_DWORD *)v14 + 18);
                    v41 = *((_DWORD *)v14 + 17);
                    v28 = *((_DWORD *)v14 + 16);
                    v29 = *((_DWORD *)v14 + 15);
                    v30 = *((_DWORD *)v14 + 14);
                    v31 = *((_DWORD *)v14 + 13);
                    v32 = *v20;
                    v33 = *((_DWORD *)v14 + 10);
                    v35[0] = (void (__fastcall **)(_QWORD, _QWORD))(v14 + 80);
                    v37 = v14 + 24;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      (__int64)v23,
                      byte_1801AE147,
                      v24,
                      v25,
                      (const WCHAR **)v35,
                      (__int64 *)&v37,
                      (__int64)&v33,
                      (__int64)&v32,
                      (__int64)&v31,
                      (__int64)&v30,
                      (__int64)&v29,
                      (__int64)&v28,
                      (__int64)&v41,
                      (__int64)&v40);
                  }
                  v35[1] = (void (__fastcall **)(_QWORD, _QWORD))v14;
                  v35[0] = (void (__fastcall **)(_QWORD, _QWORD))&CMasterVolumeNotification::`vftable';
                  v19 = CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::ForEachEntry(
                          (LPCRITICAL_SECTION)((char *)this + 16),
                          v35);
                  v12 = v19;
                  if ( v19 >= 0 )
                  {
                    *(_OWORD *)v11 = *(_OWORD *)(v14 + 24);
                    v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 40LL))(*((_QWORD *)this + 20));
                    v27 = Src[0];
                    v11[6] = v26;
                    v11[4] = *((_DWORD *)v14 + 10);
                    v11[5] = *v20;
                    memcpy_0(v11 + 7, v27, v9);
                    Src[1] = v11;
                    Src[0] = &CInternalVolumeNotification::`vftable';
                    v19 = CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::ForEachEntry(
                            (LPCRITICAL_SECTION)this + 2,
                            (void (__fastcall ***)(_QWORD, LPCRITICAL_SECTION *))Src);
                    v12 = v19;
                    if ( v19 >= 0 )
                    {
                      v12 = 0;
                      goto LABEL_39;
                    }
                    v15 = 563LL;
                  }
                  else
                  {
                    v15 = 555LL;
                  }
                }
                else
                {
                  v15 = 535LL;
                }
              }
              else
              {
                v15 = 534LL;
              }
            }
            else
            {
              v15 = 533LL;
            }
          }
          else
          {
            v15 = 531LL;
          }
        }
        else
        {
          v15 = 525LL;
        }
      }
      else
      {
        v15 = 524LL;
      }
      v16 = (unsigned int)v19;
    }
    else
    {
      v12 = -2147024882;
      v15 = 516LL;
      v16 = 2147942414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)v16);
LABEL_39:
    std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::~unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>(&v38);
    goto LABEL_40;
  }
  v12 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x201,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
    (const char *)0x8007000ELL);
LABEL_40:
  std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>((void **)&v34);
  return v12;
}
