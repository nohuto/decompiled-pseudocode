/*
 * XREFs of CiNdisOpenDevice @ 0x1C000C7E8
 * Callers:
 *     CsInitialize @ 0x1C000F040 (CsInitialize.c)
 * Callees:
 *     WPP_SF_d @ 0x1C0004960 (WPP_SF_d.c)
 */

__int64 CiNdisOpenDevice()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  IoStatusBlock = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CiNdisDevceName;
  v0 = ZwOpenFile(&CiNdisDeviceHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  v1 = v0;
  if ( v0 < 0 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xCu,
      (__int64)&WPP_2ebbd117cad538f8ca4ca83992730554_Traceguids,
      v0);
  return v1;
}
