/*
 * XREFs of sub_18000EF08 @ 0x18000EF08
 * Callers:
 *     sub_18000ECFC @ 0x18000ECFC (sub_18000ECFC.c)
 *     sub_18000F254 @ 0x18000F254 (sub_18000F254.c)
 *     sub_18000F61C @ 0x18000F61C (sub_18000F61C.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

LPVOID __fastcall sub_18000EF08(DWORD dwFlags, SIZE_T dwBytes)
{
  HANDLE ProcessHeap; // rsi
  LPVOID v5; // rbx
  FARPROC RtlDisownModuleHeapAllocation; // rax
  HMODULE ModuleHandleW; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, dwFlags, dwBytes);
  RtlDisownModuleHeapAllocation = (FARPROC)qword_1801C4400;
  if ( qword_1801C4400
    || !byte_1801C43A0
    && ((ModuleHandleW = GetModuleHandleW(L"ntdll.dll")) == 0LL
      ? (RtlDisownModuleHeapAllocation = (FARPROC)qword_1801C4400)
      : (FARPROC)(RtlDisownModuleHeapAllocation = GetProcAddress(ModuleHandleW, "RtlDisownModuleHeapAllocation"),
                  qword_1801C4400 = (__int64)RtlDisownModuleHeapAllocation),
        byte_1801C43A0 = 1,
        RtlDisownModuleHeapAllocation) )
  {
    ((void (__fastcall *)(HANDLE, LPVOID))RtlDisownModuleHeapAllocation)(ProcessHeap, v5);
  }
  return v5;
}
