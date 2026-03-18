/*
 * XREFs of NtRIMGetPhysicalDeviceRect @ 0x1C0174E20
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetPhysicalDeviceRect @ 0x1C0178940 (RIMGetPhysicalDeviceRect.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0206B4C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMGetPhysicalDeviceRect(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetPhysicalDeviceRect(a1, a2, a3);
  else
    return 3221225506LL;
}
