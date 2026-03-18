/*
 * XREFs of MiInitializeRelocations @ 0x140C58D1C
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 */

__int64 MiInitializeRelocations()
{
  __int64 Pool; // rax
  __int64 v1; // rax
  unsigned __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax

  Pool = MiAllocatePool(0x100uLL, 0x10000uLL, 1767009613);
  if ( !Pool )
    return 0LL;
  qword_140E2D630 = 0x7FFFFLL;
  qword_140E2D638 = Pool;
  qword_140E2D640 = ExGenRandom(1) & 0x7FFFE;
  v1 = MiAllocatePool(0x100uLL, 0x500uLL, 1767009613);
  if ( !v1 )
    return 0LL;
  qword_140E2D6C8 = v1;
  qword_140E2D6C0 = 10240LL;
  qword_140E2D6D0 = (unsigned int)ExGenRandom(1) % 0x2800uLL;
  v2 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
  v3 = 0;
  qword_140E2D648 = v2 + 2013265920;
  qword_140E2D650 = v2 + 2013265920;
  qword_140E2D658 = v2 + 3758096384u;
  qword_140E2D660 = v2 + 3758096384u;
  while ( !v3 )
  {
    v4 = MiAllocatePool(0x100uLL, 0x500uLL, 1767009613);
    if ( !v4 )
      return 0LL;
    unk_140E2D668 = 10240LL;
    *((_QWORD *)&unk_140E2D668 + 1) = v4;
    v5 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
    v3 = 1;
    *((_QWORD *)&unk_140E2D668 + 2) = v5 + 2013265920;
    *((_QWORD *)&unk_140E2D668 + 3) = v5 + 2013265920;
    *((_QWORD *)&unk_140E2D668 + 4) = v5 + 3758096384u;
    *((_QWORD *)&unk_140E2D668 + 5) = v5 + 3758096384u;
  }
  qword_140E2D6A8 = (unsigned __int8)ExGenRandom(1);
  v6 = MiAllocatePool(0x100uLL, 0x500uLL, 1767009613);
  if ( !v6 )
    return 0LL;
  qword_140E2D6B8 = v6;
  result = 1LL;
  qword_140E2D6B0 = 10240LL;
  return result;
}
