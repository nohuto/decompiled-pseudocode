/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x180010710
 * Callers:
 *     RtlpHpSegContextCompact @ 0x18000D570 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800100E0 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18000D8A0 (RtlpHpSegFreeRangeRemove.c)
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCommit @ 0x1800125C0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r14d
  __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int16 v23; // ax
  __int64 *v24; // rcx
  char v25; // dl
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rdi
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // edx
  volatile signed __int32 **v30; // rcx
  int v31; // [rsp+30h] [rbp-89h] BYREF
  __int64 v32; // [rsp+38h] [rbp-81h] BYREF
  __int64 v33; // [rsp+40h] [rbp-79h] BYREF
  __int64 v34; // [rsp+48h] [rbp-71h] BYREF
  __int64 v35; // [rsp+50h] [rbp-69h] BYREF
  __int64 v36; // [rsp+58h] [rbp-61h] BYREF
  _EVENT_DATA_DESCRIPTOR v37; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v38; // [rsp+80h] [rbp-39h]
  __int64 v39; // [rsp+88h] [rbp-31h]
  __int64 *v40; // [rsp+90h] [rbp-29h]
  __int64 v41; // [rsp+98h] [rbp-21h]
  __int64 *v42; // [rsp+A0h] [rbp-19h]
  __int64 v43; // [rsp+A8h] [rbp-11h]
  __int64 *v44; // [rsp+B0h] [rbp-9h]
  __int64 v45; // [rsp+B8h] [rbp-1h]
  __int64 *v46; // [rsp+C0h] [rbp+7h]
  __int64 v47; // [rsp+C8h] [rbp+Fh]

  v31 = 0;
  while ( 1 )
  {
    v8 = 0LL;
    v9 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v10 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)v9 + (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28)) < 0x100 )
    {
      v8 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v8 + 24) & 1) != 0 )
        v8 = 0LL;
    }
    if ( (unsigned int)v9 > *(unsigned __int8 *)(a1 + 10) )
    {
      v11 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 8) & 2) == 0 )
        v11 += -32LL * *(unsigned __int8 *)(v11 + 26);
      if ( (*(_BYTE *)(v11 + 24) & 1) == 0 )
      {
        RtlpHpSegFreeRangeRemove(a1, v11);
        *(_BYTE *)(v11 + 31) += *(_BYTE *)(a2 + 31);
        v10 += (unsigned __int16)~*(_WORD *)(v11 + 28);
        *(_WORD *)(v11 + 28) = ~(_WORD)v10;
        *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
        a2 = v11;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v11 + 31) - 1) + v11 + 26) = *(_BYTE *)(v11 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v8 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v8);
      *(_OWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      v23 = ~(unsigned __int16)*(_DWORD *)(v8 + 28);
      *(_DWORD *)v8 = -857879331;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v23);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
      {
        v24 = (__int64 *)(a1 + *(__int16 *)(a1 + 22));
        if ( (unsigned int)dword_1801CE670 > 5 )
        {
          v32 = *(_QWORD *)(a1 + 56);
          v39 = 8LL;
          v38 = &v32;
          v33 = *v24;
          v40 = &v33;
          v34 = v24[1];
          v42 = &v34;
          v35 = v24[2];
          v44 = &v35;
          v36 = v24[3];
          v46 = &v36;
          v41 = 8LL;
          v43 = 8LL;
          v45 = 8LL;
          v47 = 8LL;
          tlgWriteTransfer_EtwEventWriteTransfer(
            (__int64)&dword_1801CE670,
            (unsigned __int8 *)dword_1801A43AB,
            v21,
            v22,
            7u,
            &v37);
        }
      }
      if ( *(_BYTE *)(a2 + 31) != 1 )
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + a2 + 24) &= ~1u;
      *(_BYTE *)(a2 + 31) += *(_BYTE *)(v8 + 31);
      v10 += (unsigned __int16)~*(_WORD *)(v8 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v10;
      *(_BYTE *)(v8 + 24) &= ~2u;
      v25 = *(_BYTE *)(a2 + 31) - 1;
      v26 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v26 + a2 + 24) |= 1u;
      *(_BYTE *)(v26 + a2 + 26) = v25;
    }
    if ( !v10 )
      break;
    if ( !a3 )
    {
      v12 = v10;
      if ( (*(_BYTE *)(a1 + 13) & 8) == 0 )
      {
        v13 = *(__int16 *)(a1 + 22);
        v14 = *(_QWORD *)(v13 + a1 + 16) + *(_QWORD *)(v13 + a1 + 24);
        v15 = *(_QWORD *)(v13 + a1 + 8);
        v16 = v15 >> *(_BYTE *)(a1 + 11);
        if ( v16 <= 8 )
          v16 = 8LL;
        v17 = v15 >> *(_BYTE *)(a1 + 12);
        if ( v17 <= 8 )
          v17 = 8LL;
        v18 = v12 + v14;
        if ( v18 <= v16 || (int)RtlpHpEnvCompactionSchedule() >= 0 && v18 <= v17 )
          break;
      }
    }
    v27 = (volatile signed __int32 *)(a1 + 64);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    RtlpHpSegPageRangeCommit(a1, 0, (__int64)&v31);
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v30 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v30 )
        {
          if ( v30 )
            *v30 = v27;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v27, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((PVOID)(a1 + 64));
    *a4 = -1;
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v19 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v19 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
