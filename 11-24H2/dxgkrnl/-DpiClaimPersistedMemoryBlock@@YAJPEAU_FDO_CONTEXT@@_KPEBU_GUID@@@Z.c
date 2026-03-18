/*
 * XREFs of ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z @ 0x14024FDB0
 * Callers:
 *     DpiKsrRestore @ 0x140250FC0 (DpiKsrRestore.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x140251140 (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x140250280 (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 */

__int64 __fastcall DpiClaimPersistedMemoryBlock(struct _FDO_CONTEXT *a1, __int64 a2, const struct _GUID *a3)
{
  struct _FDO_CONTEXT *v4; // r13
  void *Pool2; // r15
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  _QWORD *v10; // r12
  int v11; // eax
  unsigned __int64 v12; // r14
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // r11d
  __int64 v18; // r13
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  unsigned int v21; // r10d
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rcx
  int v26; // eax
  unsigned int v28; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v29[3]; // [rsp+34h] [rbp-54h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-38h]
  int v32; // [rsp+54h] [rbp-34h]
  void *v33; // [rsp+58h] [rbp-30h]
  unsigned int v35; // [rsp+A8h] [rbp+20h] BYREF

  v35 = 0;
  v29[0] = 0;
  v4 = a1;
  v28 = 0;
  Pool2 = 0LL;
  KsrQueryMetadata(a3, a2, 0LL, 0LL, &v28);
  if ( !v28 )
    goto LABEL_4;
  Pool2 = (void *)ExAllocatePool2(256LL, v28, 1685221444LL);
  if ( !Pool2 )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 597;
    goto LABEL_4;
  }
  v9 = KsrQueryMetadata(a3, a2, Pool2, v28, &v28);
  v8 = v9;
  if ( v9 >= 0 )
  {
LABEL_4:
    v7 = KsrClaimPersistedMemory(a3, a2, 0LL, 0LL, 0, &v35);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 || !v35 )
    {
      v8 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 626;
      goto LABEL_45;
    }
    v10 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v35, 1953656900LL);
    if ( !v10 )
    {
      v8 = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 636;
      goto LABEL_45;
    }
    v11 = KsrClaimPersistedMemory(a3, a2, v10, v35, 1, v29);
    v8 = v11;
    if ( v11 < 0 || v35 != v29[0] )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 651;
      goto LABEL_44;
    }
    v12 = 0LL;
    v13 = 0LL;
    if ( !v35 )
      goto LABEL_42;
    do
    {
      v14 = v10[v13];
      v13 = (unsigned int)(v13 + 1);
      v12 += v14 >> 40 << 12;
    }
    while ( (unsigned int)v13 < v35 );
    if ( !v12 )
    {
LABEL_42:
      v8 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 668;
      goto LABEL_44;
    }
    v15 = ExAllocatePool2(64LL, v12 + 48, v4 != 0LL ? 1953656900 : 1836216388);
    v16 = v15;
    if ( !v15 )
    {
      v8 = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 679;
LABEL_44:
      ExFreePoolWithTag(v10, 0);
LABEL_45:
      if ( !Pool2 )
        goto LABEL_47;
      goto LABEL_46;
    }
    *(_QWORD *)v15 = 0LL;
    *(_QWORD *)(v15 + 32) = 0LL;
    *(_DWORD *)(v15 + 44) = 0;
    v17 = v35;
    *(_DWORD *)(v15 + 40) = v12;
    *(_WORD *)(v15 + 8) = 8 * (((v12 + 4095) >> 12) + 6);
    *(_WORD *)(v15 + 10) = 2;
    if ( v17 )
    {
      v18 = 0LL;
      v19 = 0LL;
      do
      {
        v20 = v10[v19];
        v21 = 0;
        v22 = v20 >> 40;
        if ( v20 >> 40 )
        {
          v23 = v20 & 0xFFFFFFFFFFLL;
          v24 = 0LL;
          do
          {
            ++v21;
            *(_QWORD *)(v16 + 8 * v18 + 48) = v24 + v23;
            v18 = (unsigned int)(v18 + 1);
            v24 = v21;
          }
          while ( v21 < v22 );
        }
        v19 = (unsigned int)(v19 + 1);
      }
      while ( (unsigned int)v19 < v17 );
      v4 = a1;
    }
    if ( v4 )
    {
      v30[0] = 0LL;
      v32 = 0;
      v31 = v28;
      v30[1] = v16;
      v33 = Pool2;
      v26 = DpiDxgkDdiRestoreMemoryForHotUpdate(v4, (const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *)v30);
      v8 = v26;
      if ( v26 >= 0 )
        goto LABEL_44;
      WdLogSingleEntry1(2LL, v26);
      WdLogGlobalForLineNumber = 746;
    }
    else
    {
      if ( qword_1401612C0 )
      {
        v8 = -1073741823;
      }
      else
      {
        if ( (*(_BYTE *)(v16 + 10) & 5) != 0 )
          v25 = *(_QWORD **)(v16 + 24);
        else
          v25 = MmMapLockedPagesSpecifyCache((PMDL)v16, 0, MmCached, 0LL, 0, 0x40000010u);
        qword_1401612C0 = (__int64)v25;
        if ( v25 )
        {
          if ( *(unsigned int *)v25 <= v12 )
          {
            v25[2] = v16;
            v16 = 0LL;
          }
          else
          {
            v8 = -1073741811;
            MmUnmapLockedPages(v25, (PMDL)v16);
            qword_1401612C0 = 0LL;
          }
        }
        else
        {
          v8 = -1073741823;
          WdLogSingleEntry1(2LL, -1073741823LL);
          WdLogGlobalForLineNumber = 713;
        }
      }
      if ( !v16 )
        goto LABEL_44;
    }
    MmFreePagesFromMdl((PMDL)v16);
    ExFreePoolWithTag((PVOID)v16, 0);
    goto LABEL_44;
  }
  WdLogSingleEntry1(2LL, v9);
  WdLogGlobalForLineNumber = 607;
LABEL_46:
  ExFreePoolWithTag(Pool2, 0);
LABEL_47:
  if ( qword_1401612C0 )
    *(_DWORD *)(qword_1401612C0 + 24) = v8;
  return v8;
}
