/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x18000B8C0
 * Callers:
 *     RtlpHpVsSlotAllocate @ 0x18011C9B8 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhContextFree @ 0x18000B170 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x18000B400 (RtlpHpSegFreeInternal.c)
 *     RtlpHpSegSubAllocate @ 0x18000CEB0 (RtlpHpSegSubAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x1800125C0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpHpSegVsAllocate @ 0x1800F5930 (RtlpHpSegVsAllocate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r14d
  unsigned int v5; // ecx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned int v10; // r14d
  __int64 v11; // r11
  __int64 (__fastcall *v12)(__int64 *, __int64, unsigned int, _DWORD *); // rax
  __int64 v13; // r15
  __int64 v14; // r8
  unsigned __int64 v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r9
  int v20; // eax
  unsigned __int64 v21; // rax
  __int16 v22; // cx
  unsigned __int64 v23; // r8
  unsigned __int64 result; // rax
  char v25; // cl
  unsigned __int64 v26; // r11
  __int64 v27; // r11
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r10
  __int64 (__fastcall *v30)(__int64, __int64); // rax
  unsigned __int64 v31; // r8
  int v32; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v33; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+80h] [rbp+18h]
  int v35; // [rsp+88h] [rbp+20h] BYREF

  v2 = (unsigned int)(32 * a2 + 48);
  v33 = 0;
  v3 = (16 * a2 + 4143) & 0xFFFFF000;
  v32 = 0;
  v34 = 0;
  if ( ((32 * a2 + 47) & (unsigned int)v2) != 0 )
  {
    _BitScanReverse(&v5, v2);
    v34 = v5;
    v2 = (unsigned int)(1 << (v5 + 1));
  }
  if ( (unsigned int)v2 <= 0x10000 )
  {
    v2 = 0x10000LL;
  }
  else if ( (unsigned int)v2 >= 0x40000 )
  {
    v2 = 0x40000LL;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 8) ^ a1;
    v7 = (__int64 (__fastcall *)())(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16));
    if ( v7 == RtlpHpSegLfhAllocate )
      v8 = RtlpHpSegSubAllocate(v6, v2, 0x8000000, (unsigned int)&v32, (__int64)&v33);
    else
      v8 = (char *)v7 == (char *)RtlpHpSegVsAllocate
         ? RtlpHpSegVsAllocate(v6, (unsigned int)v2, &v32, &v33)
         : ((__int64 (__fastcall *)(__int64, _QWORD, int *, unsigned int *))v7)(v6, (unsigned int)v2, &v32, &v33);
    v9 = v8;
    if ( v8 )
      break;
    v2 = v33;
    if ( v33 < v3 )
      return 0LL;
  }
  v10 = 4096;
  if ( (v32 & 1) != 0 )
    v10 = v2;
  v11 = *(_QWORD *)(a1 + 8) ^ a1;
  v12 = (__int64 (__fastcall *)(__int64 *, __int64, unsigned int, _DWORD *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32));
  if ( v12 == RtlpHpSegLfhVsCommit )
  {
    v13 = *(_QWORD *)v11;
    v14 = *(_QWORD *)v11;
    v35 = 0;
    v15 = v9 & v14;
    if ( RtlpHpHeapGlobals ^ v11 ^ *(_QWORD *)(v15 + 16) ^ v15
      || (v16 = *(_BYTE *)(v11 + 8),
          v17 = v15 + 32 * ((unsigned __int64)(unsigned int)(v9 - v15) >> v16),
          v18 = -32LL * *(unsigned __int8 *)(v17 + 26) + v17,
          v19 = *(_BYTE *)(v18 + 24),
          (v19 & 3) != 3)
      || v15 + ((__int64)(v18 - v15) >> 5 << v16) != v9 && (v19 & 0xCu) < 8 )
    {
      v18 = 0LL;
    }
    v20 = RtlpHpSegPageRangeCommit(
            v11,
            v18,
            ((_DWORD)v9
           - ((unsigned int)v13 & (unsigned int)v18)
           - (unsigned int)((__int64)(v18 - (v13 & v18)) >> 5 << *(_BYTE *)(v11 + 8))) >> 12,
            v10 >> 12,
            0,
            (__int64)&v35);
  }
  else
  {
    v20 = v12((__int64 *)(*(_QWORD *)(a1 + 8) ^ a1), v9, v10, 0LL);
  }
  if ( v20 < 0 )
  {
    v29 = *(_QWORD *)(a1 + 8) ^ a1;
    v30 = (__int64 (__fastcall *)(__int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
    if ( v30 == RtlpHpSegLfhVsFree )
    {
      v31 = *(_QWORD *)v29 & v9;
      if ( RtlpHpHeapGlobals ^ v29 ^ *(_QWORD *)(v31 + 0x10) ^ v31 )
      {
        RtlpLogHeapFailure(9, *(_QWORD *)((*(_QWORD *)(a1 + 8) ^ a1) + 0x38), v9, 0, 0LL, 0LL);
      }
      else
      {
        v25 = *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 8);
        v26 = v31 + 32 * ((unsigned __int64)(unsigned int)(v9 - v31) >> v25);
        v27 = -32LL * *(unsigned __int8 *)(v26 + 26) + v26;
        v28 = v31 + ((__int64)(v27 - v31) >> 5 << v25);
        if ( *(_BYTE *)(v27 + 24) + (v28 == v9) == 11 )
          RtlpHpLfhContextFree(*(_QWORD *)((*(_QWORD *)(a1 + 8) ^ a1) + 0x18), v28, v9);
        else
          RtlpHpSegFreeInternal(*(_QWORD *)(a1 + 8) ^ a1, v9, v27, 0LL);
      }
      return 0LL;
    }
    else
    {
      ((void (__fastcall *)(__int64, unsigned __int64, _QWORD))v30)(*(_QWORD *)(a1 + 8) ^ a1, v9, (unsigned int)v2);
      return 0LL;
    }
  }
  else
  {
    v21 = (unsigned __int64)v10 >> 12;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 80), v21);
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_DWORD *)(v9 + 34) = 0;
    *(_WORD *)(v9 + 38) = 0;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 16) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v21);
    v22 = 0;
    v23 = (unsigned __int64)(v2 - 48) >> 4;
    *(_WORD *)(v9 + 32) = v23;
    if ( v10 == (_DWORD)v2 )
      v22 = 0x8000;
    result = v9;
    *(_WORD *)(v9 + 36) = (v23 ^ 0x2BED) & 0x7FFF | v22;
    *(_OWORD *)(v9 + 48) = 0LL;
    *(_DWORD *)(v9 + 50) = (unsigned __int16)v23;
    *(_QWORD *)(v9 + 48) ^= (v9 + 48) ^ RtlpHpHeapGlobals;
  }
  return result;
}
