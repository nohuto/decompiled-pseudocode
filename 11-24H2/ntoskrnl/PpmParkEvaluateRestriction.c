/*
 * XREFs of PpmParkEvaluateRestriction @ 0x1404EE4B8
 * Callers:
 *     PpmParkComputeDiff @ 0x1404EE290 (PpmParkComputeDiff.c)
 * Callees:
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140206940 (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     PpmEventTraceHeteroSets @ 0x140439268 (PpmEventTraceHeteroSets.c)
 *     PpmEventParkNodeRestriction @ 0x1404ED06C (PpmEventParkNodeRestriction.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B4FB0 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     KeUpdateProcessorRestrictions @ 0x1405B5194 (KeUpdateProcessorRestrictions.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B5474 (KeUpdateProcessorRestrictionsEx.c)
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
  if ( *(_BYTE *)(a1 + 1228) )
  {
LABEL_2:
    v4 = 1;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 1224) != 3 )
  {
LABEL_11:
    if ( !*(_BYTE *)(a1 + 1246) )
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
    v14 = *(_QWORD *)(a1 + 1248);
    if ( IsEnabledDeviceUsageNoInline )
    {
      updated = KeUpdateProcessorRestrictionsEx(
                  *(unsigned __int16 *)(a1 + 6),
                  (int)a1 + 48,
                  *(unsigned __int16 *)(a1 + 1244),
                  *(_QWORD *)(a1 + 1248),
                  a1 + 1230);
    }
    else
    {
      v16 = *(unsigned __int16 *)(a1 + 8);
      v17 = *(unsigned __int16 *)(a1 + 1244);
      v18 = *(_BYTE *)(a1 + 1230);
      updated = KeUpdateProcessorRestrictions(v16, v17, v14, &v18);
    }
    if ( updated )
      PpmEventTraceHeteroSets(2);
    *(_BYTE *)(a1 + 1228) = 0;
  }
}
