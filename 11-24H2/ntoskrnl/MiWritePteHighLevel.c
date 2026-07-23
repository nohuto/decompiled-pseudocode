/*
 * XREFs of MiWritePteHighLevel @ 0x140685238
 * Callers:
 *     MiTransformValidPteViaIpi @ 0x1406851A8 (MiTransformValidPteViaIpi.c)
 * Callees:
 *     MiInsertRecursiveTbFlushEntries @ 0x14020EDF8 (MiInsertRecursiveTbFlushEntries.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     KeIpiGenericCall @ 0x14045F290 (KeIpiGenericCall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiWritePteHighLevel(unsigned __int64 a1, unsigned __int64 a2, ULONG_PTR a3, int a4)
{
  void *v8; // rax
  char v9; // al
  int v10; // edx
  unsigned __int64 v11; // r9
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  ULONG_PTR Context[2]; // [rsp+30h] [rbp-118h] BYREF
  int v15; // [rsp+40h] [rbp-108h]
  _DWORD v16[3]; // [rsp+44h] [rbp-104h] BYREF
  _BYTE v17[200]; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+118h] [rbp-30h]

  memset_0(v16, 0, 0xD4uLL);
  v18 = 0LL;
  v15 = 0;
  Context[0] = a1;
  Context[1] = a3;
  v8 = MiVaToFlushVm(a2);
  MiInitializeTbFlushList((__int64)v17, (__int64)v8, 20, 1, a4);
  v9 = MI_READ_PTE_LOCK_FREE(a1);
  v10 = 0;
  v11 = a2;
  while ( 1 )
  {
    v11 = (__int64)(v11 << 25) >> 16;
    if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v10;
  }
  if ( v9 >= 0 )
    MiInsertRecursiveTbFlushEntries((__int64)v17, v10, a2);
  else
    MiInsertLargeTbFlushEntry((__int64)v17, v10, a2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  v16[1] = KeNumberProcessors_0;
  v16[0] = KeNumberProcessors_0;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)MiWritePteHighLevelIsr, (ULONG_PTR)Context);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
