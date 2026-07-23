/*
 * XREFs of PspFreeUserFiberShadowStack @ 0x1408D959C
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     PspGetBaseTrapFrame @ 0x140427E50 (PspGetBaseTrapFrame.c)
 *     MmUpdateUserShadowStackValue @ 0x140482448 (MmUpdateUserShadowStackValue.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1406A7810 (ZwQueryVirtualMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 */

__int64 __fastcall PspFreeUserFiberShadowStack(PVOID BaseAddress)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int updated; // esi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 BaseTrapFrame; // rbx
  __int64 v8; // rax
  _OWORD MemoryInformation[3]; // [rsp+38h] [rbp-F0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+70h] [rbp-B8h] BYREF

  memset_0(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  if ( ((unsigned __int8)BaseAddress & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  updated = MmUpdateUserShadowStackValue(
              (unsigned __int64)BaseAddress,
              ((unsigned __int64)BaseAddress + 8) & 0xFFFFFFFFFFFFFFFCuLL | 1,
              v2,
              v3);
  if ( updated >= 0 )
  {
    updated = ZwQueryVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                BaseAddress,
                MemoryRegionInformation,
                MemoryInformation,
                0x30uLL,
                0LL);
    if ( updated >= 0 )
      updated = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x40000000);
  }
  if ( updated < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ExceptionRecord.ExceptionFlags = 1;
    ExceptionRecord.ExceptionAddress = 0LL;
    ExceptionRecord.ExceptionCode = -1073740791;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionInformation[0] = updated;
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    v8 = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    KiDispatchException(&ExceptionRecord, v8 - 320, BaseTrapFrame, 1u, 0);
  }
  return (unsigned int)updated;
}
