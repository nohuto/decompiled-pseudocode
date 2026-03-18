/*
 * XREFs of RtlDecompressBufferEx @ 0x1403CCA50
 * Callers:
 *     SmStoreDecompressBuffer @ 0x14020D068 (SmStoreDecompressBuffer.c)
 *     SmDecompressBuffer @ 0x1403CC850 (SmDecompressBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140B4C904 (PopDecompressHiberBlocks.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     RtlDecompressBufferLz4 @ 0x1403CCB10 (RtlDecompressBufferLz4.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlDecompressBufferEx(unsigned __int8 a1, __int64 a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 > 8u )
    return 3221226079LL;
  if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64))RtlDecompressBufferProcs[a1] == RtlDecompressBufferLz4 )
    return RtlDecompressBufferLz4(a2, a3, a4, a5, 0, a6);
  return guard_dispatch_icall_no_overrides(a2, a3);
}
