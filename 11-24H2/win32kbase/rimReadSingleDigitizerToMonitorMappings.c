/*
 * XREFs of rimReadSingleDigitizerToMonitorMappings @ 0x140151838
 * Callers:
 *     RIMReadDigitizerToMonitorMappings @ 0x1401E1B1C (RIMReadDigitizerToMonitorMappings.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     wcsncpycch @ 0x140096384 (wcsncpycch.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400A0750 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A07C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     wcsstr @ 0x1401A0128 (wcsstr.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

int __fastcall rimReadSingleDigitizerToMonitorMappings(
        const UNICODE_STRING *a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        char *KeyValueInformation,
        __int64 a6,
        unsigned __int16 *a7)
{
  wchar_t *v10; // rax
  _UNKNOWN **v11; // rax
  bool v12; // di
  bool v13; // si
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r9
  __int16 v18; // [rsp+30h] [rbp-D0h]
  ULONG Length; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SourceString[256]; // [rsp+60h] [rbp-A0h] BYREF

  Length = 524;
  memset(SourceString, 0, sizeof(SourceString));
  DestinationString = 0LL;
  memset(KeyValueInformation, 0, 0x20CuLL);
  if ( (int)RtlStringCchPrintfW(SourceString, 256LL, L"%d-", a3) < 0 )
  {
    v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v11 = &WPP_RECORDER_INITIALIZED;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v18 = 15;
      goto LABEL_41;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    DestinationString.MaximumLength = 512;
    if ( RtlAppendUnicodeStringToString(&DestinationString, a1 + 12) < 0 )
    {
      v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v11 = &WPP_RECORDER_INITIALIZED;
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        v18 = 14;
        goto LABEL_41;
      }
    }
    else
    {
      v10 = wcsstr(DestinationString.Buffer, L"?");
      if ( v10 )
        wcsncpycch(v10, (__int64)L"\\", 1);
      LODWORD(v11) = ZwQueryValueKey(
                       a2,
                       &DestinationString,
                       KeyValuePartialInformation,
                       KeyValueInformation,
                       Length,
                       &Length);
      if ( (int)v11 >= 0 )
      {
        if ( *((_DWORD *)KeyValueInformation + 1) == 1 && Length <= 0x200 )
        {
          LODWORD(v11) = RtlStringCchCopyW((char *)a7, 128LL, KeyValueInformation + 12);
          if ( (int)v11 < 0 )
          {
            v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
            v11 = &WPP_RECORDER_INITIALIZED;
            v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v16 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
              v18 = 12;
LABEL_41:
              LOBYTE(v15) = v13;
              LOBYTE(v14) = v12;
              LODWORD(v11) = WPP_RECORDER_AND_TRACE_SF_(
                               *((_QWORD *)WPP_GLOBAL_Control + 3),
                               v14,
                               v15,
                               v16,
                               3,
                               1,
                               v18,
                               (__int64)&WPP_2aa4d20025f835b2fe1cb6898cbf8660_Traceguids);
            }
          }
        }
        else
        {
          v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v11 = &WPP_RECORDER_INITIALIZED;
          v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
            v18 = 13;
            goto LABEL_41;
          }
        }
      }
    }
  }
  return (int)v11;
}
