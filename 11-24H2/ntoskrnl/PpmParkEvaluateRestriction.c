/*
 * XREFs of PpmParkEvaluateRestriction @ 0x1404E5C48
 * Callers:
 *     PpmParkComputeDiff @ 0x1404E5A28 (PpmParkComputeDiff.c)
 * Callees:
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14032DF20 (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     PpmEventTraceHeteroSets @ 0x14042BE28 (PpmEventTraceHeteroSets.c)
 *     PpmEventParkNodeRestriction @ 0x1404E4890 (PpmEventParkNodeRestriction.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     KeUpdateProcessorRestrictions @ 0x1405B245C (KeUpdateProcessorRestrictions.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B273C (KeUpdateProcessorRestrictionsEx.c)
 */

void __fastcall PpmParkEvaluateRestriction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // di
  int v6; // eax
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v14; // r8
  char updated; // al
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 1236) )
  {
LABEL_2:
    v4 = 1;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 1232) != 3 )
  {
LABEL_11:
    if ( !*(_BYTE *)(a1 + 1254) )
      return;
    goto LABEL_12;
  }
  if ( !(unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4) )
  {
    v7 = *(unsigned __int16 *)(a1 + 4);
    if ( (unsigned __int16)v7 >= PpmPerfChangedCoreParkingMask.Count )
      v8 = 0LL;
    else
      v8 = PpmPerfChangedCoreParkingMask.Bitmap[v7];
    if ( (v8 & *(_QWORD *)(a1 + 16)) != 0 )
      goto LABEL_2;
    goto LABEL_11;
  }
  v6 = KiAndAffinityExNoResult((struct _KAFFINITY_EX *)(a1 + 48), &PpmPerfChangedCoreParkingMask);
  v4 = v6 != 0;
  if ( !v6 )
    goto LABEL_11;
LABEL_12:
  PpmEventParkNodeRestriction(0LL, a1, a3, a4);
  if ( v4 )
  {
    IsEnabledDeviceUsageNoInline = Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(v10, v9, v11, v12);
    v14 = *(_QWORD *)(a1 + 1256);
    if ( IsEnabledDeviceUsageNoInline )
    {
      updated = KeUpdateProcessorRestrictionsEx(
                  *(unsigned __int16 *)(a1 + 6),
                  (int)a1 + 48,
                  *(unsigned __int16 *)(a1 + 1252),
                  *(_QWORD *)(a1 + 1256),
                  a1 + 1238);
    }
    else
    {
      v16 = *(unsigned __int16 *)(a1 + 8);
      v17 = *(unsigned __int16 *)(a1 + 1252);
      v18 = *(_BYTE *)(a1 + 1238);
      updated = KeUpdateProcessorRestrictions(v16, v17, v14, &v18);
    }
    if ( updated )
      PpmEventTraceHeteroSets(2);
    *(_BYTE *)(a1 + 1236) = 0;
  }
}
