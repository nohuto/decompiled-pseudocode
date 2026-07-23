/*
 * XREFs of RtlUnalignedStringCchLengthW @ 0x140402380
 * Callers:
 *     DrvDbValidateDeviceIdName @ 0x140823C64 (DrvDbValidateDeviceIdName.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1409804D4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnalignedStringCchLengthW(STRSAFE_PCUNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // rax
  NTSTATUS v4; // r9d

  if ( !psz )
  {
    v4 = -1073741811;
LABEL_14:
    if ( pcchLength )
      *pcchLength = 0LL;
    return v4;
  }
  v3 = cchMax;
  v4 = 0;
  while ( *psz )
  {
    ++psz;
    if ( !--v3 )
      goto LABEL_5;
  }
  if ( !v3 )
LABEL_5:
    v4 = -1073741811;
  if ( pcchLength )
  {
    if ( v4 < 0 )
      *pcchLength = 0LL;
    else
      *pcchLength = cchMax - v3;
  }
  if ( v4 < 0 )
    goto LABEL_14;
  return v4;
}
