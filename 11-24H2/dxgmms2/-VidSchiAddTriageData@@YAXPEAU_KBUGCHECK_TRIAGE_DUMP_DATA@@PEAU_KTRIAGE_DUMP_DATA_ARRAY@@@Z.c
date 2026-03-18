/*
 * XREFs of ?VidSchiAddTriageData@@YAXPEAU_KBUGCHECK_TRIAGE_DUMP_DATA@@PEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z @ 0x1400533DC
 * Callers:
 *     DxgMmsDbgTriageDumpCallback @ 0x14004BAB0 (DxgMmsDbgTriageDumpCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAddTriageData(struct _KBUGCHECK_TRIAGE_DUMP_DATA *a1, struct _KTRIAGE_DUMP_DATA_ARRAY *a2)
{
  int v4; // r12d
  SIZE_T v5; // r9
  PVOID *i; // rsi
  PVOID *v7; // r13
  __int64 v8; // rbx
  int v9; // eax
  NTSTATUS v10; // eax
  __int64 j; // rbp
  _QWORD *v12; // rbx
  SIZE_T v13; // r9
  NTSTATUS v14; // eax
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned int v17; // ebx
  NTSTATUS v18; // eax
  ULONG_PTR BugCheckParameter1; // rax
  ULONG_PTR BugCheckParameter2; // rbx
  SIZE_T v21; // r9
  __int64 v22; // rbx
  _QWORD *BugCheckParameter4; // rbx
  NTSTATUS v24; // eax
  SIZE_T v25; // r9
  _QWORD *v26; // rbx
  NTSTATUS v27; // eax
  SIZE_T v28; // r9
  _QWORD *v29; // rbx
  NTSTATUS v30; // eax
  SIZE_T v31; // r9
  _QWORD *v32; // rbx
  NTSTATUS v33; // eax
  SIZE_T v34; // r9
  _QWORD *v35; // rbx
  NTSTATUS v36; // eax
  __int64 v37; // rsi
  NTSTATUS v38; // eax
  __int64 v39; // rsi
  NTSTATUS v40; // eax
  NTSTATUS v41; // eax

  v4 = 4;
  if ( MmIsAddressValid(&gAdapterListHead) )
  {
    for ( i = (PVOID *)gAdapterListHead; i != &gAdapterListHead; i = (PVOID *)*i )
    {
      if ( !i )
        return;
      if ( !MmIsAddressValid(i) )
        return;
      v7 = i - 474;
      v8 = (__int64)*(i - 472);
      if ( !v8 || !MmIsAddressValid(*(i - 472)) )
        return;
      v9 = *(_DWORD *)(v8 + 444);
      if ( (v9 & 8) == 0 && (v9 & 0x10) == 0 && (v9 & 4) == 0 && (v9 & 0x20) == 0 )
      {
        v10 = KeAddTriageDumpDataBlock(a2, (_DWORD)i - 3792, (PVOID)0x1BC0, v5);
        if ( v10 < 0 )
        {
          WdLogSingleEntry3(3LL, i - 474, 7104LL, v10);
          WdLogGlobalForLineNumber = 3176;
        }
        for ( j = 0LL; (unsigned int)j < 2; j = (unsigned int)(j + 1) )
        {
          v12 = v7[j + 429];
          if ( v12 )
          {
            if ( !MmIsAddressValid(v7[j + 429]) )
              return;
            v14 = KeAddTriageDumpDataBlock(a2, (ULONG)v12, (PVOID)0x144B0, v13);
            if ( v14 < 0 )
            {
              WdLogSingleEntry3(3LL, v12, 83120LL, v14);
              WdLogGlobalForLineNumber = 3176;
            }
            v15 = v12[17];
            if ( v15 )
            {
              v16 = v12[17];
              v17 = 112 * *((_DWORD *)v12 + 32);
              v18 = KeAddTriageDumpDataBlock(a2, v16, (PVOID)v17, v5);
              if ( v18 < 0 )
              {
                WdLogSingleEntry3(3LL, v15, v17, v18);
                WdLogGlobalForLineNumber = 3176;
              }
            }
          }
        }
        if ( !--v4 )
          return;
      }
    }
    if ( a1->BugCheckCode == 281 && g_DxgMmsBugcheckExportIndex == 1 )
    {
      BugCheckParameter1 = a1->BugCheckParameter1;
      if ( BugCheckParameter1 != 2 )
      {
        if ( BugCheckParameter1 != 40960 )
          return;
        BugCheckParameter2 = a1->BugCheckParameter2;
        if ( !BugCheckParameter2 )
          return;
        if ( !MmIsAddressValid((PVOID)a1->BugCheckParameter2) )
          return;
        v22 = *(_QWORD *)(BugCheckParameter2 + 1128);
        if ( !v22 )
          return;
        goto LABEL_61;
      }
      BugCheckParameter4 = (_QWORD *)a1->BugCheckParameter4;
      if ( BugCheckParameter4 )
      {
        v24 = KeAddTriageDumpDataBlock(a2, a1->BugCheckParameter4, (PVOID)0xD0, v5);
        if ( v24 < 0 )
        {
          WdLogSingleEntry3(3LL, BugCheckParameter4, 208LL, v24);
          WdLogGlobalForLineNumber = 3176;
        }
        if ( MmIsAddressValid(BugCheckParameter4) )
        {
          v26 = (_QWORD *)BugCheckParameter4[6];
          if ( v26 )
          {
            v27 = KeAddTriageDumpDataBlock(a2, (ULONG)v26, (PVOID)0x3E8, v25);
            if ( v27 < 0 )
            {
              WdLogSingleEntry3(3LL, v26, 1000LL, v27);
              WdLogGlobalForLineNumber = 3176;
            }
            if ( MmIsAddressValid(v26) )
            {
              v29 = (_QWORD *)v26[13];
              if ( v29 )
              {
                v30 = KeAddTriageDumpDataBlock(a2, (ULONG)v29, (PVOID)0x7B8, v28);
                if ( v30 < 0 )
                {
                  WdLogSingleEntry3(3LL, v29, 1976LL, v30);
                  WdLogGlobalForLineNumber = 3176;
                }
                if ( MmIsAddressValid(v29) )
                {
                  v32 = (_QWORD *)v29[4];
                  if ( v32 )
                  {
                    v33 = KeAddTriageDumpDataBlock(a2, (ULONG)v32, (PVOID)0x1BC0, v31);
                    if ( v33 < 0 )
                    {
                      WdLogSingleEntry3(3LL, v32, 7104LL, v33);
                      WdLogGlobalForLineNumber = 3176;
                    }
                    if ( MmIsAddressValid(v32) )
                    {
                      v35 = (_QWORD *)v32[2];
                      if ( v35 )
                      {
                        v36 = KeAddTriageDumpDataBlock(a2, (ULONG)v35, (PVOID)0x13F0, v34);
                        if ( v36 < 0 )
                        {
                          WdLogSingleEntry3(3LL, v35, 5104LL, v36);
                          WdLogGlobalForLineNumber = 3176;
                        }
                        if ( MmIsAddressValid(v35) )
                        {
                          v37 = v35[66];
                          if ( v37 )
                          {
                            v38 = KeAddTriageDumpDataBlock(a2, v35[66], (PVOID)8, v21);
                            if ( v38 >= 0 )
                              return;
                            WdLogSingleEntry3(3LL, v37, 8LL, v38);
                            WdLogGlobalForLineNumber = 3176;
                          }
                          v39 = v35[117];
                          if ( v39 )
                          {
                            v40 = KeAddTriageDumpDataBlock(a2, v35[117], (PVOID)8, v21);
                            if ( v40 >= 0 )
                              return;
                            WdLogSingleEntry3(3LL, v39, 8LL, v40);
                            WdLogGlobalForLineNumber = 3176;
                          }
                          v22 = v35[140];
                          if ( v22 )
                          {
LABEL_61:
                            v41 = KeAddTriageDumpDataBlock(a2, v22, (PVOID)8, v21);
                            if ( v41 < 0 )
                            {
                              WdLogSingleEntry3(3LL, v22, 8LL, v41);
                              WdLogGlobalForLineNumber = 3176;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
