/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14031E518
 * Callers:
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x14031D170 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@555@Z @ 0x140002B3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14004D66C (-GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1402951BC (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x140298BFC (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1402DCA28 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x14031F1A0 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x140386850 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
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
  __int64 v34; // rcx
  int v35; // eax
  struct DXGPROCESS *v36; // rax
  int v37; // [rsp+80h] [rbp-39h] BYREF
  int v38; // [rsp+84h] [rbp-35h] BYREF
  int v39; // [rsp+88h] [rbp-31h] BYREF
  int v40; // [rsp+8Ch] [rbp-2Dh] BYREF
  int v41; // [rsp+90h] [rbp-29h] BYREF
  int v42; // [rsp+94h] [rbp-25h] BYREF
  int v43; // [rsp+98h] [rbp-21h] BYREF
  int v44; // [rsp+9Ch] [rbp-1Dh] BYREF
  const CHAR *v45; // [rsp+A0h] [rbp-19h] BYREF
  void *v46; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-9h] BYREF
  _DWORD v48[2]; // [rsp+B8h] [rbp-1h] BYREF
  int *v49; // [rsp+C0h] [rbp+7h]
  _BYTE v50[8]; // [rsp+C8h] [rbp+Fh] BYREF
  struct DXGADAPTER *v51; // [rsp+D0h] [rbp+17h]
  char v52; // [rsp+D8h] [rbp+1Fh]
  __int16 v53; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned int v54; // [rsp+130h] [rbp+77h] BYREF
  int v55; // [rsp+138h] [rbp+7Fh] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v5 = 0;
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 775;
    v8 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v51 = this;
  v52 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
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
            if ( (unsigned int)dword_14015B660 > 5 && tlgKeywordOn((__int64)&dword_14015B660, 0x400000000000LL) )
            {
              v19 = a2[3];
              v38 = (v19 >> 1) & 1;
              v37 = (v19 >> 2) & 1;
              v39 = a2[3] & 1;
              v20 = *((_QWORD *)DXGPROCESS::GetCurrent((v19 >> 1) & 1) + 8);
              if ( v20 )
                v23 = *(const CHAR **)(v20 + 96);
              else
                v23 = 0LL;
              v45 = v23;
              v46 = (void *)*((_QWORD *)this + 250);
              v40 = *((_DWORD *)this + 109);
              v41 = *((_DWORD *)this + 108);
              v42 = *((_DWORD *)this + 107);
              v43 = *((_DWORD *)this + 106);
              v44 = *((_DWORD *)this + 105);
              v53 = 1;
              v47 = 0x2000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v20,
                (__int64)&unk_140139854,
                v21,
                v22,
                (__int64)&v47,
                (__int64)&v53,
                (__int64)&v44,
                (__int64)&v43,
                (__int64)&v42,
                (__int64)&v41,
                (__int64)&v40,
                &v46,
                &v45,
                (__int64)&v39,
                (__int64)&v38,
                (__int64)&v37);
            }
          }
          else
          {
            v24 = *((unsigned int *)a2 + 1);
            v25 = *((_DWORD *)a2 + 2) + 1;
            *((_DWORD *)a2 + 2) = v25;
            if ( *(_DWORD *)a2 < (unsigned int)v24 )
            {
              v54 = 0;
              v26 = DXGPROCESS::GetCurrent(v24);
              v27 = DXGADAPTER::CreateHandle(this, v26, &v54);
              v28 = v27;
              if ( v27 >= 0 )
              {
                v29 = *(unsigned int *)a2;
                v30 = a2[2];
                v31 = 5 * v29;
                *(_DWORD *)a2 = v29 + 1;
                *(_DWORD *)(v30 + 4 * v31) = v54;
                *(_QWORD *)(v30 + 4 * v31 + 4) = *(_QWORD *)((char *)this + 412);
                *(_DWORD *)(v30 + 4 * v31 + 16) = 0;
                if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
                {
                  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                                             SessionData,
                                             (const struct _LUID *)((char *)this + 412));
                  if ( SessionAdapterFromLuid )
                    v35 = *((_DWORD *)SessionAdapterFromLuid + 27);
                  else
                    v35 = 0;
                  *(_DWORD *)(v30 + 4 * v31 + 12) = v35;
                  if ( v35
                    && (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v34)
                    && DXGADAPTER::IsFullWDDMAdapter(this) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 927;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"(pAdapterInfo->NumOfSources == 0) || !DxgIsRemoteSessionUsingWddmMonitors() || !pAdapter->IsFullWDDMAdapter()",
                      927LL,
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
                  v55 = 0;
                  v49 = &v55;
                  v48[0] = 2;
                  v48[1] = 4;
                  v36 = DXGPROCESS::GetCurrent(v32);
                  if ( (*(int (__fastcall **)(_DWORD *))(*((_QWORD *)v36 + 11) + 368LL))(v48) >= 0 )
                  {
                    v18 = v55;
                  }
                  else
                  {
                    WdLogSingleEntry0(3LL);
                    WdLogGlobalForLineNumber = 955;
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
                WdLogGlobalForLineNumber = 900;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
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
              WdLogGlobalForLineNumber = 883;
            }
          }
        }
      }
      goto LABEL_47;
    }
    v16 = DXGPROCESS::GetCurrent(v15);
    WdLogSingleEntry2(4LL, this, v16);
    WdLogGlobalForLineNumber = 822;
  }
LABEL_47:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
  return v5;
}
