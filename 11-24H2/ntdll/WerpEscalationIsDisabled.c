/*
 * XREFs of WerpEscalationIsDisabled @ 0x180110668
 * Callers:
 *     WerEscalationLazyInit @ 0x1800DE2E0 (WerEscalationLazyInit.c)
 * Callees:
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     WerpEscalationReadUlongFromKey @ 0x180132A8C (WerpEscalationReadUlongFromKey.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 */

__int64 WerpEscalationIsDisabled()
{
  unsigned int v0; // ebx
  size_t v1; // rax
  _WORD v3[2]; // [rsp+20h] [rbp-40h] BYREF
  int v4; // [rsp+24h] [rbp-3Ch]
  const wchar_t *v5; // [rsp+28h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v4 = 0;
  v5 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Windows Error Reporting\\Escalation";
  v1 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Windows Error Reporting\\Escalation");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  if ( v1 >= 0xFFFE )
    LOWORD(v1) = -4;
  v3[0] = v1;
  v3[1] = v1 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    WerpEscalationReadUlongFromKey(KeyHandle);
  if ( KeyHandle )
    NtClose(KeyHandle);
  LOBYTE(v0) = 0;
  return v0;
}
