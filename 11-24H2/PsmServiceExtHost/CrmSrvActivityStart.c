/*
 * XREFs of CrmSrvActivityStart @ 0x1800326A0
 * Callers:
 *     CrmpInProcActivityStart @ 0x18006C2F0 (CrmpInProcActivityStart.c)
 * Callees:
 *     CrmLogSrvActivityStartStop @ 0x180032BF0 (CrmLogSrvActivityStartStop.c)
 *     CrmActivityCleanup @ 0x180032E00 (CrmActivityCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // r13
  char *i; // rdi
  char *v12; // r13
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // r13d
  __int64 v16; // rax
  void *v17; // r8
  void *v18; // r8
  __int64 v19; // rbx
  bool v20; // zf
  SIZE_T v21; // rbx
  _WORD *Heap; // rax
  _WORD *v23; // r9
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rdx
  _WORD *v26; // rcx
  __int64 v27; // r8
  __int16 v28; // ax
  __int64 v29; // rbx
  SIZE_T v30; // rbx
  _WORD *v31; // rax
  _WORD *v32; // r8
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rsi
  __int64 v35; // rdx
  __int16 v36; // cx
  _WORD *v37; // rcx
  signed __int64 v38; // rbp
  bool v39; // cc
  signed __int64 v40; // rbp
  __int64 v42; // rcx
  __int16 v43; // [rsp+70h] [rbp-178h]
  int v44; // [rsp+74h] [rbp-174h]
  int v45; // [rsp+78h] [rbp-170h]
  __int64 v46; // [rsp+80h] [rbp-168h]
  __int64 v47; // [rsp+88h] [rbp-160h]
  __int64 v48; // [rsp+90h] [rbp-158h] BYREF
  __int64 v49; // [rsp+98h] [rbp-150h]
  __int64 v50; // [rsp+A0h] [rbp-148h]
  char v51[32]; // [rsp+A8h] [rbp-140h] BYREF
  UUID *v52; // [rsp+C8h] [rbp-120h]
  __int64 v53; // [rsp+D0h] [rbp-118h]
  _DWORD v54[44]; // [rsp+E0h] [rbp-108h] BYREF

  v45 = a2;
  v6 = a2;
  v49 = a1;
  v7 = 0;
  v44 = 1601;
  v48 = 0LL;
  v43 = 0;
  v8 = -1LL;
  v9 = -1LL;
  memset_0(v54, 0, sizeof(v54));
  v50 = MEMORY[0x7FFE0008];
  RtlQueryUnbiasedInterruptTime(&v48);
  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 1) != 0 && (qword_1800E8300 & 1) == qword_1800E8300 )
  {
    v53 = 16LL;
    v52 = &Uuid;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D23FA, 0LL, 0LL, 3, v51);
  }
  RtlAcquireSRWLockShared(v6);
  for ( i = *(char **)(v6 + 56); ; i = *(char **)i )
  {
    if ( i == (char *)(v6 + 56) )
      goto LABEL_50;
    if ( *((_QWORD *)i + 7) == v49 )
      break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)i + 2) <= 1 )
    __fastfail(0xEu);
  if ( !i )
  {
LABEL_50:
    v7 = -1073741811;
    RtlReleaseSRWLockShared(v6);
    goto LABEL_51;
  }
  RtlReleaseSRWLockShared(v6);
  v12 = i + 80;
  RtlAcquireSRWLockExclusive(i + 80);
  *((_DWORD *)i + 22) = GetCurrentThreadId();
  v44 = *((_DWORD *)i + 16);
  if ( !*((_DWORD *)i + 40) )
  {
    RtlQueryUnbiasedInterruptTime(i + 192);
    *((_QWORD *)i + 26) = 0LL;
    *((_QWORD *)i + 25) = 0LL;
    *((_QWORD *)i + 27) = MEMORY[0x7FFE0008];
  }
  ++*((_DWORD *)i + 40);
  v13 = *((_DWORD *)i + 46);
  if ( v13 < a5 || v13 == 3 )
    *((_DWORD *)i + 46) = a5;
  v14 = 0;
  if ( *((_DWORD *)i + 27) )
  {
    v15 = 0;
    do
    {
      v16 = *((_QWORD *)i + 14) + 56LL * v14;
      if ( !*(_DWORD *)(v16 + 48) )
      {
        v42 = v15++;
        v54[v42] = *(_DWORD *)(v16 + 32);
      }
      ++v14;
    }
    while ( v14 < *((_DWORD *)i + 27) );
    v43 = v15;
    v12 = i + 80;
  }
  v17 = (void *)*((_QWORD *)i + 28);
  v47 = *((_QWORD *)i + 22);
  v46 = *((_QWORD *)i + 21);
  if ( v17 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  v18 = (void *)*((_QWORD *)i + 29);
  if ( v18 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  v19 = -1LL;
  do
    v20 = *(_WORD *)(a3 + 2 * v19++ + 2) == 0;
  while ( !v20 );
  v21 = 2 * v19 + 2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
  v23 = Heap;
  if ( Heap )
  {
    v24 = v21 >> 1;
    if ( v24 )
    {
      if ( v24 <= 0x7FFFFFFF )
      {
        v25 = 2147483646 - v24;
        v26 = Heap;
        v27 = a3 - (_QWORD)Heap;
        do
        {
          if ( !(v24 + v25) )
            break;
          v28 = *(_WORD *)((char *)v26 + v27);
          if ( !v28 )
            break;
          *v26++ = v28;
          --v24;
        }
        while ( v24 );
        Heap = v26 - 1;
        if ( v24 )
          Heap = v26;
      }
      *Heap = 0;
    }
  }
  else
  {
    v23 = 0LL;
  }
  *((_QWORD *)i + 28) = v23;
  v29 = -1LL;
  do
    v20 = *(_WORD *)(a4 + 2 * v29++ + 2) == 0;
  while ( !v20 );
  v30 = 2 * v29 + 2;
  v31 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v30);
  v32 = v31;
  if ( v31 )
  {
    v33 = v30 >> 1;
    if ( v33 )
    {
      if ( v33 > 0x7FFFFFFF )
      {
        *v31 = 0;
      }
      else
      {
        v34 = 2147483646 - v33;
        v35 = a4 - (_QWORD)v31;
        do
        {
          if ( !(v33 + v34) )
            break;
          v36 = *(_WORD *)((char *)v31 + v35);
          if ( !v36 )
            break;
          *v31++ = v36;
          --v33;
        }
        while ( v33 );
        v37 = v31 - 1;
        if ( v33 )
          v37 = v31;
        *v37 = 0;
      }
    }
  }
  else
  {
    v32 = 0LL;
  }
  *((_QWORD *)i + 29) = v32;
  *((_DWORD *)v12 + 2) = 0;
  RtlReleaseSRWLockExclusive(v12);
  v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)i + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v39 = v38 <= 1;
  v40 = v38 - 1;
  if ( v39 )
  {
    if ( v40 )
      __fastfail(0xEu);
    CrmActivityCleanup(i);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
  }
  LODWORD(v6) = v45;
  v8 = v46;
  v9 = v47;
LABEL_51:
  CrmLogSrvActivityStartStop(v6, v44, v49, a3, a4, a5, (__int64)v54, v43, v50, v48, v9, v8, v7);
  return v7;
}
