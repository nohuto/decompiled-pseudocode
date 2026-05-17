/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x180050DD0
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhContextFree @ 0x18004F530 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x18004F7C0 (RtlpHpSegFreeInternal.c)
 *     RtlpCalculateSubsegmentSizeIndex @ 0x18004FC40 (RtlpCalculateSubsegmentSizeIndex.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180050038 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpSegSubAllocate @ 0x180051270 (RtlpHpSegSubAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180056980 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegVsAllocate @ 0x1800F3BA0 (RtlpHpSegVsAllocate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v31; // r11
  __int64 v32; // r8
  unsigned __int64 v33; // r8
  char v34; // cl
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  char v37; // r9
  int v38; // ecx
  unsigned int v39; // eax
  int v40; // r9d
  unsigned int v41; // r10d
  unsigned int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // r10
  __int64 (__fastcall *v45)(__int64, __int64); // rax
  unsigned __int64 v46; // rdx
  char v47; // cl
  unsigned __int64 v48; // r8
  __int64 v49; // r8
  unsigned __int64 v50; // r9
  signed __int32 v51[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v52; // [rsp+40h] [rbp-48h]
  int v53; // [rsp+90h] [rbp+8h] BYREF
  int v54; // [rsp+98h] [rbp+10h] BYREF
  int v55; // [rsp+A0h] [rbp+18h] BYREF
  int v56; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v53 = 0;
  v55 = 0;
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
    v39 = RtlpCalculateSubsegmentSizeIndex(v19);
    if ( v39 <= v41 )
      LOBYTE(v39) = v41;
    v42 = v40 << v39;
    if ( v21 > v42 )
      v21 = v42;
  }
  v22 = (__int64 (__fastcall *)())(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8));
  if ( v22 == RtlpHpSegLfhAllocate )
  {
    v23 = RtlpHpSegSubAllocate(*(_QWORD *)a1, v21, 0x8000000, (unsigned int)&v55, (__int64)&v53);
  }
  else
  {
    v43 = *(_QWORD *)a1;
    if ( (char *)v22 == (char *)RtlpHpSegVsAllocate )
      v23 = RtlpHpSegVsAllocate(v43, v21, &v55, &v53);
    else
      v23 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, int *))v22)(v43, v21, &v55, &v53);
  }
  v24 = v23;
  if ( !v23 )
    return 0LL;
  if ( a3 >= 1 || (v55 & 1) != 0 || (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v28 = v21;
  }
  else
  {
    v26 = 2 * v8;
    v52 = 0;
    if ( ((2 * v8 - 1) & (2 * v8)) != 0 )
    {
      _BitScanReverse(&v27, v26);
      v52 = v27;
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
  v54 = 0;
  if ( (char *)v30 == (char *)RtlpHpSegLfhVsCommit )
  {
    v31 = *(_QWORD *)v29;
    v32 = *(_QWORD *)v29;
    v56 = 0;
    v33 = v24 & v32;
    if ( RtlpHpHeapGlobals ^ v33 ^ *(_QWORD *)(v33 + 16) ^ v29
      || (v34 = *(_BYTE *)(v29 + 8),
          v35 = v33 + 32 * ((unsigned __int64)(unsigned int)(v24 - v33) >> v34),
          v36 = -32LL * *(unsigned __int8 *)(v35 + 26) + v35,
          v37 = *(_BYTE *)(v36 + 24),
          (v37 & 3) != 3)
      || v33 + ((__int64)(v36 - v33) >> 5 << v34) != v24 && (v37 & 0xCu) < 8 )
    {
      v36 = 0LL;
    }
    v38 = RtlpHpSegPageRangeCommit(
            v29,
            v36,
            ((_DWORD)v24
           - ((unsigned int)v36 & (unsigned int)v31)
           - (unsigned int)((__int64)(v36 - (v36 & v31)) >> 5 << *(_BYTE *)(v29 + 8))) >> 12,
            v28 >> 12,
            0,
            (__int64)&v56);
    if ( v38 >= 0 )
      v54 = v56 << 12;
  }
  else
  {
    v38 = v30(v29, v24, v28, &v54);
  }
  if ( v38 < 0 )
  {
    v44 = *(_QWORD *)a1;
    v45 = (__int64 (__fastcall *)(__int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16));
    if ( v45 == RtlpHpSegLfhVsFree )
    {
      v46 = *(_QWORD *)v44 & v24;
      if ( RtlpHpHeapGlobals ^ v44 ^ *(_QWORD *)(v46 + 0x10) ^ v46 )
      {
        RtlpLogHeapFailure(9, *(_QWORD *)(v44 + 56), v24, 0LL, 0LL, 0LL);
      }
      else
      {
        v47 = *(_BYTE *)(v44 + 8);
        v48 = v46 + 32 * ((unsigned __int64)(unsigned int)(v24 - v46) >> v47);
        v49 = -32LL * *(unsigned __int8 *)(v48 + 26) + v48;
        v50 = v46 + ((__int64)(v49 - v46) >> 5 << v47);
        if ( *(_BYTE *)(v49 + 24) + (v50 == v24) == 11 )
          RtlpHpLfhContextFree(*(_QWORD *)(v44 + 24), v50, v24);
        else
          RtlpHpSegFreeInternal(*(_QWORD *)a1, v24, v49, 0LL);
      }
      return 0LL;
    }
    ((void (__fastcall *)(_QWORD, unsigned __int64, _QWORD))v45)(*(_QWORD *)a1, v24, v21);
    return 0LL;
  }
  else
  {
    if ( !v54 )
      v3 = 1;
    RtlpHpLfhSubsegmentInitialize(v24, v21, v28, a3, a2, a1, v3);
    _InterlockedOr(v51, 0);
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 8);
    _InterlockedAdd64((volatile signed __int64 *)a2 + 7, *(unsigned __int16 *)(v24 + 34));
    return v24;
  }
}
