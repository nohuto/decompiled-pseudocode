/*
 * XREFs of VmColdPagesHint @ 0x1403ABA30
 * Callers:
 *     <none>
 * Callees:
 *     VmpProcessContextLockShared @ 0x1403ABC30 (VmpProcessContextLockShared.c)
 *     VmpProcessContextUnlockShared @ 0x1403ABC7C (VmpProcessContextUnlockShared.c)
 *     VmpLogColdHint @ 0x14064B8D0 (VmpLogColdHint.c)
 *     ZwUnlockVirtualMemory @ 0x1406A9FD0 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall VmColdPagesHint(unsigned __int64 a1, unsigned __int64 a2, struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *Blink; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r13
  struct _LIST_ENTRY **p_Blink; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // r8
  signed __int64 v10; // rcx
  signed __int64 v11; // rax
  signed __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( !Blink )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( Blink[6].Blink != a3 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v5 = a1 >> 12;
  v6 = (a1 >> 12) + a2 - 1;
  p_Blink = &Blink->Blink;
  v8 = 0LL;
  do
  {
    v9 = VmpProcessContextLockShared((PEX_SPIN_LOCK)Blink);
    v10 = (signed __int64)*p_Blink;
    if ( ((__int64)Blink[1].Flink & 1) != 0 )
    {
      if ( v10 )
        v10 ^= (unsigned __int64)p_Blink;
      else
        v10 = 0LL;
    }
    while ( v10 )
    {
      if ( v5 > *(_QWORD *)(v10 + 32) )
      {
        v11 = *(_QWORD *)(v10 + 8);
      }
      else
      {
        if ( v5 >= *(_QWORD *)(v10 + 24) )
          break;
        v11 = *(_QWORD *)v10;
      }
      if ( ((__int64)Blink[1].Flink & 1) != 0 && v11 )
        v10 ^= v11;
      else
        v10 = v11;
    }
    v12 = v10 - 24;
    v13 = -v10;
    if ( (v12 & -(__int64)(v13 != 0)) == 0 )
      NT_ASSERT("GpaMemoryRange != ((void *)0)");
    v19 = *(_QWORD *)(*(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 0x10) + 24LL);
    v19 = v5 + v19 - *(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 0x30);
    v14 = *(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 0x38);
    if ( v14 >= v6 )
      v14 = v6;
    v18 = v14 - v5 + 1;
    VmpProcessContextUnlockShared(Blink, v9);
    v15 = v18;
    v8 += v18;
    v5 += v18;
    if ( *(_QWORD *)&VmpTraceLoggingProvider )
    {
      if ( **(_DWORD **)&VmpTraceLoggingProvider )
      {
        if ( (*(_BYTE *)(*(_QWORD *)&VmpTraceLoggingProvider + 16LL) & 4) != 0 )
        {
          v17 = *(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider + 24LL);
          if ( (v17 & 4) == v17 )
          {
            VmpLogColdHint(v17, v5, v19, v18);
            v15 = v18;
          }
        }
      }
    }
    v19 <<= 12;
    v18 = v15 << 12;
    ZwUnlockVirtualMemory(-1LL, &v19, &v18, 1LL);
  }
  while ( v8 < a2 );
  return 0LL;
}
