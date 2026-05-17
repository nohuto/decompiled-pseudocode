/*
 * XREFs of RtlpGetDeviceFamilyInfoEnum @ 0x180039D50
 * Callers:
 *     RtlConvertDeviceFamilyInfoToString @ 0x180039C60 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlGetDeviceFamilyInfoEnum @ 0x1800FBB40 (RtlGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlGetVersion @ 0x180039460 (RtlGetVersion.c)
 *     ReadUlongFromKey @ 0x18003A014 (ReadUlongFromKey.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     ZwQueryLicenseValue @ 0x180165E10 (ZwQueryLicenseValue.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpGetDeviceFamilyInfoEnum(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  size_t v6; // rax
  size_t v7; // rax
  __int64 v8; // r14
  size_t v9; // rax
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v13; // [rsp+4Ah] [rbp-BEh]
  int v14; // [rsp+4Ch] [rbp-BCh]
  const wchar_t *v15; // [rsp+50h] [rbp-B8h]
  int v16; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h]
  __int16 *v19; // [rsp+70h] [rbp-98h]
  _QWORD v20[3]; // [rsp+78h] [rbp-90h]
  int v21; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v22[71]; // [rsp+9Ch] [rbp-6Ch] BYREF

  if ( a1 )
  {
    memset_thunk_772440563353939046(v22, 0, 0x118uLL);
    v15 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion";
    v8 = 0LL;
    Handle = 0LL;
    LODWORD(v10) = 0;
    v14 = 0;
    v9 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    v17 = 48LL;
    v18 = 0LL;
    v20[0] = 64LL;
    if ( v9 >= 0xFFFE )
      LOWORD(v9) = -4;
    v12 = v9;
    v13 = v9 + 2;
    v19 = &v12;
    *(_OWORD *)&v20[1] = 0LL;
    if ( (int)NtOpenKey(&Handle, 131353LL, &v17) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Handle, L"UBR", &v10) >= 0 )
        v8 = (unsigned int)v10;
      NtClose(Handle);
    }
    v21 = 284;
    RtlGetVersion(&v21);
    *a1 = v8 + ((v22[2] + ((v22[1] + ((unsigned __int64)v22[0] << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    LODWORD(Handle) = 0;
    v15 = L"Kernel-OneCore-DeviceFamilyID";
    v16 = 0;
    LODWORD(v10) = 3;
    v14 = 0;
    v6 = 2 * wcslen(L"Kernel-OneCore-DeviceFamilyID");
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    v12 = v6;
    v13 = v6 + 2;
    ZwQueryLicenseValue(&v12, &Handle, &v10, 4LL, &v16);
    *a2 = v10;
  }
  if ( a3 )
  {
    HIDWORD(v17) = 0;
    v15 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM";
    HIDWORD(v20[0]) = 0;
    Handle = 0LL;
    LODWORD(v10) = 0;
    *a3 = 0;
    v14 = 0;
    v7 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    LODWORD(v17) = 48;
    v18 = 0LL;
    LODWORD(v20[0]) = 64;
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    v12 = v7;
    v13 = v7 + 2;
    v19 = &v12;
    *(_OWORD *)&v20[1] = 0LL;
    if ( (int)NtOpenKey(&Handle, 131353LL, &v17) >= 0 )
    {
      if ( (int)ReadUlongFromKey(Handle, L"DeviceForm", &v10) >= 0 )
        *a3 = v10;
      NtClose(Handle);
    }
  }
}
