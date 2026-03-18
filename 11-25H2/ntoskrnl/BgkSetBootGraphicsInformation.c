/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x140BA0424
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     BgpFwSetBootGraphicsInformation @ 0x14068D070 (BgpFwSetBootGraphicsInformation.c)
 */

__int64 __fastcall BgkSetBootGraphicsInformation(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !byte_140E65B48 )
    return 3221225473LL;
  if ( KeGetCurrentIrql() )
  {
    return (unsigned int)-1073741823;
  }
  else if ( a2 )
  {
    BgpFwAcquireLock();
    if ( (dword_140EEFD90 & 1) != 0 )
      v4 = BgpFwSetBootGraphicsInformation(v6, a2);
    else
      v4 = -1073741823;
    BgpFwReleaseLock(v6, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
