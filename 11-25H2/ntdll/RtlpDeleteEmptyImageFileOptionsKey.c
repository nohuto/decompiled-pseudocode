/*
 * XREFs of RtlpDeleteEmptyImageFileOptionsKey @ 0x180139750
 * Callers:
 *     RtlSetImageMitigationPolicy @ 0x1801385F0 (RtlSetImageMitigationPolicy.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800B2F18 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1801397E8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtDeleteKey @ 0x180164D90 (NtDeleteKey.c)
 */

__int64 __fastcall RtlpDeleteEmptyImageFileOptionsKey(unsigned __int16 *a1)
{
  unsigned int v1; // ebx
  unsigned int i; // edi
  int v4; // eax
  char IsEmptyImageFileOptionsKey; // bp
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  Handle = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
      return 0LL;
    v4 = RtlpOpenImageFileOptionsKeyEx(a1, 0x10009u, 0, &Handle);
    if ( v4 < 0 )
      break;
    IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(Handle);
    if ( IsEmptyImageFileOptionsKey )
      NtDeleteKey(Handle);
    NtClose(Handle);
    if ( !IsEmptyImageFileOptionsKey )
      return 0LL;
  }
  if ( v4 != -1073741772 )
    return (unsigned int)v4;
  return v1;
}
