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

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1)
{
  char v2; // bl
  int v3; // edi
  int v4; // r15d
  _QWORD *v5; // rsi
  char *v6; // rcx
  void *v7; // rcx
  int v8; // ebx
  int v9; // eax
  void *Pool2; // rax
  void *v11; // rdi
  int v13; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a1 )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v3 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    while ( 1 )
    {
      if ( v3 <= 0 )
        goto LABEL_21;
      v4 = v3 - 1;
      v5 = (char *)AlternateResourceModules + 64 * (__int64)(v3 - 1);
      if ( v5[1] == a1 )
        break;
LABEL_5:
      v3 = v4;
    }
    v6 = (char *)v5[4];
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      MmUnmapViewInSystemSpace(v6);
      v7 = (void *)v5[5];
      if ( v7 )
      {
        ZwClose(v7);
        v5[5] = 0LL;
      }
      v5[4] = 0LL;
    }
    v8 = AlternateResourceModuleCount;
    if ( v3 != AlternateResourceModuleCount )
      memmove(v5, v5 + 8, (unsigned __int64)(unsigned int)(AlternateResourceModuleCount - v3) << 6);
    AlternateResourceModuleCount = v8 - 1;
    if ( v8 == 1 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      v9 = 0;
    }
    else
    {
      if ( v8 - 1 >= (unsigned int)(AltResMemBlockCount - 32) )
      {
LABEL_20:
        v2 = 1;
        goto LABEL_5;
      }
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v11 = Pool2;
      if ( !Pool2 )
      {
        v2 = 0;
        goto LABEL_21;
      }
      memmove(Pool2, AlternateResourceModules, (unsigned __int64)(unsigned int)(AltResMemBlockCount - 32) << 6);
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = v11;
      v9 = AltResMemBlockCount - 32;
    }
    AltResMemBlockCount = v9;
    goto LABEL_20;
  }
  v2 = 1;
LABEL_21:
  KeReleaseMutantEx((ULONG_PTR)&MuiMutex, 1u, 4, &v13);
  return v2;
}
