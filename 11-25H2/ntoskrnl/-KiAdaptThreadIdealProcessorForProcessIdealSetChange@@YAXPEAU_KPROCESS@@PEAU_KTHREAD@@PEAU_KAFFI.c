/*
 * XREFs of ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x1404A51A8
 * Callers:
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x1403AE6F4 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 * Callees:
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140201B78 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KeSelectIdealProcessor @ 0x14026B628 (KeSelectIdealProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     EtwTraceIdealProcessor @ 0x1404B0E7C (EtwTraceIdealProcessor.c)
 */

void __fastcall KiAdaptThreadIdealProcessorForProcessIdealSetChange(
        struct _KPROCESS *a1,
        struct _KTHREAD *a2,
        struct _KAFFINITY_EX *a3,
        struct _KAFFINITY_EX *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        unsigned int *a7)
{
  unsigned __int8 *v7; // r12
  unsigned __int8 *v8; // r13
  int v10; // eax
  char v13; // r15
  int v14; // edi
  unsigned int *v15; // r14
  __int64 UserAffinityPrimaryGroup; // r8
  _KAFFINITY_EX *UserAffinity; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rcx
  int v21; // r11d
  __int64 UserIdealProcessor; // rdi
  __int64 v23; // rbp
  unsigned __int64 v24; // r10
  __int64 v25; // rsi
  __int64 v26; // rdx
  bool v27; // zf
  __int128 v28; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp+10h] BYREF

  v7 = a5;
  v8 = a6;
  v30 = 0LL;
  v28 = 0LL;
  v10 = *(&a2->MiscFlags + 1);
  *a5 = 0;
  *v8 = 0;
  v13 = 0;
  if ( (v10 & 1) != 0 )
    return;
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&a2->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( a2->ThreadLock );
  }
  v15 = a7;
  if ( (*((_DWORD *)&a2->0 + 1) & 1) != 0 )
    goto LABEL_21;
  if ( (a2->MiscFlags & 8) != 0 )
  {
    UserAffinityPrimaryGroup = a2->UserAffinityPrimaryGroup;
    UserAffinity = a2->UserAffinity;
  }
  else
  {
    UserAffinityPrimaryGroup = a2->AffinityPrimaryGroup;
    UserAffinity = a2->Affinity;
  }
  WORD4(v28) = UserAffinityPrimaryGroup;
  v18 = (unsigned __int16)UserAffinityPrimaryGroup >= UserAffinity->Count
      ? 0LL
      : UserAffinity->Bitmap[UserAffinityPrimaryGroup];
  *(_QWORD *)&v28 = v18;
  v19 = (unsigned __int16)UserAffinityPrimaryGroup >= a3->Count
      ? 0LL
      : a3->Bitmap[(unsigned __int16)UserAffinityPrimaryGroup];
  v20 = (unsigned __int16)UserAffinityPrimaryGroup >= a4->Count
      ? 0LL
      : a4->Bitmap[(unsigned __int16)UserAffinityPrimaryGroup];
  if ( v19 == v20 )
    goto LABEL_21;
  if ( (v19 & v20) == v20 )
  {
    v21 = 1;
LABEL_39:
    v24 = v20;
    goto LABEL_20;
  }
  if ( (v19 & v20) != v19 )
  {
    v21 = 3;
    goto LABEL_39;
  }
  v21 = 2;
  v24 = v19 ^ v20;
LABEL_20:
  UserIdealProcessor = a2->UserIdealProcessor;
  v30 = v24;
  v23 = KiProcessorBlock[UserIdealProcessor];
  if ( (v24 & *(_QWORD *)(v23 + 200)) == 0 && (v18 & v24) != 0 )
  {
    if ( v21 != 2 || (v13 = 1, *a7 % (unsigned int)__popcnt(v20) >= (unsigned int)__popcnt(v19)) )
    {
      v25 = (unsigned __int16)KeSelectIdealProcessor(
                                (__int64)&v28,
                                &a1->IdealProcessorAssignmentBlock->ThreadSeed[(unsigned __int16)UserAffinityPrimaryGroup],
                                (__int64)&v30,
                                1u);
      KiSetIdealProcessorThread(a2, v25, 0, 0LL, 2);
      a2->ThreadLock = 0LL;
      v26 = KiProcessorBlock[v25];
      *v7 = (_DWORD)v25 != (_DWORD)UserIdealProcessor;
      v27 = (xmmword_140FC5B10 & 0x8000000) == 0;
      *v8 = *(_WORD *)(*(_QWORD *)(v26 + 192) + 138LL) != *(_WORD *)(*(_QWORD *)(v23 + 192) + 138LL);
      if ( !v27 )
        EtwTraceIdealProcessor(a2, 1351LL, (unsigned int)UserIdealProcessor, (unsigned int)v25);
      goto LABEL_22;
    }
  }
LABEL_21:
  a2->ThreadLock = 0LL;
LABEL_22:
  if ( v13 )
    *v15 = ExGenRandom(1);
}
