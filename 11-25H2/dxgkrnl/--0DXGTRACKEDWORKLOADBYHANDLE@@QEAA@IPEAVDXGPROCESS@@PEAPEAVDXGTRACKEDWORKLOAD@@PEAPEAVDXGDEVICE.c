/*
 * XREFs of ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1401FC2F0
 * Callers:
 *     NtDxgkDestroyTrackedWorkload @ 0x1401FDE20 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1401FE240 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1401FE590 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x1401FE8C0 (NtDxgkResetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1401FEAC0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x14007939C (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 */

DXGTRACKEDWORKLOADBYHANDLE *__fastcall DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
        DXGTRACKEDWORKLOADBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGTRACKEDWORKLOAD **a4,
        struct DXGDEVICE **a5)
{
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // r9
  int v11; // edx
  __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // rcx
  DXGTRACKEDWORKLOAD *v17; // rcx
  _BYTE v18[32]; // [rsp+50h] [rbp-38h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *a4 = 0LL;
  *a5 = 0LL;
  v8 = a2;
  if ( a3 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, a3);
    v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( v9 < *((_DWORD *)a3 + 74) )
    {
      v10 = *((_QWORD *)a3 + 35);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
        && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
      {
        v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
        if ( v11 )
        {
          if ( v11 == 19 )
          {
            v13 = *(_QWORD *)(v10 + 16LL * v9);
            *(_QWORD *)this = v13;
            if ( v13 && *(_BYTE *)(v13 + 116) )
            {
              _m_prefetchw((const void *)(v13 + 72));
              v14 = *(_QWORD *)(v13 + 72);
              do
              {
                if ( !v14 )
                  goto LABEL_20;
                v15 = v14;
                v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 72), v14 + 1, v14);
              }
              while ( v15 != v14 );
              v16 = *(_QWORD *)(*(_QWORD *)this + 16LL);
              *((_QWORD *)this + 1) = v16;
              if ( !v16 )
              {
                WdLogSingleEntry0(3LL);
                v17 = *(DXGTRACKEDWORKLOAD **)this;
                WdLogGlobalForLineNumber = 85;
                DXGTRACKEDWORKLOAD::Release(v17);
LABEL_20:
                *(_QWORD *)this = 0LL;
                goto LABEL_11;
              }
              _InterlockedIncrement64((volatile signed __int64 *)(v16 + 64));
              goto LABEL_11;
            }
LABEL_10:
            WdLogSingleEntry1(3LL, v8);
            WdLogGlobalForLineNumber = 74;
LABEL_11:
            *a4 = *(struct DXGTRACKEDWORKLOAD **)this;
            *a5 = (struct DXGDEVICE *)*((_QWORD *)this + 1);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
            return this;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    *(_QWORD *)this = 0LL;
    goto LABEL_10;
  }
  WdLogSingleEntry1(3LL, 0LL);
  WdLogGlobalForLineNumber = 66;
  return this;
}
