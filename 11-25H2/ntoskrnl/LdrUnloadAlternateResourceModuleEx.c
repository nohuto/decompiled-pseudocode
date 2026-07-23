/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x140492228
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1402F2670 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x140492210 (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1402F0930 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     LdrpInitMuiCrits @ 0x1402F28A8 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x140A483D0 (MmUnmapViewInSystemSpace.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  BOOLEAN v3; // bl
  int v4; // edi
  int v5; // r15d
  PVOID *v6; // rsi
  char *v7; // rcx
  PVOID v8; // rcx
  int v9; // ebx
  int v10; // eax
  void *Pool2; // rax
  void *v12; // rdi
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  if ( !DllHandle )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v4 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( 1 )
    {
      if ( v4 <= 0 )
        goto LABEL_21;
      v5 = v4 - 1;
      v6 = (PVOID *)((char *)AlternateResourceModules + 64 * (__int64)(v4 - 1));
      if ( v6[1] == DllHandle )
        break;
LABEL_5:
      v4 = v5;
    }
    v7 = (char *)v6[4];
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      MmUnmapViewInSystemSpace(v7);
      v8 = v6[5];
      if ( v8 )
      {
        ZwClose(v8);
        v6[5] = 0LL;
      }
      v6[4] = 0LL;
    }
    v9 = AlternateResourceModuleCount;
    if ( v4 != AlternateResourceModuleCount )
      memmove(v6, v6 + 8, (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - v4) << 6);
    AlternateResourceModuleCount = v9 - 1;
    if ( v9 == 1 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      v10 = 0;
    }
    else
    {
      if ( v9 - 1 >= (unsigned int)(AltResMemBlockCount - 32) )
      {
LABEL_20:
        v3 = 1;
        goto LABEL_5;
      }
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v12 = Pool2;
      if ( !Pool2 )
      {
        v3 = 0;
        goto LABEL_21;
      }
      memmove(Pool2, AlternateResourceModules, (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = v12;
      v10 = AltResMemBlockCount - 32;
    }
    AltResMemBlockCount = v10;
    goto LABEL_20;
  }
  v3 = 1;
LABEL_21:
  KeReleaseMutantEx((ULONG_PTR)&MuiMutex, 1u, 4, &v14);
  return v3;
}
