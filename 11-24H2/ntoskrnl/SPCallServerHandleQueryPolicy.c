/*
 * XREFs of SPCallServerHandleQueryPolicy @ 0x14095F70C
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeQueryTimeIncrement @ 0x14043CEE0 (KeQueryTimeIncrement.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ntoskrnl_27 @ 0x1409607E0 (ntoskrnl_27.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleQueryPolicy(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // edi
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // r8d
  __int64 v10; // r9
  unsigned int *v11; // rdx
  unsigned int v12; // ebx
  __int64 *v14; // r12
  __int64 v15; // r12
  unsigned int j; // r9d
  unsigned __int64 v17; // r8
  unsigned int *v18; // rdx
  _WORD *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned int *v21; // r13
  unsigned __int64 v22; // rdx
  unsigned int v23; // r15d
  WCHAR *Pool2; // rax
  WCHAR *v25; // rsi
  unsigned int *v26; // rcx
  unsigned int *v27; // rax
  unsigned int k; // r8d
  __int64 v29; // r10
  unsigned int *v30; // rdx
  unsigned int *v31; // rax
  bool v32; // cc
  unsigned int v33; // r10d
  unsigned int m; // r8d
  __int64 v35; // rax
  unsigned int *v36; // rdx
  unsigned int *v37; // rbx
  unsigned int v38; // ebx
  int v39; // r13d
  unsigned int v40; // r13d
  int v41; // eax
  int v42; // r9d
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  int v46; // r10d
  int v47; // r8d
  unsigned int v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // eax
  unsigned int v51; // ebx
  __int64 v52; // r15
  __int64 v53; // rbx
  ULONG TimeIncrement; // eax
  int v55; // r13d
  unsigned __int64 v56; // rbx
  void *v57; // rbx
  int v58; // eax
  int v59; // ecx
  double v60; // xmm0_8
  int v61; // eax
  NTSTATUS v62; // r8d
  __int64 v63; // rax
  __int64 v64; // r8
  _DWORD *v65; // rdx
  int v66; // r10d
  unsigned int ii; // ecx
  unsigned int v68; // eax
  int v69; // r15d
  unsigned __int64 v70; // rdx
  unsigned int jj; // ecx
  unsigned int v72; // eax
  unsigned int v73; // edx
  int v74; // eax
  unsigned int v75; // ecx
  _DWORD *v76; // rdx
  int v77; // r10d
  unsigned int kk; // ecx
  unsigned int v79; // eax
  unsigned int v80; // edx
  int v81; // eax
  unsigned int v82; // ecx
  PVOID v83; // r10
  unsigned int *v84; // rdx
  unsigned int mm; // ecx
  unsigned int v86; // eax
  unsigned int v87; // edx
  unsigned int v88; // ecx
  int v89; // eax
  _DWORD *v90; // rdx
  unsigned int v91; // r10d
  unsigned int nn; // ecx
  unsigned int v93; // eax
  unsigned int v94; // edx
  int v95; // eax
  unsigned int v96; // ecx
  _DWORD *v97; // rdx
  unsigned int i1; // ecx
  unsigned int v99; // eax
  unsigned int v100; // eax
  unsigned int v101; // ecx
  unsigned int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // r13d
  int v106; // eax
  __int64 n; // rdx
  unsigned int v108; // eax
  unsigned __int64 v109; // rax
  __int64 v110; // rbx
  int Size[3]; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v112; // [rsp+54h] [rbp-3Dh] BYREF
  unsigned int v113; // [rsp+58h] [rbp-39h]
  unsigned int v114; // [rsp+5Ch] [rbp-35h] BYREF
  int v115; // [rsp+60h] [rbp-31h]
  int v116; // [rsp+64h] [rbp-2Dh] BYREF
  WCHAR *v117; // [rsp+68h] [rbp-29h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-21h] BYREF
  PVOID P; // [rsp+78h] [rbp-19h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF
  LARGE_INTEGER Timeout; // [rsp+90h] [rbp-1h] BYREF
  UNICODE_STRING v122; // [rsp+98h] [rbp+7h] BYREF
  __int64 v123; // [rsp+A8h] [rbp+17h] BYREF
  int v124; // [rsp+B0h] [rbp+1Fh]

  v114 = a3;
  KeyHandle = a2;
  v116 = 0;
  v112 = 0;
  P = 0LL;
  Timeout.QuadPart = 0LL;
  v6 = 0;
  DestinationString = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = v7;
  for ( i = 0; ; ++i )
  {
    v10 = *v8;
    v11 = v8 + 1;
    if ( i >= 3 )
      break;
    if ( v11 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
  }
  if ( v11 < v8 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( (_DWORD)v10 )
    v14 = (__int64 *)(v8 + 1);
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v15 = *v14;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v17 = *v7;
    v18 = v7 + 1;
    if ( j >= 4 )
      break;
    if ( v18 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v7 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v17 )
    return (unsigned int)-1073741762;
  v19 = v7 + 1;
  if ( (v17 & 1) != 0 )
    return (unsigned int)-1073741762;
  v20 = v17 >> 1;
  if ( *((_WORD *)v18 + (v17 >> 1) - 1) || !v18 )
    return (unsigned int)-1073741762;
  v21 = v18;
  if ( !v20 )
    goto LABEL_240;
  do
  {
    if ( !*v19 )
      break;
    ++v19;
    --v20;
  }
  while ( v20 );
  if ( v20 )
    v22 = (v17 >> 1) - v20;
  else
LABEL_240:
    v22 = 0LL;
  if ( !v20 || 2 * v22 + 2 != v17 || 2 * (unsigned int)((2 * v22) >> 1) == -2 )
    return (unsigned int)-1073741762;
  v23 = 2 * ((2 * v22) >> 1) + 2;
  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL, v23, 0x20534C53u);
  v25 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v21, v23);
  v26 = *(unsigned int **)(a1 + 8);
  if ( !v26 || *(_DWORD *)a1 <= 5u )
    goto LABEL_161;
  v27 = *(unsigned int **)(a1 + 8);
  for ( k = 0; ; ++k )
  {
    v29 = *v27;
    v30 = v27 + 1;
    if ( k >= 5 )
      break;
    if ( v30 < v27 )
      goto LABEL_42;
    v27 = (unsigned int *)((char *)v30 + v29);
    if ( (unsigned int *)((char *)v30 + v29) < v30 )
      goto LABEL_42;
  }
  if ( v30 < v27 )
    goto LABEL_42;
  v31 = 0LL;
  if ( (_DWORD)v29 )
    v31 = v30;
  if ( (_DWORD)v29 != 4 )
    goto LABEL_196;
  v32 = *(_DWORD *)a1 <= 6u;
  v33 = *v31;
  v113 = *v31;
  if ( v32 )
    goto LABEL_161;
  for ( m = 0; ; ++m )
  {
    v35 = *v26;
    v36 = v26 + 1;
    if ( m >= 6 )
      break;
    if ( v36 < v26 )
      goto LABEL_42;
    v26 = (unsigned int *)((char *)v36 + v35);
    v113 = v33;
    if ( (unsigned int *)((char *)v36 + v35) < v36 )
      goto LABEL_42;
  }
  if ( v36 < v26 )
    goto LABEL_42;
  v37 = 0LL;
  if ( (_DWORD)v35 )
    v37 = v26 + 1;
  if ( (_DWORD)v35 != 4 )
    goto LABEL_196;
  v38 = *v37;
  Size[0] = v38;
  RtlInitUnicodeString(&DestinationString, v25);
  if ( v38 )
  {
    v39 = 1;
    if ( v38 <= 0x100000 )
      goto LABEL_65;
  }
  else
  {
    v39 = 0;
  }
  Size[0] = v38;
  if ( (__int64 (__fastcall *)(int, int, int, int, __int64))qword_140FD8448 == ntoskrnl_27 )
    v103 = ntoskrnl_27((int)&DestinationString, (int)&v116, 0, 0, (__int64)&v112);
  else
    v103 = guard_dispatch_icall_no_overrides(&DestinationString, &v116);
  v115 = v103;
  v42 = v103;
  if ( v103 == -1073741789 )
  {
    if ( v38 < v112 )
    {
      v40 = v38;
      if ( !v38 )
      {
        v42 = 0;
        v115 = 0;
        Size[0] = 0;
      }
      goto LABEL_71;
    }
  }
  else
  {
    if ( v103 < 0 )
    {
      v12 = v103;
      goto LABEL_43;
    }
    if ( v112 )
    {
      v12 = -2147418113;
      goto LABEL_43;
    }
    v39 = 0;
  }
  v42 = 0;
  Size[0] = v112;
  v115 = 0;
  if ( !v39 )
  {
    v40 = v112;
    goto LABEL_71;
  }
LABEL_65:
  v40 = Size[0];
  P = (PVOID)ExAllocatePool2(0x100uLL, (unsigned int)Size[0], 0x20534C53u);
  if ( !P )
  {
    v12 = -1073741801;
    goto LABEL_43;
  }
  if ( (__int64 (__fastcall *)(int, int, int, int, __int64))qword_140FD8448 == ntoskrnl_27 )
    v41 = ntoskrnl_27((int)&DestinationString, (int)&v116, (int)P, Size[0], (__int64)&v112);
  else
    v41 = guard_dispatch_icall_no_overrides(&DestinationString, &v116);
  v115 = v41;
  v42 = v41;
  if ( v41 != -1073741789 )
  {
    v12 = v41;
    if ( v41 < 0 )
      goto LABEL_43;
  }
  if ( Size[0] >= v112 )
  {
    v40 = v112;
    Size[0] = v112;
  }
LABEL_71:
  if ( v40 >= 0xFFFFFFFC )
    goto LABEL_42;
  if ( v40 + 4 >= 0xFFFFFFE4 )
    goto LABEL_42;
  if ( v40 + 40 < v40 + 32 )
    goto LABEL_42;
  if ( v40 + 48 < v40 + 40 )
    goto LABEL_42;
  if ( v40 + 48 >= 0xFFFFFFF8 )
    goto LABEL_42;
  v43 = (v40 + 63) & 0xFFFFFFF8;
  if ( v43 < v40 + 56 )
    goto LABEL_42;
  v44 = v43 + 8;
  if ( v43 + 8 < v43 )
    goto LABEL_42;
  v45 = v43 + 12;
  v46 = *((_DWORD *)KeyHandle + 8);
  v47 = *((_DWORD *)KeyHandle + 4);
  if ( v44 >= 0xFFFFFFFC )
    goto LABEL_42;
  v48 = v44 + 8;
  if ( v45 + 4 < v45 )
    goto LABEL_42;
  v49 = v47 + v48;
  if ( v47 + v48 < v48 )
    goto LABEL_42;
  v50 = v49 + 4;
  if ( v49 + 4 < v49 || v46 + v50 < v50 )
    goto LABEL_42;
  v51 = v40 + 48;
  v117 = v25;
  v52 = v15;
  if ( v114 >= v46 + v50 && v42 >= 0 )
  {
    v53 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    v122 = 0LL;
    Size[1] = 0;
    v55 = 1;
    Size[2] = 0;
    v114 = 0;
    v56 = (__int64)((unsigned __int128)(v53 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
    v57 = (void *)((v56 >> 63) + v56);
    KeyHandle = v57;
    RtlInitUnicodeString(&v122, L"Security-SPP-GenuineLocalStatus");
    if ( (__int64 (__fastcall *)(int, int, int, int, __int64))qword_140FD8448 == ntoskrnl_27 )
      v58 = ntoskrnl_27((int)&v122, (int)&Size[1], (int)&Size[2], 4, (__int64)&v114);
    else
      v58 = guard_dispatch_icall_no_overrides(&v122, &Size[1]);
    if ( v58 == -1073741772 || v58 >= 0 && (Size[1] != 4 || !Size[2]) )
      v55 = 0;
    if ( g_ulOldGenuineStateForWnf != v55 )
    {
      g_qwSystemInitTime = (__int64)v57;
      g_ulOldGenuineStateForWnf = v55;
    }
    v59 = (_DWORD)v57 - g_qwSystemInitTime;
    if ( (__int64)v57 - g_qwSystemInitTime < 0 )
    {
      v109 = v59 & 1 | (((unsigned __int64)v57 - g_qwSystemInitTime) >> 1);
      v60 = (double)(int)v109 + (double)(int)v109;
    }
    else
    {
      v60 = (double)v59;
    }
    v61 = 0;
    if ( !v55 && !g_bWNFEventFired )
    {
      LOBYTE(v61) = v60 >= 9000000.0;
      if ( v61 )
      {
        g_bWNFEventFired = 1;
        ZwUpdateWnfStateData(&WNF_OLIC_OS_LICENSE_NON_GENUINE, 0LL, 0, 0LL, 0LL, 0, 0);
      }
    }
    v51 = Size[0] + 48;
    v25 = v117;
    if ( (char *)KeyHandle - g_qwSystemInitTime < (char *)0xA4CBFB
      || (v62 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 0, &Timeout), v51 = Size[0] + 48, v62 < 0)
      || v62 == 192
      || v62 == 258 )
    {
LABEL_126:
      v40 = Size[0];
      goto LABEL_103;
    }
    if ( g_ulOldGenuineState != v55 )
    {
      if ( v55 )
      {
        KeResetEvent(&stru_140EF0C00);
      }
      else
      {
        v110 = MEMORY[0xFFFFF78000000320];
        qword_140FD8118 = v110 * KeQueryTimeIncrement() / 10000;
      }
    }
    g_ulOldGenuineState = v55;
    if ( v55 || !dword_140FD8184 || (char *)KeyHandle - qword_140FD8118 < (char *)0xADF4FC )
    {
      KeReleaseMutex(&Mutex, 0);
      v40 = Size[0];
      v25 = v117;
      v51 = Size[0] + 48;
      goto LABEL_103;
    }
    KeSetEvent(&stru_140EF0C00, 1, 0);
    Size[1] = 0;
    Size[2] = 4;
    v114 = 0;
    KeyHandle = 0LL;
    if ( ZwOpenKey(&KeyHandle, 1u, &stru_140FD8860) >= 0 )
    {
      v105 = 3;
      Size[1] = 3;
    }
    else
    {
      if ( (__int64 (__fastcall *)(int, int, int, int, __int64))qword_140FD8448 == ntoskrnl_27 )
        v104 = ntoskrnl_27((int)aBd, (int)&Size[2], (int)&Size[1], 4, (__int64)&v114);
      else
        v104 = guard_dispatch_icall_no_overrides(aBd, &Size[2]);
      if ( v104 < 0 )
      {
LABEL_234:
        v105 = 1;
        Size[1] = 1;
LABEL_221:
        if ( KeyHandle )
          ZwClose(KeyHandle);
        Size[2] = 0;
        v123 = 0LL;
        v124 = 0;
        Size[1] = 0;
        if ( (__int64 (__fastcall *)(int, int, int, int, __int64))qword_140FD8448 == ntoskrnl_27 )
          v106 = ntoskrnl_27((int)aLn, (int)&Size[2], (int)&v123, 12, (__int64)&Size[1]);
        else
          v106 = guard_dispatch_icall_no_overrides(aLn, &Size[2]);
        v52 = v15;
        v51 = Size[0] + 48;
        v25 = v117;
        if ( v106 >= 0 && *(_QWORD *)&Size[1] == 0x30000000CLL )
        {
          for ( n = 0LL; (unsigned int)n < 3; n = (unsigned int)(n + 1) )
          {
            v108 = *((_DWORD *)&v123 + n);
            if ( (v108 & 0xF) == v105 )
              goto LABEL_232;
          }
        }
        v108 = dword_140FD8058 & 0xFFFF0000 | 0x3211;
LABEL_232:
        dword_140FD8058 = v108;
        if ( v113 )
          v6 = v108;
        else
          KeReleaseMutex(&Mutex, 0);
        goto LABEL_126;
      }
      v105 = Size[1];
    }
    if ( Size[2] == 4 && (unsigned int)(v105 - 1) <= 2 )
      goto LABEL_221;
    goto LABEL_234;
  }
LABEL_103:
  *(_DWORD *)(a4 + 4) = v51;
  if ( !v51 )
  {
    v12 = -1073741762;
    goto LABEL_43;
  }
  v63 = ExAllocatePool2(0x100uLL, v51, 0x20534C53u);
  if ( !v63 )
  {
    v12 = -1073741801;
    goto LABEL_43;
  }
  *(_QWORD *)(a4 + 8) = v63;
  *(_DWORD *)a4 = 0;
  v64 = v52;
  v65 = *(_DWORD **)(a4 + 8);
  v66 = v115 | 0x10000000;
  if ( v65 )
  {
    for ( ii = 0; ; ++ii )
    {
      v64 = v52;
      if ( ii >= *(_DWORD *)a4 )
        break;
      v68 = *v65 + 4;
      if ( v68 < 4 || (_DWORD *)((char *)v65 + v68) < v65 )
        goto LABEL_42;
      v65 = (_DWORD *)((char *)v65 + v68);
    }
    if ( v65 + 1 < v65 )
      goto LABEL_42;
    if ( (unsigned __int64)(v65 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_196;
    *v65 = 4;
    v65[1] = v66;
  }
  else
  {
    v100 = *(_DWORD *)(a4 + 4);
    if ( v100 + 8 < v100 )
    {
      *(_DWORD *)(a4 + 4) = -1;
      goto LABEL_42;
    }
    *(_DWORD *)(a4 + 4) = v100 + 8;
  }
  ++*(_DWORD *)a4;
  v69 = -1;
  v70 = *(_QWORD *)(a4 + 8);
  if ( v70 )
  {
    for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
    {
      v72 = *(_DWORD *)v70 + 4;
      if ( v72 < 4 || v70 + v72 < v70 )
        goto LABEL_42;
      v70 += v72;
    }
    if ( v70 + 4 < v70 )
      goto LABEL_42;
    if ( v70 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_196;
    *(_DWORD *)v70 = 8;
    *(_QWORD *)(v70 + 4) = v64;
  }
  else
  {
    v73 = *(_DWORD *)(a4 + 4);
    v74 = -1;
    v75 = v73 + 12;
    if ( v73 + 12 >= v73 )
      v74 = v73 + 12;
    v12 = v75 < v73 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v74;
    if ( v75 < v73 )
      goto LABEL_43;
  }
  ++*(_DWORD *)a4;
  v76 = *(_DWORD **)(a4 + 8);
  v77 = v116;
  if ( v76 )
  {
    for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
    {
      v79 = *v76 + 4;
      if ( v79 < 4 || (_DWORD *)((char *)v76 + v79) < v76 )
        goto LABEL_42;
      v76 = (_DWORD *)((char *)v76 + v79);
    }
    if ( v76 + 1 < v76 )
      goto LABEL_42;
    if ( (unsigned __int64)(v76 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_196;
    *v76 = 4;
    v76[1] = v77;
  }
  else
  {
    v80 = *(_DWORD *)(a4 + 4);
    v81 = -1;
    v82 = v80 + 8;
    if ( v80 + 8 >= v80 )
      v81 = v80 + 8;
    v12 = v82 < v80 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v81;
    if ( v82 < v80 )
      goto LABEL_43;
  }
  ++*(_DWORD *)a4;
  v83 = P;
  if ( P )
  {
    if ( v40 )
      goto LABEL_149;
  }
  else if ( !v40 )
  {
LABEL_149:
    v84 = *(unsigned int **)(a4 + 8);
    if ( v84 )
    {
      for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
      {
        v86 = *v84 + 4;
        if ( v86 < 4 || (unsigned int *)((char *)v84 + v86) < v84 )
          goto LABEL_42;
        v84 = (unsigned int *)((char *)v84 + v86);
      }
      if ( v84 + 1 < v84 )
        goto LABEL_42;
      if ( (unsigned __int64)v84 + v40 + 4 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_196;
      *v84 = v40;
      if ( v83 )
        memmove(v84 + 1, v83, v40);
    }
    else
    {
      v87 = *(_DWORD *)(a4 + 4);
      v88 = v87 + v40 + 4;
      v89 = -1;
      if ( v88 >= v87 )
        v89 = v87 + v40 + 4;
      v12 = v88 < v87 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v89;
      if ( v88 < v87 )
        goto LABEL_43;
    }
    ++*(_DWORD *)a4;
    v90 = *(_DWORD **)(a4 + 8);
    v91 = v112;
    if ( v90 )
    {
      for ( nn = 0; nn < *(_DWORD *)a4; ++nn )
      {
        v93 = *v90 + 4;
        if ( v93 < 4 || (_DWORD *)((char *)v90 + v93) < v90 )
          goto LABEL_42;
        v90 = (_DWORD *)((char *)v90 + v93);
      }
      if ( v90 + 1 < v90 )
        goto LABEL_42;
      if ( (unsigned __int64)(v90 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_196;
      *v90 = 4;
      v90[1] = v91;
    }
    else
    {
      v94 = *(_DWORD *)(a4 + 4);
      v95 = -1;
      v96 = v94 + 8;
      if ( v94 + 8 >= v94 )
        v95 = v94 + 8;
      v12 = v96 < v94 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v95;
      if ( v96 < v94 )
        goto LABEL_43;
    }
    ++*(_DWORD *)a4;
    v97 = *(_DWORD **)(a4 + 8);
    if ( !v97 )
    {
      v101 = *(_DWORD *)(a4 + 4);
      v102 = v101 + 8;
      if ( v101 + 8 >= v101 )
        v69 = v101 + 8;
      v12 = v102 < v101 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v69;
      if ( v102 < v101 )
        goto LABEL_43;
      goto LABEL_189;
    }
    for ( i1 = 0; i1 < *(_DWORD *)a4; ++i1 )
    {
      v99 = *v97 + 4;
      if ( v99 < 4 || (_DWORD *)((char *)v97 + v99) < v97 )
        goto LABEL_42;
      v97 = (_DWORD *)((char *)v97 + v99);
    }
    if ( v97 + 1 >= v97 )
    {
      if ( (unsigned __int64)(v97 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *v97 = 4;
        v97[1] = v6;
LABEL_189:
        ++*(_DWORD *)a4;
        v12 = 0;
        goto LABEL_43;
      }
LABEL_196:
      v12 = -1073741789;
      goto LABEL_43;
    }
LABEL_42:
    v12 = -1073741675;
    goto LABEL_43;
  }
LABEL_161:
  v12 = -1073741811;
LABEL_43:
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v12;
}
