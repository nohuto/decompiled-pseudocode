/*
 * XREFs of RaSaveDriverInitData @ 0x14018427C
 * Callers:
 *     StorPortInitialize @ 0x14006FD50 (StorPortInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall RaSaveDriverInitData(__int64 a1, unsigned int *a2)
{
  char *Pool; // rax
  char *v5; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax

  Pool = (char *)RaidAllocatePool(64LL, 224LL, 1229480274LL, *(_QWORD *)(a1 + 8));
  v5 = Pool;
  if ( !Pool )
    return 3221225495LL;
  memmove(Pool, a2, *a2);
  if ( (*((_DWORD *)v5 + 46) & 0x40004000) != 0 )
    *(_DWORD *)(a1 + 4) |= 1u;
  v7 = (_QWORD *)(a1 + 96);
  v8 = *(_QWORD *)(a1 + 96);
  v9 = v5 + 208;
  if ( *(_QWORD *)(v8 + 8) != a1 + 96 )
    __fastfail(3u);
  *v9 = v8;
  *((_QWORD *)v5 + 27) = v7;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = v9;
  return 0LL;
}
