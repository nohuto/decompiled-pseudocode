/*
 * XREFs of BiCreateMergedBootEntry @ 0x140A253DC
 * Callers:
 *     BiUpdateEfiEntry @ 0x140A25220 (BiUpdateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x140AD63A8 (BiUpdateBcdObject.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     BiGetDeviceFromEfiPath @ 0x140A264BC (BiGetDeviceFromEfiPath.c)
 *     BiTranslateFilePath @ 0x140A26634 (BiTranslateFilePath.c)
 *     BiGetFilePathFromEfiPath @ 0x140A76A6C (BiGetFilePathFromEfiPath.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateMergedBootEntry(_DWORD *a1, _WORD *a2, _DWORD *a3, void *a4, _QWORD *a5)
{
  __int64 v5; // rax
  _WORD *v6; // rbx
  _DWORD *v8; // rdi
  _WORD *v9; // r15
  _FILE_PATH *v10; // r14
  int DeviceFromEfiPath; // ebx
  char *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  size_t v15; // rbx
  int v16; // ecx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  _FILE_PATH *Pool2; // rax
  int v21; // eax
  unsigned int v22; // edx
  int v23; // r8d
  int v24; // r9d
  unsigned int v25; // r12d
  void *v26; // rax
  int FilePathFromEfiPath; // eax
  _DWORD *v28; // rax
  __int64 v29; // rcx
  size_t v30; // r8
  _DWORD *v31; // r12
  char v32; // [rsp+20h] [rbp-30h]
  unsigned int v33; // [rsp+24h] [rbp-2Ch] BYREF
  size_t Size; // [rsp+28h] [rbp-28h]
  size_t v35; // [rsp+30h] [rbp-20h]
  _WORD *v36; // [rsp+38h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp-10h]
  char v39; // [rsp+A0h] [rbp+50h]
  void *Src; // [rsp+A8h] [rbp+58h]

  Src = a4;
  v5 = -1LL;
  LODWORD(Size) = 0;
  v6 = a2;
  v33 = 0;
  P = 0LL;
  v35 = 0LL;
  v8 = 0LL;
  v39 = 0;
  v9 = 0LL;
  v36 = 0LL;
  v10 = 0LL;
  v32 = 0;
  if ( a3 )
  {
    if ( *a3 == 5 )
      return 3221225486LL;
    if ( *a3 != 2 )
      return 3221225485LL;
    v12 = (char *)(a3 + 5);
    if ( !a4 )
    {
      v8 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
      v35 = (size_t)v8;
      FilePathFromEfiPath = BiGetFilePathFromEfiPath(v8 + 3, &v36, &v33);
      v9 = v36;
      DeviceFromEfiPath = FilePathFromEfiPath;
      if ( FilePathFromEfiPath < 0 )
        goto LABEL_12;
      v32 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v8 = (_DWORD *)((char *)a1 + (unsigned int)a1[5]);
    if ( !a4 )
      goto LABEL_24;
    v35 = (size_t)a1 + (unsigned int)a1[5];
    DeviceFromEfiPath = BiGetDeviceFromEfiPath(v8 + 3);
    if ( DeviceFromEfiPath < 0 )
      goto LABEL_12;
    a4 = Src;
    v12 = (char *)P + 20;
  }
  v9 = a4;
LABEL_6:
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( *(_WORD *)&v12[2 * v14] );
  v15 = (unsigned int)(2 * v14 + 2);
  do
    ++v13;
  while ( v9[v13] );
  v16 = 2 * v13 + 2;
  LODWORD(Size) = v16;
  if ( v16 + (int)v15 >= (unsigned int)v15 )
  {
    v18 = v15 + v16;
    v19 = v15 + v16 + 12;
    if ( v19 >= v18 )
    {
      P = (PVOID)v19;
      Pool2 = (_FILE_PATH *)ExAllocatePool2(0x102uLL);
      v10 = Pool2;
      if ( !Pool2 )
      {
LABEL_21:
        DeviceFromEfiPath = -1073741670;
        goto LABEL_12;
      }
      Pool2->Version = 1;
      Pool2->Length = (unsigned int)P;
      Pool2->Type = 3;
      memmove(Pool2->FilePath, v12, v15);
      memmove(&v10->FilePath[v15], v9, (unsigned int)Size);
      v21 = BiTranslateFilePath(v10, 4u);
      v8 = (_DWORD *)v35;
      DeviceFromEfiPath = v21;
      if ( v21 < 0 )
        goto LABEL_12;
      v6 = a2;
      v5 = -1LL;
      v39 = 1;
LABEL_24:
      if ( !v6 )
        v6 = (_WORD *)((char *)a1 + (unsigned int)a1[4]);
      do
        ++v5;
      while ( v6[v5] );
      v22 = a1[6];
      v23 = 2 * v5 + 2;
      LODWORD(v35) = v23;
      if ( v22 + v23 < v22 || (v24 = v8[1], v22 + v23 + v24 + 36 < v22 + v23) )
      {
        DeviceFromEfiPath = -1073741675;
        goto LABEL_12;
      }
      LODWORD(Size) = (v22 + 31) & 0xFFFFFFFC;
      v33 = (v23 + Size + 3) & 0xFFFFFFFC;
      v25 = v24 + v33;
      v26 = (void *)ExAllocatePool2(0x102uLL);
      P = v26;
      if ( v26 )
      {
        memset_0(v26, 0, v25);
        v28 = P;
        v29 = (unsigned int)Size;
        v30 = (unsigned int)v35;
        *((_DWORD *)P + 1) = v25;
        v31 = P;
        *v28 = 1;
        v31[2] = a1[2];
        v31[3] = a1[3];
        LODWORD(v28) = v33;
        v31[4] = v29;
        v31[5] = (_DWORD)v28;
        v31[6] = a1[6];
        memmove((char *)v31 + v29, v6, v30);
        memmove((char *)v31 + v33, v8, (unsigned int)v8[1]);
        memmove(v31 + 7, a1 + 7, (unsigned int)a1[6]);
        *a5 = v31;
        DeviceFromEfiPath = 0;
        goto LABEL_12;
      }
      goto LABEL_21;
    }
  }
  DeviceFromEfiPath = -1073741675;
LABEL_12:
  if ( v39 )
    ExFreePoolWithTag(v8, 0x4B444342u);
  if ( v32 )
    ExFreePoolWithTag(v9, 0x4B444342u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x4B444342u);
  return (unsigned int)DeviceFromEfiPath;
}
