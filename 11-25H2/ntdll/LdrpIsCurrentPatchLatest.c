/*
 * XREFs of LdrpIsCurrentPatchLatest @ 0x18015FF2C
 * Callers:
 *     LdrHotPatchNotify @ 0x18015FB50 (LdrHotPatchNotify.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x18004E780 (LdrpFindLoadedDllByHandle.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     ZwAreMappedFilesTheSame @ 0x180164410 (ZwAreMappedFilesTheSame.c)
 *     ZwManageHotPatch @ 0x180165550 (ZwManageHotPatch.c)
 */

__int64 __fastcall LdrpIsCurrentPatchLatest(void *a1, bool *a2)
{
  int LoadedDllByHandle; // eax
  PVOID *v5; // rdi
  NTSTATUS v6; // ebx
  bool v7; // si
  int v8; // eax
  NTSTATUS v10; // eax
  __int64 v11; // [rsp+50h] [rbp-9h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-1h] BYREF
  __int128 v13; // [rsp+60h] [rbp+7h] BYREF
  __int128 v14; // [rsp+70h] [rbp+17h]
  HANDLE Handle; // [rsp+80h] [rbp+27h]
  PVOID BaseAddress; // [rsp+D0h] [rbp+77h] BYREF
  PVOID v17; // [rsp+D8h] [rbp+7Fh] BYREF

  v11 = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  BaseAddress = 0LL;
  v13 = 0LL;
  ViewSize = 0LL;
  v14 = 0LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, (__int64 *)&v17, 0LL);
  v5 = (PVOID *)v17;
  v6 = LoadedDllByHandle;
  if ( LoadedDllByHandle < 0 )
    goto LABEL_9;
  v7 = 1;
  *((_QWORD *)&v14 + 1) = a1;
  LODWORD(v13) = 1;
  *((_QWORD *)&v13 + 1) = 0x100000000DLL;
  LODWORD(v14) = 0x1000000;
  v8 = ZwManageHotPatch(10LL, &v13, 40LL, &v11);
  v6 = v8;
  if ( v8 >= 0 )
  {
    if ( v5[37] )
    {
      v6 = ZwMapViewOfSection(
             Handle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             0LL,
             &ViewSize,
             ViewUnmap,
             0,
             0x10u);
      if ( v6 < 0 )
        goto LABEL_9;
      v10 = ZwAreMappedFilesTheSame(v5[37], BaseAddress);
      v6 = v10;
      if ( v10 < 0 )
      {
        v7 = 0;
        if ( v10 == -1073741612 )
          v6 = 0;
        goto LABEL_20;
      }
    }
    else
    {
      v7 = 0;
    }
    v6 = 0;
LABEL_8:
    *a2 = v7;
    goto LABEL_9;
  }
  if ( v8 != -1073740588 )
    goto LABEL_9;
  v6 = 0;
  v7 = v5[37] == 0LL;
LABEL_20:
  if ( v6 >= 0 )
    goto LABEL_8;
LABEL_9:
  if ( Handle )
    NtClose(Handle);
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v5 )
    LdrpDereferenceModule((char *)v5);
  return (unsigned int)v6;
}
