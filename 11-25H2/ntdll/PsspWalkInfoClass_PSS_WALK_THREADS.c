/*
 * XREFs of PsspWalkInfoClass_PSS_WALK_THREADS @ 0x1800C9E54
 * Callers:
 *     PssNtWalkSnapshot @ 0x1800C9800 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspWalkInfoClass_PSS_WALK_THREADS(__int64 a1, __int64 a2, _OWORD *a3)
{
  void *v4; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  unsigned int v9; // ecx
  NTSTATUS result; // eax
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(void **)(a1 + 1008);
  ViewSize = 0LL;
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
  if ( v7 >= *(_QWORD *)(a1 + 1000) )
    return -2147483622;
  if ( !a3 )
    return 261;
  v8 = v7 + *(_QWORD *)a2;
  memset_thunk_772440563353939046(a3, 0, 0x90uLL);
  v9 = 128;
  *a3 = *(_OWORD *)v8;
  a3[1] = *(_OWORD *)(v8 + 16);
  a3[2] = *(_OWORD *)(v8 + 32);
  a3[3] = *(_OWORD *)(v8 + 48);
  *((_QWORD *)a3 + 8) = *(_QWORD *)(v8 + 64);
  *(_OWORD *)((char *)a3 + 72) = *(_OWORD *)(v8 + 72);
  *(_OWORD *)((char *)a3 + 88) = *(_OWORD *)(v8 + 88);
  *((_QWORD *)a3 + 13) = *(_QWORD *)(v8 + 104);
  *((_QWORD *)a3 + 14) = *(_QWORD *)(v8 + 112);
  *((_WORD *)a3 + 65) = *(_WORD *)(v8 + 122);
  *((_WORD *)a3 + 66) = *(_WORD *)(v8 + 124);
  if ( *(_WORD *)(v8 + 124) >= 2u )
  {
    *((_QWORD *)a3 + 17) = v8 + 128;
    v9 = (((*(unsigned __int16 *)(v8 + 124) >> 1) + 15) & 0xFFFFFFF0) + 128;
  }
  if ( *(_WORD *)(v8 + 120) )
  {
    *((_QWORD *)a3 + 15) = v8 + v9;
    *((_WORD *)a3 + 64) = *(_WORD *)(v8 + 120);
    v9 += (*(unsigned __int16 *)(v8 + 120) + 15) & 0xFFFFFFF0;
  }
  *(_QWORD *)(a2 + 8) = v7 + v9;
  return 0;
}
