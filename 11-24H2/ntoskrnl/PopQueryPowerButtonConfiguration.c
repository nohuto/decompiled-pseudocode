/*
 * XREFs of PopQueryPowerButtonConfiguration @ 0x1404B9FDC
 * Callers:
 *     PopPowerButtonBugcheckConfigure @ 0x14075BB4C (PopPowerButtonBugcheckConfigure.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 */

__int64 __fastcall PopQueryPowerButtonConfiguration(HANDLE KeyHandle, _BYTE *a2)
{
  int v4; // ebx
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  NTSTATUS v9; // ecx
  NTSTATUS v10; // edi
  ULONG ResultLength; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING v14; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING v15; // [rsp+68h] [rbp-21h] BYREF
  UNICODE_STRING v16; // [rsp+78h] [rbp-11h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp-1h] BYREF
  int v18; // [rsp+98h] [rbp+Fh]

  ResultLength = 0;
  ValueName.Buffer = (wchar_t *)L"PowerButtonBugcheck";
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v18 = 0;
  KeyValueInformation = 0LL;
  v4 = 0;
  v5 = 2 * wcslen(L"PowerButtonBugcheck");
  *(_DWORD *)(&v14.MaximumLength + 1) = 0;
  v14.Buffer = (wchar_t *)L"OneSettingPowerButtonBugcheck";
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  ValueName.Length = v5;
  ValueName.MaximumLength = v5 + 2;
  v6 = 2 * wcslen(L"OneSettingPowerButtonBugcheck");
  *(_DWORD *)(&v15.MaximumLength + 1) = 0;
  v15.Buffer = (wchar_t *)L"PowerButtonLiveDump";
  if ( v6 >= 0xFFFE )
    LOWORD(v6) = -4;
  v14.Length = v6;
  v14.MaximumLength = v6 + 2;
  v7 = 2 * wcslen(L"PowerButtonLiveDump");
  *(_DWORD *)(&v16.MaximumLength + 1) = 0;
  v16.Buffer = (wchar_t *)L"OneSettingPowerButtonLiveDump";
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  v15.Length = v7;
  v15.MaximumLength = v7 + 2;
  v8 = 2 * wcslen(L"OneSettingPowerButtonLiveDump");
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  v16.Length = v8;
  v16.MaximumLength = v8 + 2;
  v9 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
  if ( v9 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
  {
    LODWORD(qword_140F07BB0) = 0;
    v9 = ZwQueryValueKey(KeyHandle, &v14, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( v9 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
    {
      HIDWORD(qword_140F07BB0) = 0;
      v9 = -1073741823;
      PopPowerButtonBugcheckConfig = 0;
      goto LABEL_22;
    }
    *a2 = 1;
    if ( HIDWORD(KeyValueInformation) )
    {
      HIDWORD(qword_140F07BB0) = 2;
      goto LABEL_18;
    }
    HIDWORD(qword_140F07BB0) = 1;
LABEL_20:
    PopPowerButtonBugcheckConfig = 1;
    goto LABEL_22;
  }
  *a2 = 1;
  if ( !HIDWORD(KeyValueInformation) )
  {
    LODWORD(qword_140F07BB0) = 1;
    goto LABEL_20;
  }
  LODWORD(qword_140F07BB0) = 2;
LABEL_18:
  PopPowerButtonBugcheckConfig = 2;
LABEL_22:
  DbgPrintEx(
    0x92u,
    2u,
    "%s (Bugcheck) completed with Status: %08x, ManualBugcheckConfig: %08x, OneSettingBugcheckConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    v9,
    qword_140F07BB0,
    HIDWORD(qword_140F07BB0));
  v10 = ZwQueryValueKey(KeyHandle, &v15, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
  if ( v10 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
  {
    v4 = WORD6(KeyValueInformation) & 0x1FF;
    HIBYTE(word_140F07BB8) = 1;
    dword_140F07BBC = v4;
  }
  else
  {
    HIBYTE(word_140F07BB8) = 0;
    dword_140F07BBC = 0;
    v10 = ZwQueryValueKey(KeyHandle, &v16, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( v10 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
    {
      byte_140F07BC0 = 0;
      v10 = -1073741823;
      LODWORD(qword_140F07BC4) = 0;
      goto LABEL_30;
    }
    v4 = WORD6(KeyValueInformation) & 0x1FF;
    byte_140F07BC0 = 1;
    LODWORD(qword_140F07BC4) = v4;
  }
  *a2 = 1;
LABEL_30:
  PopPowerButtonLiveDumpConfig = v4;
  DbgPrintEx(
    0x92u,
    2u,
    "%s (LiveDump) completed with Status: %08x, ManualLiveDumpConfig %08x, OneSettingLiveDumpConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    v10,
    dword_140F07BBC,
    qword_140F07BC4);
  if ( (dword_140F07BBC & 1) != 0 && !(_DWORD)qword_140F07BB0 && PopPowerButtonBugcheckConfig == 2 )
    PopPowerButtonBugcheckConfig = 1;
  DbgPrintEx(
    0x92u,
    2u,
    "%s completed with settings: PopPowerButtonBugcheckConfig: %08x, PopPowerButtonLiveDumpConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    PopPowerButtonBugcheckConfig,
    PopPowerButtonLiveDumpConfig);
  return (unsigned int)v10;
}
