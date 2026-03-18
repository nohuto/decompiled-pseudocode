/*
 * XREFs of PspFreeUserFiberShadowStack @ 0x1408DB370
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     PspGetBaseTrapFrame @ 0x140434EF0 (PspGetBaseTrapFrame.c)
 *     MmUpdateUserShadowStackValue @ 0x1404873D8 (MmUpdateUserShadowStackValue.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1406A6870 (ZwQueryVirtualMemory.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     MmFreeVirtualMemory @ 0x1408DB8A0 (MmFreeVirtualMemory.c)
 */

__int64 __fastcall PspFreeUserFiberShadowStack(PVOID BaseAddress)
{
  int updated; // esi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 BaseTrapFrame; // rbx
  __int64 v6; // rax
  _OWORD MemoryInformation[3]; // [rsp+38h] [rbp-F0h] BYREF
  ULONG_PTR v8[3]; // [rsp+70h] [rbp-B8h] BYREF
  int v9; // [rsp+88h] [rbp-A0h]
  __int64 v10; // [rsp+90h] [rbp-98h]

  memset_0(v8, 0, 0x98uLL);
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
                (MEMORY_INFORMATION_CLASS)3,
                MemoryInformation,
                0x30uLL,
                0LL);
    if ( updated >= 0 )
      updated = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x40000000);
  }
  if ( updated < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v8[2] = 0LL;
    v8[0] = 0x1C0000409LL;
    v9 = 1;
    v8[1] = 0LL;
    v10 = updated;
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    v6 = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    KiDispatchException((unsigned int *)v8, v6 - 320, BaseTrapFrame, 1u, 0);
  }
  return (unsigned int)updated;
}
