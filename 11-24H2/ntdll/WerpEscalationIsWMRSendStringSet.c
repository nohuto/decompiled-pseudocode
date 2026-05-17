/*
 * XREFs of WerpEscalationIsWMRSendStringSet @ 0x1800E3A2C
 * Callers:
 *     WerEscalationLazyInit @ 0x1800E2D10 (WerEscalationLazyInit.c)
 * Callees:
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     WerpEscalationReadUlongFromKey @ 0x18013485C (WerpEscalationReadUlongFromKey.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 */

__int64 WerpEscalationIsWMRSendStringSet()
{
  unsigned int v0; // ebx
  int v1; // edi
  size_t v2; // rax
  int v4; // eax
  _WORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+24h] [rbp-3Ch]
  const wchar_t *v7; // [rsp+28h] [rbp-38h]
  _DWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  _WORD *v10; // [rsp+40h] [rbp-20h]
  int v11; // [rsp+48h] [rbp-18h]
  int v12; // [rsp+4Ch] [rbp-14h]
  __int128 v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+70h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+18h] BYREF

  v0 = 0;
  v8[1] = 0;
  v1 = 0;
  v12 = 0;
  Handle = 0LL;
  v14 = 0;
  v6 = 0;
  v7 = L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows\\WMR";
  v2 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows\\WMR");
  v8[0] = 48;
  v9 = 0LL;
  v11 = 64;
  if ( v2 >= 0xFFFE )
    LOWORD(v2) = -4;
  v5[0] = v2;
  v5[1] = v2 + 2;
  v10 = v5;
  v13 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131353LL, v8) >= 0 )
  {
    v4 = WerpEscalationReadUlongFromKey(Handle, L"WMRSendMessageString", &v14);
    v1 = v14;
    if ( v4 < 0 )
      v1 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  LOBYTE(v0) = v1 != 0;
  return v0;
}
