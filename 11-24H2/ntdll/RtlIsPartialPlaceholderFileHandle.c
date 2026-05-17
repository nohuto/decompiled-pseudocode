/*
 * XREFs of RtlIsPartialPlaceholderFileHandle @ 0x1801132C0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationFile @ 0x180161EB0 (NtQueryInformationFile.c)
 */

__int64 __fastcall RtlIsPartialPlaceholderFileHandle(__int64 a1, bool *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  result = NtQueryInformationFile(a1, &v4, &v5, 8LL, 35);
  if ( (int)result >= 0 )
  {
    *a2 = (v5 & 0x440000) != 0;
    return 0LL;
  }
  if ( (_DWORD)result == -1073741811 )
  {
    *a2 = 0;
    return 0LL;
  }
  return result;
}
