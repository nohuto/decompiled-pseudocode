/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x1800630F0
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x180062820 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180062D40 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerCompact @ 0x180066280 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18001B000 (EtwEventWriteTransfer.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800CD8B0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  int v4; // r15d
  __int64 v5; // rbp
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned int v15; // ecx
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  _WORD *v18; // rax
  _WORD *i; // rax
  _WORD *j; // rsi
  __int64 v21; // rsi
  volatile signed __int32 *v22; // rdx
  char *SchedulerSharedDataSlot; // r8
  __int64 v24; // rax
  char *v25; // rcx
  volatile signed __int32 **v26; // rcx
  char v27; // cl
  unsigned int v28; // edi
  unsigned int v29; // ebx
  unsigned int v30; // [rsp+30h] [rbp-78h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-70h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-60h] BYREF
  void *v33; // [rsp+58h] [rbp-50h]
  int v34; // [rsp+60h] [rbp-48h]
  int v35; // [rsp+64h] [rbp-44h]

  v4 = 0;
  v30 = (unsigned int)a4;
  LODWORD(v5) = a3;
  if ( a3 >= 0 )
  {
    v9 = *(_QWORD *)a1;
    v8 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) == 0 )
    {
      v10 = *(__int16 *)(v9 + 22);
      v11 = *(_QWORD *)(v10 + v9 + 16) + *(_QWORD *)(v10 + v9 + 24);
      v12 = *(_QWORD *)(v10 + v9 + 8);
      v13 = v12 >> *(_BYTE *)(v9 + 11);
      if ( v13 <= 8 )
        v13 = 8LL;
      v14 = v12 >> *(_BYTE *)(v9 + 12);
      if ( v14 <= 8 )
        v14 = 8LL;
      if ( v11 <= v13 )
        return;
      if ( Context && !byte_1801D1908 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CD278, 1, 0) )
        {
          TpSetTimerEx(Context, &DueTime, 0, 0x3E8u);
          if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CB670 > 5 )
          {
            *(_DWORD *)&EventDescriptor.Level = 5;
            UserData.Ptr = (unsigned __int64)off_1801CB678;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            EventDescriptor.Keyword = 0LL;
            UserData.Size = *(unsigned __int16 *)off_1801CB678;
            v33 = &unk_1801A157E;
            UserData.Reserved = 2;
            v34 = 25;
            v35 = 1;
            EtwEventWriteTransfer(qword_1801CB690, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
          }
          a4 = (char *)v30;
        }
        if ( v11 <= v14 )
          return;
      }
    }
  }
  else
  {
    v8 = 1;
    LODWORD(v5) = 1;
  }
  v15 = *(unsigned __int8 *)(a2 + 39);
  if ( (unsigned int)v5 >= v15 )
    return;
  do
  {
    v16 = a2 + 8LL * *(unsigned __int8 *)(a2 + 24);
    v17 = v16 + 2LL * (unsigned __int8)v15;
    v18 = (_WORD *)(v16 + 2LL * (unsigned int)v5);
    if ( *v18 )
    {
      if ( (unsigned __int64)v18 >= v17 )
        break;
      while ( *v18 )
      {
        if ( (unsigned __int64)++v18 >= v17 )
          goto LABEL_48;
      }
      v5 = ((__int64)v18 - v16) >> 1;
    }
    else
    {
      for ( i = v18 - 1; !*i; --i )
        ;
      v18 = i + 1;
    }
    for ( j = (_WORD *)(v16 + 2 * ((unsigned int)v5 + 1LL)); (unsigned __int64)j < v17; ++j )
    {
      if ( *j )
        break;
    }
    v5 = ((__int64)v18 - v16) >> 1;
    v21 = j - v18;
    if ( (_DWORD)v5 == -1 )
      break;
    if ( (unsigned int)v21 >= (unsigned int)a4 )
    {
      if ( !v4 )
      {
        v22 = (volatile signed __int32 *)(a2 + 56);
        v4 = 2;
        SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          v24 = 0LL;
          v25 = SchedulerSharedDataSlot;
          while ( *(_QWORD *)v25 )
          {
            v24 = (unsigned int)(v24 + 1);
            v25 += 8;
            if ( (unsigned int)v24 >= 8 )
              goto LABEL_42;
          }
          v26 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * v24];
          if ( v26 )
            *v26 = v22;
        }
LABEL_42:
        if ( _interlockedbittestandset64(v22, 0LL) )
        {
          RtlpAcquireSRWLockExclusiveContended(a2 + 56, (unsigned __int64)v22, SchedulerSharedDataSlot, a4);
          a4 = (char *)v30;
        }
        goto LABEL_47;
      }
      v27 = *(_BYTE *)(a2 + 38);
      v28 = (_DWORD)v5 << 12 << v27;
      v29 = (_DWORD)v21 << 12 << v27;
      ((void (__fastcall *)(_QWORD, __int64, _QWORD))(RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32) ^ a1))(
        *(_QWORD *)a1,
        a2 + v28,
        v29);
      RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v28, v29);
      if ( !v8 )
        goto LABEL_49;
      a4 = (char *)v30;
    }
    else if ( !v8 )
    {
      break;
    }
    LODWORD(v5) = v21 + v5;
LABEL_47:
    LOBYTE(v15) = *(_BYTE *)(a2 + 39);
  }
  while ( (unsigned int)v5 < (unsigned __int8)v15 );
LABEL_48:
  if ( !v4 )
    return;
LABEL_49:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
}
