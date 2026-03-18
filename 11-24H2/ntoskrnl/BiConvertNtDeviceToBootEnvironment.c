/*
 * XREFs of BiConvertNtDeviceToBootEnvironment @ 0x140A9857C
 * Callers:
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408131A0 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14081344C (BiCreatePartitionDevice.c)
 *     BiConvertElementToRegistryData @ 0x1409C00C4 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A9857C (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     strcpy_s @ 0x1405042E0 (strcpy_s.c)
 *     wcscpy_s @ 0x1405047E0 (wcscpy_s.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408131A0 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14081344C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePath @ 0x140A86BE0 (BiGetPartitionVhdFilePath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A9857C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140AAEF40 (BiIsVolumePartitionInformationRetained.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 BiConvertNtDeviceToBootEnvironment(__int64 a1, unsigned int a2, char a3, ...)
{
  unsigned int v3; // eax
  _QWORD *v4; // r13
  char *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  char *v12; // rax
  __int64 v13; // rax
  int v14; // ebx
  unsigned int *v15; // rbx
  unsigned int v16; // esi
  char *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // esi
  char *v20; // rax
  int v21; // eax
  char *Pool2; // rax
  char *v23; // rax
  __int128 v24; // xmm0
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rax
  __int64 v31; // rbx
  char *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r15d
  unsigned int v35; // r12d
  unsigned int v36; // ebx
  _DWORD *v37; // r14
  int v38; // eax
  __int64 v39; // rdx
  unsigned int v40; // eax
  int v41; // ecx
  void *PartitionVhdFilePath; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  char *v45; // rax
  unsigned int v46; // ebx
  __int64 v47; // rdx
  char *v48; // rdx
  int v49; // eax
  __int64 result; // rax
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  char *v52; // [rsp+38h] [rbp-8h] BYREF
  int v53; // [rsp+80h] [rbp+40h] BYREF
  void *Src; // [rsp+98h] [rbp+58h] BYREF
  va_list Srca; // [rsp+98h] [rbp+58h]
  va_list va1; // [rsp+A0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(Srca, a3);
  Src = va_arg(va1, void *);
  v3 = *(_DWORD *)a1;
  v53 = 0;
  v4 = Src;
  P = 0LL;
  v52 = 0LL;
  v7 = 0LL;
  if ( v3 <= 7 )
  {
    if ( v3 != 7 )
    {
      v8 = v3 - 1;
      if ( !v8 )
      {
        if ( a2 >= 0x14 )
        {
          Pool2 = (char *)ExAllocatePool2(0x102uLL);
          v7 = Pool2;
          if ( Pool2 )
          {
            memset_0(Pool2, 0, 0x48uLL);
            *(_DWORD *)v7 = 5;
            *((_DWORD *)v7 + 2) = 72;
            goto LABEL_32;
          }
          goto LABEL_30;
        }
LABEL_61:
        v14 = -1073741811;
        goto LABEL_101;
      }
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 == 1 && a2 >= 0x20 && *(_DWORD *)(a1 + 28) <= 0x100000u )
            {
              v12 = (char *)ExAllocatePool2(0x102uLL);
              v7 = v12;
              if ( v12 )
              {
                memmove(v12, (const void *)(a1 + 20), *(unsigned int *)(a1 + 28));
LABEL_32:
                v14 = 0;
                goto LABEL_99;
              }
LABEL_30:
              v14 = -1073741670;
              goto LABEL_99;
            }
            goto LABEL_61;
          }
          if ( a2 < 0x2E )
            goto LABEL_61;
          v13 = *(unsigned int *)(a1 + 20);
          if ( !(_DWORD)v13 )
            goto LABEL_61;
          Src = 0LL;
          v14 = BiConvertNtFilePathToBootEnvironment(
                  v13 + a1,
                  a2 - (unsigned int)v13,
                  (_WORD *)(a1 + 24),
                  a3,
                  (void **)Srca);
          if ( v14 < 0 )
            goto LABEL_99;
          v15 = (unsigned int *)Src;
          v16 = *((_DWORD *)Src + 1) + 40;
          v17 = (char *)ExAllocatePool2(0x102uLL);
          v7 = v17;
          if ( v17 )
          {
            memset_0(v17, 0, v16);
            *(_DWORD *)v7 = 0;
            *((_DWORD *)v7 + 1) = 1;
            *((_DWORD *)v7 + 2) = v16;
            *((_DWORD *)v7 + 4) = 3;
            memmove(v7 + 40, v15, v15[1]);
LABEL_23:
            ExFreePoolWithTag(v15, 0x4B444342u);
            goto LABEL_32;
          }
        }
        else
        {
          if ( a2 < 0x2E )
            goto LABEL_61;
          v18 = *(unsigned int *)(a1 + 20);
          if ( !(_DWORD)v18 )
            goto LABEL_61;
          Src = 0LL;
          v14 = BiConvertNtFilePathToBootEnvironment(
                  v18 + a1,
                  a2 - (unsigned int)v18,
                  (_WORD *)(a1 + 24),
                  a3,
                  (void **)Srca);
          if ( v14 < 0 )
            goto LABEL_99;
          v15 = (unsigned int *)Src;
          v19 = *((_DWORD *)Src + 1) + 20;
          v20 = (char *)ExAllocatePool2(0x102uLL);
          v7 = v20;
          if ( v20 )
          {
            memset_0(v20, 0, v19);
            *(_DWORD *)v7 = 0;
            *((_DWORD *)v7 + 2) = v19;
            *((_DWORD *)v7 + 4) = 5;
            memmove(v7 + 20, v15, v15[1]);
            *((_DWORD *)v7 + 1) = v15[4] & 0x20;
            goto LABEL_23;
          }
        }
        ExFreePoolWithTag(v15, 0x4B444342u);
        goto LABEL_30;
      }
      if ( a2 < 0x16 )
        goto LABEL_61;
      if ( (unsigned __int8)BiIsVolumePartitionInformationRetained((PCWSTR)(a1 + 20)) )
      {
        v21 = BiCreatePartitionDevice((PCWSTR)(a1 + 20), a3, &v52, &v53);
        v7 = v52;
        v14 = v21;
        if ( v21 >= 0 )
          goto LABEL_32;
        goto LABEL_99;
      }
LABEL_68:
      v14 = -1073741637;
      goto LABEL_99;
    }
    if ( a2 < 0x24 )
      goto LABEL_61;
    v23 = (char *)ExAllocatePool2(0x102uLL);
    v7 = v23;
    if ( !v23 )
      goto LABEL_30;
    memset_0(v23, 0, 0x48uLL);
    *(_DWORD *)v7 = 7;
    *((_DWORD *)v7 + 2) = 72;
    *((_OWORD *)v7 + 1) = VmbFsInterfaceTypeGuid;
    v24 = *(_OWORD *)(a1 + 20);
LABEL_36:
    *((_OWORD *)v7 + 2) = v24;
    goto LABEL_32;
  }
  v25 = v3 - 8;
  if ( !v25 )
  {
    v33 = *(unsigned int *)(a1 + 24);
    if ( a2 < 0x22 || a2 <= (unsigned int)v33 )
    {
      v14 = -1073741811;
      goto LABEL_99;
    }
    v34 = 0;
    v35 = 30;
    if ( (_DWORD)v33 )
    {
      v36 = a2 - v33;
      v37 = (_DWORD *)(a1 + v33);
      v38 = *(_DWORD *)(a1 + v33);
      if ( v38 == 3 )
      {
        if ( v36 < 0x2E )
          goto LABEL_61;
      }
      else if ( v38 != 12 || v36 < 0x18 )
      {
        goto LABEL_61;
      }
      v39 = (unsigned int)v37[5];
      v40 = v36 - v39;
      v41 = *(_DWORD *)((char *)v37 + v39);
      if ( v41 == 2 )
      {
        if ( v40 < 0x16 )
          goto LABEL_61;
        PartitionVhdFilePath = (void *)BiGetPartitionVhdFilePath((PCWSTR)((char *)v37 + v39 + 20));
        if ( PartitionVhdFilePath )
        {
          ExFreePoolWithTag(PartitionVhdFilePath, 0x4B444342u);
          goto LABEL_68;
        }
      }
      else if ( v41 != 6 && (v41 != 8 || v40 < 0x22) && (v41 != 1 || v40 < 0x14) && (v41 != 9 || v40 < 0x15) )
      {
        goto LABEL_61;
      }
      v14 = BiConvertNtDeviceToBootEnvironment(v37, v36, 0LL, &P);
      if ( v14 < 0 )
        goto LABEL_99;
      v34 = *v37 != 12 ? 0x28 : 0;
      v35 = v34 + *((_DWORD *)P + 2) + 30;
    }
    v43 = -1LL;
    if ( *(_DWORD *)(a1 + 20) == 1 )
    {
      v44 = -1LL;
      do
        ++v44;
      while ( *(_WORD *)(a1 + 2 * v44 + 32) );
      v35 += 2 * v44;
    }
    v45 = (char *)ExAllocatePool2(0x102uLL);
    v7 = v45;
    if ( v45 )
    {
      memset_0(v45, 0, v35);
      *(_DWORD *)v7 = 8;
      *((_DWORD *)v7 + 2) = v35;
      if ( *(_DWORD *)(a1 + 20) )
      {
        *((_DWORD *)v7 + 4) = 1;
        v47 = -1LL;
        do
          ++v47;
        while ( *(_WORD *)(a1 + 2 * v47 + 32) );
        wcscpy_s((wchar_t *)v7 + 14, v47 + 1, (const wchar_t *)(a1 + 32));
        do
          ++v43;
        while ( *(_WORD *)(a1 + 2 * v43 + 32) );
        v46 = 2 * v43 + 30;
      }
      else
      {
        *((_DWORD *)v7 + 4) = 0;
        v46 = 30;
        *((_DWORD *)v7 + 5) = *(_DWORD *)(a1 + 28);
      }
      if ( P )
      {
        v48 = &v7[v46];
        if ( v34 )
        {
          *(_DWORD *)v48 = 0;
          v49 = *((_DWORD *)P + 2);
          *((_DWORD *)v48 + 4) = 6;
          *((_DWORD *)v48 + 2) = v34 + v49;
        }
        memmove(&v48[v34], P, *((unsigned int *)P + 2));
        *((_DWORD *)v7 + 6) = v46;
        *((_DWORD *)v7 + 1) |= *((_DWORD *)P + 1) & 0x20;
      }
      v14 = 0;
    }
    else
    {
      v14 = -1073741670;
    }
    v4 = Src;
    goto LABEL_99;
  }
  v26 = v25 - 1;
  if ( v26 )
  {
    v27 = v26 - 1;
    if ( !v27 )
    {
      if ( a2 >= 0x28 )
      {
        v29 = *(_QWORD *)(a1 + 20) - CompositeDeviceSignature;
        if ( !v29 )
          v29 = *(_QWORD *)(a1 + 28) - 0x526C65784171869ELL;
        if ( !v29 )
        {
          v30 = (char *)ExAllocatePool2(0x102uLL);
          v7 = v30;
          if ( v30 )
          {
            memset_0(v30, 0, 0x48uLL);
            *(_DWORD *)v7 = 10;
            *((_DWORD *)v7 + 2) = 72;
            *((_DWORD *)v7 + 1) = 1;
            *((_OWORD *)v7 + 1) = *(_OWORD *)(a1 + 20);
            *((_DWORD *)v7 + 8) = *(_DWORD *)(a1 + 36);
            goto LABEL_32;
          }
          goto LABEL_30;
        }
      }
      goto LABEL_61;
    }
    if ( v27 != 1 || a2 < 0x28 )
      goto LABEL_61;
    v28 = ExAllocatePool2(0x102uLL);
    v7 = (char *)v28;
    if ( !v28 )
      goto LABEL_30;
    *(_OWORD *)v28 = 0LL;
    *(_OWORD *)(v28 + 16) = 0LL;
    *(_OWORD *)(v28 + 32) = 0LL;
    *(_DWORD *)v28 = 11;
    *(_DWORD *)(v28 + 8) = 48;
    *(_DWORD *)(v28 + 4) = 1;
    *(_DWORD *)(v28 + 16) = *(_DWORD *)(a1 + 20);
    v24 = *(_OWORD *)(a1 + 24);
    goto LABEL_36;
  }
  if ( a2 < 0x15 )
    goto LABEL_61;
  v31 = -1LL;
  do
    ++v31;
  while ( *(_BYTE *)(a1 + v31 + 20) );
  v32 = (char *)ExAllocatePool2(0x102uLL);
  v7 = v32;
  if ( v32 )
  {
    memset_0(v32, 0, (unsigned int)(v31 + 21));
    *(_DWORD *)v7 = 9;
    *((_DWORD *)v7 + 1) = 32;
    *((_DWORD *)v7 + 2) = v31 + 21;
    *((_DWORD *)v7 + 4) = v31 + 1;
    strcpy_s(v7 + 20, (unsigned int)(v31 + 1), (const char *)(a1 + 20));
    v14 = 0;
  }
  else
  {
    v14 = -1073741670;
  }
LABEL_99:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
LABEL_101:
  result = (unsigned int)v14;
  *v4 = v7;
  return result;
}
