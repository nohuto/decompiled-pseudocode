/*
 * XREFs of DpiAgpAllocatePool @ 0x1402528A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
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
  __int64 Pool2; // rax
  __int64 v17; // r14
  int v18; // eax
  _QWORD *v19; // rax
  struct _KMUTANT *v20; // rsi
  __int64 *v21; // rbx
  __int64 v22; // rax
  _QWORD v24[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v26; // [rsp+A8h] [rbp+20h]

  v26 = a4;
  v5 = (int)a3;
  v6 = a2;
  v25 = 0LL;
  v24[0] = 0LL;
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
          &v25,
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
    (*(void (__fastcall **)(_QWORD, __int64))(v8 + 720))(*(_QWORD *)(v8 + 680), v25);
    return v11;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, PMDL, _QWORD *))(v8 + 728))(
          *(_QWORD *)(v8 + 680),
          v25,
          v9,
          0LL,
          Mdl,
          v24);
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
    v15 = (PVOID)MmMapIoSpaceEx(*v26, v6, v14);
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
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v8 + 736))(*(_QWORD *)(v8 + 680), v25, v9, 0LL);
    goto LABEL_30;
  }
  Pool2 = ExAllocatePool2(256LL, 80LL, 1953656900LL);
  v17 = Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    v18 = *(_DWORD *)(v8 + 704);
    WdLogGlobalForLineNumber = 255;
    if ( (v18 & 1) != 0 )
      MmUnmapIoSpace(v7, v6);
    else
      MmUnmapLockedPages(v7, Mdl);
    goto LABEL_29;
  }
  *(_DWORD *)(Pool2 + 16) = 1953656900;
  *(_DWORD *)(Pool2 + 20) = 9;
  *(_QWORD *)(Pool2 + 24) = v25;
  v19 = v26;
  *(_QWORD *)(v17 + 48) = Mdl;
  v20 = (struct _KMUTANT *)(v8 + 2624);
  *(_DWORD *)(v17 + 56) = v6;
  *(_DWORD *)(v17 + 64) = v5;
  *(_QWORD *)(v17 + 32) = *v19;
  *(_QWORD *)(v17 + 40) = v24[0];
  *(_BYTE *)(v17 + 60) = *(_BYTE *)(v8 + 704) & 1;
  *(_QWORD *)(v17 + 72) = *v7;
  KeWaitForSingleObject((PVOID)(v8 + 2624), Executive, 0, 0, 0LL);
  v21 = (__int64 *)(v8 + 2608);
  v22 = *v21;
  if ( *(__int64 **)(*v21 + 8) != v21 )
    __fastfail(3u);
  *(_QWORD *)(v22 + 8) = v17;
  *v21 = v17;
  *(_QWORD *)v17 = v22;
  *(_QWORD *)(v17 + 8) = v21;
  KeReleaseMutex(v20, 0);
  WdLogSingleEntry1(4LL, *v7);
  WdLogGlobalForLineNumber = 286;
  return v11;
}
