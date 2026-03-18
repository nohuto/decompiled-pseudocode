/*
 * XREFs of WmipQueryAllDataMultiple @ 0x1409CD5A4
 * Callers:
 *     IoWMIQueryAllDataMultiple @ 0x1407A3900 (IoWMIQueryAllDataMultiple.c)
 *     WmipIoControl @ 0x1409CCBD0 (WmipIoControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     WmipQueryAllData @ 0x1409CDD78 (WmipQueryAllData.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQueryAllDataMultiple(
        unsigned int a1,
        PVOID *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6,
        unsigned int *a7,
        int *a8)
{
  _DWORD *v9; // r14
  __int64 v11; // rdi
  __int64 Pool2; // rax
  char *v13; // r15
  _QWORD *v14; // rcx
  char v15; // r12
  char *v16; // r13
  int *v17; // rbp
  int *v18; // rbx
  int v20; // r15d
  int v21; // esi
  bool v22; // zf
  PVOID *v23; // rax
  PVOID v24; // rax
  int v25; // eax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // [rsp+34h] [rbp-F4h] BYREF
  PVOID *v32; // [rsp+40h] [rbp-E8h]
  int v33; // [rsp+48h] [rbp-E0h]
  PVOID *v34; // [rsp+50h] [rbp-D8h]
  PVOID Object; // [rsp+58h] [rbp-D0h]
  __int64 v36; // [rsp+60h] [rbp-C8h]
  char *v37; // [rsp+68h] [rbp-C0h]
  char *v38; // [rsp+70h] [rbp-B8h]
  __int64 v39; // [rsp+78h] [rbp-B0h]
  _DWORD *v40; // [rsp+80h] [rbp-A8h]
  int *v41; // [rsp+88h] [rbp-A0h]
  int v42; // [rsp+90h] [rbp-98h] BYREF
  char v43[76]; // [rsp+94h] [rbp-94h] BYREF

  v9 = a5;
  v42 = 0;
  v34 = a2;
  v39 = a3;
  v40 = a5;
  v41 = a8;
  memset_0(v43, 0, 0x44uLL);
  v31 = 0LL;
  v33 = 0;
  Object = 0LL;
  if ( a2 )
  {
    v13 = 0LL;
    v37 = 0LL;
LABEL_8:
    LODWORD(v11) = 0;
    v15 = 0;
    v17 = 0LL;
    v16 = (char *)a5;
    v18 = a5;
    if ( !a1 )
      goto LABEL_18;
    goto LABEL_9;
  }
  a1 = *a7;
  v11 = *a7;
  Pool2 = ExAllocatePool2(0x100uLL);
  v37 = (char *)Pool2;
  v13 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( !a1 )
    goto LABEL_8;
  v14 = (_QWORD *)Pool2;
  do
  {
    *v14 = *(_QWORD *)((char *)v14 + (_QWORD)a7 - Pool2 + 8);
    ++v14;
    --v11;
  }
  while ( v11 );
  v15 = 0;
  v16 = (char *)a5;
  v17 = 0LL;
  v18 = a5;
LABEL_9:
  v38 = (char *)(v13 - (char *)v34);
  v20 = v33;
  v32 = v34;
  v36 = a1;
  do
  {
    if ( v18 == &v42 || a6 < 0x48 )
    {
      v18 = &v42;
      v21 = 72;
      v17 = 0LL;
    }
    else
    {
      v18 = (int *)v16;
      v21 = a6;
    }
    memset_0(v18, 0, 0x48uLL);
    v22 = v34 == 0LL;
    v23 = v32;
    v18[11] = 1;
    *v18 = 48;
    if ( v22 )
    {
      *((_QWORD *)v18 + 2) = *(PVOID *)((char *)v23 + (_QWORD)v38);
      v24 = Object;
    }
    else
    {
      v24 = *v23;
      Object = v24;
    }
    if ( (int)WmipQueryAllData(v24, v21, (__int64)&v31) >= 0 )
    {
      v27 = v18[11];
      if ( (v27 & 0x100) == 0 )
      {
        ++HIDWORD(v31);
        if ( (v27 & 0x20) != 0 )
        {
          v30 = v18[12];
          v18 = &v42;
LABEL_35:
          v15 = 1;
          LODWORD(v11) = ((v30 + 7) & 0xFFFFFFF8) + v11;
          goto LABEL_16;
        }
        if ( v18 == &v42 )
        {
          v30 = v31;
          goto LABEL_35;
        }
        if ( v17 )
          v17[3] = v20;
        v28 = (unsigned int)v18[3];
        v17 = v18;
        while ( (_DWORD)v28 )
        {
          v17 = (int *)((char *)v17 + v28);
          v28 = (unsigned int)v17[3];
        }
        v29 = ((_DWORD)v31 + 7) & 0xFFFFFFF8;
        v16 += v29;
        LODWORD(v11) = v29 + v11;
        a6 -= v29;
        v20 = (_DWORD)v16 - (_DWORD)v17;
      }
    }
LABEL_16:
    ++v32;
    --v36;
  }
  while ( v36 );
  v9 = v40;
  v13 = v37;
LABEL_18:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( !HIDWORD(v31) )
    return 3221226133LL;
  if ( v15 )
  {
    v25 = 56;
    v9[11] = 32;
    *v9 = 56;
    v9[12] = v11;
  }
  else
  {
    v25 = v11;
  }
  *v41 = v25;
  return 0LL;
}
