/*
 * XREFs of MiAddSubRegionEntropy @ 0x140C54574
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140C54828 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 */

__int64 MiAddSubRegionEntropy()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  v0 = qword_140E38B18;
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = v1 | (unsigned int)ExGenRandom(1);
  v3 = qword_140E38B28;
  qword_140E2F280 = qword_140E38B28;
  qword_140E38B18 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_140E2F290 = qword_140E38B28 + 0x7FFFFFFFFFLL;
  result = ExGenRandom(1);
  qword_140E2F288 = v3 + ((unsigned __int64)(unsigned __int8)result << 30);
  return result;
}
