/*
 * XREFs of ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18008E0A4
 * Callers:
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18008DF10 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008E2B0 (-WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180003388 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempla.c)
 *     ?HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z @ 0x180037AE0 (-HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18003D5F0 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180057044 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x180064BAC (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180066C70 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800865BC (-ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::RunWatchdog(ExecutionModel::ExternalResourceSet *this)
{
  bool v1; // zf
  DWORD v3; // esi
  __int64 v4; // r8
  __int64 v5; // r9
  bool IsDebuggerAttached; // r14
  struct _GUID *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _GUID *v11; // [rsp+40h] [rbp-40h] BYREF
  HANDLE ProcessHandle; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h] BYREF
  const wchar_t *v14; // [rsp+58h] [rbp-28h] BYREF
  struct _GUID v15; // [rsp+60h] [rbp-20h] BYREF

  ProcessHandle = 0LL;
  v1 = *((_DWORD *)this + 320) == 0;
  v15 = 0LL;
  if ( !v1 )
  {
    v3 = *((_DWORD *)this + 2);
    if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 9LL) )
    {
      LODWORD(v11) = v3;
      v13 = (__int64)this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1800E7278,
        byte_1800D8B33,
        v4,
        v5,
        (__int64)&v13,
        (__int64)&v11);
    }
    if ( v3 )
    {
      v11 = 0LL;
      IsDebuggerAttached = 0;
      v7 = (struct _GUID *)OpenProcess(0x400u, 0, v3);
      if ( v7 )
      {
        tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete((void **)&v11);
        v11 = v7;
        IsDebuggerAttached = HampSystemQueryProcessIsDebuggerAttached(v7);
      }
      tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete((void **)&v11);
      if ( !IsDebuggerAttached )
      {
        if ( (*((_BYTE *)this + 1352) & 2) != 0 )
        {
          ExecutionModel::ResourceManager::ForceReleaseExternalResources(
            *((ExecutionModel::ResourceManager **)this + 3),
            v3);
        }
        else if ( RmpSystemOpenProcess(&ProcessHandle, 0x1001u, v3) >= 0
               && NtTerminateProcess(ProcessHandle, -2147467260) >= 0 )
        {
          if ( dword_1800E7278 )
          {
            if ( *((_QWORD *)this + 167) )
            {
              HampSystemQueryProcessAppSessionGuid(ProcessHandle, &v15);
              if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 0x400000000001LL) )
              {
                v13 = 0x1000000LL;
                v11 = &v15;
                v14 = (const wchar_t *)(*((_QWORD *)this + 167) + 88LL);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
                  v8,
                  (__int64)&unk_1800D8B79,
                  v9,
                  v10,
                  &v14,
                  (__int64 *)&v11,
                  (__int64)&v13);
              }
            }
          }
        }
      }
    }
    if ( ProcessHandle )
      CloseHandle(ProcessHandle);
  }
}
