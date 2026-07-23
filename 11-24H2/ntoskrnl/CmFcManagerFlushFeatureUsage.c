/*
 * XREFs of CmFcManagerFlushFeatureUsage @ 0x140AA3DAC
 * Callers:
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x1406F568C (CmFcManagerUnregisterFeatureUsageProvider.c)
 *     RtlFlushFeatureUsage @ 0x140781BA0 (RtlFlushFeatureUsage.c)
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14021E9B0 (CmpWorkItemQueueWork.c)
 *     ExBlockOnAddressPushLock @ 0x1402BB7C0 (ExBlockOnAddressPushLock.c)
 *     CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement @ 0x1406F9CC4 (CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement.c)
 */

void __fastcall CmFcManagerFlushFeatureUsage(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  volatile signed __int32 *v6; // r15
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // esi
  int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = dword_140EF7858;
  if ( a3 )
  {
    v6 = (volatile signed __int32 *)(a3 + 100);
    v7 = *(_DWORD *)(a3 + 100);
    LOBYTE(v8) = CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement(v7 & 1, (v7 & 4) != 0);
    v9 = v8;
    if ( v8 >= 2 )
    {
      _InterlockedOr(v6, 2u);
      _InterlockedOr(&dword_140EF7858, 8u);
      CmpWorkItemQueueWork(&stru_140EF7798);
    }
    if ( (a2 & 1) != 0 && v9 )
    {
      v10 = v7 >> 2;
      while ( 1 )
      {
        v15 = *(_DWORD *)(a3 + 100);
        if ( (((v15 >> 2) - v10) & 0x3FFFFFFF) >= v9 )
          break;
        ExBlockOnAddressPushLock((signed __int64 *)(a3 + 104), v6, &v15, 4LL, 0LL);
      }
    }
  }
  else
  {
    LOBYTE(v11) = CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement(
                    dword_140EF7858 & 1,
                    (dword_140EF7858 & 0x20) != 0);
    v12 = v11;
    if ( v11 >= 2 )
    {
      _InterlockedOr(&dword_140EF7858, 0x10u);
      CmpWorkItemQueueWork(&stru_140EF7798);
    }
    if ( (a2 & 2) != 0 && byte_140EF7880 )
    {
      v13 = (v12 + (v3 >> 5)) & 0x7FFFFFF;
      while ( 1 )
      {
        v15 = dword_140EF785C[0];
        if ( ((dword_140EF785C[0] - v13) & 0x7FFFFFFu) < 0x4000000 )
          break;
        ExBlockOnAddressPushLock(&qword_140EF76F8, dword_140EF785C, &v15, 4LL, 0LL);
      }
    }
    else if ( (a2 & 1) != 0 && v12 )
    {
      v14 = v3 >> 5;
      while ( 1 )
      {
        v15 = dword_140EF7858;
        if ( ((((unsigned int)dword_140EF7858 >> 5) - v14) & 0x7FFFFFF) >= v12 )
          break;
        ExBlockOnAddressPushLock((signed __int64 *)&xmmword_140EF76E8 + 1, &dword_140EF7858, &v15, 4LL, 0LL);
      }
    }
  }
}
