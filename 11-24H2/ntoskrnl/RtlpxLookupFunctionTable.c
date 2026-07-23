/*
 * XREFs of RtlpxLookupFunctionTable @ 0x140233240
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402312A8 (RtlGuardCheckExceptionHandler.c)
 *     RtlLookupFunctionTable @ 0x140231B90 (RtlLookupFunctionTable.c)
 *     RtlLookupFunctionTableEx @ 0x140231D80 (RtlLookupFunctionTableEx.c)
 *     RtlLookupFunctionEntry @ 0x140232930 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140234380 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlPcToFileHeader @ 0x140447DA0 (RtlPcToFileHeader.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x14073BC00 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     KiVerifyPdata @ 0x140C2C470 (KiVerifyPdata.c)
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14023165C (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402316B0 (MmUnlockLoadedModuleListShared.c)
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
  unsigned __int8 v16; // r13
  unsigned int v17; // ebp
  int v18; // r10d
  int v19; // edx
  char *v20; // r9
  int *v21; // r8
  char *v22; // rcx
  int v23; // r11d
  PVOID v24; // rbx
  PVOID *v25; // rsi
  unsigned int v26; // r15d
  unsigned __int64 v27; // rdi
  unsigned int v28; // r11d
  __int64 v29; // rbp
  unsigned __int64 v30; // r9
  int v31; // r14d
  unsigned __int64 v32; // r10
  __int64 v33; // rax
  __int64 v34; // rcx
  char *v35; // rcx
  int v36; // edx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v39; // rdx
  __int64 v40; // [rsp+18h] [rbp-50h]
  unsigned __int64 v41; // [rsp+20h] [rbp-48h]
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]
  unsigned __int64 v43; // [rsp+30h] [rbp-38h]
  __int64 v44; // [rsp+38h] [rbp-30h]
  char v45; // [rsp+78h] [rbp+10h]

  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v4 = RtlpInvertedFunctionTable;
  v5 = 1;
  v6 = RtlpInvertedFunctionTable[2];
  if ( (v6 & 1) != 0 )
  {
LABEL_22:
    v16 = 0;
    if ( (KiBugCheckActive & 3) != 0 )
    {
      v45 = 1;
    }
    else
    {
      v45 = 0;
      v16 = MmLockLoadedModuleListShared();
    }
    if ( *RtlpInvertedFunctionTable == 1 )
    {
LABEL_44:
      if ( *((_BYTE *)RtlpInvertedFunctionTable + 12) )
      {
        v25 = (PVOID *)PsLoadedModuleList;
        v26 = dword_140E2D87C << 12;
        if ( PsLoadedModuleList )
        {
          while ( v25 != &PsLoadedModuleList )
          {
            v27 = (unsigned __int64)v25[6];
            if ( (PVOID)v27 == PsNtosImageBase || (PVOID)v27 == PsHalImageBase )
              v28 = dword_140E375EC;
            else
              v28 = dword_140E375F0 + dword_140E375EC;
            if ( !v28 )
              goto LABEL_78;
            v29 = 4LL;
            v30 = v27 + *((unsigned int *)v25 + 16);
            v31 = 4;
            v41 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v43 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            do
            {
              v32 = *(&v40 + v29--);
              --v31;
              v33 = *(_QWORD *)v32;
              if ( v32 >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                v34 = *(_QWORD *)v32;
                if ( (v33 & 1) == 0 )
                  break;
                if ( ((v33 & 0x42) == 0 || (v33 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
                {
                  Process = KeGetCurrentThread()->ApcState.Process;
                  if ( Process->AddressPolicy != 1 )
                  {
                    KernelWaitTime = Process[2].KernelWaitTime;
                    if ( KernelWaitTime )
                    {
                      v39 = *(_QWORD *)(KernelWaitTime + 8 * ((v32 >> 3) & 0x1FF));
                      if ( (v39 & 0x20) != 0 )
                        LOBYTE(v34) = v33 | 0x20;
                      LOBYTE(v33) = v34 | 0x42;
                      if ( (v39 & 0x42) == 0 )
                        LOBYTE(v33) = v34;
                    }
                  }
                }
              }
              if ( (v33 & 1) == 0 )
                break;
              if ( (v33 & 0x80u) != 0LL )
              {
                if ( v31 )
                  v30 = (v30 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
                break;
              }
            }
            while ( v29 != 1 );
            if ( v30 )
              v35 = (char *)(v30 + v28);
            else
LABEL_78:
              v35 = (char *)(v27 + *((unsigned int *)v25 + 16));
            if ( a1 < (unsigned __int64)v35 && a1 >= v27 )
            {
              v24 = v25[2];
              *(_QWORD *)a2 = v24;
              *(_DWORD *)(a2 + 16) = (_DWORD)v35 - v27;
              *(_QWORD *)(a2 + 8) = v27;
              *(_DWORD *)(a2 + 20) = *((_DWORD *)v25 + 6);
              goto LABEL_36;
            }
            v36 = RtlKernelScpFunctionTableSize;
            if ( RtlKernelScpFunctionTableSize
              && a1 >= (unsigned __int64)v35
              && a1 < (unsigned __int64)&v35[v26]
              && (PVOID)v27 != PsNtosImageBase
              && (PVOID)v27 != PsHalImageBase )
            {
              *(_QWORD *)(a2 + 8) = v35;
              v24 = &RtlKernelScpFunctionTable;
              *(_QWORD *)a2 = &RtlKernelScpFunctionTable;
              *(_DWORD *)(a2 + 16) = v26;
              *(_DWORD *)(a2 + 20) = v36;
              goto LABEL_36;
            }
            v25 = (PVOID *)*v25;
          }
        }
      }
      v24 = 0LL;
LABEL_36:
      if ( !v45 )
        MmUnlockLoadedModuleListShared(v16);
      return v24;
    }
    v17 = dword_140E2D87C << 12;
    v18 = *RtlpInvertedFunctionTable - 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v18 < v5 )
          goto LABEL_44;
        v19 = (v5 + v18) >> 1;
        v20 = *(char **)&RtlpInvertedFunctionTable[6 * v19 + 6];
        v21 = &RtlpInvertedFunctionTable[6 * v19];
        v22 = &v20[v21[8]];
        if ( a1 >= (unsigned __int64)v20 )
          break;
        if ( !v19 )
          goto LABEL_44;
        v18 = v19 - 1;
      }
      if ( a1 <= 0x7FFFFFFEFFFFLL )
        goto LABEL_30;
      v23 = RtlKernelScpFunctionTableSize;
      if ( !RtlKernelScpFunctionTableSize )
        goto LABEL_30;
      if ( a1 < (unsigned __int64)v22 )
      {
LABEL_34:
        *(_OWORD *)a2 = *((_OWORD *)v21 + 1);
        *(_QWORD *)(a2 + 16) = *((_QWORD *)v21 + 4);
LABEL_35:
        v24 = *(PVOID *)a2;
        goto LABEL_36;
      }
      if ( a1 < (unsigned __int64)&v22[v17] && v20 != PsNtosImageBase )
        break;
LABEL_31:
      v5 = v19 + 1;
    }
    if ( v20 != PsHalImageBase )
    {
      *(_QWORD *)a2 = &RtlKernelScpFunctionTable;
      *(_QWORD *)(a2 + 8) = v22;
      *(_DWORD *)(a2 + 16) = v17;
      *(_DWORD *)(a2 + 20) = v23;
      goto LABEL_35;
    }
LABEL_30:
    if ( a1 < (unsigned __int64)v22 )
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
  v8 = dword_140E2D87C << 12;
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
    if ( a1 < (unsigned __int64)&v13[v8] && v11 != PsNtosImageBase )
      break;
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
