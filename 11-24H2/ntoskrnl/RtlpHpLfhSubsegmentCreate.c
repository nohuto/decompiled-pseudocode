/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x1402B52CC
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpSegLfhVsFree @ 0x1402B41B0 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x1402B54E0 (RtlpHpLfhBucketComputeNewSubsegmentBlockCount.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x1402B5728 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhSubsegmentComputeCommitUnit @ 0x1402B6604 (RtlpHpLfhSubsegmentComputeCommitUnit.c)
 *     RtlpHpSegLfhVsCommit @ 0x1402B92D0 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegVsAllocate @ 0x1402C07E0 (RtlpHpSegVsAllocate.c)
 *     RtlpCalculateSubsegmentSizeIndex @ 0x14047EC20 (RtlpCalculateSubsegmentSizeIndex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int16 *__fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, volatile signed __int64 *a2, int a3)
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
  unsigned __int16 *v16; // rbp
  unsigned int v17; // r14d
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v20; // eax
  __int64 v21; // r9
  unsigned int v23; // eax
  unsigned int v24; // r9d
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // [rsp+80h] [rbp+8h] BYREF
  int v28; // [rsp+88h] [rbp+10h] BYREF
  int v29; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v29 = 0;
  v27 = 0;
  v7 = (unsigned __int16)RtlpBucketBlockSizes[(*(unsigned __int8 *)a2 >> 1) + 1];
  v8 = RtlpHpLfhBucketComputeNewSubsegmentBlockCount(a2, (unsigned int)a3);
  v9 = (8 * (((unsigned __int64)v8 + 63) >> 6) + 79) & 0xFFFFFFF0;
  v10 = RtlpCalculateSubsegmentSizeIndex(v9 + 2 * ((v9 + v7 * v8 + 4095) >> 12) + v7 * v8);
  if ( v10 <= 0xC )
    LOBYTE(v10) = 12;
  v13 = 1 << v10;
  if ( v11 <= v12 >> 6 )
  {
    v23 = RtlpCalculateSubsegmentSizeIndex(v12);
    if ( v23 <= v24 )
      LOBYTE(v23) = v24;
    v25 = 1 << v23;
    if ( v13 > v25 )
      v13 = v25;
  }
  v14 = *(_QWORD *)a1;
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)) == RtlpHpSegVsAllocate )
    v15 = RtlpHpSegVsAllocate(v14, v13, &v27, &v29);
  else
    v15 = guard_dispatch_icall_no_overrides(v14, v13, &v27, &v29);
  v16 = (unsigned __int16 *)v15;
  if ( v15 )
  {
    if ( a3 >= 1 || (v27 & 1) != 0 )
      v17 = v13;
    else
      v17 = RtlpHpLfhSubsegmentComputeCommitUnit(v13, v7);
    v18 = *(_QWORD *)a1;
    v19 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
    v28 = 0;
    if ( v19 == RtlpHpSegLfhVsCommit )
      v20 = RtlpHpSegLfhVsCommit(v18, v16, v17, &v28);
    else
      v20 = guard_dispatch_icall_no_overrides(v18, v16, v17, &v28);
    if ( v20 < 0 )
    {
      v26 = *(_QWORD *)a1;
      if ( (void (__fastcall *)(__int64, ULONG_PTR))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)) == RtlpHpSegLfhVsFree )
        RtlpHpSegLfhVsFree(v26, (ULONG_PTR)v16);
      else
        guard_dispatch_icall_no_overrides(v26, v16, v13, v21);
    }
    else
    {
      if ( !v28 )
        LODWORD(v3) = 1;
      RtlpHpLfhSubsegmentInitialize(v16, (__int64)a2, a1, v3);
      _InterlockedAdd64(a2 + 8, 1uLL);
      _InterlockedAdd64(a2 + 7, v16[17]);
      return v16;
    }
  }
  return (unsigned __int16 *)v3;
}
