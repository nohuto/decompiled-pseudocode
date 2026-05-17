/*
 * XREFs of LdrpInitializeProcessHeap @ 0x1800A5FB8
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     RtlpHpLfhContextEnable @ 0x18011CDD8 (RtlpHpLfhContextEnable.c)
 *     NtOpenPartition @ 0x1801642A0 (NtOpenPartition.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeProcessHeap(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int *v16; // rdx
  __int64 Heap; // rax
  __int64 v18; // rbx
  int v19; // edi
  int v21; // eax
  unsigned int v22; // eax
  char v23; // [rsp+28h] [rbp-D8h]
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h]
  __int128 v27; // [rsp+70h] [rbp-90h]
  _DWORD v28[3]; // [rsp+80h] [rbp-80h] BYREF
  int v29; // [rsp+8Ch] [rbp-74h]
  int v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v33[20]; // [rsp+D4h] [rbp-2Ch] BYREF
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int64 v37; // [rsp+100h] [rbp+0h]

  v24 = 0LL;
  *(_QWORD *)&v27 = 0LL;
  DWORD2(v27) = 0;
  v25 = 0LL;
  v26 = 0LL;
  memset_thunk_772440563353939046(v28, 0, 0x50uLL);
  memset_thunk_772440563353939046(v33, 0, 0x5CuLL);
  v32 = 96;
  v8 = 2;
  if ( !a1 )
    goto LABEL_19;
  if ( *(_DWORD *)a1 >= 0x4Cu )
  {
    v9 = *(_DWORD *)(a1 + 72);
    if ( v9 )
    {
      v22 = v9 & 0xFFFF0FFF;
      if ( v22 )
        v8 = v22;
    }
    goto LABEL_4;
  }
  if ( *(_DWORD *)a1 >= 0x20u )
  {
LABEL_4:
    v10 = v34;
    if ( *(_QWORD *)(a1 + 24) )
      v10 = *(_QWORD *)(a1 + 24);
    v34 = v10;
  }
  if ( *(_DWORD *)a1 >= 0x28u )
  {
    v11 = v35;
    if ( *(_QWORD *)(a1 + 32) )
      v11 = *(_QWORD *)(a1 + 32);
    v35 = v11;
  }
  if ( *(_DWORD *)a1 >= 0x38u )
  {
    v12 = v36;
    if ( *(_QWORD *)(a1 + 48) )
      v12 = *(_QWORD *)(a1 + 48);
    v36 = v12;
  }
  if ( *(_DWORD *)a1 >= 0x40u )
  {
    v13 = v37;
    if ( *(_QWORD *)(a1 + 56) )
      v13 = *(_QWORD *)(a1 + 56);
    v37 = v13;
  }
LABEL_19:
  LODWORD(v14) = 0;
  v15 = 0LL;
  if ( a2 )
  {
    v14 = *(_QWORD *)(a2 + 112);
    v15 = *(_QWORD *)(a2 + 120);
  }
  v16 = &v32;
  if ( qword_1801D29A8
    || (LdrpHeapPartitionName = *(_OWORD *)(a3 + 1056), _mm_srli_si128(LdrpHeapPartitionName, 8).m128i_u64[0]) )
  {
    *((_QWORD *)&v25 + 1) = 0LL;
    DWORD2(v26) = 0;
    *(_QWORD *)&v26 = &LdrpHeapPartitionName;
    LODWORD(v25) = 48;
    v27 = 0LL;
    v19 = NtOpenPartition(&v24, 2031619LL, &v25, v15);
    if ( v19 < 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrinit.c",
        9274,
        (__int64)"LdrpInitializeProcessHeap",
        0,
        "Cannot open partition.",
        v23);
      return (unsigned int)v19;
    }
    if ( *(_DWORD *)(a3 + 1088) )
    {
      v21 = *(_DWORD *)(a3 + 1088) & 0x1C;
      if ( !v21 )
      {
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrinit.c",
          9289,
          (__int64)"LdrpInitializeProcessHeap",
          0,
          "Invalid partition heap page types.",
          v23);
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      v21 = 8;
    }
    v30 = -1;
    LODWORD(v14) = 0;
    v29 = v21;
    LODWORD(v15) = 0;
    v31 = v24;
    goto LABEL_25;
  }
  if ( (RtlpHpHeapFeatures & 1) != 0 )
  {
    v30 = -1;
    v29 = 1;
LABEL_25:
    v16 = v28;
    v28[1] = 2;
    v28[0] = 5242883;
    v8 = 258;
  }
  if ( UseWOW64 || *(_WORD *)(a2 + 24) == 267 )
  {
    LODWORD(v14) = 0;
    LODWORD(v15) = 0;
  }
  else if ( *(_WORD *)(a2 + 72) <= 3u && *(_WORD *)(a2 + 74) < 0x33u )
  {
    v8 |= 0x10000u;
  }
  Heap = RtlpCreateHeap(v8, 0, v14, v15, 0LL, (__int64)v16, 0);
  v18 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  *a4 = Heap;
  if ( *(_DWORD *)(Heap + 16) != -571548178 )
    return 0;
  if ( (*(_DWORD *)(Heap + 20) & 0x400000) == 0 )
    NT_ASSERT("Heap->GlobalFlags & 0x00400000");
  v19 = RtlpHpLfhContextEnable(Heap + 832, &qword_1801D21F8);
  if ( v19 >= 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v18 + 20), 0xFFBFFFFF);
    return 0;
  }
  return (unsigned int)v19;
}
