/*
 * XREFs of ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x1404A092C
 * Callers:
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x14033997C (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140370B7C (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KeSelectIdealProcessor @ 0x1403A10AC (KeSelectIdealProcessor.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     EtwTraceIdealProcessor @ 0x1404AC65C (EtwTraceIdealProcessor.c)
 */

void __fastcall KiAdaptThreadIdealProcessorForProcessIdealSetChange(
        struct _KPROCESS *a1,
        __int64 a2,
        __int64 UserAffinityPrimaryGroup,
        __int64 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        unsigned int *a7)
{
  unsigned __int8 *v7; // r12
  unsigned __int8 *v8; // r13
  struct _KAFFINITY_EX *v9; // rbp
  int v10; // eax
  struct _KAFFINITY_EX *v11; // rsi
  struct _KTHREAD *v12; // rbx
  char v13; // r15
  unsigned int v14; // edi
  unsigned int *v15; // r14
  _KAFFINITY_EX *UserAffinity; // rdx
  unsigned __int64 v17; // rcx
  int v18; // r11d
  __int64 UserIdealProcessor; // rdi
  __int64 v20; // rbp
  unsigned __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool v24; // zf
  __int128 v25; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp+10h] BYREF

  v7 = a5;
  v8 = a6;
  v27 = 0LL;
  v9 = (struct _KAFFINITY_EX *)a4;
  v25 = 0LL;
  v10 = *(_DWORD *)(a2 + 120);
  v11 = (struct _KAFFINITY_EX *)UserAffinityPrimaryGroup;
  *a5 = 0;
  v12 = (struct _KTHREAD *)a2;
  *v8 = 0;
  v13 = 0;
  if ( (v10 & 1) != 0 )
    return;
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v12->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v14);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( v12->ThreadLock );
  }
  v15 = a7;
  if ( (*((_DWORD *)&v12->0 + 1) & 1) != 0 )
    goto LABEL_21;
  if ( (v12->MiscFlags & 8) != 0 )
  {
    UserAffinityPrimaryGroup = v12->UserAffinityPrimaryGroup;
    UserAffinity = v12->UserAffinity;
  }
  else
  {
    UserAffinityPrimaryGroup = v12->AffinityPrimaryGroup;
    UserAffinity = v12->Affinity;
  }
  WORD4(v25) = UserAffinityPrimaryGroup;
  a2 = (unsigned __int16)UserAffinityPrimaryGroup >= UserAffinity->Count
     ? 0LL
     : UserAffinity->Bitmap[UserAffinityPrimaryGroup];
  *(_QWORD *)&v25 = a2;
  a4 = (unsigned __int16)UserAffinityPrimaryGroup >= v11->Count
     ? 0LL
     : v11->Bitmap[(unsigned __int16)UserAffinityPrimaryGroup];
  v17 = (unsigned __int16)UserAffinityPrimaryGroup >= v9->Count
      ? 0LL
      : v9->Bitmap[(unsigned __int16)UserAffinityPrimaryGroup];
  if ( a4 == v17 )
    goto LABEL_21;
  if ( (a4 & v17) == v17 )
  {
    v18 = 1;
LABEL_39:
    v21 = v17;
    goto LABEL_20;
  }
  if ( (a4 & v17) != a4 )
  {
    v18 = 3;
    goto LABEL_39;
  }
  v18 = 2;
  v21 = a4 ^ v17;
LABEL_20:
  UserIdealProcessor = v12->UserIdealProcessor;
  v27 = v21;
  v20 = KiProcessorBlock[UserIdealProcessor];
  if ( (v21 & *(_QWORD *)(v20 + 200)) == 0 && (a2 & v21) != 0 )
  {
    if ( v18 != 2 || (a2 = *a7 % (unsigned int)__popcnt(v17), v13 = 1, (unsigned int)a2 >= (unsigned int)__popcnt(a4)) )
    {
      v22 = (unsigned __int16)KeSelectIdealProcessor(
                                (__int64)&v25,
                                &a1->IdealProcessorAssignmentBlock->ThreadSeed[(unsigned __int16)UserAffinityPrimaryGroup],
                                (__int64)&v27,
                                1u);
      KiSetIdealProcessorThread(v12, v22, 0, 0LL, 2);
      v12->ThreadLock = 0LL;
      v23 = KiProcessorBlock[v22];
      *v7 = (_DWORD)v22 != (_DWORD)UserIdealProcessor;
      a2 = *(_QWORD *)(v23 + 192);
      v24 = (xmmword_140FC6B50 & 0x8000000) == 0;
      *v8 = *(_WORD *)(a2 + 138) != *(_WORD *)(*(_QWORD *)(v20 + 192) + 138LL);
      if ( !v24 )
        EtwTraceIdealProcessor(v12, 1351LL);
      goto LABEL_22;
    }
  }
LABEL_21:
  v12->ThreadLock = 0LL;
LABEL_22:
  if ( v13 )
    *v15 = ExGenRandom(1, a2, UserAffinityPrimaryGroup, a4);
}
