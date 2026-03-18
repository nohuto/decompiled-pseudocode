/*
 * XREFs of MiAddSubRegionEntropy @ 0x140C432FC
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140C435B0 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 */

__int64 MiAddSubRegionEntropy()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  v0 = qword_140E388D8;
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = v1 | (unsigned int)ExGenRandom(1);
  v3 = qword_140E388E8;
  qword_140E2F040 = qword_140E388E8;
  qword_140E388D8 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_140E2F050 = qword_140E388E8 + 0x7FFFFFFFFFLL;
  result = ExGenRandom(1);
  qword_140E2F048 = v3 + ((unsigned __int64)(unsigned __int8)result << 30);
  return result;
}
