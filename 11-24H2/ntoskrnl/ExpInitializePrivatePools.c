/*
 * XREFs of ExpInitializePrivatePools @ 0x140C46158
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x140658520 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 */

__int64 __fastcall ExpInitializePrivatePools(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rcx

  qword_140E6BDE0 = 0LL;
  qword_140E6BDF0 = (__int64)qword_140E6BDE8;
  qword_140E6BDE8[0] = (__int64)qword_140E6BDE8;
  qword_140E6BE00 = (__int64)&qword_140E6BDF8;
  qword_140E6BDF8 = (__int64)&qword_140E6BDF8;
  v4 = (unsigned __int64)(unsigned int)ExGenRandom(0, a2, a3, a4) << 32;
  result = ExGenRandom(0, v5, v6, v7);
  v9 = v4 | (unsigned int)result;
  if ( (v9 & 0xF) == 0 )
  {
    result = 15 * ((v4 | (unsigned int)result) / 0xF);
    v9 = 2 * v9 - result + 1;
  }
  qword_140E6BE08 = v9;
  return result;
}
