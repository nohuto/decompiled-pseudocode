/*
 * XREFs of SmHwAcceleratorCreate @ 0x14079BD4C
 * Callers:
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BF68 (SmHwAcceleratorMgrAcquireAccelerators.c)
 * Callees:
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     AccelInitializeCompressionWorkspace @ 0x140664264 (AccelInitializeCompressionWorkspace.c)
 *     AccelInitializeDescriptor @ 0x1406643A0 (AccelInitializeDescriptor.c)
 *     AccelQueryDescriptorSize @ 0x1406644E4 (AccelQueryDescriptorSize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 SmHwAcceleratorCreate(__int64 a1, __int64 *a2, int a3, ...)
{
  int v3; // r12d
  int DescriptorSize; // ebx
  unsigned int v7; // r14d
  struct _PRIVILEGE_SET *v8; // rsi
  __int64 i; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int128 v14; // xmm0
  _QWORD *v15; // rax
  __int128 v17; // [rsp+20h] [rbp-A1h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-91h] BYREF
  int v19; // [rsp+48h] [rbp-79h]
  int v20; // [rsp+4Ch] [rbp-75h]
  int v21; // [rsp+50h] [rbp-71h]
  int v22; // [rsp+54h] [rbp-6Dh]
  __int64 v23; // [rsp+58h] [rbp-69h]
  __int64 v24; // [rsp+60h] [rbp-61h]
  __int64 v25; // [rsp+68h] [rbp-59h]
  int v26; // [rsp+70h] [rbp-51h] BYREF
  _DWORD v27[39]; // [rsp+74h] [rbp-4Dh] BYREF
  __int64 v28; // [rsp+128h] [rbp+67h]
  __int64 v29; // [rsp+138h] [rbp+77h] BYREF
  va_list va; // [rsp+138h] [rbp+77h]
  _QWORD *v31; // [rsp+140h] [rbp+7Fh]
  va_list va1; // [rsp+148h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD *);
  v3 = *(_DWORD *)(a1 + 1312);
  LODWORD(v29) = 0;
  v27[0] = 0;
  v17 = 0LL;
  memset_0(&v26, 0, 0x64uLL);
  DescriptorSize = AccelQueryDescriptorSize(*a2, (__int64 *)va);
  if ( DescriptorSize >= 0 )
  {
    v7 = v29;
    v8 = (struct _PRIVILEGE_SET *)SmAllocEx((unsigned int)v29, 0x64416D73u, -1);
    if ( v8 )
    {
      for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
      {
        v10 = a2[i];
        *(_QWORD *)&v17 = 0x300100001LL;
        *((_QWORD *)&v17 + 1) = v10;
        memset_0(v27, 0, 0x64uLL);
        v26 = 6815745;
        DescriptorSize = AccelQueryResourceInformation(&v17, &v26);
        if ( DescriptorSize < 0 )
          goto LABEL_12;
        v11 = a2[i];
        *((_DWORD *)va + i) = v27[4];
        AccelInitializeDescriptor(v11, v7, (__int64)v8);
        v18[0] = 4194305LL;
        v23 = 0LL;
        v25 = 0LL;
        v18[1] = v8;
        v18[2] = 0LL;
        v19 = 0;
        v20 = 7 - ((_DWORD)i != 0);
        v21 = 1;
        v22 = 1;
        v24 = 0LL;
        DescriptorSize = AccelInitializeCompressionWorkspace((__int64)v18);
        if ( (int)(DescriptorSize + 0x80000000) >= 0 && DescriptorSize != -1073741789 )
          goto LABEL_12;
        *((_DWORD *)&v28 + i) = v25;
      }
      v12 = (_QWORD *)SmAllocEx(0x48uLL, 0x68416D73u, a3 | 0x80000000);
      v13 = v12;
      if ( v12 )
      {
        memset_0(v12, 0, 0x48uLL);
        v14 = *(_OWORD *)a2;
        v13[6] = v29;
        v13[7] = v28;
        v15 = v31;
        *((_OWORD *)v13 + 1) = v14;
        *((_DWORD *)v13 + 10) = v7;
        *((_DWORD *)v13 + 11) = a3;
        *v15 = v13;
        *((_DWORD *)v13 + 16) = v3;
        DescriptorSize = 0;
      }
      else
      {
        DescriptorSize = -1073741670;
      }
LABEL_12:
      CmSiFreeMemory(v8);
    }
  }
  return (unsigned int)DescriptorSize;
}
