/*
 * XREFs of MiAddSubRegionEntropy @ 0x140C56704
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140C569B8 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 */

__int64 __fastcall MiAddSubRegionEntropy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax

  v4 = qword_140E38C58;
  v5 = (unsigned __int64)(unsigned int)ExGenRandom(1, a2, a3, a4) << 32;
  v9 = v5 | (unsigned int)ExGenRandom(1, v6, v7, v8);
  v10 = qword_140E38C68;
  qword_140E2F3C0 = qword_140E38C68;
  qword_140E38C58 = v4 + (v9 & 0x7FFFFFFFF8LL);
  qword_140E2F3D0 = qword_140E38C68 + 0x7FFFFFFFFFLL;
  result = ExGenRandom(1, 0x7FFFFFFFF8LL, v11, v12);
  qword_140E2F3C8 = v10 + ((unsigned __int64)(unsigned __int8)result << 30);
  return result;
}
