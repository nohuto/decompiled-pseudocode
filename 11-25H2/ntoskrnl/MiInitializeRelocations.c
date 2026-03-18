/*
 * XREFs of MiInitializeRelocations @ 0x140C47A3C
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
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
  qword_140E2D3F0 = 0x7FFFFLL;
  qword_140E2D3F8 = Pool;
  qword_140E2D400 = ExGenRandom(1) & 0x7FFFE;
  v1 = MiAllocatePool(0x100uLL, 0x500uLL, 1767009613);
  if ( !v1 )
    return 0LL;
  qword_140E2D488 = v1;
  qword_140E2D480 = 10240LL;
  qword_140E2D490 = (unsigned int)ExGenRandom(1) % 0x2800uLL;
  v2 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
  v3 = 0;
  qword_140E2D408 = v2 + 2013265920;
  qword_140E2D410 = v2 + 2013265920;
  qword_140E2D418 = v2 + 3758096384u;
  qword_140E2D420 = v2 + 3758096384u;
  while ( !v3 )
  {
    v4 = MiAllocatePool(0x100uLL, 0x500uLL, 1767009613);
    if ( !v4 )
      return 0LL;
    unk_140E2D428 = 10240LL;
    *((_QWORD *)&unk_140E2D428 + 1) = v4;
    v5 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
    v3 = 1;
    *((_QWORD *)&unk_140E2D428 + 2) = v5 + 2013265920;
    *((_QWORD *)&unk_140E2D428 + 3) = v5 + 2013265920;
    *((_QWORD *)&unk_140E2D428 + 4) = v5 + 3758096384u;
    *((_QWORD *)&unk_140E2D428 + 5) = v5 + 3758096384u;
  }
  qword_140E2D468 = (unsigned __int8)ExGenRandom(1);
  v6 = MiAllocatePool(0x100uLL, 0x500uLL, 1767009613);
  if ( !v6 )
    return 0LL;
  qword_140E2D478 = v6;
  result = 1LL;
  qword_140E2D470 = 10240LL;
  return result;
}
