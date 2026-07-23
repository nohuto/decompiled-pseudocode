/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x1800AD560
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlpNeedCurrentDirectoryForExePath @ 0x1800AAEB4 (RtlpNeedCurrentDirectoryForExePath.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x1800ABD74 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlpComputePath @ 0x1800ACAF0 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable_U @ 0x1800AD290 (RtlQueryEnvironmentVariable_U.c)
 *     RtlExpandEnvironmentStrings @ 0x1800AD3A0 (RtlExpandEnvironmentStrings.c)
 *     RtlpCheckRelativeDrive @ 0x1800AEF70 (RtlpCheckRelativeDrive.c)
 *     _IsProgramFilesPath @ 0x1800AF20C (_IsProgramFilesPath.c)
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 *     LdrpCorInitialize @ 0x1800D0840 (LdrpCorInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x1800ADF2C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpQueryEnvironmentHashTable @ 0x1800AE260 (RtlpQueryEnvironmentHashTable.c)
 *     RtlpScanEnvironment @ 0x1800AE5E0 (RtlpScanEnvironment.c)
 *     _wcsnicmp @ 0x180124890 (_wcsnicmp.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable(
        PVOID Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PWSTR Value,
        SIZE_T ValueLength,
        PSIZE_T ReturnLength)
{
  SIZE_T v6; // r12
  const wchar_t *v7; // r10
  struct _TEB *v9; // r13
  int v10; // edi
  NTSTATUS PseudoEnvironmentVariable; // r14d
  unsigned int v12; // ebx
  __int64 v13; // rsi
  PSIZE_T v14; // rbx
  PCWSTR v15; // r13
  PCWSTR v16; // r10
  __int64 v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // r9
  unsigned __int8 *v20; // r9
  __int64 v21; // rbx
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // r14d
  int v25; // edx
  int v26; // r13d
  int v27; // r12d
  int v28; // r15d
  SIZE_T v29; // rbx
  unsigned __int16 *v30; // r10
  unsigned __int16 *v31; // r11
  SIZE_T v32; // rcx
  unsigned __int16 *v33; // r15
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // r14
  SIZE_T v36; // rax
  const void *v37; // rdx
  PSIZE_T v38; // rsi
  SIZE_T v39; // rbx
  int v40; // ebx
  int v41; // r8d
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  __int16 v45; // [rsp+58h] [rbp-A0h]
  _BYTE v46[14]; // [rsp+5Ah] [rbp-9Eh] BYREF
  __int64 *v47; // [rsp+68h] [rbp-90h]
  int v48; // [rsp+70h] [rbp-88h]
  unsigned int v49; // [rsp+74h] [rbp-84h]
  __int64 v50; // [rsp+78h] [rbp-80h]
  __int64 v51; // [rsp+80h] [rbp-78h]
  __int64 v52; // [rsp+88h] [rbp-70h]
  unsigned __int16 *v53; // [rsp+90h] [rbp-68h]
  PCWSTR v54; // [rsp+98h] [rbp-60h]
  PCWSTR v55; // [rsp+A0h] [rbp-58h]
  __int64 v56; // [rsp+A8h] [rbp-50h] BYREF
  void *v57; // [rsp+B0h] [rbp-48h]

  v6 = NameLength;
  v7 = Name;
  v9 = NtCurrentTeb();
  v10 = 0;
  *ReturnLength = 0LL;
  if ( NameLength )
  {
    v49 = 0;
    PseudoEnvironmentVariable = -1073741568;
    v48 = -1073741568;
    v12 = 4;
    while ( 1 )
    {
      v49 = v12;
      if ( !v12 )
        break;
      v13 = 0x180000000LL + 24LL * --v12 + 1529968;
      if ( v6 == *(_QWORD *)v13 )
      {
        if ( !wcsnicmp(v7, *(const wchar_t **)(0x180000008LL + 24LL * v12 + 1529968), v6) )
        {
          v14 = ReturnLength;
          PseudoEnvironmentVariable = RtlpQueryPseudoEnvironmentVariable(
                                        *(unsigned int *)(v13 + 16),
                                        Value,
                                        ValueLength,
                                        ReturnLength);
          v48 = PseudoEnvironmentVariable;
          LODWORD(v7) = (_DWORD)Name;
          goto LABEL_9;
        }
        v7 = Name;
      }
      else if ( v6 > *(_QWORD *)v13 )
      {
        break;
      }
    }
    v14 = ReturnLength;
LABEL_9:
    if ( PseudoEnvironmentVariable != -1073741568 )
      return PseudoEnvironmentVariable;
    if ( !Environment )
    {
      RtlEnterCriticalSection(&::FastPebLock);
      v57 = v9->ProcessEnvironmentBlock->ProcessParameters->Environment;
      v15 = Name;
      v16 = Name;
      v55 = Name;
      v45 = 0;
      v17 = 314159LL;
      while ( v16 < &Name[(unsigned int)v6] )
      {
        v18 = *v16;
        if ( (unsigned int)v18 >= 0x61 )
        {
          if ( (unsigned int)v18 > 0x7A )
          {
            if ( qword_1801CF038 )
            {
              if ( (unsigned __int16)v18 >= 0xC0u )
                LOWORD(v18) = *(_WORD *)(qword_1801CF038
                                       + 2
                                       * ((v18 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CF038
                                                              + 2LL
                                                              * (((unsigned __int8)v18 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v18 >> 8))))))
                            + v18;
            }
          }
          else
          {
            LOWORD(v18) = v18 - 32;
          }
        }
        v45 = v18;
        v55 = ++v16;
        v50 = 2LL;
        v17 = BYTE1(v18) + 37 * ((unsigned __int8)v18 + 37 * v17);
        *(_QWORD *)&v46[6] = v46;
      }
      v19 = 0LL;
LABEL_21:
      if ( v19 )
        goto LABEL_29;
      if ( DWORD1(RtlpEnvironmentHashTable) >> 5 )
      {
        v56 = v17 & (-1LL << (BYTE4(RtlpEnvironmentHashTable) & 0x1F));
        v20 = (unsigned __int8 *)&v56;
        v47 = &v56;
        v21 = 8LL;
        v51 = 8LL;
        v22 = 314159;
        v23 = 314159LL;
        while ( 1 )
        {
          v24 = v23;
          v25 = v23;
          v52 = v23;
          v26 = v23;
          v27 = v23;
          v28 = v23;
          if ( v21 < 8 )
            break;
          v22 = v20[7]
              + 37
              * (v20[6]
               + 37 * (v20[5] + 37 * (v20[4] + 37 * (v20[3] + 37 * (v20[2] + 37 * (v20[1] + 37 * (*v20 + 37 * v23)))))));
          v23 = v20[7]
              + 37
              * (v20[6]
               + 37 * (v20[5] + 37 * (v20[4] + 37 * (v20[3] + 37 * (v20[2] + 37 * (v20[1] + 37 * (*v20 + 37 * v23)))))));
          v20 += 8;
          v47 = (__int64 *)v20;
          v21 -= 8LL;
          v51 = v21;
        }
        if ( v21 != 2 )
        {
          switch ( v21 )
          {
            case 1LL:
              goto LABEL_27;
            case 3LL:
              v41 = v52;
              goto LABEL_74;
            case 4LL:
              goto LABEL_73;
            case 5LL:
              goto LABEL_72;
            case 6LL:
              goto LABEL_71;
            case 7LL:
              v28 = *v20++ + 37 * v23;
              v47 = (__int64 *)v20;
LABEL_71:
              v27 = *v20++ + 37 * v28;
              v47 = (__int64 *)v20;
LABEL_72:
              v26 = *v20++ + 37 * v27;
              v47 = (__int64 *)v20;
LABEL_73:
              v41 = *v20++ + 37 * v26;
              v47 = (__int64 *)v20;
LABEL_74:
              v24 = *v20++ + 37 * v41;
              v47 = (__int64 *)v20;
              break;
            default:
              goto LABEL_28;
          }
        }
        v25 = *v20++ + 37 * v24;
        v47 = (__int64 *)v20;
LABEL_27:
        v22 = *v20 + 37 * v25;
        v47 = (__int64 *)(v20 + 1);
LABEL_28:
        v19 = *((_QWORD *)&RtlpEnvironmentHashTable + 1)
            + 8LL * (v22 & (unsigned int)((DWORD1(RtlpEnvironmentHashTable) >> 5) - 1));
        v6 = NameLength;
        v15 = Name;
LABEL_29:
        while ( 1 )
        {
          v19 = *(_QWORD *)v19;
          if ( (v19 & 1) != 0 )
            break;
          if ( (v17 & (-1LL << (BYTE4(RtlpEnvironmentHashTable) & 0x1F))) == ((-1LL << (BYTE4(RtlpEnvironmentHashTable) & 0x1F)) & *(_QWORD *)(v19 + 8)) )
          {
            v29 = *(_QWORD *)(v19 + 32);
            v30 = *(unsigned __int16 **)(v19 + 16);
            v53 = v30;
            v31 = (unsigned __int16 *)v15;
            v54 = v15;
            v32 = v6;
            if ( v29 <= v6 )
              v32 = v29;
            v33 = &v30[v32];
            while ( v30 < v33 )
            {
              v34 = *v30;
              v35 = *v31;
              if ( (_WORD)v34 != (_WORD)v35 )
              {
                if ( (unsigned int)v34 >= 0x61 )
                {
                  if ( (unsigned int)v34 > 0x7A )
                  {
                    if ( qword_1801CF038 && (unsigned __int16)v34 >= 0xC0u )
                      LOWORD(v34) = *(_WORD *)(qword_1801CF038
                                             + 2
                                             * ((v34 & 0xF)
                                              + *(unsigned __int16 *)(qword_1801CF038
                                                                    + 2LL
                                                                    * (((unsigned __int8)v34 >> 4)
                                                                     + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v34 >> 8))))))
                                  + v34;
                  }
                  else
                  {
                    LOWORD(v34) = v34 - 32;
                  }
                }
                if ( (unsigned int)v35 >= 0x61 )
                {
                  if ( (unsigned int)v35 > 0x7A )
                  {
                    if ( qword_1801CF038 && (unsigned __int16)v35 >= 0xC0u )
                      LOWORD(v35) = *(_WORD *)(qword_1801CF038
                                             + 2
                                             * ((v35 & 0xF)
                                              + *(unsigned __int16 *)(qword_1801CF038
                                                                    + 2LL
                                                                    * (((unsigned __int8)v35 >> 4)
                                                                     + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v35 >> 8))))))
                                  + v35;
                  }
                  else
                  {
                    LOWORD(v35) = v35 - 32;
                  }
                }
                if ( (_WORD)v34 != (_WORD)v35 )
                {
                  v40 = (unsigned __int16)v34 - (unsigned __int16)v35;
                  goto LABEL_55;
                }
              }
              v53 = ++v30;
              v54 = ++v31;
            }
            v40 = v29 - v6;
LABEL_55:
            if ( !v40 )
            {
              LODWORD(v15) = (_DWORD)Name;
              goto LABEL_38;
            }
            v15 = Name;
            goto LABEL_21;
          }
        }
      }
      v19 = 0LL;
LABEL_38:
      if ( v19 )
      {
        v36 = *(_QWORD *)(v19 + 40);
        v37 = *(const void **)(v19 + 24);
        if ( Value )
        {
          if ( v36 < ValueLength )
          {
            v38 = ReturnLength;
            *ReturnLength = v36;
            v39 = v36;
            memmove(Value, v37, 2 * v36);
            Value[v39] = 0;
            PseudoEnvironmentVariable = 0;
            goto LABEL_43;
          }
          if ( Value && ValueLength )
            *Value = 0;
        }
        v38 = ReturnLength;
        *ReturnLength = v36 + 1;
        PseudoEnvironmentVariable = -1073741789;
      }
      else
      {
        PseudoEnvironmentVariable = -1073741568;
        v38 = ReturnLength;
      }
LABEL_43:
      if ( PseudoEnvironmentVariable == -1073741568 && !(_BYTE)xmmword_1801D48F0 )
        PseudoEnvironmentVariable = RtlpScanEnvironment(
                                      (_DWORD)v57,
                                      (_DWORD)v15,
                                      v6,
                                      (_DWORD)Value,
                                      ValueLength,
                                      (__int64)v38,
                                      1);
      RtlLeaveCriticalSection(&::FastPebLock);
      return PseudoEnvironmentVariable;
    }
    if ( *(_WORD *)Environment )
    {
      ProcessEnvironmentBlock = v9->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment != Environment )
        return RtlpScanEnvironment((_DWORD)Environment, (_DWORD)v7, v6, (_DWORD)Value, ValueLength, (__int64)v14, v10);
      FastPebLock = ProcessEnvironmentBlock->FastPebLock;
      if ( FastPebLock )
      {
        if ( FastPebLock->OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
          return RtlpScanEnvironment((_DWORD)Environment, (_DWORD)v7, v6, (_DWORD)Value, ValueLength, (__int64)v14, v10);
      }
      PseudoEnvironmentVariable = RtlpQueryEnvironmentHashTable(
                                    (unsigned int)&RtlpEnvironmentHashTable,
                                    (_DWORD)v7,
                                    v6,
                                    (_DWORD)Value,
                                    ValueLength,
                                    (__int64)v14);
      if ( PseudoEnvironmentVariable != -1073741568 )
        return PseudoEnvironmentVariable;
      if ( !(_BYTE)xmmword_1801D48F0 )
      {
        v10 = 1;
        LODWORD(v7) = (_DWORD)Name;
        return RtlpScanEnvironment((_DWORD)Environment, (_DWORD)v7, v6, (_DWORD)Value, ValueLength, (__int64)v14, v10);
      }
    }
    return -1073741568;
  }
  return -1073741568;
}
