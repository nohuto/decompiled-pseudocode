/*
 * XREFs of x86BiosWritePciDataPort @ 0x140546910
 * Callers:
 *     x86BiosWriteIoSpace @ 0x1404689A0 (x86BiosWriteIoSpace.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall x86BiosWritePciDataPort(__int64 a1, unsigned __int16 a2, int a3)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return guard_dispatch_icall_no_overrides(
           BYTE2(XmPCIConfigAddress),
           (XmPCIConfigAddress & 0x700 | ((unsigned int)XmPCIConfigAddress >> 8) & 0xF8) >> 3,
           &v4,
           a2 | (unsigned int)(unsigned __int8)XmPCIConfigAddress);
}
