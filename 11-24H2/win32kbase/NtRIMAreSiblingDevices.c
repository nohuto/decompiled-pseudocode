/*
 * XREFs of NtRIMAreSiblingDevices @ 0x1401D48D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMAreSiblingDevices @ 0x1401D6B80 (RIMAreSiblingDevices.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x140221E64 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMAreSiblingDevices(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMAreSiblingDevices(a1, a2, a3, 1LL);
  else
    return 3221225506LL;
}
