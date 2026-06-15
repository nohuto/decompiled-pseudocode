/*
 * XREFs of ?Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z @ 0x140022200
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CF70 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@$$QEAPEAXAEAI@Z @ 0x140022478 (--$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Micr.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14002253C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400574C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCrossProcessMemoryManager::Allocate(
        CCrossProcessMemoryManager *this,
        DWORD dwMaximumSizeLow,
        struct ICrossProcessMemory **a3)
{
  HANDLE FileMappingW; // rax
  const char *v5; // r9
  char *v6; // rbx
  unsigned int LastError; // edi
  int v9; // eax
  unsigned int v10; // ebx
  struct ICrossProcessMemory *v11; // rbx
  HANDLE v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  DWORD v14; // [rsp+68h] [rbp+28h] BYREF
  HANDLE hObject; // [rsp+70h] [rbp+30h] BYREF
  struct ICrossProcessMemory *v16; // [rsp+78h] [rbp+38h] BYREF

  v14 = dwMaximumSizeLow;
  if ( !a3 )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
      (const char *)0x80070057LL);
    return v10;
  }
  *a3 = 0LL;
  hObject = 0LL;
  FileMappingW = CreateFileMappingW(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (LPSECURITY_ATTRIBUTES)((char *)this + 16),
                   4u,
                   0,
                   dwMaximumSizeLow,
                   0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    FileMappingW);
  v6 = (char *)hObject;
  if ( (((unsigned __int64)hObject + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x35,
                  (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
                  v5);
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v6);
    return LastError;
  }
  v12[0] = hObject;
  v16 = 0LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessServerMemory,ICrossProcessMemory,void *,unsigned int &>(
         &v16,
         v12,
         &v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
      (const char *)(unsigned int)v9);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v16);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    return v10;
  }
  v11 = v16;
  if ( v16 )
  {
    *a3 = v16;
    (*(void (__fastcall **)(struct ICrossProcessMemory *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  else
  {
    *a3 = 0LL;
  }
  if ( v11 )
    (*(void (__fastcall **)(struct ICrossProcessMemory *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
