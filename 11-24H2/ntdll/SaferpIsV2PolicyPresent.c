/*
 * XREFs of SaferpIsV2PolicyPresent @ 0x1800F03CC
 * Callers:
 *     LdrpCodeAuthzCheckDllAllowedSrpV2 @ 0x1800F0380 (LdrpCodeAuthzCheckDllAllowedSrpV2.c)
 * Callees:
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     NtOpenFile @ 0x1801622F0 (NtOpenFile.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall SaferpIsV2PolicyPresent(_DWORD *a1)
{
  int v2; // eax
  int v3; // ebx
  HANDLE v5; // rcx
  int v6; // [rsp+30h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-31h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v10[4]; // [rsp+60h] [rbp-9h] BYREF
  int v11; // [rsp+64h] [rbp-5h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]

  *a1 = 0;
  Handle = 0LL;
  v6 = 0;
  v2 = NtOpenKey(&Handle, 131353LL, &unk_180173D80);
  if ( v2 < 0 )
  {
    v3 = 0;
    if ( v2 != -1073741772 )
      v3 = v2;
  }
  else
  {
    v3 = NtQueryValueKey(Handle, &unk_180173DB0, 2LL, v10, 80, &v6);
    if ( v3 >= 0 && v12 == 4 && v11 == 4 )
      *a1 = v13 != 0;
    else
      v3 = 0;
    if ( !*a1 )
    {
      FileHandle = 0LL;
      IoStatusBlock = 0LL;
      if ( NtOpenFile(&FileHandle, 0x100000u, (POBJECT_ATTRIBUTES)&ObjectAttributes, &IoStatusBlock, 7u, 0x4021u) >= 0 )
      {
        v5 = FileHandle;
        *a1 = 1;
        NtClose(v5);
      }
      v3 = 0;
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
