/*
 * XREFs of PopFxRegisterComponentPerfStates @ 0x14074C864
 * Callers:
 *     PoFxRegisterComponentPerfStates @ 0x14074B880 (PoFxRegisterComponentPerfStates.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     PopPluginRegisterComponentPerfStates @ 0x1405CFC18 (PopPluginRegisterComponentPerfStates.c)
 *     PopPepRegisterComponentPerfStates @ 0x1405D8E30 (PopPepRegisterComponentPerfStates.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PopFxPepPerfInfoFree @ 0x14074C5E4 (PopFxPepPerfInfoFree.c)
 *     PopFxPepPerfInfoQuery @ 0x14074C664 (PopFxPepPerfInfoQuery.c)
 *     PopFxTracePerfRegistration @ 0x140AB99D0 (PopFxTracePerfRegistration.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
  __int64 v9; // rax
  int v10; // eax
  _QWORD *v11; // rdi
  NTSTATUS v12; // ebx
  ULONGLONG v14; // r14
  ULONGLONG v15; // r13
  unsigned int v16; // r10d
  ULONGLONG v17; // r9
  ULONGLONG v18; // r11
  ULONGLONG v19; // r15
  unsigned int v20; // r8d
  ULONGLONG v21; // r9
  unsigned int v22; // edx
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  ULONGLONG v25; // rcx
  ULONGLONG v26; // r9
  __int64 Pool2; // rax
  __int64 v28; // rsi
  ULONGLONG *v29; // rcx
  unsigned int v30; // r8d
  int v31; // eax
  ULONGLONG v32; // rdx
  char *v33; // r12
  unsigned int v34; // r15d
  _QWORD *v35; // r14
  unsigned int v36; // eax
  unsigned int v37; // r12d
  wchar_t *v38; // r13
  UNICODE_STRING *v39; // r14
  _QWORD *v40; // r15
  char v41; // [rsp+20h] [rbp-40h]
  ULONGLONG pullResult; // [rsp+28h] [rbp-38h] BYREF
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-28h]
  ULONGLONG v45; // [rsp+40h] [rbp-20h]
  unsigned __int64 v46; // [rsp+48h] [rbp-18h]
  ULONGLONG v47; // [rsp+50h] [rbp-10h]

  v7 = BugCheckParameter3;
  pullResult = 0LL;
  v8 = a3;
  P = 0LL;
  v9 = a2;
  if ( a5 )
  {
    if ( !a6 )
    {
      v11 = a5;
      P = a5;
      goto LABEL_8;
    }
    return 3221225485LL;
  }
  if ( !a6 )
    return 3221225485LL;
  v10 = PopFxPepPerfInfoQuery(BugCheckParameter3, *(unsigned int *)(a2 + 16), (unsigned int **)&P);
  v11 = P;
  v12 = v10;
  if ( v10 < 0 )
  {
LABEL_53:
    PopFxPepPerfInfoFree(v11);
    return (unsigned int)v12;
  }
  v9 = a2;
  v8 = a3;
  v7 = BugCheckParameter3;
LABEL_8:
  if ( !*(_DWORD *)v11 )
  {
    v12 = -1073741811;
    goto LABEL_52;
  }
  v41 = PopPluginRegisterComponentPerfStates(v7, *(_DWORD *)(v9 + 16), (__int64)v11);
  if ( !v41 && (v8 & 1) == 0 )
  {
    v12 = -1073741822;
    goto LABEL_52;
  }
  v12 = RtlULongLongMult(*(unsigned int *)v11, 0x20uLL, &pullResult);
  if ( v12 >= 0 )
  {
    if ( pullResult >= 0xFFFFFFFFFFFFFF60uLL )
      goto LABEL_51;
    v14 = (pullResult + 167) & 0xFFFFFFFFFFFFFFF8uLL;
    v15 = v14 + 8;
    v45 = v14 + 8;
    if ( v14 + 8 < v14 )
      goto LABEL_51;
    v12 = RtlULongLongMult(*(unsigned int *)v11, 0x30uLL, &pullResult);
    if ( v12 < 0 )
      goto LABEL_52;
    if ( v15 + pullResult < v15 )
      goto LABEL_51;
    v16 = 0;
    v17 = (v15 + pullResult + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v18 = 16LL;
    v19 = v17;
    while ( 1 )
    {
      v20 = *(_DWORD *)v11;
      if ( v16 >= *(_DWORD *)v11 )
        break;
      if ( !HIDWORD(v11[6 * v16 + 4]) )
      {
        v12 = RtlULongLongMult(LODWORD(v11[6 * v16 + 5]), v18, &pullResult);
        if ( v12 < 0 )
          goto LABEL_52;
        if ( v21 + pullResult < v21 )
          goto LABEL_51;
        v17 = v21 + pullResult;
      }
      ++v16;
    }
    v22 = 0;
    v23 = (v17 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    v44 = v23;
    while ( v22 < v20 )
    {
      v24 = LOWORD(v11[6 * v22 + 1]);
      if ( (_WORD)v24 )
      {
        if ( v23 + v24 + 2 < v23 )
          goto LABEL_51;
        v23 += v24 + 2;
      }
      ++v22;
    }
    v25 = *(unsigned int *)v11;
    v46 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v12 = RtlULongLongMult(v25, v18, &pullResult);
    if ( v12 >= 0 )
    {
      if ( v26 + pullResult >= v26 )
      {
        v12 = 0;
        Pool2 = ExAllocatePool2(0x40uLL, v26 + pullResult, 0x4D584650u);
        v28 = Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 32) = a4;
          v29 = (ULONGLONG *)(Pool2 + 160);
          *(_DWORD *)(Pool2 + 144) = *(_DWORD *)v11;
          v30 = 0;
          *(_QWORD *)(Pool2 + 152) = Pool2 + 160;
          *(_DWORD *)(v14 + Pool2) = *(_DWORD *)v11;
          v31 = *(_DWORD *)v11;
          v47 = v14 + v28;
          v32 = v28 + v15;
          if ( v31 )
          {
            do
            {
              *v29 = v32;
              ++v30;
              v31 = *(_DWORD *)v11;
              v29 += 4;
              v32 += 48LL;
            }
            while ( v30 < *(_DWORD *)v11 );
          }
          v33 = (char *)(v19 + v28);
          v34 = 0;
          if ( v31 )
          {
            v35 = (_QWORD *)(v28 + v14 + 40);
            do
            {
              *(v35 - 2) = v11[6 * v34 + 3];
              *((_DWORD *)v35 - 2) = v11[6 * v34 + 4];
              *((_DWORD *)v35 - 1) = HIDWORD(v11[6 * v34 + 4]);
              if ( HIDWORD(v11[6 * v34 + 4]) )
              {
                *v35 = v11[6 * v34 + 5];
                v35[1] = v11[6 * v34 + 6];
              }
              else
              {
                v36 = v11[6 * v34 + 5];
                *(_DWORD *)v35 = v36;
                v35[1] = v33;
                memmove(v33, (const void *)v11[6 * v34 + 6], 16LL * v36);
                v33 += 16 * *(unsigned int *)v35;
              }
              v31 = *(_DWORD *)v11;
              v35 += 6;
              ++v34;
            }
            while ( v34 < *(_DWORD *)v11 );
          }
          v37 = 0;
          v38 = (wchar_t *)(v28 + v44);
          v39 = (UNICODE_STRING *)(v28 + v45);
          if ( v31 )
          {
            do
            {
              v40 = &v11[6 * v37];
              if ( *((_WORD *)v40 + 4) )
              {
                v39->Buffer = v38;
                v39->Length = *((_WORD *)v40 + 4);
                v39->MaximumLength = *((_WORD *)v40 + 4) + 2;
                RtlCopyUnicodeString(v39, (PCUNICODE_STRING)(v40 + 1));
              }
              v39 += 3;
              ++v37;
              v38 += (*((unsigned __int16 *)v40 + 4) >> 1) + 1;
            }
            while ( v37 < *(_DWORD *)v11 );
          }
          *(_QWORD *)(v28 + 48) = v28 + v46;
          *(_QWORD *)v28 = a2;
          KeInitializeEvent((PRKEVENT)(v28 + 8), NotificationEvent, 1u);
          if ( (a3 & 6) != 0 )
            *(_BYTE *)(v28 + 74) = 1;
          *(_BYTE *)(v28 + 73) = v41;
          *(_QWORD *)(v28 + 88) = 0LL;
          *(_QWORD *)(v28 + 104) = PopFxComponentPerfWork;
          *(_QWORD *)(v28 + 112) = v28;
          PopFxTracePerfRegistration(v28, 0LL);
          PopPepRegisterComponentPerfStates(*(_QWORD *)(BugCheckParameter3 + 56), *(_DWORD *)(a2 + 16), a3);
          *(_QWORD *)(a2 + 424) = v28;
          if ( a6 )
            *a6 = v47;
        }
        else
        {
          v12 = -1073741670;
        }
        goto LABEL_52;
      }
LABEL_51:
      v12 = -1073741675;
    }
  }
LABEL_52:
  if ( !a5 )
    goto LABEL_53;
  return (unsigned int)v12;
}
