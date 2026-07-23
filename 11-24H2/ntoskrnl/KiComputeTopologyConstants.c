/*
 * XREFs of KiComputeTopologyConstants @ 0x1405C5F38
 * Callers:
 *     KiSetFeatureBits @ 0x140B5BC74 (KiSetFeatureBits.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B2278 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     KiComputeTopologyConstantsAmd @ 0x1405C6050 (KiComputeTopologyConstantsAmd.c)
 *     KiComputeTopologyConstantsIntelCompatible @ 0x1405C6328 (KiComputeTopologyConstantsIntelCompatible.c)
 */

char __fastcall KiComputeTopologyConstants(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        __int128 *a5,
        int *a6)
{
  int IsEnabledNoReportingNoInline; // eax
  int v7; // ecx
  int v8; // ecx
  int *v9; // rdx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)a6 = 0LL;
  *((_OWORD *)a6 + 1) = 0LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
  {
    v12 = *a5;
    KiComputeTopologyConstantsIntelCompatible(a1, a2, &v12, a6);
  }
  else if ( (_DWORD)a1 == 1 )
  {
    v11 = *a4;
    v12 = *a5;
    ((void (__fastcall *)(_QWORD, __int128 *, __int128 *, int *))KiComputeTopologyConstantsAmd)(a3, &v12, &v11, a6);
  }
  a6[1] = *a6;
  IsEnabledNoReportingNoInline = Feature_PpmParkEx__private_IsEnabledNoReportingNoInline();
  v7 = *a6;
  if ( IsEnabledNoReportingNoInline )
  {
    v9 = a6 + 2;
    if ( (v7 & 1) == 0 )
    {
      v7 |= 1u;
      *v9 = 1;
      *a6 = v7;
    }
    if ( (v7 & 2) == 0 )
    {
      v7 |= 2u;
      a6[3] = 1;
      *a6 = v7;
    }
    if ( (v7 & 4) == 0 )
    {
      IsEnabledNoReportingNoInline = a6[3];
      v7 |= 4u;
      *a6 = v7;
      a6[4] = IsEnabledNoReportingNoInline;
    }
    if ( (v7 & 8) == 0 )
    {
      IsEnabledNoReportingNoInline = *v9;
      v7 |= 8u;
      *a6 = v7;
      a6[5] = IsEnabledNoReportingNoInline;
    }
    if ( (v7 & 0x20) == 0 )
    {
      IsEnabledNoReportingNoInline = a6[2] * a6[4];
      v8 = v7 | 0x20;
      a6[7] = IsEnabledNoReportingNoInline;
      goto LABEL_21;
    }
  }
  else
  {
    LOBYTE(IsEnabledNoReportingNoInline) = v7 & 6;
    if ( (v7 & 6) == 2 )
    {
      IsEnabledNoReportingNoInline = a6[3];
      v7 |= 4u;
      *a6 = v7;
      a6[4] = IsEnabledNoReportingNoInline;
    }
    if ( (v7 & 8) == 0 && (v7 & 1) != 0 )
    {
      IsEnabledNoReportingNoInline = a6[2];
      v8 = v7 | 8;
      a6[5] = IsEnabledNoReportingNoInline;
LABEL_21:
      *a6 = v8;
    }
  }
  return IsEnabledNoReportingNoInline;
}
