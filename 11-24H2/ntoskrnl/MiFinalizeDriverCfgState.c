/*
 * XREFs of MiFinalizeDriverCfgState @ 0x140A331C8
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiProcessKernelCfgImage @ 0x1404C2668 (MiProcessKernelCfgImage.c)
 *     MiCompleteSecureDriverLoad @ 0x140A33D90 (MiCompleteSecureDriverLoad.c)
 */

__int64 __fastcall MiFinalizeDriverCfgState(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  result = MiProcessKernelCfgImage(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( (MiFlags & 0x4000) == 0 || (MiFlags & 0x40000) != 0 || (*(_DWORD *)(a1 + 104) & 0x2000) != 0 )
      return 0LL;
    result = MiCompleteSecureDriverLoad(a1);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 104) |= 0x2000u;
      return 0LL;
    }
  }
  return result;
}
