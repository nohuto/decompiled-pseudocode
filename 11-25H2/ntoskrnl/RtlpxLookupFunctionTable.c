/*
 * XREFs of RtlpxLookupFunctionTable @ 0x14025BE40
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140259000 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x14025C9D0 (RtlLookupFunctionEntry.c)
 *     RtlLookupFunctionTableEx @ 0x14025CDB0 (RtlLookupFunctionTableEx.c)
 *     RtlLookupFunctionTable @ 0x14025CE00 (RtlLookupFunctionTable.c)
 *     RtlGuardCheckExceptionHandler @ 0x14025D464 (RtlGuardCheckExceptionHandler.c)
 *     RtlPcToFileHeader @ 0x14025DBF0 (RtlPcToFileHeader.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140731CB0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     KiVerifyPdata @ 0x140C19254 (KiVerifyPdata.c)
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x14025D3B0 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14025D41C (MmLockLoadedModuleListShared.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 a2)
{
  int *v4; // rdi
  int v5; // r15d
  int v6; // r14d
  int v7; // r10d
  unsigned int v8; // ebp
  int v9; // r11d
  int v10; // eax
  char *v11; // r9
  int *v12; // r8
  char *v13; // rdx
  int v14; // r10d
  PVOID result; // rax
  char *v16; // rt1
  unsigned __int8 v17; // r13
  unsigned int v18; // ebp
  int v19; // r10d
  int v20; // edx
  char *v21; // r9
  int *v22; // r8
  char *v23; // rcx
  int v24; // r11d
  PVOID v25; // rbx
  char *v26; // rt1
  PVOID *v27; // rsi
  unsigned int v28; // r15d
  unsigned __int64 v29; // rdi
  void *v30; // rt1
  unsigned int v31; // r10d
  int v32; // ebp
  unsigned __int64 v33; // r9
  __int64 v34; // r14
  unsigned __int64 v35; // r11
  __int64 v36; // rax
  char *v37; // rcx
  int v38; // edx
  __int64 v39; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v42; // rdx
  void *v43; // rt1
  __int64 v44; // [rsp+18h] [rbp-50h]
  unsigned __int64 v45; // [rsp+20h] [rbp-48h]
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]
  unsigned __int64 v47; // [rsp+30h] [rbp-38h]
  __int64 v48; // [rsp+38h] [rbp-30h]
  char v49; // [rsp+78h] [rbp+10h]

  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v4 = RtlpInvertedFunctionTable;
  v5 = 1;
  v6 = RtlpInvertedFunctionTable[2];
  if ( (v6 & 1) != 0 )
  {
LABEL_22:
    v17 = 0;
    if ( (KiBugCheckActive & 3) != 0 )
    {
      v49 = 1;
    }
    else
    {
      v49 = 0;
      v17 = MmLockLoadedModuleListShared();
    }
    if ( *RtlpInvertedFunctionTable == 1 )
    {
LABEL_44:
      if ( *((_BYTE *)RtlpInvertedFunctionTable + 12) )
      {
        v27 = (PVOID *)PsLoadedModuleList;
        v28 = dword_140E2D4FC << 12;
        if ( PsLoadedModuleList )
        {
          while ( v27 != &PsLoadedModuleList )
          {
            v29 = (unsigned __int64)v27[6];
            v30 = *(void **)&KeNumberProcessorsGroup0[9];
            if ( (void *)v29 == v30 || (PVOID)v29 == PsHalImageBase )
              v31 = dword_140E3726C;
            else
              v31 = dword_140E37270 + dword_140E3726C;
            if ( !v31 )
              goto LABEL_78;
            v32 = 4;
            v33 = v29 + *((unsigned int *)v27 + 16);
            v34 = 4LL;
            v45 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v46 = ((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v47 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v48 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            while ( 1 )
            {
              v35 = *(&v44 + v34--);
              --v32;
              v36 = *(_QWORD *)v35;
              if ( v35 >= 0xFFFFF6FB7DBED000uLL && v35 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                v39 = *(_QWORD *)v35;
                if ( (v36 & 1) == 0 )
                  goto LABEL_59;
                if ( ((v36 & 0x42) == 0 || (v36 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
                {
                  Process = KeGetCurrentThread()->ApcState.Process;
                  if ( Process->AddressPolicy != 1 )
                  {
                    KernelWaitTime = Process[2].KernelWaitTime;
                    if ( KernelWaitTime )
                    {
                      v42 = *(_QWORD *)(KernelWaitTime + 8 * ((v35 >> 3) & 0x1FF));
                      if ( (v42 & 0x20) != 0 )
                        LOBYTE(v39) = v36 | 0x20;
                      LOBYTE(v36) = v39 | 0x42;
                      if ( (v42 & 0x42) == 0 )
                        LOBYTE(v36) = v39;
                    }
                  }
                }
              }
              if ( (v36 & 1) == 0 )
                goto LABEL_59;
              if ( (v36 & 0x80u) != 0LL )
                break;
              if ( v34 == 1 )
                goto LABEL_59;
            }
            if ( v32 )
              v33 = (v33 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
LABEL_59:
            if ( v33 )
              v37 = (char *)(v33 + v31);
            else
LABEL_78:
              v37 = (char *)(v29 + *((unsigned int *)v27 + 16));
            if ( a1 < (unsigned __int64)v37 && a1 >= v29 )
            {
              v25 = v27[2];
              *(_QWORD *)a2 = v25;
              *(_DWORD *)(a2 + 16) = (_DWORD)v37 - v29;
              *(_QWORD *)(a2 + 8) = v29;
              *(_DWORD *)(a2 + 20) = *((_DWORD *)v27 + 6);
              goto LABEL_36;
            }
            v38 = RtlKernelScpFunctionTableSize;
            if ( RtlKernelScpFunctionTableSize )
            {
              if ( a1 >= (unsigned __int64)v37 && a1 < (unsigned __int64)&v37[v28] )
              {
                v43 = *(void **)&KeNumberProcessorsGroup0[9];
                if ( (void *)v29 != v43 && (PVOID)v29 != PsHalImageBase )
                {
                  *(_QWORD *)(a2 + 8) = v37;
                  v25 = &RtlKernelScpFunctionTable;
                  *(_QWORD *)a2 = &RtlKernelScpFunctionTable;
                  *(_DWORD *)(a2 + 16) = v28;
                  *(_DWORD *)(a2 + 20) = v38;
                  goto LABEL_36;
                }
              }
            }
            v27 = (PVOID *)*v27;
          }
        }
      }
      v25 = 0LL;
LABEL_36:
      if ( !v49 )
        MmUnlockLoadedModuleListShared(v17);
      return v25;
    }
    v18 = dword_140E2D4FC << 12;
    v19 = *RtlpInvertedFunctionTable - 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v19 < v5 )
          goto LABEL_44;
        v20 = (v5 + v19) >> 1;
        v21 = *(char **)&RtlpInvertedFunctionTable[6 * v20 + 6];
        v22 = &RtlpInvertedFunctionTable[6 * v20];
        v23 = &v21[v22[8]];
        if ( a1 >= (unsigned __int64)v21 )
          break;
        if ( !v20 )
          goto LABEL_44;
        v19 = v20 - 1;
      }
      if ( a1 <= 0x7FFFFFFEFFFFLL )
        goto LABEL_30;
      v24 = RtlKernelScpFunctionTableSize;
      if ( !RtlKernelScpFunctionTableSize )
        goto LABEL_30;
      if ( a1 < (unsigned __int64)v23 )
      {
LABEL_34:
        *(_OWORD *)a2 = *((_OWORD *)v22 + 1);
        *(_QWORD *)(a2 + 16) = *((_QWORD *)v22 + 4);
LABEL_35:
        v25 = *(PVOID *)a2;
        goto LABEL_36;
      }
      if ( a1 < (unsigned __int64)&v23[v18] )
      {
        v26 = *(char **)&KeNumberProcessorsGroup0[9];
        if ( v21 != v26 )
          break;
      }
LABEL_31:
      v5 = v20 + 1;
    }
    if ( v21 != PsHalImageBase )
    {
      *(_QWORD *)a2 = &RtlKernelScpFunctionTable;
      *(_QWORD *)(a2 + 8) = v23;
      *(_DWORD *)(a2 + 16) = v18;
      *(_DWORD *)(a2 + 20) = v24;
      goto LABEL_35;
    }
LABEL_30:
    if ( a1 < (unsigned __int64)v23 )
      goto LABEL_34;
    goto LABEL_31;
  }
  if ( *RtlpInvertedFunctionTable == 1 )
  {
LABEL_21:
    if ( !*((_BYTE *)RtlpInvertedFunctionTable + 12) )
    {
      result = 0LL;
      goto LABEL_14;
    }
    goto LABEL_22;
  }
  v7 = 1;
  v8 = dword_140E2D4FC << 12;
  v9 = *RtlpInvertedFunctionTable - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 < v7 )
        goto LABEL_21;
      v10 = (v7 + v9) >> 1;
      v11 = *(char **)&RtlpInvertedFunctionTable[6 * v10 + 6];
      v12 = &RtlpInvertedFunctionTable[6 * v10];
      v13 = &v11[v12[8]];
      if ( a1 >= (unsigned __int64)v11 )
        break;
      if ( !v10 )
        goto LABEL_21;
      v9 = v10 - 1;
    }
    if ( a1 <= 0x7FFFFFFEFFFFLL )
      goto LABEL_8;
    v14 = RtlKernelScpFunctionTableSize;
    if ( !RtlKernelScpFunctionTableSize )
      goto LABEL_8;
    if ( a1 < (unsigned __int64)v13 )
    {
LABEL_12:
      *(_OWORD *)a2 = *((_OWORD *)v12 + 1);
      *(_QWORD *)(a2 + 16) = *((_QWORD *)v12 + 4);
      goto LABEL_13;
    }
    if ( a1 < (unsigned __int64)&v13[v8] )
    {
      v16 = *(char **)&KeNumberProcessorsGroup0[9];
      if ( v11 != v16 )
        break;
    }
LABEL_9:
    v7 = v10 + 1;
  }
  if ( v11 == PsHalImageBase )
  {
LABEL_8:
    if ( a1 < (unsigned __int64)v13 )
      goto LABEL_12;
    goto LABEL_9;
  }
  *(_QWORD *)a2 = &RtlKernelScpFunctionTable;
  *(_QWORD *)(a2 + 8) = v13;
  *(_DWORD *)(a2 + 16) = v8;
  *(_DWORD *)(a2 + 20) = v14;
LABEL_13:
  result = *(PVOID *)a2;
LABEL_14:
  if ( v4[2] != v6 )
    goto LABEL_22;
  return result;
}
