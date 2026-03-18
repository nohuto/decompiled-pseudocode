/*
 * XREFs of ?CoalesceWindowAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D2780
 * Callers:
 *     ?PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D36A8 (-PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall AdvancedWindowPos::CoalesceWindowAction(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        const struct AdvancedWindowPos::WindowAction *a3)
{
  int v3; // r11d
  __int64 v5; // rdx
  int *v6; // rdx
  int v7; // ecx
  int v8; // r10d
  int v9; // ebx

  v3 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0xFFFFFFE0) != 0 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 18) + 472LL) + 32LL);
  if ( !v5 )
    return 0;
  if ( *(_DWORD *)(v5 + 96) != 28 )
    return 0;
  if ( *(_QWORD *)(v5 + 16) != *(_QWORD *)this )
    return 0;
  v6 = *(int **)(v5 + 40);
  v7 = *v6;
  if ( (*v6 & 0xFFFFFFE0) != 0 )
    return 0;
  if ( *((_QWORD *)a2 + 21) != *((_QWORD *)v6 + 21) )
    return 0;
  v8 = v6[1];
  v9 = *((_DWORD *)a2 + 1);
  if ( ((v9 ^ v8) & 0x200) != 0
    || ((unsigned __int8)v3 & (unsigned __int8)v7 & 0x10) != 0 && (((unsigned __int8)v9 ^ (unsigned __int8)v8) & 4) != 0 )
  {
    return 0;
  }
  if ( ((unsigned __int8)v3 & (unsigned __int8)v7 & 8) != 0 && (((unsigned __int8)v9 ^ (unsigned __int8)v8) & 8) != 0 )
    return 0;
  if ( (v3 & 2) != 0 )
  {
    v7 |= 2u;
    *v6 = v7;
    *(_QWORD *)(v6 + 3) = *(_QWORD *)((char *)a2 + 12);
  }
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    v7 |= 4u;
    *v6 = v7;
    *(_QWORD *)(v6 + 5) = *(_QWORD *)((char *)a2 + 20);
  }
  if ( (*(_DWORD *)a2 & 0x10) != 0 )
  {
    v7 |= 0x10u;
    *v6 = v7;
    if ( (*((_DWORD *)a2 + 1) & 4) != 0 )
      v6[1] |= 4u;
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v7 |= 1u;
    *v6 = v7;
    *((_BYTE *)v6 + 8) = *((_BYTE *)a2 + 8);
  }
  if ( (*(_DWORD *)a2 & 8) != 0 )
  {
    *v6 = v7 | 8;
    *((_QWORD *)v6 + 4) = *((_QWORD *)a2 + 4);
    if ( (*((_DWORD *)a2 + 1) & 8) != 0 )
      v6[1] |= 8u;
  }
  return 1;
}
