/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x140BB2424
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpFwSetBootGraphicsInformation @ 0x140699440 (BgpFwSetBootGraphicsInformation.c)
 */

__int64 __fastcall BgkSetBootGraphicsInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( !byte_140E65EE0 )
    return 3221225473LL;
  if ( KeGetCurrentIrql() )
  {
    return (unsigned int)-1073741823;
  }
  else if ( a2 )
  {
    BgpFwAcquireLock(a1, a2, a3, a4);
    if ( (dword_140EF0270 & 1) != 0 )
      v6 = BgpFwSetBootGraphicsInformation(v8, a2);
    else
      v6 = -1073741823;
    BgpFwReleaseLock(v8, v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
