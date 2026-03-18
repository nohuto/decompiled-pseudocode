/*
 * XREFs of PpmHeteroHgsRegisterContainmentGroups @ 0x1405D2974
 * Callers:
 *     PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x1405D278C (PpmHeteroHgsEvalAndRegisterContainmentGroups.c)
 *     PpmParkRegisterParking @ 0x1405D55E0 (PpmParkRegisterParking.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x1404F2210 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1405D4700 (PpmEventHgsContainmentGroupInfo.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmHeteroHgsRegisterContainmentGroups(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // r15
  unsigned int v10; // r14d
  __int64 Prcb; // rax
  unsigned __int16 *v12; // rcx
  __int64 v13; // rax
  unsigned __int16 *v14[2]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v15; // [rsp+30h] [rbp-48h]
  int v16; // [rsp+32h] [rbp-46h]
  __int16 v17; // [rsp+36h] [rbp-42h]
  unsigned int v19; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  result = ExAllocatePool2(0x40uLL);
  v7 = result;
  if ( result )
  {
    v8 = 0;
    v9 = 0LL;
    do
    {
      *(_QWORD *)(v9 + v7 + 16) = 2097153LL;
      memset_0((void *)(v9 + v7 + 24), 0, 0x100uLL);
      v15 = *(_WORD *)(a3 + 8);
      v14[1] = *(unsigned __int16 **)a3;
      v14[0] = 0LL;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v19, v14) )
      {
        v10 = v19;
        Prcb = KeGetPrcb(v19);
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            if ( *(_BYTE *)(Prcb + 35432) == 1 )
            {
              v12 = (unsigned __int16 *)(v7 + 280);
              goto LABEL_12;
            }
          }
          else if ( v8 == 2 )
          {
            v12 = (unsigned __int16 *)(v7 + 544);
LABEL_12:
            ++*(_BYTE *)(v3 + v7 + 8);
            KeAddProcessorAffinityEx(v12, v10);
          }
        }
        else if ( !*(_BYTE *)(Prcb + 35432) )
        {
          v12 = (unsigned __int16 *)(v7 + 16);
          goto LABEL_12;
        }
      }
      if ( *(_BYTE *)(v3 + v7 + 8) )
        ++*(_DWORD *)v7;
      ++v8;
      ++v3;
      v9 += 264LL;
    }
    while ( v8 < 3 );
    *(_DWORD *)(v7 + 4) = 2;
    if ( (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline() && a2 )
    {
      v13 = *(_QWORD *)(a2 + 192);
      if ( v13 )
      {
        *(_DWORD *)(v7 + 812) = *(_DWORD *)(v13 + 812);
        *(_BYTE *)(v7 + 808) = *(_BYTE *)(*(_QWORD *)(a2 + 192) + 808LL);
        *(_BYTE *)(v7 + 827) = *(_BYTE *)(*(_QWORD *)(a2 + 192) + 827LL);
      }
    }
    PpmHeteroHgsContainmentState |= 4u;
    *(_QWORD *)(a1 + 192) = v7;
    return PpmEventHgsContainmentGroupInfo(a1, 0LL);
  }
  return result;
}
