/*
 * XREFs of _wcsupr @ 0x1404FBF90
 * Callers:
 *     PfTFiNotifyVolumeCreateCallback @ 0x14044B6C0 (PfTFiNotifyVolumeCreateCallback.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x14044B840 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfSnParametersRead @ 0x140745FC0 (PfSnParametersRead.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140816288 (BiUpdateObjectReferenceInEfiEntry.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409A60FC (BiGetObjectReferenceFromEfiEntry.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsupr(wchar_t *String)
{
  wchar_t v1; // dx
  wchar_t *v2; // r8

  v1 = *String;
  v2 = String;
  while ( v1 )
  {
    if ( (unsigned __int16)(v1 - 97) <= 0x19u )
      *v2 = v1 - 32;
    v1 = *++v2;
  }
  return String;
}
