/*
 * XREFs of PopFxRegisterComponentPerfStates @ 0x140742464
 * Callers:
 *     PoFxRegisterComponentPerfStates @ 0x140741480 (PoFxRegisterComponentPerfStates.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     RtlULongLongMult @ 0x14043A9F0 (RtlULongLongMult.c)
 *     PopPluginRegisterComponentPerfStates @ 0x1405CDC78 (PopPluginRegisterComponentPerfStates.c)
 *     PopPepRegisterComponentPerfStates @ 0x1405D6D80 (PopPepRegisterComponentPerfStates.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PopFxPepPerfInfoFree @ 0x1407421E4 (PopFxPepPerfInfoFree.c)
 *     PopFxPepPerfInfoQuery @ 0x140742264 (PopFxPepPerfInfoQuery.c)
 *     PopFxTracePerfRegistration @ 0x140ABA9A8 (PopFxTracePerfRegistration.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopFxRegisterComponentPerfStates(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        ULONGLONG *a6)
{
  __int64 v7; // r9
  char v8; // bl
  int v9; // eax
  _QWORD *v10; // rdi
  NTSTATUS v11; // ebx
  ULONGLONG v13; // r14
  ULONGLONG v14; // r13
  unsigned int v15; // r10d
  ULONGLONG v16; // r9
  ULONGLONG v17; // r11
  ULONGLONG v18; // r15
  unsigned int v19; // r8d
  ULONGLONG v20; // r9
  unsigned int v21; // edx
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  ULONGLONG v24; // rcx
  ULONGLONG v25; // r9
  __int64 Pool2; // rax
  __int64 v27; // rsi
  ULONGLONG *v28; // rcx
  unsigned int v29; // r8d
  int v30; // eax
  ULONGLONG v31; // rdx
  char *v32; // r12
  unsigned int v33; // r15d
  _QWORD *v34; // r14
  unsigned int v35; // eax
  unsigned int v36; // r12d
  wchar_t *v37; // r13
  UNICODE_STRING *v38; // r14
  _QWORD *v39; // r15
  char v40; // [rsp+20h] [rbp-40h]
  ULONGLONG pullResult; // [rsp+28h] [rbp-38h] BYREF
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-28h]
  ULONGLONG v44; // [rsp+40h] [rbp-20h]
  unsigned __int64 v45; // [rsp+48h] [rbp-18h]
  ULONGLONG v46; // [rsp+50h] [rbp-10h]

  v7 = BugCheckParameter3;
  pullResult = 0LL;
  v8 = a3;
  P = 0LL;
  if ( a5 )
  {
    if ( !a6 )
    {
      v10 = a5;
      P = a5;
      goto LABEL_8;
    }
    return 3221225485LL;
  }
  if ( !a6 )
    return 3221225485LL;
  v9 = PopFxPepPerfInfoQuery(BugCheckParameter3, *(unsigned int *)(a2 + 16), (unsigned int **)&P);
  v10 = P;
  v11 = v9;
  if ( v9 < 0 )
  {
LABEL_53:
    PopFxPepPerfInfoFree(v10);
    return (unsigned int)v11;
  }
  v8 = a3;
  v7 = BugCheckParameter3;
LABEL_8:
  if ( !*(_DWORD *)v10 )
  {
    v11 = -1073741811;
    goto LABEL_52;
  }
  v40 = PopPluginRegisterComponentPerfStates(v7);
  if ( !v40 && (v8 & 1) == 0 )
  {
    v11 = -1073741822;
    goto LABEL_52;
  }
  v11 = RtlULongLongMult(*(unsigned int *)v10, 0x20uLL, &pullResult);
  if ( v11 >= 0 )
  {
    if ( pullResult >= 0xFFFFFFFFFFFFFF60uLL )
      goto LABEL_51;
    v13 = (pullResult + 167) & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = v13 + 8;
    v44 = v13 + 8;
    if ( v13 + 8 < v13 )
      goto LABEL_51;
    v11 = RtlULongLongMult(*(unsigned int *)v10, 0x30uLL, &pullResult);
    if ( v11 < 0 )
      goto LABEL_52;
    if ( v14 + pullResult < v14 )
      goto LABEL_51;
    v15 = 0;
    v16 = (v14 + pullResult + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v17 = 16LL;
    v18 = v16;
    while ( 1 )
    {
      v19 = *(_DWORD *)v10;
      if ( v15 >= *(_DWORD *)v10 )
        break;
      if ( !HIDWORD(v10[6 * v15 + 4]) )
      {
        v11 = RtlULongLongMult(LODWORD(v10[6 * v15 + 5]), v17, &pullResult);
        if ( v11 < 0 )
          goto LABEL_52;
        if ( v20 + pullResult < v20 )
          goto LABEL_51;
        v16 = v20 + pullResult;
      }
      ++v15;
    }
    v21 = 0;
    v22 = (v16 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    v43 = v22;
    while ( v21 < v19 )
    {
      v23 = LOWORD(v10[6 * v21 + 1]);
      if ( (_WORD)v23 )
      {
        if ( v22 + v23 + 2 < v22 )
          goto LABEL_51;
        v22 += v23 + 2;
      }
      ++v21;
    }
    v24 = *(unsigned int *)v10;
    v45 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v11 = RtlULongLongMult(v24, v17, &pullResult);
    if ( v11 >= 0 )
    {
      if ( v25 + pullResult >= v25 )
      {
        v11 = 0;
        Pool2 = ExAllocatePool2(0x40uLL);
        v27 = Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 32) = a4;
          v28 = (ULONGLONG *)(Pool2 + 160);
          *(_DWORD *)(Pool2 + 144) = *(_DWORD *)v10;
          v29 = 0;
          *(_QWORD *)(Pool2 + 152) = Pool2 + 160;
          *(_DWORD *)(v13 + Pool2) = *(_DWORD *)v10;
          v30 = *(_DWORD *)v10;
          v46 = v13 + v27;
          v31 = v27 + v14;
          if ( v30 )
          {
            do
            {
              *v28 = v31;
              ++v29;
              v30 = *(_DWORD *)v10;
              v28 += 4;
              v31 += 48LL;
            }
            while ( v29 < *(_DWORD *)v10 );
          }
          v32 = (char *)(v18 + v27);
          v33 = 0;
          if ( v30 )
          {
            v34 = (_QWORD *)(v27 + v13 + 40);
            do
            {
              *(v34 - 2) = v10[6 * v33 + 3];
              *((_DWORD *)v34 - 2) = v10[6 * v33 + 4];
              *((_DWORD *)v34 - 1) = HIDWORD(v10[6 * v33 + 4]);
              if ( HIDWORD(v10[6 * v33 + 4]) )
              {
                *v34 = v10[6 * v33 + 5];
                v34[1] = v10[6 * v33 + 6];
              }
              else
              {
                v35 = v10[6 * v33 + 5];
                *(_DWORD *)v34 = v35;
                v34[1] = v32;
                memmove(v32, (const void *)v10[6 * v33 + 6], 16LL * v35);
                v32 += 16 * *(unsigned int *)v34;
              }
              v30 = *(_DWORD *)v10;
              v34 += 6;
              ++v33;
            }
            while ( v33 < *(_DWORD *)v10 );
          }
          v36 = 0;
          v37 = (wchar_t *)(v27 + v43);
          v38 = (UNICODE_STRING *)(v27 + v44);
          if ( v30 )
          {
            do
            {
              v39 = &v10[6 * v36];
              if ( *((_WORD *)v39 + 4) )
              {
                v38->Buffer = v37;
                v38->Length = *((_WORD *)v39 + 4);
                v38->MaximumLength = *((_WORD *)v39 + 4) + 2;
                RtlCopyUnicodeString(v38, (PCUNICODE_STRING)(v39 + 1));
              }
              v38 += 3;
              ++v36;
              v37 += (*((unsigned __int16 *)v39 + 4) >> 1) + 1;
            }
            while ( v36 < *(_DWORD *)v10 );
          }
          *(_QWORD *)(v27 + 48) = v27 + v45;
          *(_QWORD *)v27 = a2;
          KeInitializeEvent((PRKEVENT)(v27 + 8), NotificationEvent, 1u);
          if ( (a3 & 6) != 0 )
            *(_BYTE *)(v27 + 74) = 1;
          *(_BYTE *)(v27 + 73) = v40;
          *(_QWORD *)(v27 + 88) = 0LL;
          *(_QWORD *)(v27 + 104) = PopFxComponentPerfWork;
          *(_QWORD *)(v27 + 112) = v27;
          PopFxTracePerfRegistration(v27, 0LL);
          PopPepRegisterComponentPerfStates(*(_QWORD *)(BugCheckParameter3 + 56), *(_DWORD *)(a2 + 16), a3);
          *(_QWORD *)(a2 + 424) = v27;
          if ( a6 )
            *a6 = v46;
        }
        else
        {
          v11 = -1073741670;
        }
        goto LABEL_52;
      }
LABEL_51:
      v11 = -1073741675;
    }
  }
LABEL_52:
  if ( !a5 )
    goto LABEL_53;
  return (unsigned int)v11;
}
