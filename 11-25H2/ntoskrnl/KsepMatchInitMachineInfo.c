/*
 * XREFs of KsepMatchInitMachineInfo @ 0x140C1AD0C
 * Callers:
 *     KseInitialize @ 0x140C1A2FC (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x14048E750 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1404D3784 (KsepDebugPrint.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140C1A8B0 (KsepMatchInitAcpiOemInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140C1AA00 (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitCpuInfo @ 0x140C1AC7C (KsepMatchInitCpuInfo.c)
 */

__int64 __fastcall KsepMatchInitMachineInfo(__int64 a1)
{
  int matched; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  char v4; // al
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  char v8; // al
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  char v12; // al

  matched = KsepMatchInitAcpiOemInfo(a1);
  v2 = matched;
  if ( matched < 0 )
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v3 + 1] = matched;
    v4 = KsepDebugFlag;
    KsepHistoryErrors[2 * v3] = 655516;
    if ( (v4 & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", v2);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", v2);
  }
  v5 = KsepMatchInitCpuInfo();
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v7 + 1] = v5;
    v8 = KsepDebugFlag;
    KsepHistoryErrors[2 * v7] = 655522;
    if ( (v8 & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v6);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v6);
  }
  v9 = KsepMatchInitBiosInfo();
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v11 + 1] = v9;
    v12 = KsepDebugFlag;
    KsepHistoryErrors[2 * v11] = 655528;
    if ( (v12 & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v10);
    KsepLogError(0LL, (__int64)"KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v10);
  }
  KsepMatchMachineInfo = (__int64)&xmmword_140E61B28;
  qword_140F0F168 = (__int64)&xmmword_140E61F80;
  qword_140F0F170 = (__int64)&xmmword_140E61FB8;
  qword_140F0F178 = (__int64)&xmmword_140E62000;
  return 0LL;
}
