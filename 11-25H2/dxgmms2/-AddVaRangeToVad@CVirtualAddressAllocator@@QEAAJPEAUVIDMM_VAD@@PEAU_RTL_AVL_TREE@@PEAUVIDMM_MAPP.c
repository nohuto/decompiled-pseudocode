/*
 * XREFs of ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400F1AA8
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400B723C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     CompareVaRangeAddressWithin @ 0x1400F1DF4 (CompareVaRangeAddressWithin.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVad(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct _RTL_AVL_TREE *a3,
        struct VIDMM_MAPPED_VA_RANGE *a4)
{
  __int64 *v5; // rsi
  struct _RTL_AVL_TREE *v6; // r15
  CVirtualAddressAllocator *v8; // rbp
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r12
  __int64 v13; // r15
  _QWORD *v14; // rbx
  unsigned __int64 v15; // r13
  int v16; // ebp
  char v17; // al
  __int64 *v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  char *v21; // rax
  _QWORD *v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // [rsp+50h] [rbp-48h]
  struct _RTL_AVL_TREE *v37; // [rsp+B0h] [rbp+18h]

  v37 = a3;
  v5 = (__int64 *)*((_QWORD *)a4 + 8);
  v6 = a3;
  v8 = this;
  if ( (*((_DWORD *)a4 + 18) & 0xF) != 1 )
  {
    if ( (*((_DWORD *)a4 + 18) & 0xF) == 4 )
    {
      v5 = (__int64 *)v5[7];
    }
    else
    {
      if ( (*((_DWORD *)a4 + 18) & 0xF) != 5 )
        goto LABEL_25;
      v5 = (__int64 *)v5[3];
    }
  }
  if ( !v5 )
  {
LABEL_25:
    v21 = (char *)a4 + 104;
    goto LABEL_13;
  }
  v9 = *(_QWORD *)*v5;
  KeEnterCriticalRegion();
  v35 = v9 + 192;
  ExAcquirePushLockExclusiveEx(v9 + 192, 0LL);
  v10 = (_QWORD *)(v9 + 96);
  v11 = *((_QWORD *)a4 + 11);
  v12 = *((_QWORD *)a4 + 10);
  v13 = v11 & 0x7FFFFFFFFFFFFFFFLL;
  v14 = *(_QWORD **)(v9 + 96);
  v15 = v11 >> 63;
  v16 = 0;
  v17 = v15;
  while ( v14 != v10 )
  {
    v28 = v14[4];
    if ( v12 + *((_QWORD *)a4 + 14) - *((_QWORD *)a4 + 13) <= v28 )
    {
      if ( !v17 )
        goto LABEL_6;
LABEL_36:
      v30 = (_QWORD *)v14[1];
      v31 = (_QWORD *)((char *)a4 + 48);
      if ( (_QWORD *)*v30 == v14 )
      {
        *v31 = v14;
        *((_QWORD *)a4 + 7) = v30;
        *v30 = v31;
        v14[1] = v31;
        goto LABEL_6;
      }
LABEL_8:
      __fastfail(3u);
    }
    if ( v12 < v28 + v14[8] - v14[7] && v13 != (v14[5] & 0x7FFFFFFFFFFFFFFFLL) )
    {
      WdLogSingleEntry4(1LL, v14[7], v14[8]);
      WdLogGlobalForLineNumber = 197;
      DxgkLogInternalTriageEvent(v29, 0x40000LL);
      v16 = -1073741811;
      goto LABEL_6;
    }
    v17 = v15;
    if ( (_BYTE)v15 && v12 < v28 )
      goto LABEL_36;
    v14 = (_QWORD *)*v14;
  }
  if ( !v17 )
    goto LABEL_6;
  v32 = (_QWORD *)v10[1];
  v33 = (_QWORD *)((char *)a4 + 48);
  if ( (_QWORD *)*v32 != v10 )
    goto LABEL_8;
  *v33 = v10;
  *((_QWORD *)a4 + 7) = v32;
  *v32 = v33;
  v10[1] = v33;
LABEL_6:
  ExReleasePushLockExclusiveEx(v35, 0LL);
  KeLeaveCriticalRegion();
  if ( v16 < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10522;
    DxgkLogInternalTriageEvent(v34, 0x40000LL);
    return (unsigned int)v16;
  }
  v18 = v5 + 16;
  v19 = (_QWORD *)((char *)a4 + 32);
  v20 = *v18;
  if ( *(__int64 **)(*v18 + 8) != v18 )
    goto LABEL_8;
  v6 = v37;
  v8 = this;
  *v19 = v20;
  *((_QWORD *)a4 + 5) = v18;
  *(_QWORD *)(v20 + 8) = v19;
  *v18 = (__int64)v19;
  v21 = (char *)a4 + 104;
LABEL_13:
  v22 = *(_QWORD **)v6;
  LOBYTE(a3) = 0;
  if ( *(_QWORD *)v6 )
  {
    while ( 1 )
    {
      if ( (int)CompareVaRangeAddressWithin(v21, v22) < 0 )
      {
        v23 = (_QWORD *)*v22;
        if ( !*v22 )
        {
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v23 = (_QWORD *)v22[1];
        if ( !v23 )
        {
          LOBYTE(a3) = 1;
          break;
        }
      }
      v22 = v23;
      v21 = (char *)a4 + 104;
    }
  }
  RtlAvlInsertNodeEx(v6, v22, a3, (char *)a4 + 8);
  *((_DWORD *)a4 + 18) |= 0x4000u;
  ++*((_DWORD *)a2 + 19);
  if ( (*((_BYTE *)a4 + 96) & 4) != 0 )
  {
    v25 = (_QWORD *)((char *)a2 + 56);
    if ( !*((_QWORD *)a2 + 7) )
    {
      v26 = (_QWORD *)((char *)v8 + 128);
      v27 = *((_QWORD *)v8 + 16);
      if ( *(CVirtualAddressAllocator **)(v27 + 8) != (CVirtualAddressAllocator *)((char *)v8 + 128) )
        goto LABEL_8;
      *v25 = v27;
      *((_QWORD *)a2 + 8) = v26;
      *(_QWORD *)(v27 + 8) = v25;
      *v26 = v25;
    }
  }
  return 0LL;
}
