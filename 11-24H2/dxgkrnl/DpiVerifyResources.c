/*
 * XREFs of DpiVerifyResources @ 0x1403D9D80
 * Callers:
 *     DpMapMemory @ 0x1403F3E90 (DpMapMemory.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DpiDecodeResourceDescriptorLength @ 0x1403FF7E8 (DpiDecodeResourceDescriptorLength.c)
 */

__int64 __fastcall DpiVerifyResources(__int64 a1, _QWORD *a2, __int64 a3, char a4, char a5, _DWORD *a6, _QWORD *a7)
{
  __int64 v7; // r14
  unsigned int v8; // edi
  _QWORD *v9; // r12
  unsigned int v10; // r15d
  unsigned int *v12; // r13
  __int64 v13; // rax
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  __int64 v16; // rdx
  signed __int64 v17; // r8
  __int64 *i; // rbx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  signed __int64 v23; // rax
  unsigned __int8 (__fastcall *v24)(_QWORD, __int64, __int64, _QWORD **, __int64 *); // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+50h]
  char v30; // [rsp+98h] [rbp+58h]

  v30 = a4;
  v29 = a3;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0;
  v9 = a7;
  v10 = a3;
  v28 = 0LL;
  *a7 = 0LL;
  v12 = *(unsigned int **)(v7 + 1312);
  if ( !v12 )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(3LL, *a2);
    WdLogGlobalForLineNumber = 3927;
    return v8;
  }
  v13 = *a2;
  if ( *a2 != 786432LL && v13 != 655360 && v13 != 944 && v13 != 960 )
  {
    v14 = 0;
LABEL_7:
    if ( v14 >= *v12 )
    {
      v8 = -1073741811;
      WdLogSingleEntry1(3LL, *a2);
      WdLogGlobalForLineNumber = 4058;
      return v8;
    }
    v15 = 0;
    v16 = (__int64)&v12[9 * v14 + 3];
    while ( 1 )
    {
      if ( v15 >= *(_DWORD *)(v16 + 4) )
      {
        ++v14;
        goto LABEL_7;
      }
      v20 = v16 + 4 * (v15 + 4LL * v15 + 2);
      if ( a4 == 1 )
      {
        if ( *(_BYTE *)v20 != 1 )
          goto LABEL_27;
        v21 = *(_QWORD *)(v20 + 4);
        v22 = *(unsigned int *)(v20 + 12);
        v28 = v21;
      }
      else
      {
        if ( a4 || ((*(_BYTE *)v20 - 3) & 0xFB) != 0 )
          goto LABEL_27;
        v21 = *(_QWORD *)(v20 + 4);
        v28 = v21;
        v22 = DpiDecodeResourceDescriptorLength();
        a4 = v30;
      }
      v23 = v21 + v22;
      if ( *a2 >= v21 && *a2 + v29 <= v23 )
      {
        v10 = v29;
        v9 = a7;
LABEL_34:
        KeWaitForSingleObject((PVOID)(v7 + 2544), Executive, 0, 0, 0LL);
        for ( i = *(__int64 **)(v7 + 2528); *i != *(_QWORD *)(v7 + 2528); i = (__int64 *)*i )
        {
          v17 = i[4];
          if ( *a2 < v17 + *((unsigned int *)i + 10) && *a2 + v10 > v17 )
          {
            v26 = *((unsigned int *)i + 14);
            *a6 = v26;
            if ( i[4] == *a2
              && *((_DWORD *)i + 10) == v10
              && *((_BYTE *)i + 45) == a5
              && (!a5 || i[6] == PsGetCurrentProcess(v26)) )
            {
              v27 = i[8];
              ++*((_DWORD *)i + 6);
              *v9 = v27;
            }
            break;
          }
        }
        KeReleaseMutex((PRKMUTEX)(v7 + 2544), 0);
        return v8;
      }
      v16 = (__int64)&v12[9 * v14 + 3];
LABEL_27:
      ++v15;
    }
  }
  if ( *(_BYTE *)(v7 + 1155) == 1 )
  {
    if ( v13 != 786432 )
    {
      v24 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD **, __int64 *))(v7 + 592);
      if ( v24 )
      {
        v25 = *a2;
        v28 = 0LL;
        LODWORD(a7) = a4 != 0;
        if ( v24(*(_QWORD *)(v7 + 568), v25, a3, &a7, &v28) == 1 )
          *a2 = v28;
      }
    }
    goto LABEL_34;
  }
  v8 = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 3986;
  return v8;
}
