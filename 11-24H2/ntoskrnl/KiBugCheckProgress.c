/*
 * XREFs of KiBugCheckProgress @ 0x1405B2E40
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     KiBugCheckConvertProgressValueToUnicodeString @ 0x1405B2CA0 (KiBugCheckConvertProgressValueToUnicodeString.c)
 *     KiHeadlessDisplayString @ 0x1405B3EC4 (KiHeadlessDisplayString.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069A194 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall KiBugCheckProgress(unsigned int a1)
{
  bool v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  const wchar_t *v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 *v10; // [rsp+30h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  char *v12; // [rsp+40h] [rbp-20h]
  char v13; // [rsp+48h] [rbp-18h] BYREF

  v11 = 0x80000LL;
  v10 = 0LL;
  v2 = IopAutoReboot != 0;
  v12 = &v13;
  v9 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140EF0050 & 2) != 0 )
  {
    LOBYTE(v5) = v2;
    BgpFwDisplayBugCheckProgressUpdate(a1, &v9, v5);
  }
  BgpFwReleaseLock(v4, v3);
  if ( a1 )
  {
    KiHeadlessDisplayString(L"\r\x1B[0K\r", 14LL);
    if ( (_QWORD)v9 && *((_QWORD *)&v9 + 1) && v10 )
    {
      KiHeadlessDisplayString(*(_QWORD *)(v9 + 8), *(unsigned __int16 *)v9);
      KiHeadlessDisplayString(L" ", 4LL);
      KiHeadlessDisplayString(*(_QWORD *)(*((_QWORD *)&v9 + 1) + 8LL), (unsigned __int16)**((_WORD **)&v9 + 1));
      KiHeadlessDisplayString(v12, (unsigned __int16)v11);
      v6 = *v10;
      v7 = (const wchar_t *)*((_QWORD *)v10 + 1);
    }
    else
    {
      KiBugCheckConvertProgressValueToUnicodeString(a1, (__int64)&v11);
      KiHeadlessDisplayString(v12, (unsigned __int16)v11);
      v6 = 4LL;
      v7 = L"%";
    }
    KiHeadlessDisplayString(v7, v6);
  }
  if ( a1 == 100 )
    KiHeadlessDisplayString(L"\r\n", 6LL);
  return 0LL;
}
