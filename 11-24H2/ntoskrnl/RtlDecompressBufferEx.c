/*
 * XREFs of RtlDecompressBufferEx @ 0x14039DAE0
 * Callers:
 *     SmStoreDecompressBuffer @ 0x14039C718 (SmStoreDecompressBuffer.c)
 *     SmDecompressBuffer @ 0x140481BC0 (SmDecompressBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140B5C904 (PopDecompressHiberBlocks.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     RtlDecompressBufferLz4 @ 0x14039DBA0 (RtlDecompressBufferLz4.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlDecompressBufferEx(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 > 8u )
    return 3221226079LL;
  if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64))RtlDecompressBufferProcs[a1] == RtlDecompressBufferLz4 )
    return RtlDecompressBufferLz4(a2, a3, a4, a5, 0, a6);
  return guard_dispatch_icall_no_overrides(a2, a3, a4, a5);
}
