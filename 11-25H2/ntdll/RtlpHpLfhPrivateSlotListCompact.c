/*
 * XREFs of RtlpHpLfhPrivateSlotListCompact @ 0x180033990
 * Callers:
 *     RtlpHpLfhPrivateSlotsCompact @ 0x180033900 (RtlpHpLfhPrivateSlotsCompact.c)
 * Callees:
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhOwnerCompact @ 0x18000C2E0 (RtlpHpLfhOwnerCompact.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1800334C4 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhHeatMapQuery @ 0x180033740 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpEnvThreadSuspend @ 0x180033BC0 (RtlpHpEnvThreadSuspend.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwResumeThread @ 0x180163C60 (ZwResumeThread.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotListCompact(unsigned __int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  int v4; // r15d
  unsigned int v5; // ecx
  __int64 v7; // rbx
  unsigned __int16 v8; // r12
  HANDLE v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdi
  signed int v16; // eax
  volatile signed __int64 *v17; // r12
  void **TlsExpansionSlots; // rdx
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  volatile signed __int64 *v22; // [rsp+70h] [rbp+18h]

  Handle = 0LL;
  v2 = (unsigned __int16 *)(a2 + 88);
  v4 = 0;
  v5 = *(unsigned __int16 *)(a1 + 76);
  if ( v5 < 0x40 )
  {
    v7 = __readgsqword(8 * v5 + 5248);
    goto LABEL_3;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v7 = (__int64)TlsExpansionSlots[v5 - 64];
LABEL_3:
    if ( v7 )
      goto LABEL_4;
  }
  v7 = RtlpHpLfhThreadDataInitializeSet(a1);
LABEL_4:
  v22 = (volatile signed __int64 *)(a2 + 80);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 80));
  v8 = *v2;
LABEL_5:
  v9 = Handle;
  while ( v8 )
  {
    v10 = a1 + (v8 << 6);
    if ( (unsigned __int16 *)(v10 + 16) == v2 )
      break;
    v8 = *(_WORD *)(v10 + 16);
    if ( (_WORD)v7 == *(_WORD *)(v10 + 4) )
    {
      v15 = v7;
    }
    else
    {
      if ( !v4 )
      {
        v4 = 1;
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpHpEnvThreadSuspendOwnershipLock);
      }
      v11 = *(_QWORD *)a1;
      v12 = *(unsigned int *)(v10 + 20);
      LODWORD(v20) = 0;
      if ( (int)RtlpHpEnvThreadSuspend(v12, *(_QWORD *)(v11 + 56) + 20LL, &Handle, &v20) < 0 )
        goto LABEL_5;
      v13 = *(unsigned __int8 *)(a1 + 64);
      v14 = v20 & 0x3F;
      if ( v14 >= v13 )
      {
        if ( v14 == v13 || (_BYTE)v13 == 1 )
          v14 = 0;
        else
          v14 = *(unsigned __int8 *)(v14 - v13 - 1 + *(_QWORD *)(a1 + 56));
      }
      v9 = Handle;
      v20 = (unsigned __int16)((((unsigned __int64)v14 << 8) + 1472) >> 6);
      WORD1(v20) = 3;
      LODWORD(v20) = *(_DWORD *)(v10 + 4);
      v15 = v20;
    }
    v16 = RtlpHpLfhHeatMapQuery(
            a1,
            (volatile signed __int32 *)(a1 + ((unsigned __int64)*(unsigned __int16 *)(v10 + 6) << 6)),
            (unsigned __int8 *)a2);
    if ( v16 >= 2 )
      RtlpHpLfhOwnerCompact(a1, (unsigned __int8 *)v10, v16);
    else
      RtlpHpLfhPrivateSlotShutdown(a1, v10, v15, 1);
    v2 = (unsigned __int16 *)(a2 + 88);
    if ( v9 )
    {
      ZwResumeThread(v9, 0LL);
      NtClose(v9);
      v9 = 0LL;
      v2 = (unsigned __int16 *)(a2 + 88);
      Handle = 0LL;
    }
  }
  v17 = v22;
  if ( v4 )
    RtlReleaseSRWLockExclusive(&RtlpHpEnvThreadSuspendOwnershipLock);
  return RtlReleaseSRWLockExclusive(v17);
}
