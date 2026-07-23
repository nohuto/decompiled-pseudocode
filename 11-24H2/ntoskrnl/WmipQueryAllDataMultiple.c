/*
 * XREFs of WmipQueryAllDataMultiple @ 0x1409B169C
 * Callers:
 *     IoWMIQueryAllDataMultiple @ 0x1407A3A10 (IoWMIQueryAllDataMultiple.c)
 *     WmipIoControl @ 0x1409B1150 (WmipIoControl.c)
 * Callees:
 *     Feature_1045423416__private_IsEnabledDeviceUsageNoInline @ 0x14064AA64 (Feature_1045423416__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WmipQueryAllData @ 0x1409B2D4C (WmipQueryAllData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQueryAllDataMultiple(
        int a1,
        PVOID *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6,
        unsigned int *a7,
        int *a8)
{
  _DWORD *v9; // r14
  __int64 v10; // rdi
  int v11; // r12d
  __int64 v12; // rsi
  __int64 Pool2; // rax
  char *v14; // r15
  _QWORD *v15; // rcx
  char *v16; // rcx
  char v17; // r13
  _DWORD *v18; // rbp
  char *v19; // rbx
  char *v22; // r15
  unsigned int v23; // r14d
  int v24; // edi
  bool v25; // zf
  PVOID *v26; // rax
  PVOID v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // edi
  unsigned int v32; // r14d
  int v33; // eax
  __int64 v34; // [rsp+34h] [rbp-104h] BYREF
  char *v35; // [rsp+40h] [rbp-F8h]
  PVOID *v36; // [rsp+48h] [rbp-F0h]
  unsigned int v37; // [rsp+50h] [rbp-E8h]
  PVOID *v38; // [rsp+58h] [rbp-E0h]
  PVOID Object; // [rsp+60h] [rbp-D8h]
  __int64 v40; // [rsp+68h] [rbp-D0h]
  char *v41; // [rsp+70h] [rbp-C8h]
  __int64 v42; // [rsp+80h] [rbp-B8h]
  _DWORD *v43; // [rsp+88h] [rbp-B0h]
  int *v44; // [rsp+90h] [rbp-A8h]
  int v45; // [rsp+A0h] [rbp-98h] BYREF
  char v46[76]; // [rsp+A4h] [rbp-94h] BYREF

  v9 = a5;
  LODWORD(v10) = a1;
  v45 = 0;
  v38 = a2;
  v42 = a3;
  v43 = a5;
  v44 = a8;
  memset_0(v46, 0, 0x44uLL);
  v34 = 0LL;
  v11 = 0;
  v37 = 0;
  Object = 0LL;
  if ( a2 )
  {
    v14 = 0LL;
    v41 = 0LL;
LABEL_9:
    LODWORD(v12) = 0;
    v17 = 0;
    v18 = 0LL;
    v16 = (char *)a5;
    v35 = (char *)a5;
    v19 = (char *)a5;
    if ( !(_DWORD)v10 )
      goto LABEL_26;
    goto LABEL_10;
  }
  v10 = *a7;
  v12 = v10;
  Pool2 = ExAllocatePool2(0x100uLL, 8 * v10, 0x70696D57u);
  v41 = (char *)Pool2;
  v14 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( !(_DWORD)v10 )
    goto LABEL_9;
  v15 = (_QWORD *)Pool2;
  do
  {
    *v15 = *(_QWORD *)((char *)v15 + (_QWORD)a7 - Pool2 + 8);
    ++v15;
    --v12;
  }
  while ( v12 );
  v16 = (char *)a5;
  v17 = 0;
  v35 = (char *)a5;
  v18 = 0LL;
  v19 = (char *)a5;
LABEL_10:
  v22 = (char *)(v14 - (char *)v38);
  v23 = v37;
  v36 = v38;
  v40 = (unsigned int)v10;
  do
  {
    if ( v19 == (char *)&v45 || a6 < 0x48 )
    {
      v19 = (char *)&v45;
      v24 = 72;
      v18 = 0LL;
    }
    else
    {
      v19 = v16;
      v24 = a6;
    }
    memset_0(v19, 0, 0x48uLL);
    v25 = v38 == 0LL;
    v26 = v36;
    *((_DWORD *)v19 + 11) = 1;
    *(_DWORD *)v19 = 48;
    if ( v25 )
    {
      *((_QWORD *)v19 + 2) = *(PVOID *)((char *)v26 + (_QWORD)v22);
      v27 = Object;
    }
    else
    {
      v27 = *v26;
      Object = v27;
    }
    if ( (int)WmipQueryAllData(v27, v24, (__int64)&v34) < 0 )
      goto LABEL_23;
    v28 = *((_DWORD *)v19 + 11);
    if ( (v28 & 0x100) != 0 )
      goto LABEL_23;
    ++HIDWORD(v34);
    if ( (v28 & 0x20) != 0 )
    {
      v29 = *((_DWORD *)v19 + 12);
      v19 = (char *)&v45;
LABEL_22:
      v17 = 1;
      LODWORD(v12) = ((v29 + 7) & 0xFFFFFFF8) + v12;
LABEL_23:
      v16 = v35;
      goto LABEL_24;
    }
    if ( v19 == (char *)&v45 )
    {
      v29 = v34;
      goto LABEL_22;
    }
    if ( v18 )
      v18[3] = v23;
    v30 = *((unsigned int *)v19 + 3);
    v18 = v19;
    while ( (_DWORD)v30 )
    {
      v18 = (_DWORD *)((char *)v18 + v30);
      v30 = (unsigned int)v18[3];
    }
    v31 = (v34 + 7) & 0xFFFFFFF8;
    LODWORD(v12) = v31 + v12;
    if ( (unsigned int)Feature_1045423416__private_IsEnabledDeviceUsageNoInline() )
      a6 = v31 < a6 ? a6 - v31 : 0;
    else
      a6 -= v31;
    v16 = &v35[v31];
    v32 = v31 + (_DWORD)v35;
    v35 = v16;
    v23 = v32 - (_DWORD)v18;
LABEL_24:
    ++v36;
    --v40;
  }
  while ( v40 );
  v9 = v43;
  v14 = v41;
  v11 = HIDWORD(v34);
LABEL_26:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( !v11 )
    return 3221226133LL;
  if ( v17 )
  {
    v33 = 56;
    v9[11] = 32;
    *v9 = 56;
    v9[12] = v12;
  }
  else
  {
    v33 = v12;
  }
  *v44 = v33;
  return 0LL;
}
