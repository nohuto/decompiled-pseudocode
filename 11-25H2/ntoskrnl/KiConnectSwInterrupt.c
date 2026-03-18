/*
 * XREFs of KiConnectSwInterrupt @ 0x140C17604
 * Callers:
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     VslConnectSwInterrupt @ 0x140C53D9C (VslConnectSwInterrupt.c)
 */

__int64 __fastcall KiConnectSwInterrupt(ULONG_PTR a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
