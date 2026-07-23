/*
 * XREFs of KiMayStealStandbyThread @ 0x1402A6F50
 * Callers:
 *     KiSearchForNewThreadsInStandby @ 0x1402A3718 (KiSearchForNewThreadsInStandby.c)
 *     KiFindStandbyThreadForSteal @ 0x1402A6E80 (KiFindStandbyThreadForSteal.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x1404E02F0 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 * Callees:
 *     KiGetProcessorClassForPolicy @ 0x140475D94 (KiGetProcessorClassForPolicy.c)
 *     Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline @ 0x1405C5150 (Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall KiMayStealStandbyThread(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // cl
  unsigned __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int8 ProcessorClassForPolicy; // al
  unsigned __int8 v13; // r10

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 && v3 != *(_QWORD *)(a1 + 24) && v3 != *(_QWORD *)(a1 + 14392) && v3 != *(_QWORD *)(a1 + 36480) )
  {
    if ( (**(_BYTE **)(a1 + 56) & 0x7Fu) >= 0x10 )
      goto LABEL_14;
    if ( (KiVelocityFlags & 0x1000000) != 0 && *(_BYTE *)(a1 + 7) )
    {
      if ( (a3 & 1) == 0 )
        goto LABEL_14;
      v6 = *(_QWORD *)(a1 + 34880);
      if ( v6 && *(_DWORD *)(v6 + 40) )
      {
        v7 = *(unsigned int *)(a1 + 34944);
        v8 = *(_BYTE *)(a1 + 172);
        v9 = *(unsigned int *)(344 * v7 + *(_QWORD *)(a1 + 34880) + 1336);
        if ( v8 )
          v9 <<= v8;
        if ( (unsigned __int64)(4 * ((v9 * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64)) > *(unsigned int *)(v3 + 84) )
        {
LABEL_14:
          if ( !a2 )
            return 1;
          if ( !(unsigned int)Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline() )
            return *(_BYTE *)(a1 + 35337) == *(_BYTE *)(a2 + 35337);
          if ( !KeHeteroSystem )
            return 1;
          KiGetProcessorClassForPolicy(
            a1,
            (unsigned int)KiDynamicHeteroCpuPolicy[2 * (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) & 7)
                                                 + (((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 64LL) >> 6) & 1)],
            (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) >> 3) & 7);
          ProcessorClassForPolicy = KiGetProcessorClassForPolicy(a2, v10, v11);
          if ( v13 <= ProcessorClassForPolicy )
            return 1;
        }
      }
    }
  }
  return 0;
}
