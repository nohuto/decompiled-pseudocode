/*
 * XREFs of PnpCompileDeviceInstancePaths @ 0x1409BBA78
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpAllocateCriticalMemory @ 0x1409BBC94 (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PnpCompileDeviceInstancePaths(unsigned int a1, __int64 a2, char a3, __int64 *a4)
{
  unsigned int v4; // edi
  unsigned int *v9; // r8
  unsigned int v10; // edx
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 CriticalMemory; // rax
  _WORD *v18; // r14
  unsigned int v19; // esi
  unsigned int *v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _WORD *v29; // r14

  v4 = 0;
  if ( !a2 )
    __fastfail(5u);
  v9 = *(unsigned int **)a2;
  v10 = 0;
  *a4 = 0LL;
  v11 = 0;
  while ( v10 < *v9 && v9 )
  {
    v12 = v10++;
    v13 = 3 * v12;
    v14 = *(_QWORD *)&v9[6 * v12 + 4];
    v15 = v9[2 * v13 + 6];
    if ( v14 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
      if ( v16 )
      {
        if ( *(_QWORD *)(v16 + 48) && (!a3 || v15) )
          v11 += *(unsigned __int16 *)(v16 + 40) + 2;
      }
    }
  }
  CriticalMemory = PnpAllocateCriticalMemory(a1, 256LL, (unsigned int)(v11 + 2), 1265659472LL);
  *a4 = CriticalMemory;
  v18 = (_WORD *)CriticalMemory;
  if ( CriticalMemory )
  {
    v19 = 0;
    while ( *(_BYTE *)(a2 + 8) )
    {
      v21 = *(unsigned int **)a2;
      v22 = **(_DWORD **)a2;
      if ( v19 >= v22 )
        break;
      v23 = v22 + ~v19;
      if ( !v21 || (unsigned int)v23 >= v22 )
        break;
      ++v19;
      v24 = *(_QWORD *)&v21[6 * v23 + 4];
      v25 = v21[6 * v23 + 6];
      if ( v24 )
      {
        v26 = *(_QWORD *)(v24 + 312);
        v27 = *(_QWORD *)(v26 + 40);
        if ( v27 )
        {
          if ( *(_QWORD *)(v27 + 48) && (!a3 || v25) )
          {
            v28 = *(_QWORD *)(v26 + 40);
            memmove(v18, *(const void **)(v27 + 48), *(unsigned __int16 *)(v27 + 40));
            v29 = &v18[(unsigned __int64)*(unsigned __int16 *)(v28 + 40) >> 1];
            *v29 = 0;
            v18 = v29 + 1;
          }
        }
      }
    }
    *v18 = 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
