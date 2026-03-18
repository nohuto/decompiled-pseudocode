/*
 * XREFs of CheckDwmProcessSecurityIdentifier @ 0x14014F600
 * Callers:
 *     RIMIsCurrentProcessTrusted @ 0x1400CFC20 (RIMIsCurrentProcessTrusted.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017A4CC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     AllocateWindowManagerSid @ 0x140017C70 (AllocateWindowManagerSid.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

__int64 CheckDwmProcessSecurityIdentifier()
{
  int v0; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF
  PVOID Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = 0LL;
  v2 = 0;
  v0 = AllocateWindowManagerSid(&Buffer);
  if ( v0 >= 0 )
  {
    v0 = RtlCheckTokenMembership(0LL, Buffer, &v2);
    if ( v0 >= 0 && !v2 )
      v0 = -1073741720;
    GreDeleteFastMutex((char *)Buffer);
  }
  return (unsigned int)v0;
}
