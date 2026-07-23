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
  __int64 (__fastcall *v12)(int, __int64, __int64, _DWORD *); // rax
  int v13; // eax
  unsigned __int64 v14; // rax
  __int16 v15; // cx
  unsigned __int64 v16; // r8
  unsigned __int64 result; // rax
  char v18; // cl
  unsigned __int64 v19; // r11
  __int64 v20; // r11
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r10
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  unsigned __int64 v24; // r8
  int v25; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+18h]
  int v28; // [rsp+88h] [rbp+20h] BYREF

  v2 = (unsigned int)(32 * a2 + 48);
  v26 = 0;
  v3 = (16 * a2 + 4143) & 0xFFFFF000;
  v25 = 0;
  v27 = 0;
  if ( ((32 * a2 + 47) & (unsigned int)v2) != 0 )
  {
    _BitScanReverse(&v5, v2);
    v27 = v5;
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
      v8 = RtlpHpSegSubAllocate(v6, v2, 0x8000000, (unsigned int)&v25, (__int64)&v26);
    else
      v8 = (char *)v7 == (char *)RtlpHpSegVsAllocate
         ? RtlpHpSegVsAllocate(v6, (unsigned int)v2, &v25, &v26)
         : ((__int64 (__fastcall *)(__int64, _QWORD, int *, unsigned int *))v7)(v6, (unsigned int)v2, &v25, &v26);
    v9 = v8;
    if ( v8 )
      break;
    v2 = v26;
    if ( v26 < v3 )
      return 0LL;
  }
  v10 = 4096;
  if ( (v25 & 1) != 0 )
    v10 = v2;
  v11 = *(_QWORD *)(a1 + 8) ^ a1;
  v12 = (__int64 (__fastcall *)(int, __int64, __int64, _DWORD *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32));
  if ( v12 == RtlpHpSegLfhVsCommit )
  {
    v28 = 0;
    v13 = RtlpHpSegPageRangeCommit(v11, 0, (__int64)&v28);
  }
  else
  {
    v13 = v12(*(_QWORD *)(a1 + 8) ^ a1, v9, v10, 0LL);
  }
  if ( v13 < 0 )
  {
    v22 = *(_QWORD *)(a1 + 8) ^ a1;
    v23 = (__int64 (__fastcall *)(__int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
    if ( v23 == RtlpHpSegLfhVsFree )
    {
      v24 = *(_QWORD *)v22 & v9;
      if ( RtlpHpHeapGlobals ^ v22 ^ *(_QWORD *)(v24 + 0x10) ^ v24 )
      {
        RtlpLogHeapFailure(9, *(_QWORD *)((*(_QWORD *)(a1 + 8) ^ a1) + 0x38), v9, 0, 0LL, 0LL);
      }
      else
      {
        v18 = *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 8);
        v19 = v24 + 32 * ((unsigned __int64)(unsigned int)(v9 - v24) >> v18);
        v20 = -32LL * *(unsigned __int8 *)(v19 + 26) + v19;
        v21 = v24 + ((__int64)(v20 - v24) >> 5 << v18);
        if ( *(_BYTE *)(v20 + 24) + (v21 == v9) == 11 )
          RtlpHpLfhContextFree(*(_QWORD *)((*(_QWORD *)(a1 + 8) ^ a1) + 0x18), v21, v9);
        else
          RtlpHpSegFreeInternal(*(_QWORD *)(a1 + 8) ^ a1, v9, v20, 0LL);
      }
      return 0LL;
    }
    else
    {
      ((void (__fastcall *)(__int64, unsigned __int64, _QWORD))v23)(*(_QWORD *)(a1 + 8) ^ a1, v9, (unsigned int)v2);
      return 0LL;
    }
  }
  else
  {
    v14 = (unsigned __int64)v10 >> 12;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 80), v14);
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_DWORD *)(v9 + 34) = 0;
    *(_WORD *)(v9 + 38) = 0;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 16) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v14);
    v15 = 0;
    v16 = (unsigned __int64)(v2 - 48) >> 4;
    *(_WORD *)(v9 + 32) = v16;
    if ( v10 == (_DWORD)v2 )
      v15 = 0x8000;
    result = v9;
    *(_WORD *)(v9 + 36) = (v16 ^ 0x2BED) & 0x7FFF | v15;
    *(_OWORD *)(v9 + 48) = 0LL;
    *(_DWORD *)(v9 + 50) = (unsigned __int16)v16;
    *(_QWORD *)(v9 + 48) ^= (v9 + 48) ^ RtlpHpHeapGlobals;
  }
  return result;
}
