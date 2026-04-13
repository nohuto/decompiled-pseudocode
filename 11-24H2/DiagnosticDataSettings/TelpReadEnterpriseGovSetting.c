/*
 * XREFs of TelpReadEnterpriseGovSetting @ 0x1800048C8
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x180003338 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180003B00 (TelGetMaximumAllowedTelemetryLevel.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180006010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TelpReadEnterpriseGovSetting(_DWORD *a1, int *a2)
{
  unsigned int v3; // ebx
  FARPROC ProcAddress; // rdi
  HMODULE ModuleHandleW; // rax
  int v7; // eax
  __int64 v8; // r8
  int v10; // [rsp+44h] [rbp-3Ch] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v15; // [rsp+B0h] [rbp+30h] BYREF
  int v16; // [rsp+C0h] [rbp+40h] BYREF
  int v17; // [rsp+C8h] [rbp+48h] BYREF

  *a1 = 1;
  v13[1] = L"Reserved.PlatformSigned";
  v10 = 4;
  v12[1] = L"CodeIntegrity.Telemetry";
  v13[0] = 3145774LL;
  v3 = 0;
  v11[1] = L"OptInLevel";
  v17 = 0;
  v16 = 0;
  ProcAddress = 0LL;
  v12[0] = 3145774LL;
  v11[0] = 1441812LL;
  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  if ( ModuleHandleW )
    ProcAddress = GetProcAddress(ModuleHandleW, "NtQuerySecurityPolicy");
  v15 = 0;
  NtQueryLicenseValue(asc_18000A010, 0LL, &v15);
  if ( (unsigned int)(v15 - 171) <= 1 && ProcAddress )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, _QWORD *, int *, int *, int *))ProcAddress)(
           v13,
           v12,
           v11,
           &v16,
           &v17,
           &v10);
    v3 = v7 | 0x10000000;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x43E, v8, (const char *)v3);
    }
    else if ( v16 == 1 && (unsigned int)v17 <= 3 )
    {
      *a2 = v17;
    }
    else
    {
      *a2 = 0;
    }
  }
  else
  {
    *a1 = 0;
  }
  return v3;
}
