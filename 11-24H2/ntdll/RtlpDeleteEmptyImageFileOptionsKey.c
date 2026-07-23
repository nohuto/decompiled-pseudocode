/*
 * XREFs of RtlpDeleteEmptyImageFileOptionsKey @ 0x180136210
 * Callers:
 *     RtlSetImageMitigationPolicy @ 0x1801350B0 (RtlSetImageMitigationPolicy.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800A5A48 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1801362A8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtDeleteKey @ 0x180161BC0 (NtDeleteKey.c)
 */

__int64 __fastcall RtlpDeleteEmptyImageFileOptionsKey(unsigned __int16 *a1)
{
  unsigned int v1; // ebx
  unsigned int i; // edi
  NTSTATUS v4; // eax
  char IsEmptyImageFileOptionsKey; // bp
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  KeyHandle = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
      return 0LL;
    v4 = RtlpOpenImageFileOptionsKeyEx(a1, 0x10009u, 0, &KeyHandle);
    if ( v4 < 0 )
      break;
    IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(KeyHandle);
    if ( IsEmptyImageFileOptionsKey )
      NtDeleteKey(KeyHandle);
    NtClose(KeyHandle);
    if ( !IsEmptyImageFileOptionsKey )
      return 0LL;
  }
  if ( v4 != -1073741772 )
    return (unsigned int)v4;
  return v1;
}
