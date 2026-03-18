/*
 * XREFs of AMLIApplyNamespaceOverride @ 0x14006C4CC
 * Callers:
 *     ParseLoad @ 0x140053310 (ParseLoad.c)
 *     ParseUnload @ 0x14006F0D0 (ParseUnload.c)
 * Callees:
 *     GetNameSpaceObject @ 0x140009900 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     AMLIApplyNextNamespaceOverride @ 0x14006C538 (AMLIApplyNextNamespaceOverride.c)
 */

__int64 AMLIApplyNamespaceOverride()
{
  int NameSpaceObject; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( (gOverrideFlags & 0x20) != 0 && gpnsNameSpaceOverrideRoot )
  {
    NameSpaceObject = GetNameSpaceObject("\\", 0LL, (__int64)&v2, 0);
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIApplyNextNamespaceOverride(gpnsNameSpaceOverrideRoot, v2);
      DereferenceObjectEx(v2);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)NameSpaceObject;
}
