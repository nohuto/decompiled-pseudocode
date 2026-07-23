/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x140489DDC
 * Callers:
 *     LdrpGetRcConfig @ 0x1402DC5EC (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402DCE08 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x140A622BC (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x1402DCF84 (LdrpInitMuiCrits.c)
 *     KeReleaseMutant @ 0x1402DEA20 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x140A41A80 (MmUnmapViewInSystemSpace.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        _DWORD *a1,
        PVOID *a2,
        HANDLE *a3,
        __int64 a4,
        __int16 a5,
        int a6,
        int a7,
        __int64 a8)
{
  HANDLE v11; // rdi
  char v12; // r14
  unsigned int v13; // ebx
  __int16 v14; // r13
  unsigned __int64 v15; // rax
  char *v16; // rsi
  char *v17; // rax
  unsigned int v18; // edx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  _DWORD *v22; // rcx
  int v23; // edx
  _DWORD *v24; // rax
  int v25; // r9d
  int v26; // r8d
  unsigned __int64 v27; // rcx
  char *v28; // rdx
  PVOID v29; // rax
  unsigned __int64 v30; // rcx
  char *v31; // rdx
  char *Pool2; // rax
  __int16 v33; // ax
  unsigned __int64 v35; // [rsp+70h] [rbp+8h] BYREF
  __int64 v36; // [rsp+88h] [rbp+20h]

  v36 = a4;
  v35 = (unsigned __int64)a1;
  v11 = 0LL;
  if ( !a1 )
    return 0;
  v12 = a6;
  if ( (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v13 = 0;
  v14 = a5;
  while ( v13 < AlternateResourceModuleCount )
  {
    v15 = (unsigned __int64)v13 << 6;
    if ( *(_DWORD **)((char *)AlternateResourceModules + v15 + 8) == a1 )
    {
      if ( (v12 & 2) != 0 && *(_QWORD *)((char *)AlternateResourceModules + v15 + 16) )
        goto LABEL_63;
      if ( (v12 & 1) != 0
        && *(_QWORD *)((char *)AlternateResourceModules + v15 + 32)
        && a5
        && *(_WORD *)((char *)AlternateResourceModules + v15) == a5 )
      {
        if ( *a2 != (PVOID)-1LL )
        {
          MmUnmapViewInSystemSpace(*a2);
          if ( a3 )
            ZwClose(*a3);
        }
        v30 = (unsigned __int64)v13 << 6;
        v31 = (char *)AlternateResourceModules;
        *a2 = *(PVOID *)((char *)AlternateResourceModules + v30 + 32);
        if ( a3 )
          *a3 = *(HANDLE *)&v31[v30 + 40];
        goto LABEL_63;
      }
    }
    ++v13;
  }
  if ( (v12 & 0x10) != 0 )
    goto LABEL_63;
  v16 = (char *)AlternateResourceModules;
  if ( AlternateResourceModules )
  {
    if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
    {
      Pool2 = (char *)ExAllocatePool2(
                        0x100uLL,
                        (unsigned __int64)(unsigned int)(AltResMemBlockCount + 32) << 6,
                        0x69507472u);
      v16 = Pool2;
      if ( !Pool2 )
        goto LABEL_63;
      memmove(Pool2, AlternateResourceModules, (unsigned __int64)(unsigned int)AltResMemBlockCount << 6);
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = v16;
      AltResMemBlockCount += 32;
    }
  }
  else
  {
    v17 = (char *)ExAllocatePool2(0x100uLL, 0x800uLL, 0x69507472u);
    v16 = v17;
    if ( !v17 )
      goto LABEL_63;
    AlternateResourceModules = v17;
    AltResMemBlockCount = 32;
  }
  v18 = 0;
  v19 = v35;
  while ( v18 < AlternateResourceModuleCount )
  {
    v20 = (unsigned __int64)v18 << 6;
    if ( *(_QWORD *)&v16[v20 + 8] == v35 )
    {
      if ( (v12 & 2) != 0 && !*(_QWORD *)&v16[v20 + 16] )
      {
        *(_QWORD *)&v16[v20 + 16] = v36;
        *(_DWORD *)&v16[v20 + 56] = a7;
        goto LABEL_63;
      }
      if ( (v12 & 1) != 0 && !*(_QWORD *)&v16[v20 + 32] )
      {
        v33 = *(_WORD *)&v16[v20];
        if ( v33 == v14 || !v33 )
        {
          *(_QWORD *)&v16[v20 + 32] = *a2;
          if ( a3 )
            v11 = *a3;
          *(_QWORD *)&v16[64 * (unsigned __int64)v18 + 40] = v11;
          *(_WORD *)&v16[64 * (unsigned __int64)v18] = v14;
          *(_DWORD *)&v16[64 * (unsigned __int64)v18 + 56] = a7;
          *(_QWORD *)&v16[64 * (unsigned __int64)v18 + 48] = a8;
          goto LABEL_63;
        }
      }
    }
    ++v18;
  }
  v21 = v35 & 0xFFFFFFFFFFFFFFFCuLL;
  v22 = 0LL;
  v35 = 0LL;
  if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( *(_WORD *)v21 != 23117 )
      goto LABEL_28;
    v22 = (_DWORD *)(v21 + *(unsigned int *)(v21 + 60));
    if ( (unsigned __int64)v22 < v21
      || v21 <= 0x7FFFFFFEFFFFLL
      && ((_DWORD *)((char *)v22 + 263) < v22 || (unsigned __int64)v22 + 263 > 0x7FFFFFFEFFFFLL) )
    {
      goto LABEL_28;
    }
    if ( *v22 != 17744 )
      goto LABEL_28;
    v23 = 0;
  }
  else
  {
    v23 = -1073741811;
  }
  v24 = (_DWORD *)v35;
  if ( v23 >= 0 )
    v24 = v22;
  v35 = (unsigned __int64)v24;
LABEL_28:
  if ( v35 )
  {
    v25 = *(_DWORD *)(v35 + 88);
    v26 = AlternateResourceModuleCount;
    v27 = (unsigned __int64)(unsigned int)AlternateResourceModuleCount << 6;
    v28 = (char *)AlternateResourceModules;
    *(_QWORD *)((char *)AlternateResourceModules + v27 + 8) = v19;
    *(_QWORD *)&v28[v27 + 16] = v36;
    if ( (v12 & 1) != 0 )
    {
      if ( a2 )
        v29 = *a2;
      else
        v29 = 0LL;
      *(_QWORD *)&v28[v27 + 32] = v29;
      if ( a3 )
        v11 = *a3;
      *(_QWORD *)&v28[v27 + 40] = v11;
      *(_QWORD *)&v28[v27 + 48] = a8;
    }
    else
    {
      *(_QWORD *)&v28[v27 + 32] = 0LL;
      *(_QWORD *)&v28[v27 + 40] = 0LL;
      *(_QWORD *)&v28[v27 + 48] = 0LL;
    }
    *(_WORD *)&v28[v27] = v14;
    *(_DWORD *)&v28[v27 + 24] = v25;
    *(_DWORD *)&v28[v27 + 56] = a7;
    AlternateResourceModuleCount = v26 + 1;
  }
LABEL_63:
  KeReleaseMutantEx((ULONG_PTR)&MuiMutex, 1u, 4, (int *)&v35);
  return 1;
}
