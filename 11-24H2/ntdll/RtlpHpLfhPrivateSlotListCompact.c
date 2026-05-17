/*
 * XREFs of RtlpHpLfhPrivateSlotListCompact @ 0x1800E8930
 * Callers:
 *     RtlpHpLfhPrivateSlotsCompact @ 0x1800E88A0 (RtlpHpLfhPrivateSlotsCompact.c)
 * Callees:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18004AEFC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhHeatMapQuery @ 0x18004B220 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18004EAC0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800506A0 (RtlpHpLfhOwnerCompact.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpEnvThreadSuspend @ 0x1800E8B60 (RtlpHpEnvThreadSuspend.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwResumeThread @ 0x1801626D0 (ZwResumeThread.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotListCompact(unsigned __int64 a1, void **TlsExpansionSlots, unsigned __int64 a3)
{
  unsigned __int16 *v3; // rdi
  int v5; // r15d
  unsigned int v6; // ecx
  void **v7; // r13
  __int64 v8; // rbx
  volatile signed __int32 **v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int16 v11; // r12
  HANDLE v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdi
  int v19; // eax
  volatile signed __int64 *v20; // r12
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  volatile signed __int64 *v24; // [rsp+70h] [rbp+18h]

  Handle = 0LL;
  v3 = (unsigned __int16 *)(TlsExpansionSlots + 11);
  v5 = 0;
  v6 = *(unsigned __int16 *)(a1 + 76);
  v7 = TlsExpansionSlots;
  if ( v6 < 0x40 )
  {
    v8 = __readgsqword(8 * v6 + 5248);
    goto LABEL_3;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v8 = (__int64)TlsExpansionSlots[v6 - 64];
LABEL_3:
    if ( v8 )
      goto LABEL_4;
  }
  v8 = RtlpHpLfhThreadDataInitializeSet(a1);
LABEL_4:
  v24 = (volatile signed __int64 *)(v7 + 10);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)v7 + 20, (volatile signed __int32 **)TlsExpansionSlots, a3);
  v11 = *v3;
LABEL_5:
  v12 = Handle;
  while ( v11 )
  {
    v13 = a1 + (v11 << 6);
    if ( (unsigned __int16 *)(v13 + 16) == v3 )
      break;
    v11 = *(_WORD *)(v13 + 16);
    if ( (_WORD)v8 == *(_WORD *)(v13 + 4) )
    {
      v18 = v8;
    }
    else
    {
      if ( !v5 )
      {
        v5 = 1;
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpHpEnvThreadSuspendOwnershipLock, v9, v10);
      }
      v14 = *(_QWORD *)a1;
      v15 = *(unsigned int *)(v13 + 20);
      LODWORD(v22) = 0;
      if ( (int)RtlpHpEnvThreadSuspend(v15, *(_QWORD *)(v14 + 56) + 20LL, &Handle, &v22) < 0 )
        goto LABEL_5;
      v16 = *(unsigned __int8 *)(a1 + 64);
      v17 = v22 & 0x3F;
      if ( v17 >= v16 )
      {
        if ( v17 == v16 || (_BYTE)v16 == 1 )
          v17 = 0;
        else
          v17 = *(unsigned __int8 *)(v17 - v16 - 1 + *(_QWORD *)(a1 + 56));
      }
      v12 = Handle;
      v22 = (unsigned __int16)((((unsigned __int64)v17 << 8) + 1472) >> 6);
      WORD1(v22) = 3;
      LODWORD(v22) = *(_DWORD *)(v13 + 4);
      v18 = v22;
    }
    v19 = RtlpHpLfhHeatMapQuery(
            a1,
            (volatile signed __int32 *)(a1 + ((unsigned __int64)*(unsigned __int16 *)(v13 + 6) << 6)),
            (unsigned __int8 *)v7);
    if ( v19 >= 2 )
      RtlpHpLfhOwnerCompact(a1, (unsigned __int8 *)v13, (unsigned int)v19);
    else
      RtlpHpLfhPrivateSlotShutdown(a1, v13, v18, 1);
    v3 = (unsigned __int16 *)(v7 + 11);
    if ( v12 )
    {
      ZwResumeThread(v12, 0LL);
      NtClose(v12);
      v12 = 0LL;
      v3 = (unsigned __int16 *)(v7 + 11);
      Handle = 0LL;
    }
  }
  v20 = v24;
  if ( v5 )
    RtlReleaseSRWLockExclusive(&RtlpHpEnvThreadSuspendOwnershipLock);
  return RtlReleaseSRWLockExclusive(v20);
}
