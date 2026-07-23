/*
 * XREFs of MiGetPageFromSlabEntry @ 0x14021DA94
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x14021D5AC (MiGetPageFromSlabAllocator.c)
 *     MiGetPageFromSlabAllocatorByIdentity @ 0x1404C3D84 (MiGetPageFromSlabAllocatorByIdentity.c)
 *     MiDefragmentSlabWorker @ 0x140687F90 (MiDefragmentSlabWorker.c)
 * Callees:
 *     RtlInterlockedSetClearRun @ 0x14021DDF0 (RtlInterlockedSetClearRun.c)
 */

__int64 __fastcall MiGetPageFromSlabEntry(__int64 a1, __int64 a2)
{
  unsigned int *v4; // r14
  unsigned __int64 v5; // rdi
  unsigned int v6; // r15d
  int v7; // edx
  int v8; // r9d
  int v9; // r8d
  __int64 v10; // rdi
  unsigned int v11; // r10d
  unsigned int v12; // ecx
  __int64 *v13; // rbx
  __int64 i; // rax
  unsigned int v15; // ebx
  unsigned int v17; // edx

  if ( !*(_DWORD *)(a1 + 84) )
    return -1LL;
  v4 = (unsigned int *)(a1 + 64);
  v5 = *(_DWORD *)(a1 + 80) & (unsigned int)-(*(_DWORD *)(a1 + 80) < LODWORD(MiPageSizes[(*(_DWORD *)(a2 + 136) >> 4) & 3]));
  if ( !_bittest64(*(const signed __int64 **)(a1 + 72), v5)
    && (unsigned int)RtlInterlockedSetClearRun(a1 + 64, (unsigned int)v5, 1LL) )
  {
    goto LABEL_14;
  }
  do
  {
    v6 = v5 + 1;
    v7 = *v4 - 1;
    v8 = (*(_DWORD *)(a1 + 72) & 4) != 0LL ? 0x20 : 0;
    v9 = v6 < *v4 ? v6 : 0;
    v10 = *(_QWORD *)(a1 + 72) - ((*(_QWORD *)(a1 + 72) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v11 = v8 + v7;
      v12 = v8 + v9;
      if ( v7 - v9 != -1 )
      {
        v13 = (__int64 *)(v10 + 8 * ((unsigned __int64)v12 >> 6));
        for ( i = *v13 | ((1LL << (v12 & 0x3F)) - 1); i == -1; i = *v13 )
        {
          if ( (unsigned __int64)++v13 > v10 + 8 * ((unsigned __int64)v11 >> 6) )
            goto LABEL_21;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v15 = i + ((unsigned int)(((__int64)v13 - v10) >> 3) << 6);
        if ( v15 <= v11 )
          break;
      }
LABEL_21:
      v15 = -1;
LABEL_22:
      if ( !v9 )
        goto LABEL_12;
      v17 = v6 + 1;
      if ( v6 + 1 > *v4 )
        v17 = *v4;
      v7 = v17 - 1;
      v9 = 0;
    }
    if ( v15 == -1 )
      goto LABEL_22;
    v15 -= v8;
LABEL_12:
    LODWORD(v5) = v15;
    if ( v15 == -1 )
      return -1LL;
  }
  while ( !(unsigned int)RtlInterlockedSetClearRun(a1 + 64, v15, 1LL) );
LABEL_14:
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 84));
  _InterlockedDecrement((volatile signed __int32 *)(a2 + 96));
  if ( *(_DWORD *)(a2 + 128) == 8 )
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a2 + 24) + 18304LL));
  *(_DWORD *)(a1 + 80) = v5 + 1;
  return *(_QWORD *)(a1 + 40) + (unsigned int)v5;
}
