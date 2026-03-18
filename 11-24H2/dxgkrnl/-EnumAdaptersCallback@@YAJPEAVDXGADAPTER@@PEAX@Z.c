/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14034F110
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@555@Z @ 0x140002B3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14004D00C (-GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140054D34 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x14029AE08 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x140346FA8 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x14034F628 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x14036E228 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x14038F25C (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  DXGGLOBAL *Global; // rax
  unsigned int v5; // edi
  struct DXGSESSIONDATA *SessionData; // r13
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v8; // eax
  __int64 v10; // rcx
  _QWORD *v11; // r15
  ADAPTER_RENDER *v12; // r14
  char *v13; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // rax
  __int64 v17; // rcx
  int v18; // r14d
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  const CHAR *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // eax
  struct DXGPROCESS *v26; // rax
  int v27; // eax
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // rcx
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  int v34; // eax
  struct DXGPROCESS *v35; // rax
  int v36; // [rsp+80h] [rbp-39h] BYREF
  int v37; // [rsp+84h] [rbp-35h] BYREF
  int v38; // [rsp+88h] [rbp-31h] BYREF
  int v39; // [rsp+8Ch] [rbp-2Dh] BYREF
  int v40; // [rsp+90h] [rbp-29h] BYREF
  int v41; // [rsp+94h] [rbp-25h] BYREF
  int v42; // [rsp+98h] [rbp-21h] BYREF
  int v43; // [rsp+9Ch] [rbp-1Dh] BYREF
  const CHAR *v44; // [rsp+A0h] [rbp-19h] BYREF
  void *v45; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-9h] BYREF
  _DWORD v47[2]; // [rsp+B8h] [rbp-1h] BYREF
  int *v48; // [rsp+C0h] [rbp+7h]
  _BYTE v49[8]; // [rsp+C8h] [rbp+Fh] BYREF
  struct DXGADAPTER *v50; // [rsp+D0h] [rbp+17h]
  char v51; // [rsp+D8h] [rbp+1Fh]
  __int16 v52; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned int v53; // [rsp+130h] [rbp+77h] BYREF
  int v54; // [rsp+138h] [rbp+7Fh] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v5 = 0;
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 777;
    v8 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v50 = this;
  v51 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  if ( *((_DWORD *)this + 50) == 1
    && !*((_BYTE *)this + 3017)
    && ((*((_DWORD *)this + 744) & 4) == 0 || (a2[3] & 4) != 0) )
  {
    v11 = (_QWORD *)((char *)this + 3128);
    v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 391);
    if ( !v12 )
    {
      v13 = (char *)this + 3128;
      goto LABEL_12;
    }
    Current = DXGPROCESS::GetCurrent(v10);
    if ( !ADAPTER_RENDER::IsProcessGpuAccessBlocked(v12, Current) )
    {
      v13 = (char *)this + 3128;
LABEL_12:
      v17 = a2[3];
      if ( (v17 & 1) != 0 || (v11 = v13, (*((_DWORD *)this + 744) & 8) == 0) )
      {
        v18 = 2;
        if ( (v17 & 2) != 0 || *v11 )
        {
          if ( (*((_BYTE *)this + 3072) & 2) != 0 && (*((_DWORD *)DXGPROCESS::GetCurrent(v17) + 102) & 8) != 0 )
          {
            if ( (unsigned int)dword_14015E650 > 5 && tlgKeywordOn((__int64)&dword_14015E650, 0x400000000000LL) )
            {
              v19 = a2[3];
              v37 = (v19 >> 1) & 1;
              v36 = (v19 >> 2) & 1;
              v38 = a2[3] & 1;
              v20 = *((_QWORD *)DXGPROCESS::GetCurrent((v19 >> 1) & 1) + 8);
              if ( v20 )
                v23 = *(const CHAR **)(v20 + 96);
              else
                v23 = 0LL;
              v44 = v23;
              v45 = (void *)*((_QWORD *)this + 250);
              v39 = *((_DWORD *)this + 109);
              v40 = *((_DWORD *)this + 108);
              v41 = *((_DWORD *)this + 107);
              v42 = *((_DWORD *)this + 106);
              v43 = *((_DWORD *)this + 105);
              v52 = 1;
              v46 = 0x2000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v20,
                (__int64)&unk_14013C42C,
                v21,
                v22,
                (__int64)&v46,
                (__int64)&v52,
                (__int64)&v43,
                (__int64)&v42,
                (__int64)&v41,
                (__int64)&v40,
                (__int64)&v39,
                &v45,
                &v44,
                (__int64)&v38,
                (__int64)&v37,
                (__int64)&v36);
            }
          }
          else
          {
            v24 = *((unsigned int *)a2 + 1);
            v25 = *((_DWORD *)a2 + 2) + 1;
            *((_DWORD *)a2 + 2) = v25;
            if ( *(_DWORD *)a2 < (unsigned int)v24 )
            {
              v53 = 0;
              v26 = DXGPROCESS::GetCurrent(v24);
              v27 = DXGADAPTER::CreateHandle(this, v26, &v53);
              v28 = v27;
              if ( v27 >= 0 )
              {
                v29 = *(unsigned int *)a2;
                v30 = a2[2];
                v31 = 5 * v29;
                *(_DWORD *)a2 = v29 + 1;
                *(_DWORD *)(v30 + 4 * v31) = v53;
                *(_QWORD *)(v30 + 4 * v31 + 4) = *(_QWORD *)((char *)this + 412);
                *(_DWORD *)(v30 + 4 * v31 + 16) = 0;
                if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
                {
                  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                                             SessionData,
                                             (const struct _LUID *)((char *)this + 412));
                  if ( SessionAdapterFromLuid )
                    v34 = *((_DWORD *)SessionAdapterFromLuid + 27);
                  else
                    v34 = 0;
                  *(_DWORD *)(v30 + 4 * v31 + 12) = v34;
                  if ( v34 && (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() && DXGADAPTER::IsFullWDDMAdapter(this) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 929;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146LL,
                      0xFFFFFFFFLL,
                      L"(pAdapterInfo->NumOfSources == 0) || !DxgIsRemoteSessionUsingWddmMonitors() || !pAdapter->IsFullWDDMAdapter()",
                      929LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( !*((_QWORD *)this + 391) )
                    *(_DWORD *)(v30 + 4 * v31 + 16) = ADAPTER_DISPLAY::GetDisplayOnlyDriverPrecisePresentRegionPreference(*((ADAPTER_DISPLAY **)this + 390));
                }
                else
                {
                  v54 = 0;
                  v48 = &v54;
                  v47[0] = 2;
                  v47[1] = 4;
                  v35 = DXGPROCESS::GetCurrent(v32);
                  if ( (*(int (__fastcall **)(_DWORD *))(*((_QWORD *)v35 + 11) + 368LL))(v47) >= 0 )
                  {
                    v18 = v54;
                  }
                  else
                  {
                    WdLogSingleEntry0(3LL);
                    WdLogGlobalForLineNumber = 957;
                  }
                  if ( v18 != 0xFFFF
                    && *((_DWORD *)SessionData + 4627) == *((_DWORD *)this + 103)
                    && *((_DWORD *)SessionData + 4628) == *((_DWORD *)this + 104) )
                  {
                    *(_DWORD *)(v30 + 4 * v31 + 12) = *((_DWORD *)SessionData + 4629);
                  }
                  else
                  {
                    *(_DWORD *)(v30 + 4 * v31 + 12) = 0;
                  }
                }
              }
              else
              {
                WdLogSingleEntry2(2LL, this, v27);
                WdLogGlobalForLineNumber = 902;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Failed to open a handle on adapter 0x%I64x (ntStatus = 0x%I64x).",
                  (__int64)this,
                  v28,
                  0LL,
                  0LL,
                  0LL);
                v5 = v28;
              }
            }
            else if ( a2[2] )
            {
              WdLogSingleEntry2(3LL, v25, (unsigned int)v24);
              WdLogGlobalForLineNumber = 885;
            }
          }
        }
      }
      goto LABEL_47;
    }
    v16 = DXGPROCESS::GetCurrent(v15);
    WdLogSingleEntry2(4LL, this, v16);
    WdLogGlobalForLineNumber = 824;
  }
LABEL_47:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  return v5;
}
