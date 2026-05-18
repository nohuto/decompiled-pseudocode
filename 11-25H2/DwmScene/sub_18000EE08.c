/*
 * XREFs of sub_18000EE08 @ 0x18000EE08
 * Callers:
 *     sub_18000EBFC @ 0x18000EBFC (sub_18000EBFC.c)
 *     sub_18000F154 @ 0x18000F154 (sub_18000F154.c)
 *     sub_18000F51C @ 0x18000F51C (sub_18000F51C.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

LPVOID __fastcall sub_18000EE08(DWORD dwFlags, SIZE_T dwBytes)
{
  HANDLE ProcessHeap; // rsi
  LPVOID v5; // rbx
  FARPROC RtlDisownModuleHeapAllocation; // rax
  HMODULE ModuleHandleW; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, dwFlags, dwBytes);
  RtlDisownModuleHeapAllocation = (FARPROC)qword_1801C33F0;
  if ( qword_1801C33F0
    || !byte_1801C3388
    && ((ModuleHandleW = GetModuleHandleW(L"ntdll.dll")) == 0LL
      ? (RtlDisownModuleHeapAllocation = (FARPROC)qword_1801C33F0)
      : (FARPROC)(RtlDisownModuleHeapAllocation = GetProcAddress(ModuleHandleW, "RtlDisownModuleHeapAllocation"),
                  qword_1801C33F0 = (__int64)RtlDisownModuleHeapAllocation),
        byte_1801C3388 = 1,
        RtlDisownModuleHeapAllocation) )
  {
    ((void (__fastcall *)(HANDLE, LPVOID))RtlDisownModuleHeapAllocation)(ProcessHeap, v5);
  }
  return v5;
}
