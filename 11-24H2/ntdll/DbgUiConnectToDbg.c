/*
 * XREFs of DbgUiConnectToDbg @ 0x180117D00
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateDebugObject @ 0x1801631E0 (NtCreateDebugObject.c)
 */

__int64 DbgUiConnectToDbg()
{
  unsigned int v0; // ecx
  _DWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+28h] [rbp-30h]
  __int64 v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]
  __int128 v7; // [rsp+40h] [rbp-18h]

  v0 = 0;
  v2[1] = 0;
  v6 = 0;
  if ( !NtCurrentTeb()->DbgSsReserved[1] )
  {
    v3 = 0LL;
    v5 = 0;
    v4 = 0LL;
    v7 = 0LL;
    v2[0] = 48;
    return (unsigned int)((__int64 (__fastcall *)(void **, __int64, _DWORD *, __int64))NtCreateDebugObject)(
                           &NtCurrentTeb()->DbgSsReserved[1],
                           2031631LL,
                           v2,
                           1LL);
  }
  return v0;
}
