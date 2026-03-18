/*
 * XREFs of MiAdjustSecureDriverStateForIatCapture @ 0x1404CBC10
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140A8DB7C (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     KeSetPagePrivilege @ 0x1402CE1B0 (KeSetPagePrivilege.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     VslExemptSecurePteRange @ 0x1404F531C (VslExemptSecurePteRange.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall MiAdjustSecureDriverStateForIatCapture(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // r13
  bool v7; // zf
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *ProcessorFlushList; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  int v16; // eax
  char result; // al
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 48);
  v18 = 0LL;
  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  v7 = a2 == 0;
  if ( a2 )
  {
    qword_140E2D670 = *(_QWORD *)(v5 + 48) + *(unsigned int *)(v5 + 64);
    v7 = a2 == 0;
    qword_140E2D668 = *(_QWORD *)(v5 + 48);
  }
  LOBYTE(a3) = !v7;
  VslExemptSecurePteRange(v3, *(unsigned int *)(v5 + 64), a3);
  v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  v10 = v8 + 8LL * ((*(_DWORD *)(v5 + 64) >> 12) + (unsigned int)((*(_DWORD *)(v5 + 64) & 0xFFF) != 0));
  v19 = v10;
  MiLockWorkingSetSharedAtDpc((__int64)&unk_140E37B00);
  if ( a2 )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList(
      (__int64)ProcessorFlushList,
      (__int64)&unk_140E37B00,
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
      MiUnlockPageTable((__int64)&unk_140E37B00, v9);
    }
    v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable((__int64)&unk_140E37B00, v9, v11, v12);
LABEL_15:
    v14 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v14 & 1) != 0 )
    {
      v15 = (v14 >> 12) & 0xFFFFFFFFFFLL;
      if ( *(__int64 *)(48 * v15 - 0x220000000000LL + 40) < 0
        && (MiGetPagePrivilege(48 * v15 - 0x220000000000LL, 2, (unsigned __int64 *)&v18) & 1) != 0 )
      {
        if ( a2 )
        {
          MiInsertTbFlushEntry((__int64)ProcessorFlushList, v3, 1LL, 0);
        }
        else
        {
          v16 = KeSetPagePrivilege(v15, v3, (__int64)&v18, 0x200u);
          if ( v16 < 0 )
            KeBugCheckEx(0x1Au, 0x51510uLL, 48 * v15 - 0x220000000000LL, v16, 0LL);
        }
      }
      v10 = v19;
    }
    v8 += 8LL;
    v3 += 4096LL;
  }
  if ( ProcessorFlushList )
    MiFlushTbList((__int64)ProcessorFlushList);
  if ( v9 )
    MiUnlockPageTable((__int64)&unk_140E37B00, v9);
  if ( ProcessorFlushList )
    MiReleaseProcessorFlushList();
  result = MiUnlockWorkingSetShared((__int64)&unk_140E37B00, CurrentIrql);
  if ( !a2 )
  {
    qword_140E2D668 = 0LL;
    qword_140E2D670 = 0LL;
  }
  return result;
}
