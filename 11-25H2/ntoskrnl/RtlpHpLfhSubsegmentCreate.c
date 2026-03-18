/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x1402F792C
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpCalculateSubsegmentSizeIndex @ 0x1402F736C (RtlpCalculateSubsegmentSizeIndex.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x1402F7508 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x1402F7B30 (RtlpHpLfhBucketComputeNewSubsegmentBlockCount.c)
 *     RtlpHpSegVsAllocate @ 0x1402F84D0 (RtlpHpSegVsAllocate.c)
 *     RtlpHpLfhSubsegmentComputeCommitUnit @ 0x1403C76D0 (RtlpHpLfhSubsegmentComputeCommitUnit.c)
 *     RtlpHpSegLfhVsCommit @ 0x1403C9230 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegLfhVsFree @ 0x1403CBA30 (RtlpHpSegLfhVsFree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, unsigned __int8 *a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v7; // r14d
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  unsigned int v17; // r14d
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v20; // eax
  unsigned int v22; // eax
  unsigned int v23; // r9d
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+88h] [rbp+10h] BYREF
  int v28; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v28 = 0;
  v26 = 0;
  v7 = (unsigned __int16)RtlpBucketBlockSizes[(*a2 >> 1) + 1];
  v8 = RtlpHpLfhBucketComputeNewSubsegmentBlockCount(a2, (unsigned int)a3);
  v9 = (8 * (((unsigned __int64)v8 + 63) >> 6) + 79) & 0xFFFFFFF0;
  v10 = RtlpCalculateSubsegmentSizeIndex(v9 + 2 * ((v9 + v7 * v8 + 4095) >> 12) + v7 * v8);
  if ( v10 <= 0xC )
    LOBYTE(v10) = 12;
  v13 = 1 << v10;
  if ( v11 <= v12 >> 6 )
  {
    v22 = RtlpCalculateSubsegmentSizeIndex(v12);
    if ( v22 <= v23 )
      LOBYTE(v22) = v23;
    v24 = 1 << v22;
    if ( v13 > v24 )
      v13 = v24;
  }
  v14 = *(_QWORD *)a1;
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)) == RtlpHpSegVsAllocate )
    v15 = RtlpHpSegVsAllocate(v14, v13, &v26, &v28);
  else
    v15 = guard_dispatch_icall_no_overrides(v14, v13);
  v16 = v15;
  if ( v15 )
  {
    if ( a3 >= 1 || (v26 & 1) != 0 )
      v17 = v13;
    else
      v17 = RtlpHpLfhSubsegmentComputeCommitUnit(v13, v7);
    v18 = *(_QWORD *)a1;
    v19 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
    v27 = 0;
    if ( v19 == RtlpHpSegLfhVsCommit )
      v20 = RtlpHpSegLfhVsCommit(v18, v16, v17, &v27);
    else
      v20 = guard_dispatch_icall_no_overrides(v18, v16);
    if ( v20 < 0 )
    {
      v25 = *(_QWORD *)a1;
      if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)) == RtlpHpSegLfhVsFree )
        RtlpHpSegLfhVsFree(v25, v16, v13);
      else
        guard_dispatch_icall_no_overrides(v25, v16);
    }
    else
    {
      if ( !v27 )
        LODWORD(v3) = 1;
      RtlpHpLfhSubsegmentInitialize(v16, v13, v17, a3, a2, a1, v3);
      _InterlockedAdd64((volatile signed __int64 *)a2 + 8, 1uLL);
      _InterlockedAdd64((volatile signed __int64 *)a2 + 7, *(unsigned __int16 *)(v16 + 34));
      return v16;
    }
  }
  return v3;
}
