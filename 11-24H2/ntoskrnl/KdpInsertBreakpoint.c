/*
 * XREFs of KdpInsertBreakpoint @ 0x140B7B9F0
 * Callers:
 *     KdpAddBreakpoint @ 0x140B7B7E8 (KdpAddBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x140B7BA54 (KdpLowRestoreBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x140B7C7DC (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpWriteInstructionBuffer @ 0x1405AD394 (KdpWriteInstructionBuffer.c)
 *     KdpCopyCodeStream @ 0x140B7B30C (KdpCopyCodeStream.c)
 */

__int64 __fastcall KdpInsertBreakpoint(__int64 a1, _BYTE *a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // r11
  int v5; // ecx
  __int64 result; // rax

  KdpWriteInstructionBuffer(a2, *(_QWORD *)(a1 + 16), *(_BYTE *)(a1 + 36));
  v5 = KdpCopyCodeStream(
         (void *)(v3 & ~(unsigned __int64)*(unsigned __int8 *)(v2 + 37)),
         v4,
         *(unsigned __int8 *)(v2 + 36),
         5);
  if ( v5 < 0 )
    return 0LL;
  result = 3LL;
  if ( v5 != 259 )
    return 1LL;
  return result;
}
