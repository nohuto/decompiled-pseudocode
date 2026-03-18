/*
 * XREFs of ExpInitializePrivatePools @ 0x140C44008
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x140659E80 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 */

__int64 ExpInitializePrivatePools()
{
  unsigned __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // rcx

  qword_140E6BBE0 = 0LL;
  qword_140E6BBF0 = (__int64)qword_140E6BBE8;
  qword_140E6BBE8[0] = (__int64)qword_140E6BBE8;
  qword_140E6BC00 = (__int64)&qword_140E6BBF8;
  qword_140E6BBF8 = (__int64)&qword_140E6BBF8;
  v0 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  result = ExGenRandom(0);
  v2 = v0 | (unsigned int)result;
  if ( (v2 & 0xF) == 0 )
  {
    result = 15 * ((v0 | (unsigned int)result) / 0xF);
    v2 = 2 * v2 - result + 1;
  }
  qword_140E6BC08 = v2;
  return result;
}
