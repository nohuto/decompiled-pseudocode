/*
 * XREFs of KiBugCheckProgress @ 0x1405AFDB0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     KiBugCheckConvertProgressValueToUnicodeString @ 0x1405AFC14 (KiBugCheckConvertProgressValueToUnicodeString.c)
 *     KiHeadlessDisplayString @ 0x1405B0E3C (KiHeadlessDisplayString.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069B214 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiBugCheckProgress(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  bool v5; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  const wchar_t *v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 *v13; // [rsp+30h] [rbp-30h]
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  char *v15; // [rsp+40h] [rbp-20h]
  char v16; // [rsp+48h] [rbp-18h] BYREF

  v4 = a1;
  v14 = 0x80000LL;
  v13 = 0LL;
  v5 = IopAutoReboot != 0;
  v15 = &v16;
  v12 = 0LL;
  BgpFwAcquireLock(a1, a2, a3, a4);
  if ( (dword_140EF0270 & 2) != 0 )
  {
    LOBYTE(v8) = v5;
    BgpFwDisplayBugCheckProgressUpdate(v4, &v12, v8);
  }
  BgpFwReleaseLock(v7, v6);
  if ( v4 )
  {
    KiHeadlessDisplayString(L"\r\x1B[0K\r", 14LL);
    if ( (_QWORD)v12 && *((_QWORD *)&v12 + 1) && v13 )
    {
      KiHeadlessDisplayString(*(_QWORD *)(v12 + 8), *(unsigned __int16 *)v12);
      KiHeadlessDisplayString(L" ", 4LL);
      KiHeadlessDisplayString(*(_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL), (unsigned __int16)**((_WORD **)&v12 + 1));
      KiHeadlessDisplayString(v15, (unsigned __int16)v14);
      v9 = *v13;
      v10 = (const wchar_t *)*((_QWORD *)v13 + 1);
    }
    else
    {
      KiBugCheckConvertProgressValueToUnicodeString(v4, (__int64)&v14);
      KiHeadlessDisplayString(v15, (unsigned __int16)v14);
      v9 = 4LL;
      v10 = L"%";
    }
    KiHeadlessDisplayString(v10, v9);
  }
  if ( v4 == 100 )
    KiHeadlessDisplayString(L"\r\n", 6LL);
  return 0LL;
}
