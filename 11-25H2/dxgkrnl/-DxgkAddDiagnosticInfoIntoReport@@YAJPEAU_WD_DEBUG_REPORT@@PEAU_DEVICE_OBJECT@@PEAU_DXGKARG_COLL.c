/*
 * XREFs of ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401C99C8
 * Callers:
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401A8800 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x140071260 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1401CA898 (-TdrFreePool@@YAXPEAX@Z.c)
 */

__int64 __fastcall DxgkAddDiagnosticInfoIntoReport(
        struct _WD_DEBUG_REPORT *a1,
        struct _DEVICE_OBJECT *a2,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  __int64 v6; // r9
  char *Pool2; // rax
  int *v8; // r12
  unsigned int v9; // eax
  int v10; // r14d
  int *v11; // r15
  __int64 v12; // r9
  _DWORD *v13; // rax
  int *v14; // rdi
  void *v15; // r14
  struct _WD_DEBUG_REPORT *v16; // rbx
  size_t v17; // rdx
  bool v18; // cf
  int *v19; // r14
  unsigned int *v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // rcx
  __int128 v23; // xmm0
  int v24; // eax
  _DWORD *v25; // r15
  int v26; // ebp
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 v38; // rax
  unsigned int v39; // ebp
  __int64 v40; // rbx
  int v41; // eax
  int v42; // edi
  int v43; // ebx
  unsigned int v44; // r10d
  _DWORD *v45; // rcx
  int i; // edi
  unsigned int v47; // r9d
  int v48; // r8d
  __int64 v49; // rax
  int *v50; // rdi
  __int64 v51; // rbx
  int v53; // [rsp+50h] [rbp-48h]
  int v54; // [rsp+50h] [rbp-48h]
  unsigned int v55; // [rsp+54h] [rbp-44h]
  int v56; // [rsp+58h] [rbp-40h]
  char *v57; // [rsp+60h] [rbp-38h]
  unsigned int v59; // [rsp+B8h] [rbp+20h]

  if ( !a1 || !a2 || !a3 || !*((_QWORD *)a3 + 28) )
    return 3221225485LL;
  v4 = 0;
  v5 = (TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 1, 0) + 4095) & 0xFFFFF000;
  Pool2 = (char *)ExAllocatePool2(256LL, v5, 1380209782LL, v6);
  v8 = (int *)Pool2;
  if ( Pool2 )
  {
    v9 = TdrCollectBugcheckSecondaryDumpData(Pool2, v5, 1, 0);
    v10 = *((_DWORD *)a3 + 55);
    v59 = v9;
    v11 = 0LL;
    v53 = v10 != 0 ? 32 : 24;
    v13 = (_DWORD *)ExAllocatePool2(256LL, (v53 + v10 + 4431) & 0xFFFFF000, 1380209782LL, v12);
    v57 = (char *)v13;
    v14 = v13;
    if ( v13 )
    {
      v17 = *((unsigned int *)a3 + 55);
      v18 = v10 != 0;
      v19 = v13 + 2;
      v20 = v13 + 4;
      v21 = 0LL;
      v13[1] = 0;
      *v13 = v18 + 2;
      v22 = v13 + 4;
      v13[2] = v53;
      v13[3] = 49;
      if ( (_DWORD)v17 )
      {
        *v20 = 0;
        v22 = v13 + 6;
        v13[5] = 1;
      }
      v23 = *(_OWORD *)((char *)a3 + 12);
      v24 = *((_DWORD *)a3 + 2);
      v25 = v14 + 2;
      *(_QWORD *)v22 = 0LL;
      v26 = *v19;
      v22[2] = v24;
      *((_QWORD *)v22 + 2) = 0LL;
      v22[3] = 0;
      v27 = *(_OWORD *)((char *)a3 + 28);
      *(_OWORD *)(v22 + 6) = v23;
      v28 = *(_OWORD *)((char *)a3 + 44);
      *(_OWORD *)(v22 + 10) = v27;
      v29 = *(_OWORD *)((char *)a3 + 60);
      *(_OWORD *)(v22 + 14) = v28;
      v30 = *(_OWORD *)((char *)a3 + 76);
      *(_OWORD *)(v22 + 18) = v29;
      v31 = *(_OWORD *)((char *)a3 + 92);
      *(_OWORD *)(v22 + 22) = v30;
      v32 = *(_OWORD *)((char *)a3 + 108);
      *(_OWORD *)(v22 + 26) = v31;
      v33 = *(_OWORD *)((char *)a3 + 124);
      *(_OWORD *)(v22 + 30) = v32;
      v34 = *(_OWORD *)((char *)a3 + 140);
      *(_OWORD *)(v22 + 34) = v33;
      v35 = *(_OWORD *)((char *)a3 + 156);
      *(_OWORD *)(v22 + 38) = v34;
      v36 = *(_OWORD *)((char *)a3 + 172);
      *(_OWORD *)(v22 + 42) = v35;
      v37 = *(_OWORD *)((char *)a3 + 188);
      *(_OWORD *)(v22 + 46) = v36;
      *(_OWORD *)(v22 + 50) = v37;
      if ( v24 == 3 )
      {
        v38 = *((_QWORD *)a3 + 26);
        if ( v38 )
        {
          if ( *(_DWORD *)v38 == 16 )
          {
            *(_OWORD *)(v22 + 54) = *(_OWORD *)v38;
            v22[58] = *(_DWORD *)(v38 + 16);
          }
        }
      }
      v39 = v26 + 336;
      if ( (_DWORD)v17 )
      {
        v25 = v14 + 4;
        *v20 = v39;
        memmove((char *)v14 + v39, *((const void **)a3 + 28), v17);
        v39 += *((_DWORD *)a3 + 55);
      }
      v25[2] = v39;
      v40 = (v39 + v59 + 4095) & 0xFFFFF000;
      v11 = (int *)ExAllocatePool2(256LL, v40, 1380209782LL, v21);
      if ( v11 )
      {
        v41 = *v14;
        v42 = *v8;
        v56 = v41;
        v54 = *v19;
        v55 = v8[2];
        v43 = *v8 + v41 + 1;
        memmove(v11, v8, v55);
        v44 = 2 * v43;
        *v11 = v43;
        v45 = v11 + 2;
        for ( i = v42 - 1; i; --i )
        {
          if ( !v45[1] )
            break;
          *v45 += 8 * v43 - v55;
          v45 += 2;
        }
        v47 = v59 - v55;
        v48 = v56 - 1;
        if ( v56 != 1 )
        {
          do
          {
            if ( !v19[1] )
              break;
            v49 = *(_QWORD *)v19;
            v19 += 2;
            *(_QWORD *)v45 = v49;
            *v45 += v44 * 4 + v59 - v55 - v54;
            v45 += 2;
            --v48;
          }
          while ( v48 );
        }
        v50 = &v11[v44];
        v51 = v47;
        memmove(v50, (char *)v8 + v55, v47);
        v15 = v57;
        memmove((char *)v50 + v51, &v57[v54], v39 - v54);
        v16 = a1;
        if ( (unsigned __int8)WdDbgReportSecondaryData(a1, v11, (v39 + v59 + 4095) & 0xFFFFF000) )
          goto LABEL_29;
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4035;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"WdDbgReportSecondaryData returned FALSE for combined blob.",
          4035LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_27:
        v4 = -1073741801;
        if ( !(unsigned __int8)WdDbgReportSecondaryData(v16, v8, v59) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4046;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"WdDbgReportSecondaryData returned FALSE.",
            4046LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
LABEL_29:
        TdrFreePool(v8);
        TdrFreePool(v15);
        TdrFreePool(v11);
        return v4;
      }
      WdLogSingleEntry1(2LL, (unsigned int)v40);
      WdLogGlobalForLineNumber = 3959;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for DxgkAddDiagnosticInfoIntoReport (Size = 0x%I64x)",
        v40,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, ((v10 != 0 ? 32 : 24) + v10 + 4431) & 0xFFFFF000);
      WdLogGlobalForLineNumber = 3874;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for DxgkAddDiagnosticInfoIntoReport (Size = 0x%I64x)",
        ((v10 != 0 ? 32 : 24) + v10 + 4431) & 0xFFFFF000,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v15 = v57;
    v16 = a1;
    goto LABEL_27;
  }
  WdLogSingleEntry1(6LL, v5);
  WdLogGlobalForLineNumber = 3836;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Out of memory allocating live dump data (size 0x%I64x)",
    v5,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
