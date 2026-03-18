/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x1408127CC
 * Callers:
 *     BiConvertBootEnvironmentDeviceToElement @ 0x140812780 (BiConvertBootEnvironmentDeviceToElement.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1408127CC (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiVerifyBootPartition @ 0x1408144D0 (BiVerifyBootPartition.c)
 * Callees:
 *     strcpy_s @ 0x1405042E0 (strcpy_s.c)
 *     wcscpy_s @ 0x1405047E0 (wcscpy_s.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1408127CC (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x1408130FC (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiGetNtPartitionPath @ 0x140813BA8 (BiGetNtPartitionPath.c)
 *     BiIsBootRamdisk @ 0x140814230 (BiIsBootRamdisk.c)
 *     BiVerifyBootPartition @ 0x1408144D0 (BiVerifyBootPartition.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // r13d
  void *v28; // rax
  char *v29; // rcx
  void *v30; // rax
  const wchar_t *v31; // r8
  void *v32; // rax
  void *v33; // rax
  int v34; // esi
  int NtPartitionPath; // eax
  void *v36; // rax
  int v37; // ecx
  size_t v38; // r8
  char *v39; // rcx
  PVOID v40; // rdx
  __int64 v41; // rsi
  unsigned int v42; // esi
  void *v43; // rax
  unsigned int v44; // eax
  void *Pool2; // rax
  char *v47; // rcx
  _DWORD *v48; // rsi
  unsigned int v49; // edx
  unsigned __int64 v50; // rcx
  __int64 v51; // rsi
  unsigned int v52; // esi
  unsigned int v53; // ebx
  void *v54; // rax
  size_t Size; // [rsp+30h] [rbp-30h] BYREF
  int v56; // [rsp+38h] [rbp-28h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  PVOID v58; // [rsp+48h] [rbp-18h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-10h] BYREF
  char v60; // [rsp+A0h] [rbp+40h]

  v6 = *a1;
  v56 = 0;
  v9 = 0LL;
  Src[0] = 0LL;
  v58 = 0LL;
  v60 = 0;
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
          Pool2 = (void *)ExAllocatePool2(0x102uLL);
          P = Pool2;
          if ( !Pool2 )
            goto LABEL_11;
          memset_0(Pool2, 0, (unsigned int)Size);
          *(_DWORD *)P = 2;
          v47 = (char *)P;
          *(_OWORD *)((char *)P + 20) = *(_OWORD *)L"\\Device\\Ramdisk{d9b257fc-684e-4dcb-ab79-03cfa2f6b750}";
          *(_OWORD *)(v47 + 36) = *(_OWORD *)L"Ramdisk{d9b257fc-684e-4dcb-ab79-03cfa2f6b750}";
          *(_OWORD *)(v47 + 52) = *(_OWORD *)L"d9b257fc-684e-4dcb-ab79-03cfa2f6b750}";
          *(_OWORD *)(v47 + 68) = *(_OWORD *)L"-684e-4dcb-ab79-03cfa2f6b750}";
          *(_OWORD *)(v47 + 84) = *(_OWORD *)L"cb-ab79-03cfa2f6b750}";
          *(_OWORD *)(v47 + 100) = *(_OWORD *)L"03cfa2f6b750}";
          *(_QWORD *)(v47 + 116) = *(_QWORD *)L"b750}";
          *((_DWORD *)v47 + 31) = *(_DWORD *)L"}";
          goto LABEL_13;
        }
        v48 = a1 + 13;
        v49 = 52;
      }
      else
      {
        v48 = a1 + 8;
        v49 = 32;
      }
      v50 = (unsigned int)a1[2];
      if ( v50 < (unsigned __int64)v49 + 12 || v48[2] > (unsigned int)v50 - v49 )
        goto LABEL_73;
      v18 = BiConvertBootEnvironmentDeviceToNt((_DWORD)v48, a2, 0, (unsigned int)&v58, (__int64)&Size + 4);
      if ( v18 >= 0 )
      {
        if ( *(_DWORD *)v58 != 3 )
        {
          v9 = (_WORD *)((char *)v48 + (unsigned int)v48[2]);
          v51 = -1LL;
          do
            ++v51;
          while ( v9[v51] );
          v52 = 2 * v51 + 2;
          if ( v52 < 0xFFFFFFE0 && v52 + 32 + HIDWORD(Size) >= v52 + 32 )
          {
            v53 = (v52 + 31) & 0xFFFFFFF8;
            LODWORD(Size) = HIDWORD(Size) + v53;
            v54 = (void *)ExAllocatePool2(0x102uLL);
            P = v54;
            if ( !v54 )
              goto LABEL_11;
            memset_0(v54, 0, (unsigned int)Size);
            memmove((char *)P + 24, v9, v52);
            *((_DWORD *)P + 5) = v53;
            memmove((char *)P + v53, v58, HIDWORD(Size));
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
      if ( a1[4] != 6 || (v44 = a1[2], v44 < 0x34) || a1[12] > v44 - 40 )
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
    v33 = (void *)ExAllocatePool2(0x102uLL);
    P = v33;
    if ( !v33 )
      goto LABEL_11;
    memset_0(v33, 0, (unsigned int)Size);
    *(_DWORD *)P = 1;
    goto LABEL_13;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_47:
    v18 = BiVerifyBootPartition((_DWORD)a1, 0, 0, 0, 0LL, (__int64)&v56);
    if ( v18 >= 0 )
    {
      v34 = v56;
      if ( (a3 & 0x20) != 0 && v56 )
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
          v41 = -1LL;
          v60 = 1;
          v18 = 0;
          do
            ++v41;
          while ( *((_WORD *)Src[0] + v41) );
          v42 = 2 * v41 + 2;
          LODWORD(Size) = v42 + 20;
          v43 = (void *)ExAllocatePool2(0x102uLL);
          P = v43;
          if ( !v43 )
            goto LABEL_11;
          memset_0(v43, 0, (unsigned int)Size);
          v40 = v9;
          v38 = v42;
          *(_DWORD *)P = 2;
          v39 = (char *)P + 20;
LABEL_65:
          memmove(v39, v40, v38);
          goto LABEL_77;
        }
      }
      if ( v34 )
      {
        v18 = BiConvertBootEnvironmentDeviceToNt((int)a1 + v34, a2, 0, (unsigned int)&v58, (__int64)&Size + 4);
        if ( v18 >= 0 )
        {
          LODWORD(Size) = HIDWORD(Size) + 34;
          v36 = (void *)ExAllocatePool2(0x102uLL);
          P = v36;
          if ( !v36 )
            goto LABEL_11;
          memset_0(v36, 0, (unsigned int)Size);
          v37 = 301989890;
          *(_DWORD *)P = 8;
          *((_DWORD *)P + 5) = 0;
          if ( a2 )
          {
            if ( a2 == 553648129 )
            {
              v37 = 570425346;
            }
            else if ( a2 == 285212739 )
            {
              v37 = 301989956;
            }
          }
          *((_DWORD *)P + 7) = v37;
          *((_DWORD *)P + 6) = 34;
          v38 = HIDWORD(Size);
          v39 = (char *)P + 34;
          v40 = v58;
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
    v32 = (void *)ExAllocatePool2(0x102uLL);
    P = v32;
    if ( !v32 )
      goto LABEL_11;
    memset_0(v32, 0, (unsigned int)Size);
    *(_DWORD *)P = 7;
    *(_OWORD *)((char *)P + 20) = *((_OWORD *)a1 + 2);
    goto LABEL_13;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v21 = -1LL;
    v22 = a1[4] == 1;
    LODWORD(Size) = 34;
    if ( v22 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( *((_WORD *)a1 + v23 + 14) );
      LODWORD(Size) = 2 * v23 + 34;
    }
    v24 = (unsigned int)a1[6];
    if ( !(_DWORD)v24 )
      goto LABEL_35;
    if ( (a3 & 0x20) == 0 )
    {
      v25 = BiGetNtPartitionPath(a1, Src);
      v9 = Src[0];
      if ( v25 >= 0 )
      {
        v60 = 1;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_WORD *)Src[0] + v26) );
        v27 = 2 * v26 + 2;
        HIDWORD(Size) = 2 * v26 + 22;
        v28 = (void *)ExAllocatePool2(0x102uLL);
        v58 = v28;
        if ( !v28 )
          goto LABEL_11;
        memset_0(v28, 0, HIDWORD(Size));
        *(_DWORD *)v58 = 2;
        memmove((char *)v58 + 20, v9, v27);
      }
      if ( v58 )
      {
LABEL_34:
        LODWORD(v24) = Size;
        LODWORD(Size) = Size + HIDWORD(Size);
LABEL_35:
        v30 = (void *)ExAllocatePool2(0x102uLL);
        P = v30;
        if ( !v30 )
          goto LABEL_11;
        memset_0(v30, 0, (unsigned int)Size);
        *(_DWORD *)P = 8;
        if ( a1[4] )
        {
          *((_DWORD *)P + 5) = 1;
          v31 = (const wchar_t *)(a1 + 7);
          do
            ++v21;
          while ( v31[v21] );
          wcscpy_s((wchar_t *)P + 16, v21 + 1, v31);
        }
        else
        {
          *((_DWORD *)P + 5) = 0;
          *((_DWORD *)P + 7) = a1[5];
        }
        if ( v58 )
        {
          *((_DWORD *)P + 6) = v24;
          memmove((char *)P + (unsigned int)v24, v58, HIDWORD(Size));
        }
        goto LABEL_13;
      }
    }
    v29 = (char *)a1 + v24;
    if ( *(int *)((char *)a1 + v24) || *((_DWORD *)v29 + 4) != 6 || (unsigned int)(a1[2] - v24) < 0x4C )
      goto LABEL_73;
    v18 = BiConvertBootEnvironmentDeviceToNt((int)v29 + 40, a2, 0, (unsigned int)&v58, (__int64)&Size + 4);
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
        v17 = (void *)ExAllocatePool2(0x102uLL);
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
    v19 = (void *)ExAllocatePool2(0x102uLL);
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
    v20 = (void *)ExAllocatePool2(0x102uLL);
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
  if ( v58 )
    ExFreePoolWithTag(v58, 0x4B444342u);
  if ( v60 )
    ExFreePoolWithTag(v9, 0x4B444342u);
  return (unsigned int)v18;
}
