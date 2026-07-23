/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x1800669B0
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhContextFree @ 0x180065110 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x1800653A0 (RtlpHpSegFreeInternal.c)
 *     RtlpCalculateSubsegmentSizeIndex @ 0x180065820 (RtlpCalculateSubsegmentSizeIndex.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180065C18 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpSegSubAllocate @ 0x180066E50 (RtlpHpSegSubAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x18006C560 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegVsAllocate @ 0x1800EE0C0 (RtlpHpSegVsAllocate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v3; // edi
  unsigned int v7; // r8d
  unsigned int v8; // r12d
  unsigned int v9; // eax
  unsigned int v10; // eax
  bool v11; // r8
  char v12; // dl
  char v13; // r8
  char v14; // dl
  unsigned int v15; // edx
  int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // r8d
  int v20; // r9d
  unsigned int v21; // r14d
  __int64 (__fastcall *v22)(); // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // r12d
  __int64 v29; // r10
  __int64 (__fastcall *v30)(__int64, unsigned __int64, _QWORD, int *); // rax
  int v31; // ecx
  unsigned int v32; // eax
  int v33; // r9d
  unsigned int v34; // r10d
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r10
  __int64 (__fastcall *v38)(__int64, __int64); // rax
  unsigned __int64 v39; // rdx
  char v40; // cl
  unsigned __int64 v41; // r8
  __int64 v42; // r8
  unsigned __int64 v43; // r9
  signed __int32 v44[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+40h] [rbp-48h]
  int v46; // [rsp+90h] [rbp+8h] BYREF
  int v47; // [rsp+98h] [rbp+10h] BYREF
  int v48; // [rsp+A0h] [rbp+18h] BYREF
  int v49; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v46 = 0;
  v48 = 0;
  v7 = a2[1];
  v8 = (unsigned __int16)RtlpBucketBlockSizes[(*a2 >> 1) + 1];
  v9 = -1;
  if ( *((_QWORD *)a2 + 7) < 0xFFFFFFFFuLL )
    v9 = *((_QWORD *)a2 + 7);
  if ( a3 >= 1 )
    v10 = v9 >> (((unsigned int)RtlpHpLfhPerfFlags >> 12) & 3);
  else
    v10 = (v9 >> 3) / v7;
  v11 = v7 > 1;
  v12 = v11 - 1;
  if ( v8 >= 0x100 )
    v12 = v11;
  v13 = v12;
  v14 = v12 - 1;
  if ( !*((_QWORD *)a2 + 8) )
    v14 = v13;
  v15 = 1 << (3 - v14);
  if ( v10 >= v15 )
    v15 = v10;
  if ( v15 < 4 )
  {
    v15 = 4;
  }
  else if ( v15 > 0x400 )
  {
    v15 = 1024;
  }
  v16 = (8 * (((unsigned __int64)v15 + 31) >> 5) + 79) & 0xFFFFFFF0;
  v17 = RtlpCalculateSubsegmentSizeIndex(v16 + 2 * ((v16 + v8 * v15 + 4095) >> 12) + v8 * v15);
  if ( v17 <= 0xC )
    LOBYTE(v17) = 12;
  v21 = v20 << v17;
  if ( v18 <= v19 >> 6 )
  {
    v32 = RtlpCalculateSubsegmentSizeIndex(v19);
    if ( v32 <= v34 )
      LOBYTE(v32) = v34;
    v35 = v33 << v32;
    if ( v21 > v35 )
      v21 = v35;
  }
  v22 = (__int64 (__fastcall *)())(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8));
  if ( v22 == RtlpHpSegLfhAllocate )
  {
    v23 = RtlpHpSegSubAllocate(*(_QWORD *)a1, v21, 0x8000000, (unsigned int)&v48, (__int64)&v46);
  }
  else
  {
    v36 = *(_QWORD *)a1;
    if ( (char *)v22 == (char *)RtlpHpSegVsAllocate )
      v23 = RtlpHpSegVsAllocate(v36, v21, &v48, &v46);
    else
      v23 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, int *))v22)(v36, v21, &v48, &v46);
  }
  v24 = v23;
  if ( !v23 )
    return 0LL;
  if ( a3 >= 1 || (v48 & 1) != 0 || (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v28 = v21;
  }
  else
  {
    v26 = 2 * v8;
    v45 = 0;
    if ( ((2 * v8 - 1) & (2 * v8)) != 0 )
    {
      _BitScanReverse(&v27, v26);
      v45 = v27;
      v26 = 1 << (v27 + 1);
    }
    v28 = v21;
    if ( v26 <= 0x1000 )
      v26 = 4096;
    if ( v26 <= v21 >> 6 )
      v26 = v21 >> 6;
    if ( v26 < v21 )
      v28 = v26;
  }
  v29 = *(_QWORD *)a1;
  v30 = (__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
  v47 = 0;
  if ( (char *)v30 == (char *)RtlpHpSegLfhVsCommit )
  {
    v49 = 0;
    v31 = RtlpHpSegPageRangeCommit(v29, 0, (__int64)&v49);
    if ( v31 >= 0 )
      v47 = v49 << 12;
  }
  else
  {
    v31 = v30(v29, v24, v28, &v47);
  }
  if ( v31 < 0 )
  {
    v37 = *(_QWORD *)a1;
    v38 = (__int64 (__fastcall *)(__int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16));
    if ( v38 == RtlpHpSegLfhVsFree )
    {
      v39 = *(_QWORD *)v37 & v24;
      if ( RtlpHpHeapGlobals ^ v37 ^ *(_QWORD *)(v39 + 0x10) ^ v39 )
      {
        RtlpLogHeapFailure(9, *(_QWORD *)(v37 + 56), v24, 0LL, 0LL, 0LL);
      }
      else
      {
        v40 = *(_BYTE *)(v37 + 8);
        v41 = v39 + 32 * ((unsigned __int64)(unsigned int)(v24 - v39) >> v40);
        v42 = -32LL * *(unsigned __int8 *)(v41 + 26) + v41;
        v43 = v39 + ((__int64)(v42 - v39) >> 5 << v40);
        if ( *(_BYTE *)(v42 + 24) + (v43 == v24) == 11 )
          RtlpHpLfhContextFree(*(_QWORD *)(v37 + 24), v43, v24);
        else
          RtlpHpSegFreeInternal(*(_QWORD *)a1, v24, v42, 0LL);
      }
      return 0LL;
    }
    ((void (__fastcall *)(_QWORD, unsigned __int64, _QWORD))v38)(*(_QWORD *)a1, v24, v21);
    return 0LL;
  }
  else
  {
    if ( !v47 )
      v3 = 1;
    RtlpHpLfhSubsegmentInitialize(v24, v21, v28, a3, a2, a1, v3);
    _InterlockedOr(v44, 0);
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 8);
    _InterlockedAdd64((volatile signed __int64 *)a2 + 7, *(unsigned __int16 *)(v24 + 34));
    return v24;
  }
}
