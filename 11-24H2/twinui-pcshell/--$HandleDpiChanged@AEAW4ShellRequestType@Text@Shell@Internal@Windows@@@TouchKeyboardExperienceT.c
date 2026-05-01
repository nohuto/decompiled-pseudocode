/*
 * XREFs of ??$HandleDpiChanged@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1801C3AB0
 * Callers:
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1801C3850 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Int.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::HandleDpiChanged<enum Windows::Internal::Shell::Text::ShellRequestType &>(
        char *a1)
{
  const struct _tlgProvider_t *v2; // rax
  const struct _tlgProvider_t *v3; // rcx
  char v4; // al
  char v6; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-15h]
  __int64 v8; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  char *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  __int64 *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  v2 = TouchKeyboardExperienceTraceLogging::Provider();
  v3 = v2;
  if ( *(_DWORD *)v2 > 5u && (*((_BYTE *)v2 + 16) & 0x10) != 0 && (*((_QWORD *)v2 + 3) & 0x10LL) == *((_QWORD *)v2 + 3) )
  {
    v4 = *a1;
    v19 = 0;
    v16 = 0;
    v6 = v4;
    v17 = &v8;
    v14 = &v6;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v3 + 1);
    v15 = 1;
    v8 = 0x2000000LL;
    v18 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 16LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v11 = &unk_180803D4E;
    v13 = 1;
    UserData.Reserved = 2;
    v12 = 49;
    v7 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v2) = EventWriteTransfer(*((_QWORD *)v3 + 4), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (int)v2;
}
