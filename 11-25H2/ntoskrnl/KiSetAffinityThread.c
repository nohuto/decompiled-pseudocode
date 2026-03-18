/*
 * XREFs of KiSetAffinityThread @ 0x140271884
 * Callers:
 *     KeSetAffinityProcess @ 0x140269780 (KeSetAffinityProcess.c)
 *     KiSetLegacyAffinityThread @ 0x1402715DC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1403060E4 (KeSetUserAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x140469728 (KeSetUserGroupAffinityThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x14026B628 (KeSelectIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x14026B7D8 (EtwTraceThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140270C08 (KiRescheduleThreadAfterAffinityChange.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiQueueTebUpdateApc @ 0x140271C68 (KiQueueTebUpdateApc.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140271CE0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     KiComputeThreadAffinity @ 0x1402720F8 (KiComputeThreadAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14027812C (KiUpdateNodeAffinitizedFlag.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceIdealProcessor @ 0x1404B0E7C (EtwTraceIdealProcessor.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BC120 (KiCpuPartitionCheckAffinitization.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall KiSetAffinityThread(__int64 a1, struct _SINGLE_LIST_ENTRY *a2, struct _KAFFINITY_EX *a3, char a4)
{
  unsigned int v6; // edi
  struct _KAFFINITY_EX *v7; // rcx
  __int64 v8; // r15
  unsigned __int16 Size; // dx
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax
  _BYTE *v13; // r8
  unsigned __int64 v14; // rdx
  char v15; // di
  __int64 v16; // r9
  char v17; // r13
  char v18; // r13
  __int64 v19; // r8
  unsigned int v20; // esi
  unsigned __int16 i; // dx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  _WORD v26[4]; // [rsp+54h] [rbp-55h] BYREF
  unsigned int v27; // [rsp+5Ch] [rbp-4Dh]
  unsigned int v28; // [rsp+60h] [rbp-49h]
  unsigned int v29; // [rsp+64h] [rbp-45h]
  volatile signed __int64 *v30; // [rsp+68h] [rbp-41h] BYREF
  __int64 v31; // [rsp+70h] [rbp-39h] BYREF
  __int64 v32; // [rsp+78h] [rbp-31h] BYREF
  __int128 v33; // [rsp+80h] [rbp-29h] BYREF
  struct _SINGLE_LIST_ENTRY *v34; // [rsp+90h] [rbp-19h]
  __int128 v35; // [rsp+98h] [rbp-11h] BYREF
  _QWORD v36[3]; // [rsp+A8h] [rbp-1h] BYREF

  v34 = a2;
  v30 = 0LL;
  v26[0] = 0;
  v32 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = *(struct _KAFFINITY_EX **)(a1 + 552);
  v28 = *(_DWORD *)(a1 + 588);
  v27 = v28;
  LODWORD(v8) = *(_DWORD *)(a1 + 196);
  Size = v7->Size;
  v29 = v8;
  KiCopyAffinityEx(v7, Size, a3);
  v10 = *(unsigned int *)(a1 + 196);
  v11 = KiProcessorBlock[v10];
  v12 = *(unsigned __int8 *)(v11 + 208);
  v13 = (_BYTE *)(v11 + 209);
  if ( (unsigned __int16)v12 < a3->Count && (v14 = a3->Bitmap[v12] >> *v13, (v14 & 1) != 0) )
  {
    v15 = 0;
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0);
    v15 = 0;
    for ( i = 0; i < a3->Count; ++i )
    {
      v22 = a3->Bitmap[i];
      if ( v22 )
      {
        WORD4(v33) = i;
        *(_QWORD *)&v33 = v22;
        goto LABEL_25;
      }
    }
    i = WORD4(v33);
LABEL_25:
    v26[0] = (unsigned __int8)*v13;
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 184LL);
    v36[0] = *(_QWORD *)(v11 + 36464);
    v36[1] = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 128LL);
    if ( i >= *(_WORD *)(v23 + 208) )
      v24 = 0LL;
    else
      v24 = *(_QWORD *)(v23 + 8LL * i + 216);
    v36[2] = v24;
    v8 = (unsigned __int16)KeSelectIdealProcessor((__int64)&v33, v26, (__int64)v36, 3u);
    *(_DWORD *)(a1 + 196) = v8;
    LODWORD(v10) = v8;
    v11 = KiProcessorBlock[v8];
    *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v11 + 208);
  }
  LOBYTE(v14) = a4;
  KiQueueTebUpdateApc(a1, v14);
  v17 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    v20 = v27;
    v15 = 1;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else
  {
    v35 = 0LL;
    v18 = KiAcquireThreadStateLockForWrite(
            a1,
            (unsigned int)&v32,
            (unsigned int)&v31,
            (unsigned int)&v30,
            (__int64)&v35);
    KiCopyAffinityEx(*(struct _KAFFINITY_EX **)(a1 + 576), *(_WORD *)(*(_QWORD *)(a1 + 576) + 2LL), a3);
    if ( !(unsigned int)KiComputeThreadAffinity(a1) )
    {
      *(_DWORD *)(a1 + 588) = v10;
      *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v11 + 208);
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v11, a1);
    }
    v20 = *(_DWORD *)(a1 + 588);
    KiRescheduleThreadAfterAffinityChange(
      a1,
      *(unsigned __int16 **)(a1 + 576),
      v19,
      v18,
      v32,
      &v31,
      v30,
      (volatile signed __int64 **)&v35,
      v34);
    v17 = 1;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
  {
    EtwTraceThreadAffinity(a1, *(_WORD *)(a1 + 560), v15, 0, *(unsigned __int16 **)(a1 + 552), 1335);
    if ( v17 )
      EtwTraceThreadAffinity(a1, *(_WORD *)(a1 + 584), v15, 0, *(unsigned __int16 **)(a1 + 576), 1334);
  }
  if ( _bittest((const signed __int32 *)&xmmword_140FC5B10, 0x1Bu) )
    EtwTraceIdealProcessor(a1, 1350LL, v28, v20);
  if ( _bittest((const signed __int32 *)&xmmword_140FC5B10, 0x1Bu) )
    EtwTraceIdealProcessor(a1, 1351LL, v29, (unsigned int)v8);
  if ( (WORD2(xmmword_140FC5B10) & 0x200) != 0 )
  {
    LOBYTE(v16) = 1;
    KiCpuPartitionCheckAffinitization(a1, a3, 0LL, v16);
  }
}
