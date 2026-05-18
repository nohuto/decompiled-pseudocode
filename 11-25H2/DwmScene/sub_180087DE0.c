/*
 * XREFs of sub_180087DE0 @ 0x180087DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056CE0 @ 0x180056CE0 (sub_180056CE0.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

bool __fastcall sub_180087DE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  bool result; // al

  result = 0;
  if ( sub_180056CE0(a1, a2) )
  {
    v4 = _RTDynamicCast(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::ViewerCamera `RTTI Type Descriptor',
           1);
    if ( (_mm_movemask_ps(
            _mm_cmpeq_ps(
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(v4 + 1800), (__m128)*(unsigned int *)(v4 + 1808)),
              _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 1800), (__m128)*(unsigned int *)(a1 + 1808)))) & 7) == 7
      && *(float *)(v4 + 1812) == *(float *)(a1 + 1812)
      && *(_DWORD *)(v4 + 1816) == *(_DWORD *)(a1 + 1816)
      && *(float *)(v4 + 1820) == *(float *)(a1 + 1820)
      && *(float *)(v4 + 1824) == *(float *)(a1 + 1824)
      && *(float *)(v4 + 1828) == *(float *)(a1 + 1828)
      && *(float *)(v4 + 1832) == *(float *)(a1 + 1832)
      && *(float *)(v4 + 1836) == *(float *)(a1 + 1836)
      && *(float *)(v4 + 1840) == *(float *)(a1 + 1840)
      && *(float *)(v4 + 1844) == *(float *)(a1 + 1844)
      && *(float *)(v4 + 1848) == *(float *)(a1 + 1848)
      && *(float *)(v4 + 1852) == *(float *)(a1 + 1852)
      && *(float *)(v4 + 1856) == *(float *)(a1 + 1856)
      && *(float *)(v4 + 1860) == *(float *)(a1 + 1860)
      && *(_BYTE *)(v4 + 1864) == *(_BYTE *)(a1 + 1864)
      && *(_DWORD *)(v4 + 1868) == *(_DWORD *)(a1 + 1868)
      && *(float *)(v4 + 1872) == *(float *)(a1 + 1872)
      && *(float *)(v4 + 1876) == *(float *)(a1 + 1876)
      && *(float *)(v4 + 1880) == *(float *)(a1 + 1880)
      && *(float *)(v4 + 1884) == *(float *)(a1 + 1884)
      && *(float *)(v4 + 1888) == *(float *)(a1 + 1888)
      && *(float *)(v4 + 1892) == *(float *)(a1 + 1892)
      && *(_BYTE *)(v4 + 1896) == *(_BYTE *)(a1 + 1896)
      && *(_BYTE *)(v4 + 1897) == *(_BYTE *)(a1 + 1897)
      && *(_BYTE *)(v4 + 1898) == *(_BYTE *)(a1 + 1898)
      && *(float *)(v4 + 1900) == *(float *)(a1 + 1900) )
    {
      return 1;
    }
  }
  return result;
}
