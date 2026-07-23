/*
 * XREFs of BiConvertNtDeviceToBootEnvironment @ 0x140A94D38
 * Callers:
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408138E0 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x140813B8C (BiCreatePartitionDevice.c)
 *     BiConvertElementToRegistryData @ 0x1409A6714 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A94D38 (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     strcpy_s @ 0x140501BA0 (strcpy_s.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408138E0 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x140813B8C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePath @ 0x140A816B8 (BiGetPartitionVhdFilePath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A94D38 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140AA9E1C (BiIsVolumePartitionInformationRetained.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned int v12; // eax
  char *v13; // rax
  __int64 v14; // rax
  int v15; // ebx
  unsigned int *v16; // rbx
  unsigned int v17; // esi
  char *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // esi
  char *v21; // rax
  int v22; // eax
  char *Pool2; // rax
  char *v24; // rax
  __int128 v25; // xmm0
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  char *v31; // rax
  __int64 v32; // rbx
  char *v33; // rax
  __int64 v34; // rax
  unsigned int v35; // r15d
  unsigned int v36; // r12d
  unsigned int v37; // ebx
  _DWORD *v38; // r14
  int v39; // eax
  __int64 v40; // rdx
  unsigned int v41; // eax
  int v42; // ecx
  void *PartitionVhdFilePath; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  char *v46; // rax
  unsigned int v47; // ebx
  __int64 v48; // rdx
  char *v49; // rdx
  int v50; // eax
  __int64 result; // rax
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  char *v53; // [rsp+38h] [rbp-8h] BYREF
  int v54; // [rsp+80h] [rbp+40h] BYREF
  void *Src; // [rsp+98h] [rbp+58h] BYREF
  va_list Srca; // [rsp+98h] [rbp+58h]
  va_list va1; // [rsp+A0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(Srca, a3);
  Src = va_arg(va1, void *);
  v3 = *(_DWORD *)a1;
  v54 = 0;
  v4 = Src;
  P = 0LL;
  v53 = 0LL;
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
          Pool2 = (char *)ExAllocatePool2(0x102uLL, 0x48uLL, 0x4B444342u);
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
        v15 = -1073741811;
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
            if ( v11 == 1 && a2 >= 0x20 )
            {
              v12 = *(_DWORD *)(a1 + 28);
              if ( v12 <= 0x100000 )
              {
                v13 = (char *)ExAllocatePool2(0x102uLL, v12, 0x4B444342u);
                v7 = v13;
                if ( v13 )
                {
                  memmove(v13, (const void *)(a1 + 20), *(unsigned int *)(a1 + 28));
LABEL_32:
                  v15 = 0;
                  goto LABEL_99;
                }
LABEL_30:
                v15 = -1073741670;
                goto LABEL_99;
              }
            }
            goto LABEL_61;
          }
          if ( a2 < 0x2E )
            goto LABEL_61;
          v14 = *(unsigned int *)(a1 + 20);
          if ( !(_DWORD)v14 )
            goto LABEL_61;
          Src = 0LL;
          v15 = BiConvertNtFilePathToBootEnvironment(
                  v14 + a1,
                  a2 - (unsigned int)v14,
                  (_WORD *)(a1 + 24),
                  a3,
                  (void **)Srca);
          if ( v15 < 0 )
            goto LABEL_99;
          v16 = (unsigned int *)Src;
          v17 = *((_DWORD *)Src + 1) + 40;
          v18 = (char *)ExAllocatePool2(0x102uLL, v17, 0x4B444342u);
          v7 = v18;
          if ( v18 )
          {
            memset_0(v18, 0, v17);
            *(_DWORD *)v7 = 0;
            *((_DWORD *)v7 + 1) = 1;
            *((_DWORD *)v7 + 2) = v17;
            *((_DWORD *)v7 + 4) = 3;
            memmove(v7 + 40, v16, v16[1]);
LABEL_23:
            ExFreePoolWithTag(v16, 0x4B444342u);
            goto LABEL_32;
          }
        }
        else
        {
          if ( a2 < 0x2E )
            goto LABEL_61;
          v19 = *(unsigned int *)(a1 + 20);
          if ( !(_DWORD)v19 )
            goto LABEL_61;
          Src = 0LL;
          v15 = BiConvertNtFilePathToBootEnvironment(
                  v19 + a1,
                  a2 - (unsigned int)v19,
                  (_WORD *)(a1 + 24),
                  a3,
                  (void **)Srca);
          if ( v15 < 0 )
            goto LABEL_99;
          v16 = (unsigned int *)Src;
          v20 = *((_DWORD *)Src + 1) + 20;
          v21 = (char *)ExAllocatePool2(0x102uLL, v20, 0x4B444342u);
          v7 = v21;
          if ( v21 )
          {
            memset_0(v21, 0, v20);
            *(_DWORD *)v7 = 0;
            *((_DWORD *)v7 + 2) = v20;
            *((_DWORD *)v7 + 4) = 5;
            memmove(v7 + 20, v16, v16[1]);
            *((_DWORD *)v7 + 1) = v16[4] & 0x20;
            goto LABEL_23;
          }
        }
        ExFreePoolWithTag(v16, 0x4B444342u);
        goto LABEL_30;
      }
      if ( a2 < 0x16 )
        goto LABEL_61;
      if ( (unsigned __int8)BiIsVolumePartitionInformationRetained((PCWSTR)(a1 + 20)) )
      {
        v22 = BiCreatePartitionDevice((PCWSTR)(a1 + 20), a3, &v53, &v54);
        v7 = v53;
        v15 = v22;
        if ( v22 >= 0 )
          goto LABEL_32;
        goto LABEL_99;
      }
LABEL_68:
      v15 = -1073741637;
      goto LABEL_99;
    }
    if ( a2 < 0x24 )
      goto LABEL_61;
    v24 = (char *)ExAllocatePool2(0x102uLL, 0x48uLL, 0x4B444342u);
    v7 = v24;
    if ( !v24 )
      goto LABEL_30;
    memset_0(v24, 0, 0x48uLL);
    *(_DWORD *)v7 = 7;
    *((_DWORD *)v7 + 2) = 72;
    *((_OWORD *)v7 + 1) = VmbFsInterfaceTypeGuid;
    v25 = *(_OWORD *)(a1 + 20);
LABEL_36:
    *((_OWORD *)v7 + 2) = v25;
    goto LABEL_32;
  }
  v26 = v3 - 8;
  if ( !v26 )
  {
    v34 = *(unsigned int *)(a1 + 24);
    if ( a2 < 0x22 || a2 <= (unsigned int)v34 )
    {
      v15 = -1073741811;
      goto LABEL_99;
    }
    v35 = 0;
    v36 = 30;
    if ( (_DWORD)v34 )
    {
      v37 = a2 - v34;
      v38 = (_DWORD *)(a1 + v34);
      v39 = *(_DWORD *)(a1 + v34);
      if ( v39 == 3 )
      {
        if ( v37 < 0x2E )
          goto LABEL_61;
      }
      else if ( v39 != 12 || v37 < 0x18 )
      {
        goto LABEL_61;
      }
      v40 = (unsigned int)v38[5];
      v41 = v37 - v40;
      v42 = *(_DWORD *)((char *)v38 + v40);
      if ( v42 == 2 )
      {
        if ( v41 < 0x16 )
          goto LABEL_61;
        PartitionVhdFilePath = (void *)BiGetPartitionVhdFilePath((PCWSTR)((char *)v38 + v40 + 20));
        if ( PartitionVhdFilePath )
        {
          ExFreePoolWithTag(PartitionVhdFilePath, 0x4B444342u);
          goto LABEL_68;
        }
      }
      else if ( v42 != 6 && (v42 != 8 || v41 < 0x22) && (v42 != 1 || v41 < 0x14) && (v42 != 9 || v41 < 0x15) )
      {
        goto LABEL_61;
      }
      v15 = BiConvertNtDeviceToBootEnvironment(v38, v37, 0LL, &P);
      if ( v15 < 0 )
        goto LABEL_99;
      v35 = *v38 != 12 ? 0x28 : 0;
      v36 = v35 + *((_DWORD *)P + 2) + 30;
    }
    v44 = -1LL;
    if ( *(_DWORD *)(a1 + 20) == 1 )
    {
      v45 = -1LL;
      do
        ++v45;
      while ( *(_WORD *)(a1 + 2 * v45 + 32) );
      v36 += 2 * v45;
    }
    v46 = (char *)ExAllocatePool2(0x102uLL, v36, 0x4B444342u);
    v7 = v46;
    if ( v46 )
    {
      memset_0(v46, 0, v36);
      *(_DWORD *)v7 = 8;
      *((_DWORD *)v7 + 2) = v36;
      if ( *(_DWORD *)(a1 + 20) )
      {
        *((_DWORD *)v7 + 4) = 1;
        v48 = -1LL;
        do
          ++v48;
        while ( *(_WORD *)(a1 + 2 * v48 + 32) );
        wcscpy_s((wchar_t *)v7 + 14, v48 + 1, (const wchar_t *)(a1 + 32));
        do
          ++v44;
        while ( *(_WORD *)(a1 + 2 * v44 + 32) );
        v47 = 2 * v44 + 30;
      }
      else
      {
        *((_DWORD *)v7 + 4) = 0;
        v47 = 30;
        *((_DWORD *)v7 + 5) = *(_DWORD *)(a1 + 28);
      }
      if ( P )
      {
        v49 = &v7[v47];
        if ( v35 )
        {
          *(_DWORD *)v49 = 0;
          v50 = *((_DWORD *)P + 2);
          *((_DWORD *)v49 + 4) = 6;
          *((_DWORD *)v49 + 2) = v35 + v50;
        }
        memmove(&v49[v35], P, *((unsigned int *)P + 2));
        *((_DWORD *)v7 + 6) = v47;
        *((_DWORD *)v7 + 1) |= *((_DWORD *)P + 1) & 0x20;
      }
      v15 = 0;
    }
    else
    {
      v15 = -1073741670;
    }
    v4 = Src;
    goto LABEL_99;
  }
  v27 = v26 - 1;
  if ( v27 )
  {
    v28 = v27 - 1;
    if ( !v28 )
    {
      if ( a2 >= 0x28 )
      {
        v30 = *(_QWORD *)(a1 + 20) - CompositeDeviceSignature;
        if ( !v30 )
          v30 = *(_QWORD *)(a1 + 28) - 0x526C65784171869ELL;
        if ( !v30 )
        {
          v31 = (char *)ExAllocatePool2(0x102uLL, 0x48uLL, 0x4B444342u);
          v7 = v31;
          if ( v31 )
          {
            memset_0(v31, 0, 0x48uLL);
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
    if ( v28 != 1 || a2 < 0x28 )
      goto LABEL_61;
    v29 = ExAllocatePool2(0x102uLL, 0x30uLL, 0x4B444342u);
    v7 = (char *)v29;
    if ( !v29 )
      goto LABEL_30;
    *(_OWORD *)v29 = 0LL;
    *(_OWORD *)(v29 + 16) = 0LL;
    *(_OWORD *)(v29 + 32) = 0LL;
    *(_DWORD *)v29 = 11;
    *(_DWORD *)(v29 + 8) = 48;
    *(_DWORD *)(v29 + 4) = 1;
    *(_DWORD *)(v29 + 16) = *(_DWORD *)(a1 + 20);
    v25 = *(_OWORD *)(a1 + 24);
    goto LABEL_36;
  }
  if ( a2 < 0x15 )
    goto LABEL_61;
  v32 = -1LL;
  do
    ++v32;
  while ( *(_BYTE *)(a1 + v32 + 20) );
  v33 = (char *)ExAllocatePool2(0x102uLL, (unsigned int)(v32 + 21), 0x4B444342u);
  v7 = v33;
  if ( v33 )
  {
    memset_0(v33, 0, (unsigned int)(v32 + 21));
    *(_DWORD *)v7 = 9;
    *((_DWORD *)v7 + 1) = 32;
    *((_DWORD *)v7 + 2) = v32 + 21;
    *((_DWORD *)v7 + 4) = v32 + 1;
    strcpy_s(v7 + 20, (unsigned int)(v32 + 1), (const char *)(a1 + 20));
    v15 = 0;
  }
  else
  {
    v15 = -1073741670;
  }
LABEL_99:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
LABEL_101:
  result = (unsigned int)v15;
  *v4 = v7;
  return result;
}
