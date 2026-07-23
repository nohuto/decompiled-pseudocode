/*
 * XREFs of KiSetAffinityThread @ 0x1403A0218
 * Callers:
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     KeSetUserAffinityThread @ 0x140330B44 (KeSetUserAffinityThread.c)
 *     KiSetLegacyAffinityThread @ 0x14039FF9C (KiSetLegacyAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A1240 (KeSetUserGroupAffinityThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiComputeThreadAffinity @ 0x1402A9724 (KiComputeThreadAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14031887C (KiUpdateNodeAffinitizedFlag.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiQueueTebUpdateApc @ 0x1403A05FC (KiQueueTebUpdateApc.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403A0DB0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KeSelectIdealProcessor @ 0x1403A10AC (KeSelectIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1403A2658 (EtwTraceThreadAffinity.c)
 *     EtwTraceIdealProcessor @ 0x1404AC65C (EtwTraceIdealProcessor.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BD680 (KiCpuPartitionCheckAffinitization.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetAffinityThread(__int64 a1, struct _SINGLE_LIST_ENTRY *a2, struct _KAFFINITY_EX *a3, char a4)
{
  unsigned int v6; // edi
  struct _KAFFINITY_EX *v7; // rcx
  unsigned __int16 Size; // dx
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  _BYTE *v12; // r8
  unsigned __int64 v13; // rdx
  char v14; // di
  int v15; // r8d
  __int64 v16; // r9
  __int64 result; // rax
  char v18; // r13
  char v19; // r13
  int v20; // r8d
  int v21; // r9d
  unsigned __int16 i; // dx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int16 v26; // ax
  int v27; // r8d
  _WORD v29[4]; // [rsp+54h] [rbp-55h] BYREF
  int v30; // [rsp+5Ch] [rbp-4Dh]
  int v31; // [rsp+60h] [rbp-49h]
  int v32; // [rsp+64h] [rbp-45h]
  __int64 v33; // [rsp+68h] [rbp-41h] BYREF
  __int64 v34; // [rsp+70h] [rbp-39h] BYREF
  __int64 v35; // [rsp+78h] [rbp-31h] BYREF
  __int128 v36; // [rsp+80h] [rbp-29h] BYREF
  struct _SINGLE_LIST_ENTRY *v37; // [rsp+90h] [rbp-19h]
  __int64 v38[2]; // [rsp+98h] [rbp-11h] BYREF
  _QWORD v39[3]; // [rsp+A8h] [rbp-1h] BYREF

  v37 = a2;
  v33 = 0LL;
  v29[0] = 0;
  v35 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
  v31 = *(_DWORD *)(a1 + 588);
  v30 = v31;
  Size = v7->Size;
  v32 = *(_DWORD *)(a1 + 196);
  KiCopyAffinityEx(v7, Size, a3);
  v9 = *(unsigned int *)(a1 + 196);
  v10 = KiProcessorBlock[v9];
  v11 = *(unsigned __int8 *)(v10 + 208);
  v12 = (_BYTE *)(v10 + 209);
  if ( (unsigned __int16)v11 < a3->Count && (v13 = a3->Bitmap[v11] >> *v12, (v13 & 1) != 0) )
  {
    v14 = 0;
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0);
    v14 = 0;
    for ( i = 0; i < a3->Count; ++i )
    {
      v23 = a3->Bitmap[i];
      if ( v23 )
      {
        WORD4(v36) = i;
        *(_QWORD *)&v36 = v23;
        goto LABEL_25;
      }
    }
    i = WORD4(v36);
LABEL_25:
    v29[0] = (unsigned __int8)*v12;
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 184LL);
    v39[0] = *(_QWORD *)(v10 + 36464);
    v39[1] = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 128LL);
    if ( i >= *(_WORD *)(v24 + 208) )
      v25 = 0LL;
    else
      v25 = *(_QWORD *)(v24 + 8LL * i + 216);
    v39[2] = v25;
    v26 = KeSelectIdealProcessor(&v36, v29, v39, 3LL);
    *(_DWORD *)(a1 + 196) = v26;
    LODWORD(v9) = v26;
    v10 = KiProcessorBlock[v26];
    *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v10 + 208);
  }
  LOBYTE(v13) = a4;
  KiQueueTebUpdateApc(a1, v13);
  result = *(unsigned int *)(a1 + 116);
  v18 = 0;
  if ( (result & 8) != 0 )
  {
    v14 = 1;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else
  {
    *(_OWORD *)v38 = 0LL;
    v19 = KiAcquireThreadStateLockForWrite(a1, (unsigned int)&v35, (unsigned int)&v34, (unsigned int)&v33, (__int64)v38);
    KiCopyAffinityEx(*(struct _KAFFINITY_EX **)(a1 + 576), *(_WORD *)(*(_QWORD *)(a1 + 576) + 2LL), a3);
    if ( !(unsigned int)KiComputeThreadAffinity(a1) )
    {
      *(_DWORD *)(a1 + 588) = v9;
      *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v10 + 208);
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v10, a1);
    }
    LOBYTE(v21) = v19;
    result = KiRescheduleThreadAfterAffinityChange(
               a1,
               *(_QWORD *)(a1 + 576),
               v20,
               v21,
               v35,
               (__int64)&v34,
               v33,
               (__int64)v38,
               v37);
    v18 = 1;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
  {
    LOBYTE(v15) = v14;
    result = EtwTraceThreadAffinity(a1, *(unsigned __int16 *)(a1 + 560), v15, 0, *(_QWORD *)(a1 + 552), 1335);
    if ( v18 )
    {
      LOBYTE(v27) = v14;
      result = EtwTraceThreadAffinity(a1, *(unsigned __int16 *)(a1 + 584), v27, 0, *(_QWORD *)(a1 + 576), 1334);
    }
  }
  if ( _bittest((const signed __int32 *)&xmmword_140FC6B50, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1350LL);
  if ( _bittest((const signed __int32 *)&xmmword_140FC6B50, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1351LL);
  if ( (WORD2(xmmword_140FC6B50) & 0x200) != 0 )
  {
    LOBYTE(v16) = 1;
    return KiCpuPartitionCheckAffinitization(a1, a3, 0LL, v16);
  }
  return result;
}
