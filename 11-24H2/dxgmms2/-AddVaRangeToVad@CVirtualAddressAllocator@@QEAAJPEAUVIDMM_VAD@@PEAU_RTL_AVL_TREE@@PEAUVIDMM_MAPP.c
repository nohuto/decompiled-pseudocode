/*
 * XREFs of ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400ECCA8
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     CompareVaRangeAddressWithin @ 0x1400FF750 (CompareVaRangeAddressWithin.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVad(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct _RTL_AVL_TREE *a3,
        struct VIDMM_MAPPED_VA_RANGE *a4)
{
  __int64 v5; // rsi
  struct _RTL_AVL_TREE *v6; // r14
  CVirtualAddressAllocator *v8; // rbp
  _QWORD *v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned __int64 v12; // r11
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rdx
  int v15; // r14d
  char v16; // al
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 *v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // [rsp+58h] [rbp-40h]
  struct _RTL_AVL_TREE *v35; // [rsp+B0h] [rbp+18h]

  v35 = a3;
  v5 = *((_QWORD *)a4 + 8);
  v6 = a3;
  v8 = this;
  if ( (*((_DWORD *)a4 + 18) & 0xF) != 1 )
  {
    if ( (*((_DWORD *)a4 + 18) & 0xF) == 4 )
    {
      v5 = *(_QWORD *)(v5 + 56);
    }
    else
    {
      if ( (*((_DWORD *)a4 + 18) & 0xF) != 5 )
        goto LABEL_27;
      v5 = *(_QWORD *)(v5 + 24);
    }
  }
  if ( v5 )
  {
    v33 = **(_QWORD ***)v5;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v33 + 24, 0LL);
    v9 = v33 + 12;
    v33[25] = KeGetCurrentThread();
    v10 = *((_QWORD *)a4 + 11);
    v11 = v10 & 0x7FFFFFFFFFFFFFFFLL;
    v12 = *((_QWORD *)a4 + 10);
    v13 = (_QWORD *)v33[12];
    v14 = v10 >> 63;
    v15 = 0;
    v16 = v14;
    while ( v13 != v9 )
    {
      v17 = v13[4];
      if ( v12 + *((_QWORD *)a4 + 14) - *((_QWORD *)a4 + 13) <= v17 )
      {
        if ( !v16 )
          goto LABEL_19;
LABEL_23:
        v23 = (_QWORD *)v13[1];
        v24 = (_QWORD *)((char *)a4 + 48);
        if ( (_QWORD *)*v23 == v13 )
        {
          *v24 = v13;
          *((_QWORD *)a4 + 7) = v23;
          *v23 = v24;
          v13[1] = v24;
LABEL_19:
          v33[25] = 0LL;
          ExReleasePushLockExclusiveEx(v33 + 24, 0LL);
          KeLeaveCriticalRegion();
          if ( v15 < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 11798;
            DxgkLogInternalTriageEvent(v20, 0x40000LL);
            return (unsigned int)v15;
          }
          v25 = (__int64 *)(v5 + 128);
          v26 = (_QWORD *)((char *)a4 + 32);
          v27 = *v25;
          if ( *(__int64 **)(*v25 + 8) == v25 )
          {
            v6 = v35;
            v8 = this;
            *v26 = v27;
            *((_QWORD *)a4 + 5) = v25;
            *(_QWORD *)(v27 + 8) = v26;
            *v25 = (__int64)v26;
            goto LABEL_27;
          }
        }
LABEL_37:
        __fastfail(3u);
      }
      if ( v12 < v17 + v13[8] - v13[7] )
      {
        if ( v11 != (v13[5] & 0x7FFFFFFFFFFFFFFFLL) )
        {
          WdLogSingleEntry4(1LL, v13[7], v13[8]);
          WdLogGlobalForLineNumber = 247;
          DxgkLogInternalTriageEvent(v22, 0x40000LL);
          v15 = -1073741811;
          goto LABEL_19;
        }
        v9 = v33 + 12;
      }
      v16 = v14;
      if ( (_BYTE)v14 && v12 < v17 )
        goto LABEL_23;
      v13 = (_QWORD *)*v13;
    }
    if ( !v16 )
      goto LABEL_19;
    v18 = (_QWORD *)((char *)a4 + 48);
    v19 = (_QWORD *)v33[13];
    if ( (_QWORD *)*v19 == v33 + 12 )
    {
      *v18 = v33 + 12;
      *((_QWORD *)a4 + 7) = v19;
      *v19 = v18;
      v33[13] = v18;
      goto LABEL_19;
    }
    goto LABEL_37;
  }
LABEL_27:
  v28 = *(_QWORD **)v6;
  LOBYTE(a3) = 0;
  if ( *(_QWORD *)v6 )
  {
    while ( 1 )
    {
      if ( (int)CompareVaRangeAddressWithin((char *)a4 + 104, v28) < 0 )
      {
        v29 = (_QWORD *)*v28;
        if ( !*v28 )
        {
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v29 = (_QWORD *)v28[1];
        if ( !v29 )
        {
          LOBYTE(a3) = 1;
          break;
        }
      }
      v28 = v29;
    }
  }
  RtlAvlInsertNodeEx(v6, v28, a3, (char *)a4 + 8);
  *((_DWORD *)a4 + 18) |= 0x4000u;
  ++*((_DWORD *)a2 + 19);
  if ( (*((_BYTE *)a4 + 96) & 4) != 0 )
  {
    v30 = (_QWORD *)((char *)a2 + 56);
    if ( !*((_QWORD *)a2 + 7) )
    {
      v31 = (_QWORD *)((char *)v8 + 128);
      v32 = *((_QWORD *)v8 + 16);
      if ( *(CVirtualAddressAllocator **)(v32 + 8) != (CVirtualAddressAllocator *)((char *)v8 + 128) )
        goto LABEL_37;
      *v30 = v32;
      *((_QWORD *)a2 + 8) = v31;
      *(_QWORD *)(v32 + 8) = v30;
      *v31 = v30;
    }
  }
  return 0LL;
}
