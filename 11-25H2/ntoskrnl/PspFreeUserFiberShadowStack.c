/*
 * XREFs of PspFreeUserFiberShadowStack @ 0x140A537E8
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     PspGetBaseTrapFrame @ 0x140439370 (PspGetBaseTrapFrame.c)
 *     MmUpdateUserShadowStackValue @ 0x14048789C (MmUpdateUserShadowStackValue.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14069B5A0 (ZwQueryVirtualMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     MmFreeVirtualMemory @ 0x1408F6740 (MmFreeVirtualMemory.c)
 */

__int64 __fastcall PspFreeUserFiberShadowStack(PVOID BaseAddress)
{
  int updated; // esi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 BaseTrapFrame; // rbx
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp-F8h] BYREF
  _OWORD MemoryInformation[3]; // [rsp+38h] [rbp-F0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+70h] [rbp-B8h] BYREF

  memset_0(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  if ( ((unsigned __int8)BaseAddress & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  updated = MmUpdateUserShadowStackValue(
              (unsigned __int64)BaseAddress,
              ((unsigned __int64)BaseAddress + 8) & 0xFFFFFFFFFFFFFFFCuLL | 1);
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
    {
      v7 = 0LL;
      updated = MmFreeVirtualMemory(
                  0xFFFFFFFFFFFFFFFFuLL,
                  (unsigned __int64 *)MemoryInformation,
                  &v7,
                  0x8000u,
                  0,
                  0x40000000);
    }
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
    v6 = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    KiDispatchException(&ExceptionRecord, v6 - 320, BaseTrapFrame, 1, 0);
  }
  return (unsigned int)updated;
}
