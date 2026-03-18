/*
 * XREFs of ExpInitializePrivatePools @ 0x140C32D3C
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x14064DFE0 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 */

__int64 ExpInitializePrivatePools()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // rcx

  qword_140E6B920 = 0LL;
  qword_140E6B930 = (__int64)qword_140E6B928;
  qword_140E6B928[0] = (__int64)qword_140E6B928;
  qword_140E6B940 = (__int64)&qword_140E6B938;
  qword_140E6B938 = (__int64)&qword_140E6B938;
  v0 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  result = ExGenRandom(0);
  v2 = v0 | (unsigned int)result;
  if ( (v2 & 0xF) == 0 )
  {
    result = 15 * ((v0 | (unsigned int)result) / 0xF);
    v2 = 2 * v2 - result + 1;
  }
  qword_140E6B948 = v2;
  return result;
}
