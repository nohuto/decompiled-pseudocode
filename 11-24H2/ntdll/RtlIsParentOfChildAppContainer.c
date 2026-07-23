/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1800820A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerSidType @ 0x180081ED0 (RtlGetAppContainerSidType.c)
 */

BOOLEAN __cdecl RtlIsParentOfChildAppContainer(PSID ParentAppContainerSid, PSID ChildAppContainerSid)
{
  unsigned int i; // edx
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+40h] [rbp+18h] BYREF

  AppContainerSidType = NotAppContainerSidType;
  if ( RtlGetAppContainerSidType(ParentAppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ParentAppContainerSidType
    || RtlGetAppContainerSidType(ChildAppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return 0;
  }
  for ( i = 1; i < 8; ++i )
  {
    if ( *((_DWORD *)ParentAppContainerSid + i + 2) != *((_DWORD *)ChildAppContainerSid + i + 2) )
      return 0;
  }
  return 1;
}
