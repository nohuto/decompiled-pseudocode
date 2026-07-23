/*
 * XREFs of MiAdjustSecureDriverStateForIatCapture @ 0x1404C4FE4
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A83AFC (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KeSetPagePrivilege @ 0x140492188 (KeSetPagePrivilege.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     VslExemptSecurePteRange @ 0x1404F4FD4 (VslExemptSecurePteRange.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiAdjustSecureDriverStateForIatCapture(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  int v4; // r12d
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // r13
  bool v7; // zf
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 *ProcessorFlushList; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r14
  int v14; // eax
  char result; // al
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 48);
  v16 = 0LL;
  v4 = a2;
  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v7 = v4 == 0;
  if ( v4 )
  {
    qword_140E2D9F0 = *(_QWORD *)(v5 + 48) + *(unsigned int *)(v5 + 64);
    v7 = v4 == 0;
    qword_140E2D9E8 = *(_QWORD *)(v5 + 48);
  }
  LOBYTE(a3) = !v7;
  VslExemptSecurePteRange(v3, *(unsigned int *)(v5 + 64), a3);
  v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  v10 = v8 + 8LL * ((*(_DWORD *)(v5 + 64) >> 12) + (unsigned int)((*(_DWORD *)(v5 + 64) & 0xFFF) != 0));
  v17 = v10;
  MiLockWorkingSetSharedAtDpc((__int64)&unk_140E37E80);
  if ( v4 )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList(
      (__int64)ProcessorFlushList,
      (__int64)&unk_140E37E80,
      *((_DWORD *)ProcessorFlushList + 3),
      0,
      1);
  }
  else
  {
    ProcessorFlushList = 0LL;
  }
  while ( v8 < v10 )
  {
    if ( v9 )
    {
      if ( (v8 & 0xFFF) != 0 )
        goto LABEL_15;
      if ( ProcessorFlushList )
        MiFlushTbList((__int64)ProcessorFlushList);
      MiUnlockPageTableInternal((__int64)&unk_140E37E80, v9);
    }
    v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable((__int64)&unk_140E37E80, v9);
LABEL_15:
    v12 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v12 & 1) != 0 )
    {
      v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
      if ( *(__int64 *)(48 * v13 - 0x220000000000LL + 40) < 0
        && (MiGetPagePrivilege(48 * v13 - 0x220000000000LL, 2, (unsigned __int64 *)&v16) & 1) != 0 )
      {
        if ( v4 )
        {
          MiInsertTbFlushEntry((__int64)ProcessorFlushList, v3, 1LL, 0);
        }
        else
        {
          v14 = KeSetPagePrivilege(v13, v3, &v16, 0x200u);
          if ( v14 < 0 )
            KeBugCheckEx(0x1Au, 0x51510uLL, 48 * v13 - 0x220000000000LL, v14, 0LL);
        }
      }
      v10 = v17;
    }
    v8 += 8LL;
    v3 += 4096LL;
  }
  if ( ProcessorFlushList )
    MiFlushTbList((__int64)ProcessorFlushList);
  if ( v9 )
    MiUnlockPageTableInternal((__int64)&unk_140E37E80, v9);
  if ( ProcessorFlushList )
    MiReleaseProcessorFlushList();
  result = MiUnlockWorkingSetShared((__int64)&unk_140E37E80, CurrentIrql);
  if ( !v4 )
  {
    qword_140E2D9E8 = 0LL;
    qword_140E2D9F0 = 0LL;
  }
  return result;
}
