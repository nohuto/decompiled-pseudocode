/*
 * XREFs of BiCreateMergedBootEntry @ 0x1409A7CDC
 * Callers:
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409A7B20 (BiUpdateEfiEntry.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     BiGetDeviceFromEfiPath @ 0x1409A7044 (BiGetDeviceFromEfiPath.c)
 *     BiTranslateFilePath @ 0x1409A71BC (BiTranslateFilePath.c)
 *     BiGetFilePathFromEfiPath @ 0x140A72ACC (BiGetFilePathFromEfiPath.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateMergedBootEntry(_DWORD *a1, _WORD *a2, _DWORD *a3, void *a4, _QWORD *a5)
{
  __int64 v5; // rax
  _WORD *v6; // rbx
  PVOID v8; // r13
  size_t v9; // rdi
  _WORD *v10; // r15
  _FILE_PATH *v11; // r14
  int DeviceFromEfiPath; // eax
  unsigned int v13; // ebx
  char *v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  size_t v17; // rbx
  int v18; // ecx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  _FILE_PATH *Pool2; // rax
  int v23; // eax
  unsigned int v24; // edx
  int v25; // r8d
  int v26; // r9d
  unsigned int v27; // r12d
  void *v28; // rax
  int FilePathFromEfiPath; // eax
  _DWORD *v30; // rax
  __int64 v31; // rcx
  size_t v32; // r8
  _DWORD *v33; // r12
  char v34; // [rsp+20h] [rbp-30h]
  unsigned int v35; // [rsp+24h] [rbp-2Ch] BYREF
  size_t Size; // [rsp+28h] [rbp-28h] BYREF
  size_t v37; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v38; // [rsp+38h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  char v41; // [rsp+A0h] [rbp+50h]
  void *Src; // [rsp+A8h] [rbp+58h]

  Src = a4;
  v5 = -1LL;
  LODWORD(Size) = 0;
  v6 = a2;
  v35 = 0;
  P[0] = 0LL;
  v8 = 0LL;
  v37 = 0LL;
  v9 = 0LL;
  v41 = 0;
  v10 = 0LL;
  v38 = 0LL;
  v11 = 0LL;
  v34 = 0;
  if ( a3 )
  {
    if ( *a3 == 5 )
      return 3221225486LL;
    if ( *a3 != 2 )
      return 3221225485LL;
    v14 = (char *)(a3 + 5);
    if ( !a4 )
    {
      v9 = (size_t)a1 + (unsigned int)a1[5];
      v37 = v9;
      FilePathFromEfiPath = BiGetFilePathFromEfiPath(v9 + 12, &v38, &v35);
      v10 = v38;
      v13 = FilePathFromEfiPath;
      if ( FilePathFromEfiPath < 0 )
        goto LABEL_12;
      v34 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v9 = (size_t)a1 + (unsigned int)a1[5];
    if ( !a4 )
      goto LABEL_26;
    v37 = (size_t)a1 + (unsigned int)a1[5];
    DeviceFromEfiPath = BiGetDeviceFromEfiPath((char *)(v9 + 12), P, (unsigned int *)&Size);
    v8 = P[0];
    v13 = DeviceFromEfiPath;
    if ( DeviceFromEfiPath < 0 )
      goto LABEL_12;
    a4 = Src;
    v14 = (char *)P[0] + 20;
  }
  v10 = a4;
LABEL_6:
  v15 = -1LL;
  v16 = -1LL;
  do
    ++v16;
  while ( *(_WORD *)&v14[2 * v16] );
  v17 = (unsigned int)(2 * v16 + 2);
  do
    ++v15;
  while ( v10[v15] );
  v18 = 2 * v15 + 2;
  LODWORD(Size) = v18;
  if ( v18 + (int)v17 >= (unsigned int)v17 )
  {
    v20 = v17 + v18;
    v21 = v17 + v18 + 12;
    if ( v21 >= v20 )
    {
      P[0] = (PVOID)v21;
      Pool2 = (_FILE_PATH *)ExAllocatePool2(0x102uLL, v21, 0x4B444342u);
      v11 = Pool2;
      if ( !Pool2 )
      {
LABEL_23:
        v13 = -1073741670;
        goto LABEL_12;
      }
      Pool2->Version = 1;
      Pool2->Length = (ULONG)P[0];
      Pool2->Type = 3;
      memmove(Pool2->FilePath, v14, v17);
      memmove(&v11->FilePath[v17], v10, (unsigned int)Size);
      v23 = BiTranslateFilePath(v11, 4u, (_FILE_PATH **)&v37);
      v9 = v37;
      v13 = v23;
      if ( v23 < 0 )
        goto LABEL_12;
      v6 = a2;
      v5 = -1LL;
      v41 = 1;
LABEL_26:
      if ( !v6 )
        v6 = (_WORD *)((char *)a1 + (unsigned int)a1[4]);
      do
        ++v5;
      while ( v6[v5] );
      v24 = a1[6];
      v25 = 2 * v5 + 2;
      LODWORD(v37) = v25;
      if ( v24 + v25 < v24 || (v26 = *(_DWORD *)(v9 + 4), v24 + v25 + v26 + 36 < v24 + v25) )
      {
        v13 = -1073741675;
        goto LABEL_12;
      }
      LODWORD(Size) = (v24 + 31) & 0xFFFFFFFC;
      v35 = (v25 + Size + 3) & 0xFFFFFFFC;
      v27 = v26 + v35;
      v28 = (void *)ExAllocatePool2(0x102uLL, v26 + v35, 0x4B444342u);
      P[0] = v28;
      if ( v28 )
      {
        memset_0(v28, 0, v27);
        v30 = P[0];
        v31 = (unsigned int)Size;
        v32 = (unsigned int)v37;
        *((_DWORD *)P[0] + 1) = v27;
        v33 = P[0];
        *v30 = 1;
        v33[2] = a1[2];
        v33[3] = a1[3];
        LODWORD(v30) = v35;
        v33[4] = v31;
        v33[5] = (_DWORD)v30;
        v33[6] = a1[6];
        memmove((char *)v33 + v31, v6, v32);
        memmove((char *)v33 + v35, (const void *)v9, *(unsigned int *)(v9 + 4));
        memmove(v33 + 7, a1 + 7, (unsigned int)a1[6]);
        *a5 = v33;
        v13 = 0;
        goto LABEL_12;
      }
      goto LABEL_23;
    }
  }
  v13 = -1073741675;
LABEL_12:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x4B444342u);
  if ( v41 )
    ExFreePoolWithTag((PVOID)v9, 0x4B444342u);
  if ( v34 )
    ExFreePoolWithTag(v10, 0x4B444342u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4B444342u);
  return v13;
}
