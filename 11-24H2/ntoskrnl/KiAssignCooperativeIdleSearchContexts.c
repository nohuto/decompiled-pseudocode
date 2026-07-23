/*
 * XREFs of KiAssignCooperativeIdleSearchContexts @ 0x1405B32DC
 * Callers:
 *     KiConfigureNodeSchedulingInformation @ 0x1405B3CEC (KiConfigureNodeSchedulingInformation.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRegisterProcessorWithCooperativeIdleSearchContext @ 0x1405C51A4 (KiRegisterProcessorWithCooperativeIdleSearchContext.c)
 *     KiMergeSmallSharedReadyQueueAssignments @ 0x1405C66E8 (KiMergeSmallSharedReadyQueueAssignments.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiAssignCooperativeIdleSearchContexts(__int64 a1)
{
  __int16 v2; // ax
  int i; // eax
  __int64 v4; // rcx
  int v5; // edx
  __int64 CurrentIrql; // rsi
  __int16 v7; // ax
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r14
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int16 v16; // ax
  int j; // eax
  __int64 v18; // rdi
  __int64 v19; // rbx
  void *v20; // rcx
  __int64 result; // rax
  __int64 v22; // [rsp+28h] [rbp-89h] BYREF
  unsigned __int16 *v23; // [rsp+30h] [rbp-81h] BYREF
  __int64 v24; // [rsp+38h] [rbp-79h]
  __int16 v25; // [rsp+40h] [rbp-71h]
  int v26; // [rsp+42h] [rbp-6Fh]
  __int16 v27; // [rsp+46h] [rbp-6Bh]
  __int64 v28; // [rsp+48h] [rbp-69h]
  _OWORD v29[4]; // [rsp+58h] [rbp-59h] BYREF
  _OWORD v30[4]; // [rsp+98h] [rbp-19h] BYREF

  LODWORD(v22) = 0;
  v26 = 0;
  v27 = 0;
  memset_0(v29, 255, 0x80uLL);
  v2 = *(_WORD *)(a1 + 136);
  v24 = *(_QWORD *)(a1 + 128);
  v25 = v2;
  v23 = 0LL;
  for ( i = KeEnumerateNextProcessor(&v22, &v23); !i; i = KeEnumerateNextProcessor(&v22, &v23) )
    *((_BYTE *)v29 + *(unsigned __int8 *)(KiProcessorBlock[(unsigned int)v22] + 209)) = *(_BYTE *)(*(_QWORD *)(KiProcessorBlock[(unsigned int)v22] + 36424)
                                                                                                 + 705LL);
  if ( (unsigned __int16)KiSubNodeCount <= 1u )
  {
    memset_0(v30, 255, sizeof(v30));
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 128);
    v30[0] = v29[0];
    v30[1] = v29[1];
    v30[2] = v29[2];
    v30[3] = v29[3];
    KiMergeSmallSharedReadyQueueAssignments(v4, (unsigned int)KiMaximumCooperativeIdleSearchWidth, v30);
  }
  CurrentIrql = KeGetCurrentIrql();
  v28 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
  }
  v7 = *(_WORD *)(a1 + 136);
  v24 = *(_QWORD *)(a1 + 128);
  v25 = v7;
  v23 = 0LL;
  if ( !(unsigned int)KeEnumerateNextProcessor(&v22, &v23) )
  {
    do
    {
      v8 = 0LL;
      v9 = 2LL;
      v10 = KiProcessorBlock[(unsigned int)v22];
      v11 = (_QWORD *)(v10 + 37912);
      do
      {
        v12 = *(unsigned __int8 *)(v10 + 209);
        v13 = *((unsigned __int8 *)&v29[v8] + v12);
        if ( (_BYTE)v13 != 0xFF )
        {
          if ( (_BYTE)v13 == (_BYTE)v12 )
            v14 = *(v11 - 2);
          else
            v14 = *(_QWORD *)((char *)v11
                            + KiProcessorBlock[*((unsigned int *)qword_140F22998
                                               + 64 * (unsigned __int64)*(unsigned __int16 *)(a1 + 136)
                                               + v13)]
                            - v10);
          v15 = v11[2];
          *v11 = v14;
          KiRegisterProcessorWithCooperativeIdleSearchContext(v14, v10, v15);
        }
        ++v11;
        v8 += 4LL;
        --v9;
      }
      while ( v9 );
    }
    while ( !(unsigned int)KeEnumerateNextProcessor(&v22, &v23) );
    LOBYTE(CurrentIrql) = v28;
  }
  v16 = *(_WORD *)(a1 + 136);
  v24 = *(_QWORD *)(a1 + 128);
  v25 = v16;
  v23 = 0LL;
  for ( j = KeEnumerateNextProcessor(&v22, &v23); !j; j = KeEnumerateNextProcessor(&v22, &v23) )
  {
    v18 = 2LL;
    v19 = KiProcessorBlock[(unsigned int)v22] + 37896;
    do
    {
      v20 = *(void **)v19;
      if ( *(_QWORD *)v19 && *(void **)(v19 + 16) != v20 )
      {
        ExFreePoolWithTag(v20, 0);
        *(_QWORD *)v19 = 0LL;
      }
      v19 += 8LL;
      --v18;
    }
    while ( v18 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
