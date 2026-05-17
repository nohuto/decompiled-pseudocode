/*
 * XREFs of EvtIntReportEventWorker @ 0x1800F5D70
 * Callers:
 *     EvtIntReportEventAndSourceAsync @ 0x1800F5D00 (EvtIntReportEventAndSourceAsync.c)
 *     EvtIntReportAuthzEventAndSourceAsync @ 0x18015D950 (EvtIntReportAuthzEventAndSourceAsync.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlValidSid @ 0x18005FCD0 (RtlValidSid.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     EtwpEventWriteFull @ 0x18008EAC0 (EtwpEventWriteFull.c)
 *     EtwWriteUMSecurityEvent @ 0x1800F61C0 (EtwWriteUMSecurityEvent.c)
 *     _local_unwind @ 0x180123A90 (_local_unwind.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

_BOOL8 __fastcall EvtIntReportEventWorker(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        char a6,
        _BYTE *a7,
        unsigned __int16 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  int v11; // esi
  _BYTE *v13; // r12
  _BYTE *Heap; // rdi
  unsigned __int8 v15; // r15
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r8d
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // r9
  __int64 v33; // [rsp+0h] [rbp-2D8h] BYREF
  int v34; // [rsp+50h] [rbp-288h]
  unsigned int v35; // [rsp+54h] [rbp-284h]
  int v36; // [rsp+58h] [rbp-280h] BYREF
  int v37; // [rsp+5Ch] [rbp-27Ch] BYREF
  unsigned int i; // [rsp+60h] [rbp-278h]
  int v39; // [rsp+64h] [rbp-274h]
  __int64 v40; // [rsp+68h] [rbp-270h] BYREF
  _BYTE *v41; // [rsp+70h] [rbp-268h]
  __int64 v42; // [rsp+78h] [rbp-260h]
  __int64 *v43; // [rsp+80h] [rbp-258h]
  __int128 v44; // [rsp+88h] [rbp-250h] BYREF
  _BYTE v45[512]; // [rsp+A0h] [rbp-238h] BYREF

  v43 = &v33;
  v11 = a4;
  v39 = a2;
  v42 = a1;
  v13 = a7;
  v35 = 0;
  Heap = v45;
  v41 = v45;
  v44 = 0LL;
  v40 = 0LL;
  v15 = 0;
  v37 = 0;
  v36 = 0;
  if ( a9 && !a11 || a8 && !a10 || !a3 )
  {
    v35 = 87;
    goto LABEL_36;
  }
  v16 = a8 + (a7 != 0LL) + 7;
  if ( a9 )
    ++v16;
  if ( v16 > 0x20 )
  {
    Heap = (_BYTE *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 16LL * v16);
    v41 = Heap;
    if ( !Heap )
    {
      v35 = 8;
      goto LABEL_36;
    }
  }
  v17 = 0x8000000000000000uLL;
  if ( v11 )
  {
    switch ( v11 )
    {
      case 1:
        v15 = 2;
        break;
      case 2:
        v15 = 3;
        break;
      case 4:
        v15 = 4;
        break;
      case 8:
        v17 = 0x8020000000000000uLL;
        break;
      case 16:
        v17 = 0x8010000000000000uLL;
        break;
    }
  }
  WORD2(v44) = v15;
  WORD3(v44) = a5;
  *((_QWORD *)&v44 + 1) = v17;
  if ( !v13 )
    goto LABEL_19;
  if ( RtlValidSid(v13) )
  {
    v37 = 4 * (unsigned __int8)v13[1] + 8;
LABEL_19:
    v40 = MEMORY[0x7FFE0014];
    *(_QWORD *)Heap = &v40;
    *((_QWORD *)Heap + 1) = 8LL;
    *((_QWORD *)Heap + 2) = &a6;
    *((_QWORD *)Heap + 3) = 4LL;
    v34 = 2;
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(a3 + 2 * v18) );
    v36 = (unsigned __int16)(v18 + 1);
    *((_QWORD *)Heap + 4) = &v36;
    *((_QWORD *)Heap + 5) = 2LL;
    v19 = 2 * v36;
    *((_QWORD *)Heap + 6) = a3;
    *((_DWORD *)Heap + 14) = v19;
    *((_DWORD *)Heap + 15) = 0;
    *((_QWORD *)Heap + 8) = &v37;
    *((_QWORD *)Heap + 9) = 2LL;
    v20 = 5;
    v34 = 5;
    v21 = v37;
    if ( v37 )
    {
      *((_QWORD *)Heap + 10) = v13;
      *((_DWORD *)Heap + 22) = v21;
      *((_DWORD *)Heap + 23) = 0;
      v20 = 6;
      v34 = 6;
    }
    v22 = 2LL * v20;
    *(_QWORD *)&Heap[8 * v22] = &a8;
    *(_QWORD *)&Heap[8 * v22 + 8] = 2LL;
    LODWORD(v23) = v20 + 1;
    v34 = v23;
    v24 = 0;
    for ( i = 0; ; i = v24 )
    {
      v25 = 2LL * (unsigned int)v23;
      v23 = (unsigned int)(v23 + 1);
      if ( v24 >= a8 )
        break;
      v26 = *(_QWORD *)(a10 + 8LL * v24);
      v27 = -1LL;
      do
        ++v27;
      while ( *(_WORD *)(v26 + 2 * v27) );
      *(_QWORD *)&Heap[8 * v25] = v26;
      *(_QWORD *)&Heap[8 * v25 + 8] = (unsigned int)(2 * v27 + 2);
      v34 = v23;
      ++v24;
    }
    *(_QWORD *)&Heap[8 * v25] = &a9;
    *(_QWORD *)&Heap[8 * v25 + 8] = 4LL;
    v34 = v23;
    v28 = a9;
    if ( a9 )
    {
      v29 = 2LL * (unsigned int)v23;
      *(_QWORD *)&Heap[8 * v29] = a11;
      *(_DWORD *)&Heap[8 * v29 + 8] = v28;
      *(_DWORD *)&Heap[8 * v29 + 12] = 0;
      v23 = (unsigned int)(v23 + 1);
      v34 = v23;
    }
    if ( v39 )
      v30 = EtwWriteUMSecurityEvent(&v44, 4LL, v23, Heap);
    else
      v30 = EtwpEventWriteFull(v42, &v44, 0LL, 0, 4u, 0LL, 0LL, v23, (__int64)Heap);
    goto LABEL_34;
  }
  v35 = 87;
  v30 = local_unwind(v43, &loc_1800F60F9);
LABEL_34:
  v35 = v30;
  if ( Heap != v45 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v31);
LABEL_36:
  RtlSetLastWin32Error(v35);
  return v35 == 0;
}
