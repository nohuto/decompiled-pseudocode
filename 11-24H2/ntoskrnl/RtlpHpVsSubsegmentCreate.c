/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x140367D08
 * Callers:
 *     RtlpHpVsSlotAllocate @ 0x140367A10 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlpHpSegLfhVsFree @ 0x14035CC90 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpSegLfhVsCommit @ 0x140360A10 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegVsAllocate @ 0x1403681F0 (RtlpHpSegVsAllocate.c)
 *     RtlpHpVsSubsegmentInitialize @ 0x140368400 (RtlpHpVsSubsegmentInitialize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG_PTR __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v3; // r14d
  unsigned int v5; // edx
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  ULONG_PTR v11; // rbp
  unsigned int v12; // r14d
  __int64 v13; // rcx
  int v14; // eax
  __int64 v16; // rcx
  int v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+18h]

  v2 = 0LL;
  v3 = 16 * a2;
  v5 = 32 * a2 + 48;
  v18 = 0;
  v6 = (v3 + 4143) & 0xFFFFF000;
  v17 = 0;
  v19 = 0;
  if ( ((v5 - 1) & v5) != 0 )
  {
    _BitScanReverse(&v7, v5);
    v19 = v7;
    v5 = 1 << (v7 + 1);
  }
  v8 = 0x10000;
  if ( v5 > 0x10000 )
  {
    v8 = v5;
    if ( v5 >= 0x40000 )
      v8 = 0x40000;
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 8) ^ a1;
    v10 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)) == RtlpHpSegVsAllocate
        ? RtlpHpSegVsAllocate(v9, v8, &v17, &v18)
        : guard_dispatch_icall_no_overrides(v9, v8);
    v11 = v10;
    if ( v10 )
      break;
    v8 = v18;
    if ( v18 < v6 )
      return v2;
  }
  v12 = 4096;
  if ( (v17 & 1) != 0 )
    v12 = v8;
  v13 = *(_QWORD *)(a1 + 8) ^ a1;
  if ( (__int64 (__fastcall *)(__int64, __int64, unsigned int, _DWORD *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)) == RtlpHpSegLfhVsCommit )
    v14 = RtlpHpSegLfhVsCommit(v13, v10, v12, 0LL);
  else
    v14 = guard_dispatch_icall_no_overrides(v13, v10);
  if ( v14 < 0 )
  {
    v16 = *(_QWORD *)(a1 + 8) ^ a1;
    if ( (void (__fastcall *)(__int64, ULONG_PTR))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)) == RtlpHpSegLfhVsFree )
      RtlpHpSegLfhVsFree(v16, v11);
    else
      guard_dispatch_icall_no_overrides(v16, v11);
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 80), (unsigned __int64)v12 >> 12);
    RtlpHpVsSubsegmentInitialize(v11, v8, v12);
    return v11;
  }
  return v2;
}
