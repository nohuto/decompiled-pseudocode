/*
 * XREFs of DpiAgpAllocatePool @ 0x14024BA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiAgpAllocatePool(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4, PVOID BaseAddress)
{
  __int64 v5; // r13
  SIZE_T v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // ebp
  int v10; // eax
  unsigned int v11; // edi
  PMDL Mdl; // rsi
  int v13; // eax
  unsigned int v14; // r14d
  PVOID v15; // rax
  __int64 v16; // r9
  __int64 Pool2; // rax
  __int64 v18; // r14
  int v19; // eax
  _QWORD *v20; // rax
  struct _KMUTANT *v21; // rsi
  __int64 *v22; // rbx
  __int64 v23; // rax
  _QWORD v25[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v26; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v27; // [rsp+A8h] [rbp+20h]

  v27 = a4;
  v5 = (int)a3;
  v6 = a2;
  v26 = 0LL;
  v25[0] = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v7 = BaseAddress;
  if ( !BaseAddress )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_QWORD *)(v8 + 16) != 0x274727044LL || !*(_QWORD *)(v8 + 712) || !*(_QWORD *)(v8 + 728) )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 91;
    return v11;
  }
  *(_QWORD *)BaseAddress = 0LL;
  v9 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _QWORD *))(v8 + 712))(
          *(_QWORD *)(v8 + 680),
          v9,
          a3,
          &v26,
          a4);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v8 + 712), v10);
    WdLogGlobalForLineNumber = 125;
    return v11;
  }
  Mdl = IoAllocateMdl(0LL, v6, 0, 0, 0LL);
  if ( !Mdl )
  {
    v11 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 149;
LABEL_31:
    (*(void (__fastcall **)(_QWORD, __int64))(v8 + 720))(*(_QWORD *)(v8 + 680), v26);
    return v11;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, PMDL, _QWORD *))(v8 + 728))(
          *(_QWORD *)(v8 + 680),
          v26,
          v9,
          0LL,
          Mdl,
          v25);
  v11 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v8 + 728), v13);
    WdLogGlobalForLineNumber = 165;
LABEL_30:
    IoFreeMdl(Mdl);
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(v8 + 704) & 1) != 0 )
  {
    v14 = 4;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
      {
        if ( (_DWORD)v5 == 2 )
        {
          v14 = 1028;
        }
        else
        {
          WdLogSingleEntry2(2LL, v5, v8);
          WdLogGlobalForLineNumber = 201;
        }
      }
    }
    else
    {
      v14 = 516;
    }
    v15 = (PVOID)MmMapIoSpaceEx(*v27, v6, v14);
  }
  else
  {
    Mdl->MdlFlags |= 0x2002u;
    v15 = MmMapLockedPagesSpecifyCache(Mdl, 0, (MEMORY_CACHING_TYPE)v5, 0LL, 0, 0x40000010u);
  }
  *v7 = v15;
  if ( !v15 )
  {
    v11 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 234;
LABEL_29:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v8 + 736))(*(_QWORD *)(v8 + 680), v26, v9, 0LL);
    goto LABEL_30;
  }
  Pool2 = ExAllocatePool2(256LL, 80LL, 1953656900LL, v16);
  v18 = Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    v19 = *(_DWORD *)(v8 + 704);
    WdLogGlobalForLineNumber = 255;
    if ( (v19 & 1) != 0 )
      MmUnmapIoSpace(v7, v6);
    else
      MmUnmapLockedPages(v7, Mdl);
    goto LABEL_29;
  }
  *(_DWORD *)(Pool2 + 16) = 1953656900;
  *(_DWORD *)(Pool2 + 20) = 9;
  *(_QWORD *)(Pool2 + 24) = v26;
  v20 = v27;
  *(_QWORD *)(v18 + 48) = Mdl;
  v21 = (struct _KMUTANT *)(v8 + 2624);
  *(_DWORD *)(v18 + 56) = v6;
  *(_DWORD *)(v18 + 64) = v5;
  *(_QWORD *)(v18 + 32) = *v20;
  *(_QWORD *)(v18 + 40) = v25[0];
  *(_BYTE *)(v18 + 60) = *(_BYTE *)(v8 + 704) & 1;
  *(_QWORD *)(v18 + 72) = *v7;
  KeWaitForSingleObject((PVOID)(v8 + 2624), Executive, 0, 0, 0LL);
  v22 = (__int64 *)(v8 + 2608);
  v23 = *v22;
  if ( *(__int64 **)(*v22 + 8) != v22 )
    __fastfail(3u);
  *(_QWORD *)(v23 + 8) = v18;
  *v22 = v18;
  *(_QWORD *)v18 = v23;
  *(_QWORD *)(v18 + 8) = v22;
  KeReleaseMutex(v21, 0);
  WdLogSingleEntry1(4LL, *v7);
  WdLogGlobalForLineNumber = 286;
  return v11;
}
