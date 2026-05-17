/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x18004D510
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x18004CC40 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x18004D160 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x18004D870 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800506A0 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     EtwEventWriteTransfer @ 0x18003AD80 (EtwEventWriteTransfer.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800D0340 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(unsigned __int64 a1, unsigned __int8 *a2, int a3, unsigned __int64 a4)
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
  unsigned __int8 *v16; // r8
  unsigned __int64 v17; // rdx
  char *v18; // rax
  char *i; // rax
  unsigned __int8 *j; // rsi
  __int64 v21; // rsi
  volatile signed __int32 *v22; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v24; // rax
  _QWORD *v25; // rcx
  volatile signed __int32 **v26; // rcx
  unsigned __int8 v27; // cl
  unsigned int v28; // edi
  unsigned int v29; // ebx
  unsigned int v30; // [rsp+30h] [rbp-78h]
  __int128 v31; // [rsp+38h] [rbp-70h] BYREF
  void *v32; // [rsp+48h] [rbp-60h] BYREF
  int v33; // [rsp+50h] [rbp-58h]
  int v34; // [rsp+54h] [rbp-54h]
  void *v35; // [rsp+58h] [rbp-50h]
  int v36; // [rsp+60h] [rbp-48h]
  int v37; // [rsp+64h] [rbp-44h]

  v4 = 0;
  v30 = a4;
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
      if ( qword_1801CE268 && !byte_1801D2908 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CE278, 1, 0) )
        {
          TpSetTimerEx(qword_1801CE268, &qword_1801CE270, 0LL, 1000LL);
          if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CC670 > 5 )
          {
            v32 = off_1801CC678;
            v31 = 0x50B000000uLL;
            v33 = *(unsigned __int16 *)off_1801CC678;
            v35 = &unk_1801A23DE;
            v34 = 2;
            v36 = 25;
            v37 = 1;
            EtwEventWriteTransfer(qword_1801CC690, &v31, 0LL, 0LL, 2, (__int64)&v32);
          }
          a4 = v30;
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
  v15 = a2[39];
  if ( (unsigned int)v5 >= v15 )
    return;
  do
  {
    v16 = &a2[8 * a2[24]];
    v17 = (unsigned __int64)&v16[2 * (unsigned __int8)v15];
    v18 = (char *)&v16[2 * (unsigned int)v5];
    if ( *(_WORD *)v18 )
    {
      if ( (unsigned __int64)v18 >= v17 )
        break;
      while ( *(_WORD *)v18 )
      {
        v18 += 2;
        if ( (unsigned __int64)v18 >= v17 )
          goto LABEL_48;
      }
      v5 = (v18 - (char *)v16) >> 1;
    }
    else
    {
      for ( i = v18 - 2; !*(_WORD *)i; i -= 2 )
        ;
      v18 = i + 2;
    }
    for ( j = &v16[2 * (unsigned int)v5 + 2]; (unsigned __int64)j < v17; j += 2 )
    {
      if ( *(_WORD *)j )
        break;
    }
    v5 = (v18 - (char *)v16) >> 1;
    v21 = (j - (unsigned __int8 *)v18) >> 1;
    if ( (_DWORD)v5 == -1 )
      break;
    if ( (unsigned int)v21 >= (unsigned int)a4 )
    {
      if ( !v4 )
      {
        v22 = (volatile signed __int32 *)(a2 + 56);
        v4 = 2;
        SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
        if ( SchedulerSharedDataSlot )
        {
          v24 = 0LL;
          v25 = SchedulerSharedDataSlot;
          while ( *v25 )
          {
            v24 = (unsigned int)(v24 + 1);
            ++v25;
            if ( (unsigned int)v24 >= 8 )
              goto LABEL_42;
          }
          v26 = (volatile signed __int32 **)&SchedulerSharedDataSlot[v24];
          if ( v26 )
            *v26 = v22;
        }
LABEL_42:
        if ( _interlockedbittestandset64(v22, 0LL) )
        {
          RtlpAcquireSRWLockExclusiveContended(
            (unsigned __int64)(a2 + 56),
            (unsigned __int64)v22,
            SchedulerSharedDataSlot,
            a4);
          a4 = v30;
        }
        goto LABEL_47;
      }
      v27 = a2[38];
      v28 = (_DWORD)v5 << 12 << v27;
      v29 = (_DWORD)v21 << 12 << v27;
      ((void (__fastcall *)(_QWORD, unsigned __int8 *, _QWORD))(RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32) ^ a1))(
        *(_QWORD *)a1,
        &a2[v28],
        v29);
      RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v28, v29);
      if ( !v8 )
        goto LABEL_49;
      a4 = v30;
    }
    else if ( !v8 )
    {
      break;
    }
    LODWORD(v5) = v21 + v5;
LABEL_47:
    LOBYTE(v15) = a2[39];
  }
  while ( (unsigned int)v5 < (unsigned __int8)v15 );
LABEL_48:
  if ( !v4 )
    return;
LABEL_49:
  RtlReleaseSRWLockExclusive(a2 + 56);
}
