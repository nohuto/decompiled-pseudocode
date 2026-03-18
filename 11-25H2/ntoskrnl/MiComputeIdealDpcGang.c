/*
 * XREFs of MiComputeIdealDpcGang @ 0x1404B9CCC
 * Callers:
 *     MiInitializeDpcGang @ 0x1404B9BFC (MiInitializeDpcGang.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140267660 (KeQueryNodeActiveAffinity.c)
 *     ExAllocatePoolMm @ 0x1402DA890 (ExAllocatePoolMm.c)
 *     MiObtainParkedCoreMasks @ 0x14032375C (MiObtainParkedCoreMasks.c)
 *     MiInitializeDpcGroupAffinity @ 0x140418780 (MiInitializeDpcGroupAffinity.c)
 *     MiGetNextAffinityWalker @ 0x140418ACC (MiGetNextAffinityWalker.c)
 *     MiGetClosestNodeWithProcessors @ 0x1404BA100 (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveAffinity2 @ 0x1404CCA50 (KeQueryNodeActiveAffinity2.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiComputeIdealDpcGang(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r14d
  __int64 v5; // rbx
  unsigned int ClosestNodeWithProcessors; // eax
  unsigned int v7; // edi
  _WORD *v8; // r12
  ULONG_PTR v9; // r9
  char *PoolMm; // r13
  char v11; // al
  int v12; // r12d
  __int64 v13; // rcx
  unsigned int *v14; // rax
  unsigned int v15; // r13d
  unsigned int v16; // eax
  unsigned int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // rcx
  void **v20; // rax
  unsigned int v21; // edi
  unsigned int v22; // ecx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r8
  USHORT Count[4]; // [rsp+20h] [rbp-E0h] BYREF
  void **v28; // [rsp+28h] [rbp-D8h]
  int v29; // [rsp+30h] [rbp-D0h]
  __int64 v30; // [rsp+38h] [rbp-C8h]
  _OWORD v31[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h] BYREF
  char v34; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+8Ch] [rbp-74h]
  _OWORD v36[23]; // [rsp+90h] [rbp-70h] BYREF

  v3 = 0;
  v29 = a3;
  Count[0] = 0;
  v5 = a2;
  if ( KeGetCurrentIrql() >= 2u || (a3 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 196) = a2;
    *(_DWORD *)(a1 + 188) = 1;
LABEL_35:
    *(_DWORD *)(a1 + 192) = MiGetClosestNodeWithProcessors((unsigned int)v5);
    return 1LL;
  }
  ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(a2);
  v7 = ClosestNodeWithProcessors;
  *(_DWORD *)(a1 + 192) = ClosestNodeWithProcessors;
  *(_DWORD *)(a1 + 196) = v5;
  *(_QWORD *)(a1 + 216) = a1 + 232;
  *(_QWORD *)(a1 + 224) = a1 + 296;
  v8 = (_WORD *)(a1 + 214);
  v30 = *(_QWORD *)(384 * v5 + qword_140E2D8B8 + 376);
  if ( (*(_DWORD *)(v30 + 36) & 1) != 0 )
  {
    *(_BYTE *)(a1 + 212) = 1;
    *v8 = word_140E2D8A8;
    v28 = &qword_140E2D898;
    if ( (unsigned __int16)word_140E2D8A8 <= 4u )
    {
      memmove((void *)(a1 + 232), qword_140E2D898, 16LL * (unsigned __int16)word_140E2D8A8);
      goto LABEL_15;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 212) = 0;
    v30 = *(_QWORD *)(384LL * ClosestNodeWithProcessors + qword_140E2D8B8 + 376);
    v28 = (void **)v30;
    if ( (int)KeQueryNodeActiveAffinity2(
                (unsigned __int16)ClosestNodeWithProcessors,
                a1 + 232,
                4LL,
                a1 + 214,
                *(_DWORD *)Count) >= 0 )
      goto LABEL_15;
  }
  v9 = v7;
  LODWORD(v9) = v7 | 0x80000000;
  PoolMm = (char *)ExAllocatePoolMm(0x40uLL, 32LL * (unsigned __int16)*v8, 1632069965, v9);
  v11 = *(_BYTE *)(a1 + 212);
  if ( PoolMm )
  {
    if ( v11 )
      memmove(PoolMm, *v28, 16LL * *((unsigned __int16 *)v28 + 8));
    else
      ((void (__fastcall *)(_QWORD, char *, _QWORD, USHORT *))KeQueryNodeActiveAffinity2)(
        (unsigned __int16)v7,
        PoolMm,
        (unsigned __int16)*v8,
        Count);
    *(_QWORD *)(a1 + 216) = PoolMm;
    *(_QWORD *)(a1 + 224) = &PoolMm[16 * (unsigned __int16)*v8];
  }
  else
  {
    *v8 = 1;
    if ( v11 )
      *(_OWORD *)*(_QWORD *)(a1 + 216) = *(_OWORD *)*v28;
    else
      KeQueryNodeActiveAffinity(v7, *(PGROUP_AFFINITY *)(a1 + 216), Count);
  }
LABEL_15:
  v12 = 1;
  v13 = 1LL;
  v14 = (unsigned int *)(v30 + (~(_BYTE)v29 & 4 | 0x150LL));
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 )
      break;
    ++v12;
    ++v13;
    v14 += 42;
    if ( v13 >= 3 )
      goto LABEL_18;
  }
  memset_0(&BugCheckParameter2, 0, 0x178uLL);
  MiInitializeDpcGroupAffinity(*(_OWORD **)(a1 + 224), *(_QWORD *)(a1 + 216), *(unsigned __int16 *)(a1 + 214), v12);
  LOWORD(v16) = *(_WORD *)(a1 + 214);
  v17 = 0;
  if ( (_WORD)v16 )
  {
    do
    {
      v18 = v17++;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + 16 * v18) = 0LL;
      v16 = *(unsigned __int16 *)(a1 + 214);
    }
    while ( v17 < v16 );
  }
  v35 = v12;
  v19 = 2LL * v12;
  LODWORD(v36[v19 + 17]) = (unsigned __int16)v16;
  *((_QWORD *)&v36[v19 + 17] + 1) = *(_QWORD *)(a1 + 224);
  v20 = v28;
  HIDWORD(v36[v19 + 16]) = 0;
  LODWORD(v36[v19 + 18]) = 0;
  DWORD2(v36[v19 + 16]) = v15;
  DWORD1(v36[v19 + 18]) = *((_DWORD *)v20 + 2);
  v34 = *(_BYTE *)(a1 + 212);
  LODWORD(BugCheckParameter2) = v7;
  HIDWORD(BugCheckParameter2) = v5;
  MiObtainParkedCoreMasks(v36, 0);
  v21 = 0;
  do
  {
    memset(v31, 0, sizeof(v31));
    v32 = 0LL;
    if ( (int)MiGetNextAffinityWalker((ULONG_PTR)&BugCheckParameter2, (__int64)v31) < 0 )
      break;
    v22 = 0;
    v23 = KiProcessorBlock[DWORD1(v31[0])];
    while ( v22 < *(unsigned __int16 *)(a1 + 214) )
    {
      v24 = *(_QWORD *)(a1 + 216);
      if ( *(unsigned __int8 *)(v23 + 208) == *(_WORD *)(v24 + 16LL * v22 + 8) )
      {
        *(_QWORD *)(v24 + 16LL * v22) |= *(_QWORD *)(v23 + 200);
        break;
      }
      ++v22;
    }
    if ( v22 == *(unsigned __int16 *)(a1 + 214) )
      break;
    ++v21;
  }
  while ( v21 < v15 );
  if ( !v21 )
  {
LABEL_18:
    *(_DWORD *)(a1 + 188) = 1;
    *(_DWORD *)(a1 + 196) = v5;
    goto LABEL_35;
  }
  if ( *(_WORD *)(a1 + 214) )
  {
    do
    {
      v25 = v3++;
      *(_QWORD *)(*(_QWORD *)(a1 + 224) + 16 * v25) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 16 * v25);
    }
    while ( v3 < *(unsigned __int16 *)(a1 + 214) );
  }
  return v21;
}
