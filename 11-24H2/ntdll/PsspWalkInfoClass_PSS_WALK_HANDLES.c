/*
 * XREFs of PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x1800BCAE0
 * Callers:
 *     PssNtWalkSnapshot @ 0x1800BC610 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspWalkInfoClass_PSS_WALK_HANDLES(__int64 a1, __int64 a2, _DWORD *a3)
{
  void *v4; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // ecx
  NTSTATUS result; // eax
  ULONG_PTR ViewSize; // [rsp+60h] [rbp+8h] BYREF

  ViewSize = 0LL;
  v4 = *(void **)(a1 + 976);
  if ( !v4 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*(_QWORD *)a2 )
  {
    result = ZwMapViewOfSection(
               v4,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)a2,
               0LL,
               0LL,
               0LL,
               &ViewSize,
               ViewShare,
               0,
               2u);
    if ( result < 0 )
      return result;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 >= *(_QWORD *)(a1 + 968) )
    return -2147483622;
  if ( !a3 )
    return 261;
  v8 = v7 + *(_QWORD *)a2;
  memset_thunk_772440563353939046(a3, 0, 0x48uLL);
  v9 = 16;
  *a3 = *(_DWORD *)v8;
  *((_BYTE *)a3 + 4) = *(_BYTE *)(v8 + 4);
  *((_BYTE *)a3 + 5) = *(_BYTE *)(v8 + 5);
  *((_QWORD *)a3 + 1) = *(_QWORD *)(v8 + 8);
  if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
  {
    v10 = *(unsigned __int16 *)(v8 + 16);
    *((_WORD *)a3 + 8) = v10;
    *((_QWORD *)a3 + 3) = v8 + 18;
    v9 = v10 + 18;
  }
  if ( (*(_BYTE *)(v8 + 4) & 2) != 0 )
  {
    v11 = v9;
    v12 = v9 + 2;
    v13 = *(unsigned __int16 *)(v11 + v8);
    *((_WORD *)a3 + 16) = v13;
    *((_QWORD *)a3 + 5) = v8 + v12;
    v9 = v13 + v12;
  }
  if ( (*(_BYTE *)(v8 + 4) & 4) != 0 )
  {
    *((_QWORD *)a3 + 6) = v8 + v9;
    v9 += 56;
  }
  if ( (*(_BYTE *)(v8 + 4) & 8) != 0 )
  {
    v14 = v9;
    v15 = v9 + 2;
    v16 = *(unsigned __int16 *)(v14 + v8);
    *((_WORD *)a3 + 28) = v16;
    *((_QWORD *)a3 + 8) = v8 + v15;
    v9 = v16 + v15;
  }
  *(_QWORD *)(a2 + 8) = v7 + v9;
  return 0;
}
