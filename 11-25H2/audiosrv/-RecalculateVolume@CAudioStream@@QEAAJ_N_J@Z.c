/*
 * XREFs of ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x18005D740
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18000D100 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x18000F2C8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x18000F678 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x18005D31C (-SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z.c)
 *     ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x18005D670 (-SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z.c)
 *     ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800CA2BC (-SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800012D0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 *     ??$Write@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U6@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@855@Z @ 0x180002CE0 (--$Write@U-$_tlgWrapperArray@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U6@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@833@Z @ 0x180002E18 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperArray@$03@@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWr.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z @ 0x180051B78 (-CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?NotifyVolumeChanged@CAudioStream@@IEAAXXZ @ 0x180067B38 (-NotifyVolumeChanged@CAudioStream@@IEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::RecalculateVolume(CAudioStream *this, char a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 *v5; // r13
  __int64 *v6; // r15
  unsigned int v7; // edx
  unsigned int v8; // eax
  char *v9; // r14
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rcx
  int v14; // r12d
  int v15; // eax
  int v16; // ebx
  char *v17; // r13
  _BOOL8 v18; // rdx
  int v19; // eax
  int v20; // ebx
  struct AudioSrvTelemetryProvider *v21; // rax
  _DWORD *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  struct AudioSrvTelemetryProvider *v25; // rax
  _DWORD *v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  const WCHAR *v30; // rax
  __int16 v31; // cx
  struct AudioSrvTelemetryProvider *v32; // rax
  _DWORD *v33; // rbx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  const WCHAR *v37; // rax
  __int16 v38; // cx
  __int64 v39; // rcx
  __int64 (__fastcall *v40)(__int64, _QWORD, _QWORD, __int64 *); // rax
  int v41; // eax
  int v42; // [rsp+20h] [rbp-99h]
  int v43; // [rsp+70h] [rbp-49h] BYREF
  __int64 v44; // [rsp+78h] [rbp-41h] BYREF
  __int64 v45; // [rsp+80h] [rbp-39h] BYREF
  __int64 v46; // [rsp+88h] [rbp-31h] BYREF
  const WCHAR *v47; // [rsp+90h] [rbp-29h] BYREF
  const WCHAR *v48; // [rsp+98h] [rbp-21h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-9h] BYREF
  __int16 v52; // [rsp+B8h] [rbp-1h]
  struct _RTL_CRITICAL_SECTION *v53; // [rsp+C0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  __int64 v55; // [rsp+120h] [rbp+67h] BYREF
  char v56; // [rsp+128h] [rbp+6Fh]
  __int64 v57; // [rsp+130h] [rbp+77h]
  int v58; // [rsp+138h] [rbp+7Fh] BYREF

  v57 = a3;
  v56 = a2;
  v4 = 0;
  v5 = (__int64 *)((char *)this + 184);
  if ( *((_QWORD *)this + 23) )
  {
    v6 = (__int64 *)((char *)this + 192);
    if ( *((_QWORD *)this + 24) )
    {
      v7 = 0;
      v8 = *((_DWORD *)this + 24);
      if ( v8 )
      {
        do
        {
          *(_DWORD *)(*((_QWORD *)this + 16) + 4LL * v7++) = 1065353216;
          v8 = *((_DWORD *)this + 24);
        }
        while ( v7 < v8 );
        v9 = (char *)this + 192;
      }
      else
      {
        v9 = (char *)this + 192;
      }
      LOBYTE(v55) = 0;
      v44 = 0LL;
      v10 = CAudioStream::CalculateAPOVolume(this, v8, *((float *const *)this + 16), (bool *)&v55, &v44);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x430,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
      v53 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
      v13 = *(_QWORD *)v9;
      v14 = (unsigned __int8)v55;
      if ( !*(_QWORD *)v9 )
        goto LABEL_26;
      LOBYTE(v55) = 0;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v55);
      v16 = v15;
      v17 = v9;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x43A,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v15,
          v42);
        v17 = (char *)this + 192;
      }
      if ( v16 == -2147417848 )
      {
        LOBYTE(v55) = 0;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v6);
        v9 = v17;
      }
      if ( *(_QWORD *)v9 )
      {
        if ( !v16 )
        {
          v18 = (_BYTE)v55 != 0;
          if ( v18 != ((_BYTE)v14 != 0) )
          {
            LOBYTE(v18) = v14;
            v19 = (*(__int64 (__fastcall **)(_QWORD, _BOOL8, _QWORD, _QWORD))(**(_QWORD **)v9 + 32LL))(
                    *(_QWORD *)v9,
                    v18,
                    0LL,
                    0LL);
            v20 = v19;
            if ( v19 >= 0 )
            {
              if ( *((_QWORD *)this + 8) )
              {
                v21 = AudioSrvTelemetryProvider::Instance();
                v22 = (_DWORD *)*((_QWORD *)v21 + 1);
                if ( *v22 > 4u && tlgKeywordOn(*((_QWORD *)v21 + 1), 0x400000000002LL) )
                {
                  v58 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
                  v47 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL)
                                                                          + 64LL))(*((_QWORD *)this + 8) + 8LL);
                  v45 = (__int64)this + 448;
                  v46 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 80LL))((char *)this + 8);
                  v43 = v14;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                    (int)v22,
                    (int)&unk_1801A023D,
                    v23,
                    v24,
                    (__int64)&v43,
                    (__int64)&v46,
                    &v45,
                    &v47,
                    (__int64)&v58);
                }
                v5 = (__int64 *)((char *)this + 184);
                goto LABEL_26;
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x447,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                (const char *)(unsigned int)v19,
                0);
              if ( v20 == -2147417848 )
                wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v6);
            }
          }
        }
      }
      v5 = (__int64 *)((char *)this + 184);
LABEL_26:
      if ( g_StreamVolumeChangeAsTelemetryCounter <= 0 || *((_DWORD *)this + 107) )
      {
        v32 = AudioSrvTelemetryProvider::Instance();
        v33 = (_DWORD *)*((_QWORD *)v32 + 1);
        if ( *v33 > 4u && tlgKeywordOn(*((_QWORD *)v32 + 1), 2LL) )
        {
          v50 = v44;
          v49 = v57;
          v58 = *((_DWORD *)this + 26);
          v43 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
          v36 = *((_QWORD *)this + 8);
          if ( v36 )
            v37 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v36 + 8) + 64LL))(v36 + 8);
          else
            v37 = L"null";
          v48 = v37;
          v46 = (__int64)this + 448;
          v45 = *((_QWORD *)this + 52);
          LOBYTE(v55) = v14;
          v38 = *((_WORD *)this + 48);
          v51 = *((_QWORD *)this + 16);
          v52 = v38;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (int)v33,
            (int)&unk_1801A00F2,
            v34,
            v35,
            &v51,
            (__int64)&v55,
            (__int64)&v45,
            &v46,
            &v48,
            (__int64)&v43,
            (__int64)&v58,
            (__int64)&v49,
            (__int64)&v50);
        }
      }
      else
      {
        --g_StreamVolumeChangeAsTelemetryCounter;
        v25 = AudioSrvTelemetryProvider::Instance();
        v26 = (_DWORD *)*((_QWORD *)v25 + 1);
        if ( *v26 > 4u && tlgKeywordOn(*((_QWORD *)v25 + 1), 0x400000000002LL) )
        {
          v46 = v44;
          v45 = v57;
          v58 = *((_DWORD *)this + 26);
          v43 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
          v29 = *((_QWORD *)this + 8);
          if ( v29 )
            v30 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v29 + 8) + 64LL))(v29 + 8);
          else
            v30 = L"null";
          v47 = v30;
          v48 = (const WCHAR *)((char *)this + 448);
          v49 = *((_QWORD *)this + 52);
          LOBYTE(v55) = v14;
          v31 = *((_WORD *)this + 48);
          v51 = *((_QWORD *)this + 16);
          v52 = v31;
          v50 = 0x2000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (int)v26,
            (int)&unk_1801A018D,
            v27,
            v28,
            (__int64)&v50,
            &v51,
            (__int64)&v55,
            (__int64)&v49,
            (__int64 *)&v48,
            &v47,
            (__int64)&v43,
            (__int64)&v58,
            (__int64)&v45,
            (__int64)&v46);
        }
      }
      v39 = *((_QWORD *)this + 23);
      if ( v39 )
      {
        v55 = 0LL;
        if ( v56 )
        {
          if ( v57 <= v44 )
            v57 = v44;
          v40 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v39 + 48LL);
        }
        else
        {
          v40 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v39 + 32LL);
        }
        v41 = v40(v39, *((unsigned int *)this + 24), *((_QWORD *)this + 16), &v55);
        v4 = v41;
        if ( v41 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4A4,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v41,
            1);
        if ( v4 == -2147417848 )
        {
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v5);
          v4 = 0;
        }
      }
      CAudioStream::NotifyVolumeChanged(this);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v53);
    }
  }
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  return v4;
}
