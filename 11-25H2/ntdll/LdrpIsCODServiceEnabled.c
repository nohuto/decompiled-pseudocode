/*
 * XREFs of LdrpIsCODServiceEnabled @ 0x1801617B0
 * Callers:
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x180114A34 (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKeyEx @ 0x180165770 (NtOpenKeyEx.c)
 */

bool LdrpIsCODServiceEnabled()
{
  bool v0; // bl
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v3[3]; // [rsp+30h] [rbp-30h] BYREF
  int v4; // [rsp+48h] [rbp-18h]
  int v5; // [rsp+4Ch] [rbp-14h]
  __int128 v6; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  v5 = 0;
  Handle = 0LL;
  v3[1] = 0LL;
  v2[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Compatibility Assistant\\";
  v3[0] = 48LL;
  v3[2] = v2;
  v2[0] = 13500620LL;
  v4 = 64;
  v6 = 0LL;
  v0 = (int)NtOpenKeyEx(&Handle, 131353LL, v3, 0LL) >= 0;
  if ( Handle )
    NtClose(Handle);
  return v0;
}
