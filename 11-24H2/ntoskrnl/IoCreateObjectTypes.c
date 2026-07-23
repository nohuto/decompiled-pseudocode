/*
 * XREFs of IoCreateObjectTypes @ 0x140C1C664
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 *     IopCreateIoRingObjectType @ 0x140C200E4 (IopCreateIoRingObjectType.c)
 */

bool IoCreateObjectTypes()
{
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-49h] BYREF
  _DWORD Src[2]; // [rsp+48h] [rbp-39h] BYREF
  int v3; // [rsp+50h] [rbp-31h]
  __int128 v4; // [rsp+54h] [rbp-2Dh]
  int v5; // [rsp+64h] [rbp-1Dh]
  int v6; // [rsp+6Ch] [rbp-15h]
  int v7; // [rsp+70h] [rbp-11h]
  int v8; // [rsp+74h] [rbp-Dh]
  void *v9; // [rsp+88h] [rbp+7h]
  void *v10; // [rsp+90h] [rbp+Fh]
  void *v11; // [rsp+98h] [rbp+17h]
  __int64 (__fastcall *v12)(__int64, int, DWORD *, __int16 *, PULONG, int, int, __int64, char); // [rsp+A0h] [rbp+1Fh]
  __int64 (__fastcall *v13)(struct _FILE_OBJECT *, __int64, UNICODE_STRING *, unsigned int, unsigned int *, char); // [rsp+A8h] [rbp+27h]
  int v14; // [rsp+B8h] [rbp+37h]
  int v15; // [rsp+BCh] [rbp+3Bh]

  DestinationString = 0LL;
  memset_0(Src, 0, 0x78uLL);
  BYTE2(Src[0]) |= 4u;
  LOWORD(Src[0]) = 120;
  v4 = (__int128)IopFileMapping;
  v3 = 256;
  v6 = 512;
  v5 = 2032127;
  RtlInitUnicodeString(&DestinationString, L"Adapter");
  if ( (int)ObCreateObjectType(&DestinationString, Src, 0LL, (__int64)&IoAdapterObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Controller");
  v8 = 72;
  if ( (int)ObCreateObjectType(&DestinationString, Src, 0LL, (__int64)&IoControllerObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Device");
  HIWORD(Src[0]) |= 0x101u;
  v11 = IopParseDevice;
  v12 = IopGetSetSecurityObject;
  v10 = IopDeleteDevice;
  v8 = 336;
  v13 = 0LL;
  if ( (int)ObCreateObjectType(&DestinationString, Src, 0LL, (__int64)&IoDeviceObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Driver");
  HIBYTE(Src[0]) &= ~1u;
  v10 = IopDeleteDriver;
  v8 = 336;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (VfRuleClasses & 0x10) != 0 )
    BYTE2(Src[0]) |= 0x20u;
  if ( (int)ObCreateObjectType(&DestinationString, Src, 0LL, (__int64)&IoDriverObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"IoCompletion");
  v3 = 272;
  v9 = IopCloseIoCompletion;
  v5 = 2031619;
  v10 = IopDeleteIoCompletion;
  v8 = 80;
  BYTE2(Src[0]) = BYTE2(Src[0]) & 0x7B | 0x80;
  v4 = IopCompletionMapping;
  if ( (int)ObCreateObjectType(&DestinationString, Src, 0LL, (__int64)&IoCompletionObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"WaitCompletionPacket");
  v8 = 112;
  v9 = IopCloseWaitCompletionPacket;
  v3 = 272;
  v5 = 983041;
  BYTE2(Src[0]) = BYTE2(Src[0]) & 0x7B | 4;
  v10 = 0LL;
  v4 = IopWaitCompletionMapping;
  if ( (int)ObCreateObjectType(&DestinationString, Src, 0LL, (__int64)&IopWaitCompletionPacketObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"File");
  HIBYTE(Src[0]) |= 1u;
  v9 = IopCloseFile;
  v7 = 1024;
  v10 = IopDeleteFile;
  v8 = 280;
  v11 = IopParseFile;
  v3 = 304;
  v13 = IopQueryName;
  Src[1] = 1;
  v5 = 2032127;
  BYTE2(Src[0]) = BYTE2(Src[0]) & 0xEB | 0x10;
  v4 = (__int128)IopFileMapping;
  v12 = IopGetSetSecurityObject;
  v14 = 0x10000000;
  v15 = 2097232;
  return (int)ObCreateObjectTypeEx(&DestinationString, Src, 0LL, (__int16 *)0x9B, &IoFileObjectType) >= 0
      && (int)IopCreateIoRingObjectType() >= 0;
}
