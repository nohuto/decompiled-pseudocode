/*
 * XREFs of PolicyConfigSetDeviceSpatialSettings @ 0x180102970
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x180003BAC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlg_ea_180003BAC.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U1@U5@U2@U2@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@37446@Z @ 0x180003C88 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlg_ea_180003C88.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigSetDeviceSpatialSettings(
        __int64 a1,
        __int128 *a2,
        const WCHAR *a3,
        __int64 a4,
        unsigned __int16 *a5)
{
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  struct AudioSrvTelemetryProvider *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // eax
  struct AudioSrvTelemetryProvider *v15; // rax
  _DWORD *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  struct AudioSrvTelemetryProvider *v19; // rax
  _DWORD *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  _BYTE v25[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v26; // [rsp+72h] [rbp-8Eh] BYREF
  unsigned __int16 v27; // [rsp+74h] [rbp-8Ch] BYREF
  int v28; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+88h] [rbp-78h] BYREF
  int v31; // [rsp+8Ch] [rbp-74h] BYREF
  int v32[2]; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v33; // [rsp+98h] [rbp-68h] BYREF
  GUID *v34; // [rsp+A0h] [rbp-60h] BYREF
  const WCHAR *v35; // [rsp+A8h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+B0h] [rbp-50h] BYREF
  GUID v37; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v38; // [rsp+F8h] [rbp-8h]
  __int128 v39; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v38 = *a2;
  v39 = v38;
  EtwEventActivityIdControl(4LL, &v39);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v10 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v10 + 1),
    v9,
    (struct _TP_TIMER *)L"PolicyConfigSetDeviceSpatialSettings",
    pftDueTime);
  if ( a4 )
  {
    v29 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v29) >= 0 )
    {
      if ( a5 )
      {
        v14 = *a5;
        v37 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v37.Data1 = v14;
        v15 = AudioSrvTelemetryProvider::Instance();
        v16 = (_DWORD *)*((_QWORD *)v15 + 1);
        if ( *v16 > 4u && tlgKeywordOn(*((_QWORD *)v15 + 1), 32LL) )
        {
          v34 = &v37;
          v30 = *((_DWORD *)a5 + 2);
          v31 = *((_DWORD *)a5 + 1);
          v27 = a5[1];
          v35 = L"WFEX";
          v26 = *(_WORD *)(a4 + 68);
          *(_QWORD *)v32 = a4 + 12;
          v25[0] = *(_BYTE *)a4;
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
          v33 = a3;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            (int)v16,
            (int)&unk_1801A25CC,
            v17,
            v18,
            &v33,
            (__int64)&v28,
            (__int64)v25,
            (__int64 *)v32,
            (__int64)&v26,
            &v35,
            (__int64)&v27,
            (__int64)&v31,
            (__int64)&v30,
            (__int64 *)&v34);
        }
      }
      else
      {
        v19 = AudioSrvTelemetryProvider::Instance();
        v20 = (_DWORD *)*((_QWORD *)v19 + 1);
        if ( *v20 > 4u && tlgKeywordOn(*((_QWORD *)v19 + 1), 32LL) )
        {
          v26 = *(_WORD *)(a4 + 68);
          v33 = (const WCHAR *)(a4 + 12);
          v25[0] = *(_BYTE *)a4;
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
          *(_QWORD *)v32 = a3;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
            (int)v20,
            (int)&unk_1801A255C,
            v21,
            v22,
            (const WCHAR **)v32,
            (__int64)&v28,
            (__int64)v25,
            (__int64 *)&v33,
            (__int64)&v26);
        }
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
    v23 = (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, __int64, unsigned __int16 *))(*(_QWORD *)g_PolicyConfig
                                                                                                 + 280LL))(
            g_PolicyConfig,
            a3,
            a4,
            a5);
    v11 = v23;
    if ( v23 >= 0 )
    {
      v11 = 0;
      goto LABEL_15;
    }
    v13 = (unsigned int)v23;
    v12 = 2976LL;
  }
  else
  {
    v11 = -2147467261;
    v12 = 2940LL;
    v13 = 2147500035LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)v13);
LABEL_15:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v39);
  return v11;
}
