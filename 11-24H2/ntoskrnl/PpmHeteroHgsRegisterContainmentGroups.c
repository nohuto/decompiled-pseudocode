/*
 * XREFs of PpmHeteroHgsRegisterContainmentGroups @ 0x1405D49AC
 * Callers:
 *     PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x1405D47C4 (PpmHeteroHgsEvalAndRegisterContainmentGroups.c)
 *     PpmParkRegisterParking @ 0x1405D72D0 (PpmParkRegisterParking.c)
 *     PpmParkInitParkNode @ 0x1405E0E1C (PpmParkInitParkNode.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1405D660C (PpmEventHgsContainmentGroupInfo.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmHeteroHgsRegisterContainmentGroups(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // rsi
  __int64 v4; // r13
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  int v8; // r14d
  __int64 v9; // rdi
  unsigned int v10; // esi
  __int64 Prcb; // rax
  unsigned __int16 *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rax
  unsigned __int16 *v16; // rcx
  __int64 v17; // rax
  unsigned __int16 *v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h]
  __int16 v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+32h] [rbp-16h]
  __int16 v22; // [rsp+36h] [rbp-12h]
  unsigned int v26; // [rsp+A8h] [rbp+60h] BYREF

  v3 = a3;
  v4 = a1;
  v21 = 0;
  v22 = 0;
  v26 = 0;
  result = ExAllocatePool2(0x40uLL, 0x340uLL, 0x704D5050u);
  v6 = result;
  if ( !result )
    return result;
  v7 = 0LL;
  v8 = 0;
  v9 = 8LL;
  do
  {
    *(_QWORD *)(v7 + v6 + 16) = 2097153LL;
    memset_0((void *)(v7 + v6 + 24), 0, 0x100uLL);
    if ( !(unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
    {
      v20 = *((_WORD *)v3 + 4);
      v19 = *v3;
      v18 = 0LL;
      if ( (unsigned int)KeEnumerateNextProcessor(&v26, &v18) )
        goto LABEL_28;
      while ( 1 )
      {
        v10 = v26;
        Prcb = KeGetPrcb(v26);
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            if ( *(_BYTE *)(Prcb + 35432) == 1 )
            {
              v12 = (unsigned __int16 *)(v6 + 280);
              goto LABEL_13;
            }
          }
          else if ( v8 == 2 )
          {
            v12 = (unsigned __int16 *)(v6 + 544);
LABEL_13:
            ++*(_WORD *)(v9 + v6);
            KeAddProcessorAffinityEx(v12, v10);
          }
        }
        else if ( !*(_BYTE *)(Prcb + 35432) )
        {
          v12 = (unsigned __int16 *)(v6 + 16);
          goto LABEL_13;
        }
        if ( (unsigned int)KeEnumerateNextProcessor(&v26, &v18) )
          goto LABEL_27;
      }
    }
    v20 = 0;
    v13 = *(_QWORD *)(v4 + 56);
    v18 = (unsigned __int16 *)(v4 + 48);
    v19 = v13;
    if ( (unsigned int)KeEnumerateNextProcessor(&v26, &v18) )
      goto LABEL_28;
    do
    {
      v14 = v26;
      v15 = KeGetPrcb(v26);
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          if ( *(_BYTE *)(v15 + 35432) != 1 )
            continue;
          v16 = (unsigned __int16 *)(v6 + 280);
        }
        else
        {
          if ( v8 != 2 )
            continue;
          v16 = (unsigned __int16 *)(v6 + 544);
        }
      }
      else
      {
        if ( *(_BYTE *)(v15 + 35432) )
          continue;
        v16 = (unsigned __int16 *)(v6 + 16);
      }
      ++*(_WORD *)(v9 + v6);
      KeAddProcessorAffinityEx(v16, v14);
    }
    while ( !(unsigned int)KeEnumerateNextProcessor(&v26, &v18) );
LABEL_27:
    v3 = a3;
    v4 = a1;
LABEL_28:
    if ( *(_WORD *)(v9 + v6) )
      ++*(_DWORD *)v6;
    ++v8;
    v7 += 264LL;
    v9 += 2LL;
  }
  while ( v8 < 3 );
  *(_DWORD *)(v6 + 4) = 2;
  if ( a2 )
  {
    v17 = *(_QWORD *)(a2 + 1280);
    if ( v17 )
    {
      *(_DWORD *)(v6 + 812) = *(_DWORD *)(v17 + 812);
      *(_BYTE *)(v6 + 808) = *(_BYTE *)(*(_QWORD *)(a2 + 1280) + 808LL);
      *(_BYTE *)(v6 + 827) = *(_BYTE *)(*(_QWORD *)(a2 + 1280) + 827LL);
    }
  }
  PpmHeteroHgsContainmentState |= 4u;
  *(_QWORD *)(v4 + 1280) = v6;
  return PpmEventHgsContainmentGroupInfo(v4, 0LL);
}
