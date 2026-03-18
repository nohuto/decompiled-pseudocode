/*
 * XREFs of CmFcManagerFlushFeatureUsage @ 0x140AA3C78
 * Callers:
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x1406EBE28 (CmFcManagerUnregisterFeatureUsageProvider.c)
 *     RtlFlushFeatureUsage @ 0x140772A20 (RtlFlushFeatureUsage.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14036E7C0 (ExBlockOnAddressPushLock.c)
 *     CmpWorkItemQueueWork @ 0x1403B8E30 (CmpWorkItemQueueWork.c)
 *     CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement @ 0x1406F029C (CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement.c)
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

  v3 = dword_140EF7230;
  if ( a3 )
  {
    v6 = (volatile signed __int32 *)(a3 + 100);
    v7 = *(_DWORD *)(a3 + 100);
    LOBYTE(v8) = CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement(v7 & 1, (v7 & 4) != 0);
    v9 = v8;
    if ( v8 >= 2 )
    {
      _InterlockedOr(v6, 2u);
      _InterlockedOr(&dword_140EF7230, 8u);
      CmpWorkItemQueueWork(&stru_140EF7170);
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
                    dword_140EF7230 & 1,
                    (dword_140EF7230 & 0x20) != 0);
    v12 = v11;
    if ( v11 >= 2 )
    {
      _InterlockedOr(&dword_140EF7230, 0x10u);
      CmpWorkItemQueueWork(&stru_140EF7170);
    }
    if ( (a2 & 2) != 0 && byte_140EF7258 )
    {
      v13 = (v12 + (v3 >> 5)) & 0x7FFFFFF;
      while ( 1 )
      {
        v15 = dword_140EF7234;
        if ( ((dword_140EF7234 - v13) & 0x7FFFFFFu) < 0x4000000 )
          break;
        ExBlockOnAddressPushLock(&qword_140EF70D0, &dword_140EF7234, &v15, 4LL, 0LL);
      }
    }
    else if ( (a2 & 1) != 0 && v12 )
    {
      v14 = v3 >> 5;
      while ( 1 )
      {
        v15 = dword_140EF7230;
        if ( ((((unsigned int)dword_140EF7230 >> 5) - v14) & 0x7FFFFFF) >= v12 )
          break;
        ExBlockOnAddressPushLock((signed __int64 *)&xmmword_140EF70C0 + 1, &dword_140EF7230, &v15, 4LL, 0LL);
      }
    }
  }
}
