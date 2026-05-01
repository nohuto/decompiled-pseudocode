/*
 * XREFs of CrmRpcSrvActivityStart @ 0x180032140
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogSrvActivityStartStop @ 0x180032BF0 (CrmLogSrvActivityStartStop.c)
 *     CrmActivityCleanup @ 0x180032E00 (CrmActivityCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRpcSrvActivityStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rsi
  __int64 v9; // r12
  char *i; // rdi
  char *v12; // r12
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // r12d
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
  int v38; // ebx
  signed __int64 v39; // rbp
  bool v40; // cc
  signed __int64 v41; // rbp
  __int64 v43; // rcx
  __int16 v44; // [rsp+70h] [rbp-168h]
  int v45; // [rsp+74h] [rbp-164h]
  __int64 v46; // [rsp+78h] [rbp-160h]
  __int64 v47; // [rsp+80h] [rbp-158h]
  __int64 v48; // [rsp+88h] [rbp-150h] BYREF
  __int64 v49; // [rsp+90h] [rbp-148h]
  __int64 v50; // [rsp+98h] [rbp-140h]
  char v51[32]; // [rsp+A0h] [rbp-138h] BYREF
  UUID *v52; // [rsp+C0h] [rbp-118h]
  __int64 v53; // [rsp+C8h] [rbp-110h]
  _DWORD v54[44]; // [rsp+D0h] [rbp-108h] BYREF

  v50 = a1;
  v45 = 1601;
  v48 = 0LL;
  v44 = 0;
  v8 = -1LL;
  v9 = -1LL;
  memset_0(v54, 0, sizeof(v54));
  v49 = MEMORY[0x7FFE0008];
  RtlQueryUnbiasedInterruptTime(&v48);
  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 1) != 0 && (qword_1800E8300 & 1) == qword_1800E8300 )
  {
    v53 = 16LL;
    v52 = &Uuid;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D23FA, 0LL, 0LL, 3, v51);
  }
  RtlAcquireSRWLockShared(a2);
  for ( i = *(char **)(a2 + 56); ; i = *(char **)i )
  {
    if ( i == (char *)(a2 + 56) )
      goto LABEL_56;
    if ( *((_QWORD *)i + 7) == a1 )
      break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)i + 2) <= 1 )
    __fastfail(0xEu);
  if ( !i )
  {
LABEL_56:
    v38 = -1073741811;
    RtlReleaseSRWLockShared(a2);
    goto LABEL_50;
  }
  RtlReleaseSRWLockShared(a2);
  v12 = i + 80;
  RtlAcquireSRWLockExclusive(i + 80);
  *((_DWORD *)i + 22) = GetCurrentThreadId();
  v45 = *((_DWORD *)i + 16);
  if ( *((_DWORD *)i + 40) )
  {
    v13 = 0;
  }
  else
  {
    RtlQueryUnbiasedInterruptTime(i + 192);
    v13 = 0;
    *((_QWORD *)i + 26) = 0LL;
    *((_QWORD *)i + 25) = 0LL;
    *((_QWORD *)i + 27) = MEMORY[0x7FFE0008];
  }
  ++*((_DWORD *)i + 40);
  v14 = *((_DWORD *)i + 46);
  if ( v14 < a5 || v14 == 3 )
    *((_DWORD *)i + 46) = a5;
  if ( *((_DWORD *)i + 27) )
  {
    v15 = 0;
    do
    {
      v16 = *((_QWORD *)i + 14) + 56LL * v13;
      if ( !*(_DWORD *)(v16 + 48) )
      {
        v43 = v15++;
        v54[v43] = *(_DWORD *)(v16 + 32);
      }
      ++v13;
    }
    while ( v13 < *((_DWORD *)i + 27) );
    v44 = v15;
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
          if ( !(v25 + v24) )
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
        LODWORD(v31) = 0;
        *v32 = 0;
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
        LODWORD(v31) = 0;
        *v37 = 0;
      }
    }
    else
    {
      LODWORD(v31) = 0;
    }
  }
  else
  {
    v32 = 0LL;
  }
  *((_QWORD *)i + 29) = v32;
  *((_DWORD *)v12 + 2) = (_DWORD)v31;
  v38 = (int)v31;
  RtlReleaseSRWLockExclusive(v12);
  v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)i + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v40 = v39 <= 1;
  v41 = v39 - 1;
  if ( v40 )
  {
    if ( v41 )
      __fastfail(0xEu);
    CrmActivityCleanup(i);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
  }
  v8 = v46;
  v9 = v47;
LABEL_50:
  CrmLogSrvActivityStartStop(a2, v45, v50, a3, a4, a5, (__int64)v54, v44, v49, v48, v9, v8, v38);
  if ( v38 < 0 )
    return (unsigned int)v38;
  else
    return 0LL;
}
