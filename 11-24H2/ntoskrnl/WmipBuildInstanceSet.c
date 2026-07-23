/*
 * XREFs of WmipBuildInstanceSet @ 0x1409B053C
 * Callers:
 *     WmipUpdateAddGuid @ 0x1407A5F20 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1407A5FF8 (WmipUpdateModifyGuid.c)
 *     WmipAddDataSource @ 0x1409B01A8 (WmipAddDataSource.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x14045EEEC (RtlStringCchCopyNW.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1409AFE8C (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x1409B0854 (WmipMangleInstanceName.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipBuildInstanceSet(_DWORD *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  size_t v5; // r12
  unsigned int v7; // r10d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8
  int v12; // eax
  const wchar_t *v13; // rsi
  size_t v14; // r14
  __int64 v15; // rax
  __int64 v16; // r15
  int v17; // ecx
  int v18; // ebx
  ULONG_PTR v20; // r10
  unsigned int i; // r9d
  __int64 Pool2; // rax
  __int64 v23; // r15
  size_t v24; // r14
  unsigned int j; // ebp
  unsigned __int64 v26; // r12
  const wchar_t *v27; // rsi
  __int64 v28; // rax
  unsigned __int16 *v29; // rcx
  unsigned __int64 v30; // rcx
  wchar_t *v31; // rax
  unsigned __int64 v32; // rcx
  int v33; // [rsp+60h] [rbp+8h]
  wchar_t *v34; // [rsp+68h] [rbp+10h]

  v5 = (unsigned int)a1[5];
  v7 = *(_DWORD *)(a4 + 16) & 0xFFFD7FF8;
  *(_DWORD *)(a4 + 72) = v5;
  *(_DWORD *)(a4 + 80) = a5;
  *(_DWORD *)(a4 + 76) = 0;
  *(_DWORD *)(a4 + 16) = v7;
  v10 = 0LL;
  v33 = v5;
  if ( (a1[4] & 1) != 0 )
  {
    v7 |= 4u;
    *(_DWORD *)(a4 + 16) = v7;
  }
  if ( (a1[4] & 0x80000) != 0 )
  {
    v7 |= 0x1000u;
    *(_DWORD *)(a4 + 16) = v7;
    if ( (a1[4] & 0x1000) != 0 )
    {
      v7 |= 0x80000u;
      *(_DWORD *)(a4 + 16) = v7;
    }
  }
  if ( (a1[4] & 0x40) != 0 )
    *(_DWORD *)(a4 + 16) = v7 | 0x8000;
  v11 = (unsigned int)a1[6];
  v12 = a1[4];
  v13 = (const wchar_t *)(v11 + a2);
  if ( (v12 & 4) != 0 )
  {
    v20 = 1LL;
    v34 = 0LL;
    for ( i = 0; i < (unsigned int)v5; ++i )
    {
      if ( (unsigned int)v11 > a3 )
        return (unsigned int)-1073741811;
      if ( (v11 & 1) != 0 )
        return (unsigned int)-1073741811;
      if ( !(_DWORD)v11 )
        return (unsigned int)-1073741811;
      v29 = (unsigned __int16 *)(a2 + (unsigned int)v11);
      if ( (unsigned int)v11 + *v29 > a3 || !v29 )
        return (unsigned int)-1073741811;
      v30 = (unsigned __int64)*v29 >> 1;
      v31 = (wchar_t *)v30;
      if ( v30 <= v10 )
        v31 = (wchar_t *)v10;
      v34 = v31;
      v20 += 2 * v30 + 22;
      v10 = (unsigned __int64)v31;
      v32 = v30 + 1;
      if ( !v32 || !is_mul_ok(v32, 2uLL) || v11 + 2 * v32 < v11 )
        return (unsigned int)-1073741675;
      v11 += 2 * v32;
    }
    Pool2 = ExAllocatePool2(0x100uLL, v20, 0x70696D57u);
    v23 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(a4 + 16) |= 2u;
      *(_QWORD *)(a4 + 88) = Pool2;
      v10 = ExAllocatePool2(0x100uLL, 2 * v10 + 2, 0x70696D57u);
      if ( v10 )
      {
        v24 = v23 + 8 * v5;
        for ( j = 0; j < (unsigned int)v5; ++j )
        {
          *(_QWORD *)(v23 + 8LL * j) = v24;
          v26 = *v13;
          v27 = v13 + 1;
          v5 = v26 >> 1;
          RtlStringCchCopyNW((NTSTRSAFE_PWSTR)v10, (size_t)v34 + 1, v27, v5);
          v18 = WmipMangleInstanceName(a1, v10, v5 + 7, v24);
          if ( v18 < 0 )
            goto LABEL_17;
          v28 = -1LL;
          do
            ++v28;
          while ( *(_WORD *)(v24 + 2 * v28) );
          v24 += 2 * v28 + 2;
          v13 = &v27[v5];
          LODWORD(v5) = v33;
        }
        goto LABEL_16;
      }
    }
    return (unsigned int)-1073741670;
  }
  if ( (v12 & 8) == 0 )
    goto LABEL_16;
  if ( (unsigned int)v11 > a3 || (v11 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( (_DWORD)v11 )
  {
    if ( (unsigned int)v11 + *v13 <= a3 )
      goto LABEL_12;
    return (unsigned int)-1073741811;
  }
  v13 = 0LL;
LABEL_12:
  if ( !v13 )
    return (unsigned int)-1073741811;
  v14 = (unsigned __int64)*v13 >> 1;
  v15 = ExAllocatePool2(0x100uLL, 2 * v14 + 6, 0x70696D57u);
  v16 = v15;
  if ( !v15 )
    return (unsigned int)-1073741670;
  RtlStringCchCopyNW((NTSTRSAFE_PWSTR)(v15 + 4), v14 + 1, v13 + 1, v14);
  *(_DWORD *)v16 = WmipDetermineInstanceBaseIndex((__int64)a1, (char *)(v16 + 4));
  v17 = *(_DWORD *)(a4 + 16) | 1;
  *(_QWORD *)(a4 + 88) = v16;
  *(_DWORD *)(a4 + 16) = v17;
  if ( (a1[4] & 0x20) != 0 )
    *(_DWORD *)(a4 + 16) = v17 | 0x20000;
LABEL_16:
  v18 = 0;
  if ( v10 )
LABEL_17:
    ExFreePoolWithTag((PVOID)v10, 0);
  return (unsigned int)v18;
}
