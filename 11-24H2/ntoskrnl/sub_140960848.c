/*
 * XREFs of sub_140960848 @ 0x140960848
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ntoskrnl_27 @ 0x1409607E0 (ntoskrnl_27.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140960848(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // r8d
  unsigned int *v7; // rax
  unsigned int i; // edx
  __int64 v9; // r8
  unsigned int *v10; // rcx
  unsigned int *v11; // rax
  __int64 v12; // r15
  int v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // esi
  NTSTATUS v16; // eax
  int v17; // edx
  unsigned int v18; // ecx
  __int64 Pool2; // rax
  int v20; // esi
  _DWORD *v21; // rdx
  unsigned int j; // ecx
  unsigned int v23; // eax
  int v24; // r9d
  unsigned __int64 v25; // rdx
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int k; // ecx
  unsigned int v30; // eax
  _DWORD *v31; // rdx
  int v32; // r10d
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int m; // ecx
  unsigned int v36; // eax
  LARGE_INTEGER v38; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  int v40; // [rsp+70h] [rbp+20h] BYREF
  int v41; // [rsp+80h] [rbp+30h] BYREF

  v41 = a3;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  for ( i = 0; ; ++i )
  {
    v9 = *v7;
    v10 = v7 + 1;
    if ( i >= 3 )
      break;
    if ( v10 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
  }
  if ( v10 < v7 )
    return (unsigned int)-1073741675;
  v11 = 0LL;
  if ( (_DWORD)v9 )
    v11 = v10;
  if ( (_DWORD)v9 != 8 )
    return (unsigned int)-1073741789;
  v12 = *(_QWORD *)v11;
  v41 = 0;
  v40 = 0;
  v38.LowPart = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Security-SPP-GenuineLocalStatus");
  if ( (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))qword_140FD8448 == ntoskrnl_27 )
    v13 = ntoskrnl_27((__int64)&DestinationString, (__int64)&v41, (__int64)&v40, 4LL, (__int64)&v38);
  else
    v13 = guard_dispatch_icall_no_overrides(&DestinationString, &v41);
  v6 = v13;
  if ( v13 != -1073741772 )
  {
    if ( v13 < 0 )
      return v6;
    if ( v41 == 4 && v40 )
      KeResetEvent(&stru_140EF0C00);
  }
  dword_140FD8184 = 1;
  do
  {
    v14 = KeWaitForSingleObject(&stru_140EF0C00, UserRequest, 1, 1u, 0LL);
    v15 = v14;
  }
  while ( v14 == 257 );
  if ( v14 >= 0 && v14 != 192 )
  {
    do
    {
      v16 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 1u, 0LL);
      v15 = v16;
    }
    while ( v16 == 257 );
    if ( v16 >= 0 && v16 != 192 && v16 != 258 )
      KeReleaseMutex(&Mutex, 0);
  }
  v17 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC8 )
    return (unsigned int)-1073741675;
  v18 = *(_DWORD *)(a2 + 16) + 60;
  if ( v18 < *(_DWORD *)(a2 + 16) + 56 )
    return (unsigned int)-1073741675;
  v6 = v18 + v17 < v18 ? 0xC0000095 : 0;
  if ( v18 + v17 < v18 )
    return v6;
  *(_DWORD *)(a4 + 4) = 28;
  Pool2 = ExAllocatePool2(0x100uLL, 0x1CuLL, 0x20534C53u);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = Pool2;
  *(_DWORD *)a4 = 0;
  v20 = v15 | 0x10000000;
  v21 = (_DWORD *)Pool2;
  for ( j = 0; j < *(_DWORD *)a4; ++j )
  {
    v23 = *v21 + 4;
    if ( *v21 >= 0xFFFFFFFC || (_DWORD *)((char *)v21 + v23) < v21 )
      return (unsigned int)-1073741675;
    v21 = (_DWORD *)((char *)v21 + v23);
  }
  if ( v21 + 1 < v21 )
    return (unsigned int)-1073741675;
  if ( (unsigned __int64)(v21 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    return (unsigned int)-1073741789;
  *v21 = 4;
  v21[1] = v20;
  ++*(_DWORD *)a4;
  v24 = -1;
  v25 = *(_QWORD *)(a4 + 8);
  if ( v25 )
  {
    for ( k = 0; k < *(_DWORD *)a4; ++k )
    {
      v30 = *(_DWORD *)v25 + 4;
      if ( *(_DWORD *)v25 >= 0xFFFFFFFC || v25 + v30 < v25 )
        return (unsigned int)-1073741675;
      v25 += v30;
    }
    if ( v25 + 4 < v25 )
      return (unsigned int)-1073741675;
    if ( v25 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v25 = 8;
      *(_QWORD *)(v25 + 4) = v12;
      goto LABEL_60;
    }
    return (unsigned int)-1073741789;
  }
  v26 = *(_DWORD *)(a4 + 4);
  v27 = -1;
  v28 = v26 + 12;
  if ( v26 + 12 >= v26 )
    v27 = v26 + 12;
  v6 = v28 < v26 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v27;
  if ( v28 >= v26 )
  {
LABEL_60:
    ++*(_DWORD *)a4;
    v31 = *(_DWORD **)(a4 + 8);
    v32 = dword_140FD8058;
    if ( !v31 )
    {
      v33 = *(_DWORD *)(a4 + 4);
      v34 = v33 + 8;
      if ( v33 + 8 >= v33 )
        v24 = v33 + 8;
      v6 = v34 < v33 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v24;
      if ( v34 >= v33 )
      {
        ++*(_DWORD *)a4;
        return 0;
      }
      return v6;
    }
    for ( m = 0; m < *(_DWORD *)a4; ++m )
    {
      v36 = *v31 + 4;
      if ( *v31 >= 0xFFFFFFFC || (_DWORD *)((char *)v31 + v36) < v31 )
        return (unsigned int)-1073741675;
      v31 = (_DWORD *)((char *)v31 + v36);
    }
    if ( v31 + 1 >= v31 )
    {
      v6 = 0;
      if ( (unsigned __int64)(v31 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *v31 = 4;
        v31[1] = v32;
        ++*(_DWORD *)a4;
        return v6;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  return v6;
}
