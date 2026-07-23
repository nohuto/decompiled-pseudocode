/*
 * XREFs of KsepMatchInitMachineInfo @ 0x140C2DF2C
 * Callers:
 *     KseInitialize @ 0x140C2D51C (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x140488B28 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140C2DAD0 (KsepMatchInitAcpiOemInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140C2DC20 (KsepMatchInitBiosInfo.c)
 *     KsepMatchInitCpuInfo @ 0x140C2DE9C (KsepMatchInitCpuInfo.c)
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
  KsepMatchMachineInfo = (__int64)&xmmword_140E61EB0;
  qword_140F0FB28 = (__int64)&xmmword_140E62310;
  qword_140F0FB30 = (__int64)&xmmword_140E62348;
  qword_140F0FB38 = (__int64)&xmmword_140E62390;
  return 0LL;
}
