/*
 * XREFs of ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180015C0C
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015290 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180019DA4 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180037FFC (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180038080 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180038174 (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800458BC (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18006AE58 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     RmpResourceSetPropertiesRemoveAdditiveResources @ 0x18006C64C (RmpResourceSetPropertiesRemoveAdditiveResources.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EB88 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wi.c)
 *     ?HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800847BC (-HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall HampWakeContextTryUpdateActivityState(
        struct _HAM_HOST_WAKE_CONTEXT *a1,
        struct _HAM_HOST_WAKE_CONTEXT_WORKER_STATE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _RTL_BALANCED_NODE **v6; // r14
  unsigned __int64 v7; // rdi
  int v8; // r15d
  unsigned __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-E0h] BYREF
  int v11; // [rsp+24h] [rbp-DCh]
  int v12; // [rsp+28h] [rbp-D8h]
  int v13; // [rsp+134h] [rbp+34h]
  char v14[40]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v15; // [rsp+160h] [rbp+60h]
  int v16; // [rsp+190h] [rbp+90h]

  memset_0(&v10, 0, 0x188uLL);
  if ( ((*((_BYTE *)a1 + 160) & 2) != 0) != ((*((_BYTE *)a2 + 32) & 2) != 0) )
  {
    if ( (*((_BYTE *)a2 + 32) & 2) == 0 )
      goto LABEL_25;
    HampActivityPropertiesInitialize(L"WakeReference", &word_1800C10AC, (struct _HAM_ACTIVITY_PROPERTIES *)&v10);
    v13 = 0;
    v10 |= 0x42400u;
    v11 |= 4u;
    v12 |= 8u;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetImpl'::`2'::impl) )
      v11 |= 0x400u;
    RmpResourceSetPropertiesRemoveAdditiveResources(v14);
    v4 = *((_QWORD *)a1 + 7);
    v15 |= 0x20uLL;
    v16 &= 0xFFFFFFFC;
    if ( (int)HamSrvCreateActivityInternal(
                *(struct _HAM_CLIENT_CONTEXT **)(v4 + 8),
                *((_QWORD *)a1 + 21),
                (struct _HAM_ACTIVITY_PROPERTIES *)&v10,
                (unsigned __int64 *)a1 + 11) < 0 )
      goto LABEL_26;
    HampWakeManagerAcquireLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a1 + 7));
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    v6 = (struct _RTL_BALANCED_NODE **)(*((_QWORD *)a1 + 7) + 80LL);
    v7 = (unsigned __int64)*v6;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 7) + 88LL) & 1) != 0 )
    {
      if ( v7 )
        v7 ^= (unsigned __int64)v6;
    }
    LOBYTE(v5) = 0;
    v8 = *(_BYTE *)(*((_QWORD *)a1 + 7) + 88LL) & 1;
    if ( v7 )
    {
      while ( 1 )
      {
        if ( (int)HampWakeContextTreeCompareByActivityId((char *)a1 + 88, (struct _RTL_BALANCED_NODE *)v7) < 0 )
        {
          v9 = *(_QWORD *)v7;
          if ( v8 )
          {
            if ( !v9 )
              goto LABEL_23;
            v9 ^= v7;
          }
          if ( !v9 )
          {
LABEL_23:
            LOBYTE(v5) = 0;
            break;
          }
        }
        else
        {
          v9 = *(_QWORD *)(v7 + 8);
          if ( v8 )
          {
            if ( !v9 )
              goto LABEL_17;
            v9 ^= v7;
          }
          if ( !v9 )
          {
LABEL_17:
            LOBYTE(v5) = 1;
            break;
          }
        }
        v7 = v9;
      }
    }
    RtlRbInsertNodeEx(v6, v7, v5, (char *)a1 + 64);
    HampWakeManagerReleaseLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a1 + 7));
    if ( (int)HamSrvStartActivityAsync(*(_QWORD *)(*((_QWORD *)a1 + 7) + 8LL), *((_QWORD *)a1 + 11), 0LL, 0LL) < 0 )
    {
LABEL_25:
      HampWakeContextCloseActivity(a1);
LABEL_26:
      *((_QWORD *)a2 + 2) = 0LL;
      *((_QWORD *)a2 + 3) = 0LL;
      *((_BYTE *)a2 + 32) &= ~2u;
    }
  }
}
