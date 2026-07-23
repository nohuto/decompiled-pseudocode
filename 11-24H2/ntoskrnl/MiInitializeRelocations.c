/*
 * XREFs of MiInitializeRelocations @ 0x140C5AEAC
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 */

__int64 MiInitializeRelocations()
{
  __int64 Pool; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 result; // rax

  Pool = MiAllocatePool(0x100uLL, 0x10000uLL, 1767009613);
  if ( !Pool )
    return 0LL;
  qword_140E2D770 = 0x7FFFFLL;
  qword_140E2D778 = Pool;
  qword_140E2D780 = ExGenRandom(1, v1, v2, v3) & 0x7FFFE;
  v4 = MiAllocatePool(0x100uLL, 0x500uLL, 1767009613);
  if ( !v4 )
    return 0LL;
  qword_140E2D808 = v4;
  qword_140E2D800 = 10240LL;
  v8 = ExGenRandom(1, v5, v6, v7);
  qword_140E2D810 = v8 % 0x2800uLL;
  v12 = (unsigned __int64)(unsigned __int8)ExGenRandom(1, v8 / 0x2800uLL, v9, v10) << 16;
  v15 = 0;
  qword_140E2D788 = v12 + 2013265920;
  qword_140E2D790 = v12 + 2013265920;
  qword_140E2D798 = v12 + 3758096384u;
  qword_140E2D7A0 = v12 + 3758096384u;
  while ( !v15 )
  {
    v16 = MiAllocatePool(0x100uLL, 0x500uLL, 1767009613);
    if ( !v16 )
      return 0LL;
    unk_140E2D7A8 = 10240LL;
    *((_QWORD *)&unk_140E2D7A8 + 1) = v16;
    v20 = (unsigned __int64)(unsigned __int8)ExGenRandom(1, v17, v18, v19) << 16;
    v15 = 1;
    *((_QWORD *)&unk_140E2D7A8 + 2) = v20 + 2013265920;
    *((_QWORD *)&unk_140E2D7A8 + 3) = v20 + 2013265920;
    *((_QWORD *)&unk_140E2D7A8 + 4) = v20 + 3758096384u;
    *((_QWORD *)&unk_140E2D7A8 + 5) = v20 + 3758096384u;
  }
  qword_140E2D7E8 = (unsigned __int8)ExGenRandom(1, v11, v13, v14);
  v21 = MiAllocatePool(0x100uLL, 0x500uLL, 1767009613);
  if ( !v21 )
    return 0LL;
  qword_140E2D7F8 = v21;
  result = 1LL;
  qword_140E2D7F0 = 10240LL;
  return result;
}
