/*
 * XREFs of RtlCreateProcessParametersInternal @ 0x1800E5B00
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x1800E5960 (RtlCreateProcessParametersEx.c)
 *     RtlCreateProcessParametersWithTemplate @ 0x1800E59D0 (RtlCreateProcessParametersWithTemplate.c)
 *     RtlCreateProcessParameters @ 0x180160BD0 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ValidateOptionalString @ 0x1800E603C (ValidateOptionalString.c)
 *     RtlpCopyProcString @ 0x1800E6050 (RtlpCopyProcString.c)
 *     RtlpGetBlockSizeEx @ 0x1800E60F0 (RtlpGetBlockSizeEx.c)
 *     ValidateStringParameter @ 0x1800E616C (ValidateStringParameter.c)
 *     RtlDeNormalizeProcessParams @ 0x180121690 (RtlDeNormalizeProcessParams.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateProcessParametersInternal(
        _QWORD *a1,
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
  __int64 Heap; // rax
  _DWORD *v33; // rbx
  char *v34; // rsi
  _RTL_USER_PROCESS_PARAMETERS *v35; // rsi
  int v36; // eax
  __int64 v37; // r9
  size_t v39; // r8
  __int64 v40; // r9
  __int64 v41; // r9
  char v42; // [rsp+20h] [rbp-40h]
  unsigned __int64 v43; // [rsp+28h] [rbp-38h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+30h] [rbp-30h]
  unsigned __int16 *v45; // [rsp+38h] [rbp-28h]
  unsigned __int16 *v46; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v47; // [rsp+48h] [rbp-18h]
  unsigned __int16 *v48; // [rsp+50h] [rbp-10h]
  _WORD *v49; // [rsp+58h] [rbp-8h]

  if ( (a12 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  if ( (int)ValidateStringParameter(a2, ProcessParameters, a5) < 0 || (int)ValidateOptionalString(a3) < 0 )
    return 3221225485LL;
  v42 = 0;
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
      v42 = 1;
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
  v45 = v22;
  v23 = &RtlpNullString;
  v24 = (unsigned __int16 *)&RtlpNullString;
  if ( a7 )
    v24 = a7;
  v25 = (unsigned __int16 *)&RtlpNullString;
  v26 = *v22;
  v46 = v24;
  if ( a8 )
    v25 = a8;
  v27 = (unsigned __int16 *)&RtlpNullString;
  v47 = v25;
  if ( a9 )
    v27 = a9;
  v48 = v27;
  v28 = v25[1];
  if ( v21 )
    v23 = v21;
  v49 = v23;
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
  for ( i = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL; ; i = v43 )
  {
    if ( i < BlockSize || i + v29 < v29 )
      return 3221225621LL;
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, i + v29);
    v33 = (_DWORD *)Heap;
    if ( !Heap )
      return 3221225626LL;
    if ( Src )
    {
      memmove((void *)(v29 + Heap), Src, BlockSize);
      v34 = (char *)v33 + v29;
      goto LABEL_35;
    }
    RtlEnterCriticalSection((__int64)&FastPebLock);
    BlockSize = ProcessParameters->EnvironmentSize;
    v43 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( BlockSize <= i )
      break;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v33, v41);
  }
  v39 = BlockSize;
  v34 = (char *)v33 + v29;
  memmove((char *)v33 + v29, ProcessParameters->Environment, v39);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  i = v43;
LABEL_35:
  memset_thunk_772440563353939046(v33, 0, 0x448uLL);
  *((_QWORD *)v33 + 16) = v34;
  v35 = ProcessParameters;
  *v33 = v29;
  v33[1] = v29;
  *((_QWORD *)v33 + 126) = i;
  v43 = (unsigned __int64)(v33 + 274);
  v33[2] = 1;
  v33[6] = v35->ConsoleFlags & 1;
  if ( a4 )
  {
    RtlpCopyProcString(&v43, v33 + 14, a4, 520LL);
    if ( v42 )
    {
      *(_WORD *)(*((_QWORD *)v33 + 8) + 2 * v16) = 92;
      *((_WORD *)v33 + 28) += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    RtlpCopyProcString(&v43, v33 + 14, &v35->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
  }
  if ( a3 )
    RtlpCopyProcString(&v43, v33 + 20, a3, *(unsigned __int16 *)(a3 + 2));
  if ( a11 )
    RtlpCopyProcString(&v43, v33 + 260, a11, *(unsigned __int16 *)(a11 + 2));
  RtlpCopyProcString(&v43, v33 + 24, a2, (unsigned int)*a2 + 2);
  v36 = *v45;
  if ( (_WORD)v36 == v45[1] )
    v37 = v45[1];
  else
    v37 = (unsigned int)(v36 + 2);
  RtlpCopyProcString(&v43, v33 + 28, v45, v37);
  RtlpCopyProcString(&v43, v33 + 44, v46, v46[1]);
  RtlpCopyProcString(&v43, v33 + 48, v47, v47[1]);
  RtlpCopyProcString(&v43, v33 + 52, v48, v48[1]);
  if ( *v49 )
    RtlpCopyProcString(&v43, v33 + 56, v49, (unsigned __int16)v49[1]);
  if ( (a12 & 1) == 0 )
    v33 = (_DWORD *)RtlDeNormalizeProcessParams(v33);
  *a1 = v33;
  return 0LL;
}
