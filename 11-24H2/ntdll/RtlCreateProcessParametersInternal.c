/*
 * XREFs of RtlCreateProcessParametersInternal @ 0x1800E1EE0
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x1800E1D40 (RtlCreateProcessParametersEx.c)
 *     RtlCreateProcessParametersWithTemplate @ 0x1800E1DB0 (RtlCreateProcessParametersWithTemplate.c)
 *     RtlCreateProcessParameters @ 0x18015DA80 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     ValidateOptionalString @ 0x1800E241C (ValidateOptionalString.c)
 *     RtlpCopyProcString @ 0x1800E2430 (RtlpCopyProcString.c)
 *     RtlpGetBlockSizeEx @ 0x1800E24D0 (RtlpGetBlockSizeEx.c)
 *     ValidateStringParameter @ 0x1800E254C (ValidateStringParameter.c)
 *     RtlDeNormalizeProcessParams @ 0x18011DFF0 (RtlDeNormalizeProcessParams.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateProcessParametersInternal(
        PRTL_USER_PROCESS_PARAMETERS *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *Src,
        unsigned __int16 *a7,
        unsigned __int16 *a8,
        unsigned __int16 *a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int16 *v15; // r9
  unsigned __int64 v16; // r15
  __int64 v17; // r11
  __int64 v18; // rdx
  unsigned __int16 *v19; // r8
  unsigned __int16 *v20; // r10
  _WORD *v21; // r11
  unsigned __int16 *v22; // rax
  _WORD *v23; // r8
  unsigned __int16 *v24; // r9
  unsigned __int16 *v25; // rsi
  __int64 v26; // rcx
  unsigned __int16 *v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  size_t BlockSize; // rsi
  unsigned __int64 i; // r14
  _RTL_USER_PROCESS_PARAMETERS *Heap; // rax
  PRTL_USER_PROCESS_PARAMETERS v33; // rbx
  char *v34; // rsi
  _RTL_USER_PROCESS_PARAMETERS *v35; // rsi
  int v36; // eax
  __int64 v37; // r9
  size_t v39; // r8
  __int64 v40; // r9
  char v41; // [rsp+20h] [rbp-40h]
  unsigned __int64 v42; // [rsp+28h] [rbp-38h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+30h] [rbp-30h]
  unsigned __int16 *v44; // [rsp+38h] [rbp-28h]
  unsigned __int16 *v45; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v46; // [rsp+48h] [rbp-18h]
  unsigned __int16 *v47; // [rsp+50h] [rbp-10h]
  _WORD *v48; // [rsp+58h] [rbp-8h]

  if ( (a12 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  if ( (int)ValidateStringParameter(a2, ProcessParameters, a5) < 0 || (int)ValidateOptionalString(a3) < 0 )
    return 3221225485LL;
  v41 = 0;
  v16 = 0LL;
  if ( v15 )
  {
    v16 = (unsigned __int64)*v15 >> 1;
    if ( (int)ValidateStringParameter(v15, v13, v14) < 0 || !v16 )
      return 3221225485LL;
    if ( *(_WORD *)(*(_QWORD *)(v40 + 8) + 2 * v16 - 2) != 92 )
    {
      if ( v16 > 0x103 )
        return 3221225485LL;
      v41 = 1;
    }
  }
  if ( (int)ValidateOptionalString(v14) < 0
    || (int)ValidateOptionalString(a7) < 0
    || (int)ValidateOptionalString(a8) < 0
    || (int)ValidateOptionalString(a9) < 0
    || (int)ValidateOptionalString(v17) < 0
    || (int)ValidateOptionalString(a11) < 0 )
  {
    return 3221225485LL;
  }
  v22 = v20;
  if ( v19 )
    v22 = v19;
  v44 = v22;
  v23 = &RtlpNullString;
  v24 = (unsigned __int16 *)&RtlpNullString;
  if ( a7 )
    v24 = a7;
  v25 = (unsigned __int16 *)&RtlpNullString;
  v26 = *v22;
  v45 = v24;
  if ( a8 )
    v25 = a8;
  v27 = (unsigned __int16 *)&RtlpNullString;
  v46 = v25;
  if ( a9 )
    v27 = a9;
  v47 = v27;
  v28 = v25[1];
  if ( v21 )
    v23 = v21;
  v48 = v23;
  v29 = ((v24[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((*v20 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v28 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v26 + 9) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v27[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1616;
  if ( *v23 )
    v29 += ((unsigned __int16)v23[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a3 )
    v29 += (*(unsigned __int16 *)(a3 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a11 )
    v29 += (*(unsigned __int16 *)(a11 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( Src )
    BlockSize = RtlpGetBlockSizeEx(Src, 1LL);
  else
    BlockSize = *(_QWORD *)(v18 + 1008);
  for ( i = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL; ; i = v42 )
  {
    if ( i < BlockSize || i + v29 < v29 )
      return 3221225621LL;
    Heap = (_RTL_USER_PROCESS_PARAMETERS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, i + v29);
    v33 = Heap;
    if ( !Heap )
      return 3221225626LL;
    if ( Src )
    {
      memmove((char *)Heap + v29, Src, BlockSize);
      v34 = (char *)v33 + v29;
      goto LABEL_35;
    }
    RtlEnterCriticalSection(&FastPebLock);
    BlockSize = ProcessParameters->EnvironmentSize;
    v42 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( BlockSize <= i )
      break;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v33);
  }
  v39 = BlockSize;
  v34 = (char *)v33 + v29;
  memmove((char *)v33 + v29, ProcessParameters->Environment, v39);
  RtlLeaveCriticalSection(&FastPebLock);
  i = v42;
LABEL_35:
  memset_thunk_772440563353939046(v33, 0, 0x448uLL);
  v33->Environment = v34;
  v35 = ProcessParameters;
  v33->MaximumLength = v29;
  v33->Length = v29;
  v33->EnvironmentSize = i;
  v42 = (unsigned __int64)&v33[1];
  v33->Flags = 1;
  v33->ConsoleFlags = v35->ConsoleFlags & 1;
  if ( a4 )
  {
    RtlpCopyProcString(&v42, &v33->CurrentDirectory, a4, 520LL);
    if ( v41 )
    {
      v33->CurrentDirectory.DosPath.Buffer[v16] = 92;
      v33->CurrentDirectory.DosPath.Length += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection(&FastPebLock);
    RtlpCopyProcString(&v42, &v33->CurrentDirectory, &v35->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection(&FastPebLock);
  }
  if ( a3 )
    RtlpCopyProcString(&v42, &v33->DllPath, a3, *(unsigned __int16 *)(a3 + 2));
  if ( a11 )
    RtlpCopyProcString(&v42, &v33->RedirectionDllName, a11, *(unsigned __int16 *)(a11 + 2));
  RtlpCopyProcString(&v42, &v33->ImagePathName, a2, (unsigned int)*a2 + 2);
  v36 = *v44;
  if ( (_WORD)v36 == v44[1] )
    v37 = v44[1];
  else
    v37 = (unsigned int)(v36 + 2);
  RtlpCopyProcString(&v42, &v33->CommandLine, v44, v37);
  RtlpCopyProcString(&v42, &v33->WindowTitle, v45, v45[1]);
  RtlpCopyProcString(&v42, &v33->DesktopInfo, v46, v46[1]);
  RtlpCopyProcString(&v42, &v33->ShellInfo, v47, v47[1]);
  if ( *v48 )
    RtlpCopyProcString(&v42, &v33->RuntimeData, v48, (unsigned __int16)v48[1]);
  if ( (a12 & 1) == 0 )
    v33 = RtlDeNormalizeProcessParams(v33);
  *a1 = v33;
  return 0LL;
}
