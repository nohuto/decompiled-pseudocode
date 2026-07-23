/*
 * XREFs of PfFbBufferListUpdateMax @ 0x1405CA3D4
 * Callers:
 *     PfTStart @ 0x140744DFC (PfTStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfFbBufferListUpdateMax(__int64 a1, __int32 a2)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 88), a2);
}
