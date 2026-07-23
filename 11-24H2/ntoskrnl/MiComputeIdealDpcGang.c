/*
 * XREFs of MiComputeIdealDpcGang @ 0x14026F84C
 * Callers:
 *     MiInitializeDpcGang @ 0x14026F77C (MiInitializeDpcGang.c)
 * Callees:
 *     MiObtainParkedCoreMasks @ 0x14020D180 (MiObtainParkedCoreMasks.c)
 *     MiGetClosestNodeWithProcessors @ 0x14026FC80 (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveAffinity @ 0x14026FD20 (KeQueryNodeActiveAffinity.c)
 *     MiInitializeDpcGroupAffinity @ 0x140271B88 (MiInitializeDpcGroupAffinity.c)
 *     MiGetNextAffinityWalker @ 0x140271ED0 (MiGetNextAffinityWalker.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     KeQueryNodeActiveAffinity2 @ 0x140407C40 (KeQueryNodeActiveAffinity2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiComputeIdealDpcGang(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r14d
  __int64 v5; // rbx
  unsigned int ClosestNodeWithProcessors; // eax
  unsigned int v7; // edi
  _WORD *v8; // r12
  char *PoolMm; // r13
  char v10; // al
  int v11; // r12d
  __int64 v12; // rcx
  unsigned int *v13; // rax
  unsigned int v14; // r13d
  unsigned int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rcx
  void **v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // ecx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r8
  USHORT Count[4]; // [rsp+20h] [rbp-E0h] BYREF
  void **v27; // [rsp+28h] [rbp-D8h]
  int v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+38h] [rbp-C8h]
  __int128 v30; // [rsp+40h] [rbp-C0h]
  __int128 v31; // [rsp+50h] [rbp-B0h]
  __int128 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h] BYREF
  char v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h]
  _OWORD v37[23]; // [rsp+90h] [rbp-70h] BYREF

  v3 = 0;
  v28 = a3;
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
  v29 = *(_QWORD *)(384 * v5 + qword_140E2DC38 + 376);
  if ( (*(_DWORD *)(v29 + 36) & 1) != 0 )
  {
    *(_BYTE *)(a1 + 212) = 1;
    *v8 = word_140E2DC28;
    v27 = &Src;
    if ( (unsigned __int16)word_140E2DC28 <= 4u )
    {
      memmove((void *)(a1 + 232), Src, 16LL * (unsigned __int16)word_140E2DC28);
      goto LABEL_15;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 212) = 0;
    v29 = *(_QWORD *)(384LL * ClosestNodeWithProcessors + qword_140E2DC38 + 376);
    v27 = (void **)v29;
    if ( (int)KeQueryNodeActiveAffinity2(
                (unsigned __int16)ClosestNodeWithProcessors,
                a1 + 232,
                4LL,
                a1 + 214,
                *(_DWORD *)Count) >= 0 )
      goto LABEL_15;
  }
  PoolMm = (char *)ExAllocatePoolMm(0x40uLL, 32LL * (unsigned __int16)*v8);
  v10 = *(_BYTE *)(a1 + 212);
  if ( PoolMm )
  {
    if ( v10 )
      memmove(PoolMm, *v27, 16LL * *((unsigned __int16 *)v27 + 8));
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
    if ( v10 )
      *(_OWORD *)*(_QWORD *)(a1 + 216) = *(_OWORD *)*v27;
    else
      KeQueryNodeActiveAffinity(v7, *(PGROUP_AFFINITY *)(a1 + 216), Count);
  }
LABEL_15:
  v11 = 1;
  v12 = 1LL;
  v13 = (unsigned int *)(v29 + (~(_BYTE)v28 & 4 | 0x150LL));
  while ( 1 )
  {
    v14 = *v13;
    if ( *v13 )
      break;
    ++v11;
    ++v12;
    v13 += 42;
    if ( v12 >= 3 )
      goto LABEL_18;
  }
  memset_0(&BugCheckParameter2, 0, 0x178uLL);
  MiInitializeDpcGroupAffinity(
    *(_QWORD *)(a1 + 224),
    *(_QWORD *)(a1 + 216),
    *(unsigned __int16 *)(a1 + 214),
    (unsigned int)v11);
  LOWORD(v15) = *(_WORD *)(a1 + 214);
  v16 = 0;
  if ( (_WORD)v15 )
  {
    do
    {
      v17 = v16++;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + 16 * v17) = 0LL;
      v15 = *(unsigned __int16 *)(a1 + 214);
    }
    while ( v16 < v15 );
  }
  v36 = v11;
  v18 = 2LL * v11;
  LODWORD(v37[v18 + 17]) = (unsigned __int16)v15;
  *((_QWORD *)&v37[v18 + 17] + 1) = *(_QWORD *)(a1 + 224);
  v19 = v27;
  HIDWORD(v37[v18 + 16]) = 0;
  LODWORD(v37[v18 + 18]) = 0;
  DWORD2(v37[v18 + 16]) = v14;
  DWORD1(v37[v18 + 18]) = *((_DWORD *)v19 + 2);
  v35 = *(_BYTE *)(a1 + 212);
  LODWORD(BugCheckParameter2) = v7;
  HIDWORD(BugCheckParameter2) = v5;
  MiObtainParkedCoreMasks(v37, 0);
  v20 = 0;
  do
  {
    v30 = 0LL;
    v33 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    if ( (int)MiGetNextAffinityWalker((ULONG_PTR)&BugCheckParameter2) < 0 )
      break;
    v21 = 0;
    v22 = KiProcessorBlock[DWORD1(v30)];
    while ( v21 < *(unsigned __int16 *)(a1 + 214) )
    {
      v23 = *(_QWORD *)(a1 + 216);
      if ( *(unsigned __int8 *)(v22 + 208) == *(_WORD *)(v23 + 16LL * v21 + 8) )
      {
        *(_QWORD *)(v23 + 16LL * v21) |= *(_QWORD *)(v22 + 200);
        break;
      }
      ++v21;
    }
    if ( v21 == *(unsigned __int16 *)(a1 + 214) )
      break;
    ++v20;
  }
  while ( v20 < v14 );
  if ( !v20 )
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
      v24 = v3++;
      *(_QWORD *)(*(_QWORD *)(a1 + 224) + 16 * v24) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 16 * v24);
    }
    while ( v3 < *(unsigned __int16 *)(a1 + 214) );
  }
  return v20;
}
