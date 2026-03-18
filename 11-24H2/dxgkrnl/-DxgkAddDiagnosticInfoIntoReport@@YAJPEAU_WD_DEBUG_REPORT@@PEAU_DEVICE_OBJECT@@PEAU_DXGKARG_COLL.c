/*
 * XREFs of ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401CEC58
 * Callers:
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401AAD20 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x140071BE0 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1401CFB28 (-TdrFreePool@@YAXPEAX@Z.c)
 */

__int64 __fastcall DxgkAddDiagnosticInfoIntoReport(
        struct _WD_DEBUG_REPORT *a1,
        struct _DEVICE_OBJECT *a2,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  char *Pool2; // rax
  int *v7; // r12
  unsigned int v8; // eax
  int v9; // r14d
  int *v10; // r15
  _DWORD *v11; // rax
  int *v12; // rdi
  void *v13; // r14
  struct _WD_DEBUG_REPORT *v14; // rbx
  size_t v15; // rdx
  bool v16; // cf
  int *v17; // r14
  unsigned int *v18; // r8
  _DWORD *v19; // rcx
  __int128 v20; // xmm0
  int v21; // eax
  _DWORD *v22; // r15
  int v23; // ebp
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rax
  unsigned int v36; // ebp
  __int64 v37; // rbx
  int v38; // eax
  int v39; // edi
  int v40; // ebx
  unsigned int v41; // r10d
  _DWORD *v42; // rcx
  int i; // edi
  unsigned int v44; // r9d
  int v45; // r8d
  __int64 v46; // rax
  int *v47; // rdi
  __int64 v48; // rbx
  int v50; // [rsp+50h] [rbp-48h]
  int v51; // [rsp+50h] [rbp-48h]
  unsigned int v52; // [rsp+54h] [rbp-44h]
  int v53; // [rsp+58h] [rbp-40h]
  char *v54; // [rsp+60h] [rbp-38h]
  unsigned int v56; // [rsp+B8h] [rbp+20h]

  if ( !a1 || !a2 || !a3 || !*((_QWORD *)a3 + 28) )
    return 3221225485LL;
  v4 = 0;
  v5 = (TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 1, 0) + 4095) & 0xFFFFF000;
  Pool2 = (char *)ExAllocatePool2(256LL, v5, 1380209782LL);
  v7 = (int *)Pool2;
  if ( Pool2 )
  {
    v8 = TdrCollectBugcheckSecondaryDumpData(Pool2, v5, 1, 0);
    v9 = *((_DWORD *)a3 + 55);
    v56 = v8;
    v10 = 0LL;
    v50 = v9 != 0 ? 32 : 24;
    v11 = (_DWORD *)ExAllocatePool2(256LL, (v50 + v9 + 4431) & 0xFFFFF000, 1380209782LL);
    v54 = (char *)v11;
    v12 = v11;
    if ( v11 )
    {
      v15 = *((unsigned int *)a3 + 55);
      v16 = v9 != 0;
      v17 = v11 + 2;
      v18 = v11 + 4;
      v11[1] = 0;
      *v11 = v16 + 2;
      v19 = v11 + 4;
      v11[2] = v50;
      v11[3] = 49;
      if ( (_DWORD)v15 )
      {
        *v18 = 0;
        v19 = v11 + 6;
        v11[5] = 1;
      }
      v20 = *(_OWORD *)((char *)a3 + 12);
      v21 = *((_DWORD *)a3 + 2);
      v22 = v12 + 2;
      *(_QWORD *)v19 = 0LL;
      v23 = *v17;
      v19[2] = v21;
      *((_QWORD *)v19 + 2) = 0LL;
      v19[3] = 0;
      v24 = *(_OWORD *)((char *)a3 + 28);
      *(_OWORD *)(v19 + 6) = v20;
      v25 = *(_OWORD *)((char *)a3 + 44);
      *(_OWORD *)(v19 + 10) = v24;
      v26 = *(_OWORD *)((char *)a3 + 60);
      *(_OWORD *)(v19 + 14) = v25;
      v27 = *(_OWORD *)((char *)a3 + 76);
      *(_OWORD *)(v19 + 18) = v26;
      v28 = *(_OWORD *)((char *)a3 + 92);
      *(_OWORD *)(v19 + 22) = v27;
      v29 = *(_OWORD *)((char *)a3 + 108);
      *(_OWORD *)(v19 + 26) = v28;
      v30 = *(_OWORD *)((char *)a3 + 124);
      *(_OWORD *)(v19 + 30) = v29;
      v31 = *(_OWORD *)((char *)a3 + 140);
      *(_OWORD *)(v19 + 34) = v30;
      v32 = *(_OWORD *)((char *)a3 + 156);
      *(_OWORD *)(v19 + 38) = v31;
      v33 = *(_OWORD *)((char *)a3 + 172);
      *(_OWORD *)(v19 + 42) = v32;
      v34 = *(_OWORD *)((char *)a3 + 188);
      *(_OWORD *)(v19 + 46) = v33;
      *(_OWORD *)(v19 + 50) = v34;
      if ( v21 == 3 )
      {
        v35 = *((_QWORD *)a3 + 26);
        if ( v35 )
        {
          if ( *(_DWORD *)v35 == 16 )
          {
            *(_OWORD *)(v19 + 54) = *(_OWORD *)v35;
            v19[58] = *(_DWORD *)(v35 + 16);
          }
        }
      }
      v36 = v23 + 336;
      if ( (_DWORD)v15 )
      {
        v22 = v12 + 4;
        *v18 = v36;
        memmove((char *)v12 + v36, *((const void **)a3 + 28), v15);
        v36 += *((_DWORD *)a3 + 55);
      }
      v22[2] = v36;
      v37 = (v36 + v56 + 4095) & 0xFFFFF000;
      v10 = (int *)ExAllocatePool2(256LL, v37, 1380209782LL);
      if ( v10 )
      {
        v38 = *v12;
        v39 = *v7;
        v53 = v38;
        v51 = *v17;
        v52 = v7[2];
        v40 = *v7 + v38 + 1;
        memmove(v10, v7, v52);
        v41 = 2 * v40;
        *v10 = v40;
        v42 = v10 + 2;
        for ( i = v39 - 1; i; --i )
        {
          if ( !v42[1] )
            break;
          *v42 += 8 * v40 - v52;
          v42 += 2;
        }
        v44 = v56 - v52;
        v45 = v53 - 1;
        if ( v53 != 1 )
        {
          do
          {
            if ( !v17[1] )
              break;
            v46 = *(_QWORD *)v17;
            v17 += 2;
            *(_QWORD *)v42 = v46;
            *v42 += v41 * 4 + v56 - v52 - v51;
            v42 += 2;
            --v45;
          }
          while ( v45 );
        }
        v47 = &v10[v41];
        v48 = v44;
        memmove(v47, (char *)v7 + v52, v44);
        v13 = v54;
        memmove((char *)v47 + v48, &v54[v51], v36 - v51);
        v14 = a1;
        if ( (unsigned __int8)WdDbgReportSecondaryData(a1, v10, (v36 + v56 + 4095) & 0xFFFFF000) )
          goto LABEL_29;
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4035;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"WdDbgReportSecondaryData returned FALSE for combined blob.",
          4035LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_27:
        v4 = -1073741801;
        if ( !(unsigned __int8)WdDbgReportSecondaryData(v14, v7, v56) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4046;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"WdDbgReportSecondaryData returned FALSE.",
            4046LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
LABEL_29:
        TdrFreePool(v7);
        TdrFreePool(v13);
        TdrFreePool(v10);
        return v4;
      }
      WdLogSingleEntry1(2LL, (unsigned int)v37);
      WdLogGlobalForLineNumber = 3959;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for DxgkAddDiagnosticInfoIntoReport (Size = 0x%I64x)",
        v37,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, ((v9 != 0 ? 32 : 24) + v9 + 4431) & 0xFFFFF000);
      WdLogGlobalForLineNumber = 3874;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for DxgkAddDiagnosticInfoIntoReport (Size = 0x%I64x)",
        ((v9 != 0 ? 32 : 24) + v9 + 4431) & 0xFFFFF000,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v13 = v54;
    v14 = a1;
    goto LABEL_27;
  }
  WdLogSingleEntry1(6LL, v5);
  WdLogGlobalForLineNumber = 3836;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Out of memory allocating live dump data (size 0x%I64x)",
    v5,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
