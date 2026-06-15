/*
 * XREFs of ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x140021DF0
 * Callers:
 *     ?SerializeForRPC@CCrossProcessServerMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x140021CF0 (-SerializeForRPC@CCrossProcessServerMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14002223C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005738C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CCrossProcessBaseMemory::SerializeForRPC(
        CCrossProcessBaseMemory *this,
        struct STANDARD_CROSSPROCESS_MEMORY *a2)
{
  unsigned int LastError; // ebx
  HANDLE CurrentProcess; // rax
  void *v7; // rdi
  void *v8; // rbx
  HANDLE v9; // rax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  if ( ((*((_QWORD *)this + 2) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    LastError = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      (const char *)0x80004005LL);
    return LastError;
  }
  *(_QWORD *)a2 = 0LL;
  TargetHandle = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &TargetHandle,
    0LL);
  CurrentProcess = GetCurrentProcess();
  v7 = (void *)*((_QWORD *)this + 2);
  v8 = CurrentProcess;
  v9 = GetCurrentProcess();
  if ( !DuplicateHandle(v9, v7, v8, &TargetHandle, 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x27,
                  (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
                  v10);
    if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TargetHandle);
    return LastError;
  }
  *(_QWORD *)a2 = TargetHandle;
  return 0LL;
}
