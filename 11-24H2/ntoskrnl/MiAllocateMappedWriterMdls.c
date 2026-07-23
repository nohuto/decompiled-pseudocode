/*
 * XREFs of MiAllocateMappedWriterMdls @ 0x140462D3C
 * Callers:
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiUnlockPartitionMappedWriter @ 0x140462DD0 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x140462E34 (MiLockPartitionMappedWriter.c)
 *     MiAllocateModWriterEntry @ 0x14046930C (MiAllocateModWriterEntry.c)
 */

__int64 __fastcall MiAllocateMappedWriterMdls(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int64 ModWriterEntry; // rax
  __int64 *v9; // rdx
  bool v10; // zf

  if ( *(_DWORD *)(a1 + 668) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  MiLockPartitionMappedWriter(a1, CurrentThread);
  if ( *(_DWORD *)(a1 + 668) )
  {
    MiUnlockPartitionMappedWriter(a1, CurrentThread);
    return 0LL;
  }
  LODWORD(v4) = 20;
  v5 = *(_QWORD *)(a1 + 18512) >> 15;
  if ( v5 >= 0x14 )
  {
    v4 = *(_QWORD *)(a1 + 18512) >> 15;
    if ( v5 > 0x80 )
      LODWORD(v4) = 128;
  }
  v6 = 0;
  *(_DWORD *)(a1 + 664) = v4;
  v7 = 0;
  while ( v7 < 4 )
  {
    ModWriterEntry = MiAllocateModWriterEntry(a1, 16LL, 1LL);
    if ( !ModWriterEntry )
    {
      if ( !v7 )
      {
        v6 = -1073741670;
        goto LABEL_18;
      }
      break;
    }
    *(_DWORD *)(ModWriterEntry + 40) |= 1u;
    *(_QWORD *)(ModWriterEntry + 56) = a1;
    v9 = *(__int64 **)(a1 + 688);
    if ( *v9 != a1 + 680 )
      __fastfail(3u);
    *(_QWORD *)ModWriterEntry = a1 + 680;
    ++v7;
    *(_QWORD *)(ModWriterEntry + 8) = v9;
    *v9 = ModWriterEntry;
    *(_QWORD *)(a1 + 688) = ModWriterEntry;
  }
  v10 = *(_BYTE *)(a1 + 720) == 0;
  *(_DWORD *)(a1 + 668) = v7;
  if ( !v10 )
  {
    *(_BYTE *)(a1 + 720) = 0;
    KeSetEvent((PRKEVENT)(a1 + 696), 0, 0);
  }
LABEL_18:
  MiUnlockPartitionMappedWriter(a1, CurrentThread);
  return v6;
}
