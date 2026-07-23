/*
 * XREFs of MiClusterVadActive @ 0x140693FE4
 * Callers:
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiClusterVadActive(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  _QWORD *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // rcx

  *a3 = -1LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) << 25) >> 16;
  v5 = v4 & 0xFFFFFFFFFFFF0000uLL;
  if ( (v4 & 0xFFFFFFFFFFFF0000uLL) >> 12 < (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    || (v5 + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  v6 = 0;
  v7 = -1LL;
  v8 = (_QWORD *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = 0LL;
  while ( (unsigned int)v9 < 0x10 )
  {
    if ( (*v8 & 1) != 0 )
    {
      v10 = (*v8 >> 12) & 0xFFFFFFFFFFLL;
      if ( (unsigned __int8)HIBYTE(*(_WORD *)v8) >> 4 != (unsigned __int64)(unsigned int)v9 )
        return 0LL;
      if ( v7 == -1 )
      {
        v7 = v10 - (unsigned int)v9;
      }
      else
      {
        if ( v10 != v9 + v7 )
          return 0LL;
        v6 = 1;
      }
    }
    v9 = (unsigned int)(v9 + 1);
    ++v8;
  }
  if ( !v6 )
  {
    *a3 = (unsigned __int16)v4 >> 12;
    return 0LL;
  }
  return 1LL;
}
