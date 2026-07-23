/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x140812F0C
 * Callers:
 *     BiConvertBootEnvironmentDeviceToElement @ 0x140812EC0 (BiConvertBootEnvironmentDeviceToElement.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140812F0C (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiVerifyBootPartition @ 0x140814C10 (BiVerifyBootPartition.c)
 * Callees:
 *     strcpy_s @ 0x140501BA0 (strcpy_s.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140812F0C (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x14081383C (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiGetNtPartitionPath @ 0x1408142E8 (BiGetNtPartitionPath.c)
 *     BiIsBootRamdisk @ 0x140814970 (BiIsBootRamdisk.c)
 *     BiVerifyBootPartition @ 0x140814C10 (BiVerifyBootPartition.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(int *a1, int a2, char a3, PVOID *a4, _DWORD *a5)
{
  int v6; // ecx
  _WORD *v9; // r14
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  void *v17; // rax
  int v18; // ebx
  void *v19; // rax
  void *v20; // rax
  __int64 v21; // rsi
  unsigned int v22; // ecx
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // r13d
  void *v29; // rax
  char *v30; // rcx
  void *v31; // rax
  const wchar_t *v32; // r8
  void *v33; // rax
  void *v34; // rax
  int v35; // esi
  int NtPartitionPath; // eax
  void *v37; // rax
  int v38; // ecx
  size_t v39; // r8
  char *v40; // rcx
  PVOID v41; // rdx
  __int64 v42; // rsi
  unsigned int v43; // esi
  void *v44; // rax
  unsigned int v45; // eax
  void *Pool2; // rax
  char *v48; // rcx
  _DWORD *v49; // rsi
  unsigned int v50; // edx
  unsigned __int64 v51; // rcx
  __int64 v52; // rsi
  unsigned int v53; // esi
  unsigned int v54; // ebx
  void *v55; // rax
  size_t Size; // [rsp+30h] [rbp-30h] BYREF
  int v57; // [rsp+38h] [rbp-28h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  PVOID v59; // [rsp+48h] [rbp-18h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-10h] BYREF
  char v61; // [rsp+A0h] [rbp+40h]

  v6 = *a1;
  v57 = 0;
  v9 = 0LL;
  Src[0] = 0LL;
  v59 = 0LL;
  v61 = 0;
  P = 0LL;
  Size = 0LL;
  if ( !v6 )
  {
    if ( a1[4] == 3 || a1[4] == 5 )
    {
      if ( a1[4] == 3 )
      {
        if ( a1[12] == 5 && a1[11] == 12 && (unsigned __int8)BiIsBootRamdisk(a1 + 5) )
        {
          LODWORD(Size) = 128;
          Pool2 = (void *)ExAllocatePool2(0x102uLL, 0x80uLL, 0x4B444342u);
          P = Pool2;
          if ( !Pool2 )
            goto LABEL_11;
          memset_0(Pool2, 0, (unsigned int)Size);
          *(_DWORD *)P = 2;
          v48 = (char *)P;
          *(_OWORD *)((char *)P + 20) = *(_OWORD *)L"\\Device\\Ramdisk{d9b257fc-684e-4dcb-ab79-03cfa2f6b750}";
          *(_OWORD *)(v48 + 36) = *(_OWORD *)L"Ramdisk{d9b257fc-684e-4dcb-ab79-03cfa2f6b750}";
          *(_OWORD *)(v48 + 52) = *(_OWORD *)L"d9b257fc-684e-4dcb-ab79-03cfa2f6b750}";
          *(_OWORD *)(v48 + 68) = *(_OWORD *)L"-684e-4dcb-ab79-03cfa2f6b750}";
          *(_OWORD *)(v48 + 84) = *(_OWORD *)L"cb-ab79-03cfa2f6b750}";
          *(_OWORD *)(v48 + 100) = *(_OWORD *)L"03cfa2f6b750}";
          *(_QWORD *)(v48 + 116) = *(_QWORD *)L"b750}";
          *((_DWORD *)v48 + 31) = *(_DWORD *)L"}";
          goto LABEL_13;
        }
        v49 = a1 + 13;
        v50 = 52;
      }
      else
      {
        v49 = a1 + 8;
        v50 = 32;
      }
      v51 = (unsigned int)a1[2];
      if ( v51 < (unsigned __int64)v50 + 12 || v49[2] > (unsigned int)v51 - v50 )
        goto LABEL_73;
      v18 = BiConvertBootEnvironmentDeviceToNt((_DWORD)v49, a2, 0, (unsigned int)&v59, (__int64)&Size + 4);
      if ( v18 >= 0 )
      {
        if ( *(_DWORD *)v59 != 3 )
        {
          v9 = (_WORD *)((char *)v49 + (unsigned int)v49[2]);
          v52 = -1LL;
          do
            ++v52;
          while ( v9[v52] );
          v53 = 2 * v52 + 2;
          if ( v53 < 0xFFFFFFE0 && v53 + 32 + HIDWORD(Size) >= v53 + 32 )
          {
            v54 = (v53 + 31) & 0xFFFFFFF8;
            LODWORD(Size) = HIDWORD(Size) + v54;
            v55 = (void *)ExAllocatePool2(0x102uLL, HIDWORD(Size) + v54, 0x4B444342u);
            P = v55;
            if ( !v55 )
              goto LABEL_11;
            memset_0(v55, 0, (unsigned int)Size);
            memmove((char *)P + 24, v9, v53);
            *((_DWORD *)P + 5) = v54;
            memmove((char *)P + v54, v59, HIDWORD(Size));
            v18 = 0;
            *(_DWORD *)P = 4 - (a1[4] != 3);
            goto LABEL_77;
          }
        }
LABEL_73:
        if ( P )
          ExFreePoolWithTag(P, 0x4B444342u);
        goto LABEL_75;
      }
    }
    else
    {
      if ( a1[4] != 6 || (v45 = a1[2], v45 < 0x34) || a1[12] > v45 - 40 )
      {
LABEL_75:
        v18 = BiConvertBootEnvironmentDeviceToUnknown(a1);
LABEL_76:
        if ( v18 < 0 )
          goto LABEL_78;
        goto LABEL_77;
      }
      v18 = BiConvertBootEnvironmentDeviceToNt((int)a1 + 40, a2, 0, (unsigned int)&P, (__int64)&Size);
      if ( v18 >= 0 )
        goto LABEL_77;
    }
    goto LABEL_72;
  }
  v10 = v6 - 2;
  if ( !v10 )
    goto LABEL_47;
  v11 = v10 - 3;
  if ( !v11 )
  {
    LODWORD(Size) = 20;
    v34 = (void *)ExAllocatePool2(0x102uLL, 0x14uLL, 0x4B444342u);
    P = v34;
    if ( !v34 )
      goto LABEL_11;
    memset_0(v34, 0, (unsigned int)Size);
    *(_DWORD *)P = 1;
    goto LABEL_13;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_47:
    v18 = BiVerifyBootPartition((_DWORD)a1, 0, 0, 0, 0LL, (__int64)&v57);
    if ( v18 >= 0 )
    {
      v35 = v57;
      if ( (a3 & 0x20) != 0 && v57 )
      {
        v18 = -1073741823;
      }
      else
      {
        NtPartitionPath = BiGetNtPartitionPath(a1, Src);
        v9 = Src[0];
        v18 = NtPartitionPath;
        if ( NtPartitionPath >= 0 )
        {
          v42 = -1LL;
          v61 = 1;
          v18 = 0;
          do
            ++v42;
          while ( *((_WORD *)Src[0] + v42) );
          v43 = 2 * v42 + 2;
          LODWORD(Size) = v43 + 20;
          v44 = (void *)ExAllocatePool2(0x102uLL, v43 + 20, 0x4B444342u);
          P = v44;
          if ( !v44 )
            goto LABEL_11;
          memset_0(v44, 0, (unsigned int)Size);
          v41 = v9;
          v39 = v43;
          *(_DWORD *)P = 2;
          v40 = (char *)P + 20;
LABEL_65:
          memmove(v40, v41, v39);
          goto LABEL_77;
        }
      }
      if ( v35 )
      {
        v18 = BiConvertBootEnvironmentDeviceToNt((int)a1 + v35, a2, 0, (unsigned int)&v59, (__int64)&Size + 4);
        if ( v18 >= 0 )
        {
          LODWORD(Size) = HIDWORD(Size) + 34;
          v37 = (void *)ExAllocatePool2(0x102uLL, (unsigned int)(HIDWORD(Size) + 34), 0x4B444342u);
          P = v37;
          if ( !v37 )
            goto LABEL_11;
          memset_0(v37, 0, (unsigned int)Size);
          v38 = 301989890;
          *(_DWORD *)P = 8;
          *((_DWORD *)P + 5) = 0;
          if ( a2 )
          {
            if ( a2 == 553648129 )
            {
              v38 = 570425346;
            }
            else if ( a2 == 285212739 )
            {
              v38 = 301989956;
            }
          }
          *((_DWORD *)P + 7) = v38;
          *((_DWORD *)P + 6) = 34;
          v39 = HIDWORD(Size);
          v40 = (char *)P + 34;
          v41 = v59;
          goto LABEL_65;
        }
      }
    }
LABEL_72:
    if ( v18 == -1073741670 )
      goto LABEL_76;
    goto LABEL_73;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    LODWORD(Size) = 36;
    v33 = (void *)ExAllocatePool2(0x102uLL, 0x24uLL, 0x4B444342u);
    P = v33;
    if ( !v33 )
      goto LABEL_11;
    memset_0(v33, 0, (unsigned int)Size);
    *(_DWORD *)P = 7;
    *(_OWORD *)((char *)P + 20) = *((_OWORD *)a1 + 2);
    goto LABEL_13;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v21 = -1LL;
    v22 = 34;
    v23 = a1[4] == 1;
    LODWORD(Size) = 34;
    if ( v23 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( *((_WORD *)a1 + v24 + 14) );
      v22 = 2 * v24 + 34;
      LODWORD(Size) = v22;
    }
    v25 = (unsigned int)a1[6];
    if ( !(_DWORD)v25 )
      goto LABEL_35;
    if ( (a3 & 0x20) == 0 )
    {
      v26 = BiGetNtPartitionPath(a1, Src);
      v9 = Src[0];
      if ( v26 >= 0 )
      {
        v61 = 1;
        v27 = -1LL;
        do
          ++v27;
        while ( *((_WORD *)Src[0] + v27) );
        v28 = 2 * v27 + 2;
        HIDWORD(Size) = 2 * v27 + 22;
        v29 = (void *)ExAllocatePool2(0x102uLL, HIDWORD(Size), 0x4B444342u);
        v59 = v29;
        if ( !v29 )
          goto LABEL_11;
        memset_0(v29, 0, HIDWORD(Size));
        *(_DWORD *)v59 = 2;
        memmove((char *)v59 + 20, v9, v28);
      }
      if ( v59 )
      {
LABEL_34:
        LODWORD(v25) = Size;
        v22 = Size + HIDWORD(Size);
        LODWORD(Size) = Size + HIDWORD(Size);
LABEL_35:
        v31 = (void *)ExAllocatePool2(0x102uLL, v22, 0x4B444342u);
        P = v31;
        if ( !v31 )
          goto LABEL_11;
        memset_0(v31, 0, (unsigned int)Size);
        *(_DWORD *)P = 8;
        if ( a1[4] )
        {
          *((_DWORD *)P + 5) = 1;
          v32 = (const wchar_t *)(a1 + 7);
          do
            ++v21;
          while ( v32[v21] );
          wcscpy_s((wchar_t *)P + 16, v21 + 1, v32);
        }
        else
        {
          *((_DWORD *)P + 5) = 0;
          *((_DWORD *)P + 7) = a1[5];
        }
        if ( v59 )
        {
          *((_DWORD *)P + 6) = v25;
          memmove((char *)P + (unsigned int)v25, v59, HIDWORD(Size));
        }
        goto LABEL_13;
      }
    }
    v30 = (char *)a1 + v25;
    if ( *(int *)((char *)a1 + v25) || *((_DWORD *)v30 + 4) != 6 || (unsigned int)(a1[2] - v25) < 0x4C )
      goto LABEL_73;
    v18 = BiConvertBootEnvironmentDeviceToNt((int)v30 + 40, a2, 0, (unsigned int)&v59, (__int64)&Size + 4);
    if ( v18 >= 0 )
      goto LABEL_34;
    goto LABEL_72;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        LODWORD(Size) = 40;
        v17 = (void *)ExAllocatePool2(0x102uLL, 0x28uLL, 0x4B444342u);
        P = v17;
        if ( !v17 )
        {
LABEL_11:
          v18 = -1073741670;
          goto LABEL_78;
        }
        memset_0(v17, 0, (unsigned int)Size);
        *(_DWORD *)P = 11;
        *((_DWORD *)P + 5) = a1[4];
        *(_OWORD *)((char *)P + 24) = *((_OWORD *)a1 + 2);
        goto LABEL_13;
      }
      goto LABEL_75;
    }
    LODWORD(Size) = 40;
    v19 = (void *)ExAllocatePool2(0x102uLL, 0x28uLL, 0x4B444342u);
    P = v19;
    if ( !v19 )
      goto LABEL_11;
    memset_0(v19, 0, (unsigned int)Size);
    *(_DWORD *)P = 10;
    *(_OWORD *)((char *)P + 20) = *((_OWORD *)a1 + 1);
    *((_DWORD *)P + 9) = a1[8];
  }
  else
  {
    LODWORD(Size) = a1[4] + 21;
    v20 = (void *)ExAllocatePool2(0x102uLL, (unsigned int)Size, 0x4B444342u);
    P = v20;
    if ( !v20 )
      goto LABEL_11;
    memset_0(v20, 0, (unsigned int)Size);
    *(_DWORD *)P = 9;
    strcpy_s((char *)P + 20, (unsigned int)a1[4], (const char *)a1 + 20);
  }
LABEL_13:
  v18 = 0;
LABEL_77:
  *a4 = P;
  *a5 = Size;
LABEL_78:
  if ( v59 )
    ExFreePoolWithTag(v59, 0x4B444342u);
  if ( v61 )
    ExFreePoolWithTag(v9, 0x4B444342u);
  return (unsigned int)v18;
}
