/*
 * XREFs of RIMInitOneCoreEditionData @ 0x14004FC28
 * Callers:
 *     RIMInitialize @ 0x14004FCC0 (RIMInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMInitOneCoreEditionData(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  v6 = 0;
  DestinationString = 0LL;
  v5 = *(_DWORD *)(W32GetUserSessionState(a1) + 36);
  RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
  result = ZwQueryLicenseValue(&DestinationString, &v7, &v5, 4LL, &v6);
  if ( (int)result >= 0 )
  {
    v3 = v5;
    result = W32GetUserSessionState(v2);
    *(_DWORD *)(result + 36) = v3;
  }
  return result;
}
