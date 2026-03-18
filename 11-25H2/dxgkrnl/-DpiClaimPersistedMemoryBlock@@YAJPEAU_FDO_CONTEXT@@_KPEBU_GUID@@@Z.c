/*
 * XREFs of ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z @ 0x140248F80
 * Callers:
 *     DpiKsrRestore @ 0x14024A190 (DpiKsrRestore.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x14024A310 (DpiKsrRestoreAdapterDriverState.c)
 * Callees:
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x140249450 (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 */

__int64 __fastcall DpiClaimPersistedMemoryBlock(struct _FDO_CONTEXT *a1, __int64 a2, const struct _GUID *a3)
{
  struct _FDO_CONTEXT *v4; // r13
  void *Pool2; // r15
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // r9
  unsigned int v10; // ebx
  int v11; // eax
  _QWORD *v12; // r12
  int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // r14
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // r11d
  __int64 v21; // r13
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  unsigned int v24; // r10d
  unsigned __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rcx
  int v29; // eax
  unsigned int v31; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v32[3]; // [rsp+34h] [rbp-54h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-38h]
  int v35; // [rsp+54h] [rbp-34h]
  void *v36; // [rsp+58h] [rbp-30h]
  unsigned int v38; // [rsp+A8h] [rbp+20h] BYREF

  v38 = 0;
  v32[0] = 0;
  v4 = a1;
  v31 = 0;
  Pool2 = 0LL;
  KsrQueryMetadata(a3, a2, 0LL, 0LL, &v31);
  if ( !v31 )
    goto LABEL_4;
  Pool2 = (void *)ExAllocatePool2(256LL, v31, 1685221444LL, v7);
  if ( !Pool2 )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    WdLogGlobalForLineNumber = 597;
    goto LABEL_4;
  }
  v11 = KsrQueryMetadata(a3, a2, Pool2, v31, &v31);
  v10 = v11;
  if ( v11 >= 0 )
  {
LABEL_4:
    v8 = KsrClaimPersistedMemory(a3, a2, 0LL, 0LL, 0, &v38);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741789 || !v38 )
    {
      v10 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 626;
      goto LABEL_45;
    }
    v12 = (_QWORD *)ExAllocatePool2(256LL, 8LL * v38, 1953656900LL, v9);
    if ( !v12 )
    {
      v10 = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 636;
      goto LABEL_45;
    }
    v13 = KsrClaimPersistedMemory(a3, a2, v12, v38, 1, v32);
    v10 = v13;
    if ( v13 < 0 || v38 != v32[0] )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 651;
      goto LABEL_44;
    }
    v15 = 0LL;
    v16 = 0LL;
    if ( !v38 )
      goto LABEL_42;
    do
    {
      v17 = v12[v16];
      v16 = (unsigned int)(v16 + 1);
      v15 += v17 >> 40 << 12;
    }
    while ( (unsigned int)v16 < v38 );
    if ( !v15 )
    {
LABEL_42:
      v10 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 668;
      goto LABEL_44;
    }
    v18 = ExAllocatePool2(64LL, v15 + 48, v4 != 0LL ? 1953656900 : 1836216388, v14);
    v19 = v18;
    if ( !v18 )
    {
      v10 = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 679;
LABEL_44:
      ExFreePoolWithTag(v12, 0);
LABEL_45:
      if ( !Pool2 )
        goto LABEL_47;
      goto LABEL_46;
    }
    *(_QWORD *)v18 = 0LL;
    *(_QWORD *)(v18 + 32) = 0LL;
    *(_DWORD *)(v18 + 44) = 0;
    v20 = v38;
    *(_DWORD *)(v18 + 40) = v15;
    *(_WORD *)(v18 + 8) = 8 * (((v15 + 4095) >> 12) + 6);
    *(_WORD *)(v18 + 10) = 2;
    if ( v20 )
    {
      v21 = 0LL;
      v22 = 0LL;
      do
      {
        v23 = v12[v22];
        v24 = 0;
        v25 = v23 >> 40;
        if ( v23 >> 40 )
        {
          v26 = v23 & 0xFFFFFFFFFFLL;
          v27 = 0LL;
          do
          {
            ++v24;
            *(_QWORD *)(v19 + 8 * v21 + 48) = v27 + v26;
            v21 = (unsigned int)(v21 + 1);
            v27 = v24;
          }
          while ( v24 < v25 );
        }
        v22 = (unsigned int)(v22 + 1);
      }
      while ( (unsigned int)v22 < v20 );
      v4 = a1;
    }
    if ( v4 )
    {
      v33[0] = 0LL;
      v35 = 0;
      v34 = v31;
      v33[1] = v19;
      v36 = Pool2;
      v29 = DpiDxgkDdiRestoreMemoryForHotUpdate(v4, (const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *)v33);
      v10 = v29;
      if ( v29 >= 0 )
        goto LABEL_44;
      WdLogSingleEntry1(2LL, v29);
      WdLogGlobalForLineNumber = 746;
    }
    else
    {
      if ( qword_14015E300 )
      {
        v10 = -1073741823;
      }
      else
      {
        if ( (*(_BYTE *)(v19 + 10) & 5) != 0 )
          v28 = *(_QWORD **)(v19 + 24);
        else
          v28 = MmMapLockedPagesSpecifyCache((PMDL)v19, 0, MmCached, 0LL, 0, 0x40000010u);
        qword_14015E300 = (__int64)v28;
        if ( v28 )
        {
          if ( *(unsigned int *)v28 <= v15 )
          {
            v28[2] = v19;
            v19 = 0LL;
          }
          else
          {
            v10 = -1073741811;
            MmUnmapLockedPages(v28, (PMDL)v19);
            qword_14015E300 = 0LL;
          }
        }
        else
        {
          v10 = -1073741823;
          WdLogSingleEntry1(2LL, -1073741823LL);
          WdLogGlobalForLineNumber = 713;
        }
      }
      if ( !v19 )
        goto LABEL_44;
    }
    MmFreePagesFromMdl((PMDL)v19);
    ExFreePoolWithTag((PVOID)v19, 0);
    goto LABEL_44;
  }
  WdLogSingleEntry1(2LL, v11);
  WdLogGlobalForLineNumber = 607;
LABEL_46:
  ExFreePoolWithTag(Pool2, 0);
LABEL_47:
  if ( qword_14015E300 )
    *(_DWORD *)(qword_14015E300 + 24) = v10;
  return v10;
}
