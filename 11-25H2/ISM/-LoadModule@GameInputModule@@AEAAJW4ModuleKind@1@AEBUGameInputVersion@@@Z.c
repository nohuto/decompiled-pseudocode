/*
 * XREFs of ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18007182C
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x1800716B0 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 * Callees:
 *     ?GetSystemDirPath@GameInputModule@@CAJPEBGAEAV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@utl@@@utl@@PEA_K@Z @ 0x18008C5D4 (-GetSystemDirPath@GameInputModule@@CAJPEBGAEAV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@ut.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z @ 0x18010AA50 (-ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z.c)
 *     ?ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z @ 0x18010AC18 (-ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z.c)
 */

__int64 __fastcall GameInputModule::LoadModule(__int64 a1, __int64 a2, const WCHAR *a3)
{
  int v3; // ebp
  unsigned int v4; // esi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  const struct std::nothrow_t *v7; // rdx
  int SystemDirPath; // ebx
  WCHAR *v9; // rbx
  DWORD FileAttributesW; // eax
  const struct GameInputVersion *v11; // rdx
  HMODULE Library; // rax
  HMODULE v14; // rbp
  FARPROC ProcAddress; // r15
  FARPROC v16; // r12
  FARPROC v17; // rax
  LPCWSTR lpFileName; // [rsp+60h] [rbp+18h] BYREF

  lpFileName = a3;
  v3 = *(_DWORD *)a1;
  v4 = 0;
  if ( *(_DWORD *)a1 )
    goto LABEL_8;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
LABEL_7:
    LeaveCriticalSection(v6);
LABEL_8:
    if ( v3 != 1 )
      return 2147549183LL;
    LOBYTE(v4) = *(_QWORD *)(a1 + 32) == 0LL;
    return v4;
  }
  lpFileName = 0LL;
  SystemDirPath = GameInputModule::GetSystemDirPath(L"GameInput.dll", &lpFileName);
  if ( SystemDirPath >= 0 )
  {
    v9 = (WCHAR *)lpFileName;
    FileAttributesW = GetFileAttributesW(lpFileName);
    if ( FileAttributesW != -1
      && (FileAttributesW & 0x550) == 0
      && (int)GameInputModule::ValidateModuleCertChain(v9) >= 0 )
    {
      Library = LoadLibraryExW(v9, 0LL, 0x800u);
      v14 = Library;
      if ( Library )
      {
        if ( GameInputModule::ValidateModuleVersion(Library, v11)
          && (ProcAddress = GetProcAddress(v14, "GameInputCreate")) != 0LL
          && (v16 = GetProcAddress(v14, "DllCanUnloadNow")) != 0LL
          && (v17 = GetProcAddress(v14, "DllGetClassObject")) != 0LL )
        {
          *(_QWORD *)(a1 + 8) = ProcAddress;
          *(_QWORD *)(a1 + 16) = v16;
          *(_QWORD *)(a1 + 24) = v17;
          *(_QWORD *)(a1 + 32) = v14;
        }
        else
        {
          FreeLibrary(v14);
        }
      }
    }
    *(_DWORD *)a1 = 1;
    v3 = 1;
    if ( v9 )
      operator delete(v9, v11);
    goto LABEL_7;
  }
  if ( lpFileName )
    operator delete((void *)lpFileName, v7);
  LeaveCriticalSection(v6);
  return (unsigned int)SystemDirPath;
}
