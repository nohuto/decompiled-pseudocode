/*
 * XREFs of updatewindow @ 0x1405F2828
 * Callers:
 *     inflate @ 0x1405F15F0 (inflate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall updatewindow(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbp
  char *v6; // r9
  __int64 v7; // rax
  unsigned int v9; // edi
  int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // ebp
  unsigned int v15; // ecx
  unsigned int v16; // eax

  v3 = *(_QWORD *)(a1 + 40);
  v5 = a3;
  v6 = *(char **)(v3 + 64);
  if ( !v6 )
  {
    v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64), (unsigned int)((1 << *(_DWORD *)(v3 + 48)) + 16));
    *(_QWORD *)(v3 + 64) = v7;
    v6 = (char *)v7;
    if ( !v7 )
      return 1LL;
  }
  v9 = *(_DWORD *)(v3 + 52);
  if ( !v9 )
  {
    v10 = *(_DWORD *)(v3 + 48);
    *(_DWORD *)(v3 + 60) = 0;
    v9 = 1 << v10;
    *(_QWORD *)(v3 + 52) = (unsigned int)(1 << v10);
  }
  if ( (unsigned int)v5 >= v9 )
  {
    memmove(v6, (const void *)(a2 - v9), v9);
    *(_DWORD *)(v3 + 60) = 0;
LABEL_8:
    v11 = *(_DWORD *)(v3 + 52);
    goto LABEL_17;
  }
  v12 = *(unsigned int *)(v3 + 60);
  v13 = v9 - v12;
  if ( v13 > (unsigned int)v5 )
    v13 = v5;
  memmove(&v6[v12], (const void *)(a2 - v5), v13);
  v14 = v5 - v13;
  if ( v14 )
  {
    memmove(*(void **)(v3 + 64), (const void *)(a2 - v14), v14);
    *(_DWORD *)(v3 + 60) = v14;
    goto LABEL_8;
  }
  *(_DWORD *)(v3 + 60) += v13;
  v15 = *(_DWORD *)(v3 + 52);
  if ( *(_DWORD *)(v3 + 60) == v15 )
    *(_DWORD *)(v3 + 60) = 0;
  v16 = *(_DWORD *)(v3 + 56);
  if ( v16 >= v15 )
    return 0LL;
  v11 = v13 + v16;
LABEL_17:
  *(_DWORD *)(v3 + 56) = v11;
  return 0LL;
}
