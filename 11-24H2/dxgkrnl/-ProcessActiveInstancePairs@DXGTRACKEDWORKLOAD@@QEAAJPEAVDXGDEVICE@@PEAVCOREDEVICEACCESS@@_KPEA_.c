/*
 * XREFs of ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x140203478
 * Callers:
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x14020321C (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x140204CA0 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1402051D0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?QPCFromGPUTimestamp@DXGTRACKEDWORKLOAD@@IEAA_N_K00PEA_K@Z @ 0x140079864 (-QPCFromGPUTimestamp@DXGTRACKEDWORKLOAD@@IEAA_N_K00PEA_K@Z.c)
 *     McTemplateK0pxqqxxxdx_EtwWriteTransfer @ 0x14007A0B4 (McTemplateK0pxqqxxxdx_EtwWriteTransfer.c)
 *     ?Add@CumulativeStats@@QEAAXN@Z @ 0x1400A0858 (-Add@CumulativeStats@@QEAAXN@Z.c)
 *     ?Add@RollingStats@@QEAAXN@Z @ 0x1400A089C (-Add@RollingStats@@QEAAXN@Z.c)
 *     ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1400A08C4 (-Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z.c)
 *     ?GetCurrentEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAIXZ @ 0x1400A09C8 (-GetCurrentEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAIXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkUnlock2Internal @ 0x1402A2B20 (DxgkUnlock2Internal.c)
 *     DxgkLock2Internal @ 0x1402A3F00 (DxgkLock2Internal.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r14
  unsigned __int64 *v9; // r15
  unsigned __int64 v10; // rsi
  unsigned int i; // r12d
  unsigned int *v12; // rbx
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  double v16; // xmm0_8
  __int64 v17; // rcx
  double v18; // xmm1_8
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  double v24; // xmm0_8
  __int64 v25; // rax
  double v26; // xmm6_8
  double v27; // xmm2_8
  double v28; // xmm0_8
  double v29; // xmm7_8
  char v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // [rsp+30h] [rbp-89h]
  __int64 v34; // [rsp+38h] [rbp-81h]
  __int64 v35; // [rsp+58h] [rbp-61h]
  __int64 v36; // [rsp+68h] [rbp-51h]
  __int128 v37; // [rsp+70h] [rbp-49h]
  _BYTE v38[80]; // [rsp+88h] [rbp-31h] BYREF
  unsigned __int64 v39; // [rsp+118h] [rbp+5Fh] BYREF
  struct COREDEVICEACCESS *v40; // [rsp+128h] [rbp+6Fh]
  unsigned __int64 v41; // [rsp+130h] [rbp+77h]

  v41 = a4;
  v40 = a3;
  LODWORD(v5) = 0;
  if ( !*((_QWORD *)this + 39) )
    return 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( a4 >= *((_QWORD *)this + 12) )
  {
    v9 = a5;
    v10 = -1LL;
    for ( i = 0; ; ++i )
    {
      LODWORD(v40) = i;
      if ( i >= *((_DWORD *)this + 26) )
        break;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v38, (struct _KTHREAD **)this + 5);
      v12 = (unsigned int *)(*((_QWORD *)this + 4) + 136LL * i);
      if ( *((_BYTE *)v12 + 32) && !*((_BYTE *)v12 + 104) )
      {
        v13 = *((_QWORD *)v12 + 2);
        if ( v13 <= v41 )
        {
          if ( !v9 )
          {
            LODWORD(v37) = *((_DWORD *)a2 + 117);
            DWORD1(v37) = *((_DWORD *)this + 21);
            DXGPROCESS::GetCurrent();
            v14 = DxgkLock2Internal(a2);
            v5 = v14;
            if ( v14 < 0 )
            {
              WdLogSingleEntry2(2LL, this, v14);
              WdLogGlobalForLineNumber = 1484;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"TrackedWorkload 0x%I64x: Unable to lock query result buffer, returning 0x%I64x",
                (__int64)this,
                v5,
                0LL,
                0LL,
                0LL);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
              return (unsigned int)v5;
            }
            v9 = 0LL;
          }
          v15 = v9[v12[2]] - v9[*v12];
          if ( v15 < 0 )
            v16 = (double)(int)(v15 & 1 | ((unsigned __int64)v15 >> 1))
                + (double)(int)(v15 & 1 | ((unsigned __int64)v15 >> 1));
          else
            v16 = (double)(int)v15;
          v17 = *((_QWORD *)this + 39);
          if ( v17 < 0 )
          {
            v19 = *((_QWORD *)this + 39) & 1LL | (*((_QWORD *)this + 39) >> 1);
            v18 = (double)(int)v19 + (double)(int)v19;
          }
          else
          {
            v18 = (double)(int)v17;
          }
          *(double *)(*((_QWORD *)v12 + 16) + 16LL) = v16 / v18 * 1000.0 + *(double *)(*((_QWORD *)v12 + 16) + 16LL);
          if ( !*((_BYTE *)v12 + 12) )
          {
            v20 = *((_QWORD *)v12 + 6);
            v21 = *((_QWORD *)v12 + 5);
            v39 = 0LL;
            if ( DXGTRACKEDWORKLOAD::QPCFromGPUTimestamp(this, v21, v20, v9[v12[2]], &v39) )
            {
              v22 = *((_QWORD *)v12 + 3) - v39;
              v23 = *((_QWORD *)this + 40);
              if ( v23 < 0 )
              {
                v25 = *((_QWORD *)this + 40) & 1LL | (*((_QWORD *)this + 40) >> 1);
                v24 = (double)(int)v25 + (double)(int)v25;
              }
              else
              {
                v24 = (double)(int)v23;
              }
              v26 = (double)(int)v22 / v24 * 1000.0;
              if ( *((_BYTE *)v12 + 120) )
              {
                *((_QWORD *)this + 38) += v22 >> 63;
                CumulativeStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 192), v26);
              }
              RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 120), *(double *)(*((_QWORD *)v12 + 16) + 16LL));
              v27 = DOUBLE_300_0;
              v28 = *(double *)(*((_QWORD *)v12 + 16) + 16LL) + v26;
              if ( v28 > 0.0 )
                v27 = *(double *)(*((_QWORD *)v12 + 16) + 16LL) * 100.0 / v28;
              v29 = fmin(300.0, fmax(5.0, v27));
              RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 232), v29);
              if ( bTracingEnabled != v30 )
              {
                KeQueryPerformanceCounter(0LL);
                if ( v26 >= 0.0 )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
                  {
                    LODWORD(v35) = (int)v26;
                    LODWORD(v34) = (int)v29;
                    LODWORD(v33) = TrackedWorkloadMonitor::GetCurrentEffectivePowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328));
                    McTemplateK0pxqqxxxdx_EtwWriteTransfer(
                      *((_QWORD *)v12 + 14),
                      &TrackedWorkloadDeadline,
                      (unsigned int)(int)v26,
                      this,
                      v32,
                      v33,
                      v34,
                      *((_QWORD *)v12 + 14),
                      *((_QWORD *)v12 + 3),
                      v39,
                      v35,
                      *((_QWORD *)this + 38),
                      v36,
                      v37);
                  }
                }
                else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
                {
                  LODWORD(v35) = (int)v26;
                  LODWORD(v34) = (int)v29;
                  LODWORD(v33) = TrackedWorkloadMonitor::GetCurrentEffectivePowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328));
                  McTemplateK0pxqqxxxdx_EtwWriteTransfer(
                    *((_QWORD *)v12 + 14),
                    &TrackedWorkloadDeadlineMissed,
                    (unsigned int)(int)v26,
                    this,
                    v31,
                    v33,
                    v34,
                    *((_QWORD *)v12 + 14),
                    *((_QWORD *)v12 + 3),
                    v39,
                    v35,
                    *((_QWORD *)this + 38),
                    v36,
                    v37);
                }
              }
              if ( v26 < 0.0 )
                TrackedWorkloadMonitor::Boost(
                  (DXGTRACKEDWORKLOAD *)((char *)this + 328),
                  (DXGTRACKEDWORKLOAD *)((char *)this + 232));
              i = (unsigned int)v40;
            }
            **((_BYTE **)v12 + 16) = 0;
          }
          *(_BYTE *)(*v12 + *((_QWORD *)this + 11)) = 0;
          *(_BYTE *)(v12[2] + *((_QWORD *)this + 11)) = 0;
          *((_BYTE *)v12 + 32) = 0;
        }
        else
        {
          v10 = *((_QWORD *)this + 12);
          if ( v10 >= v13 )
            v10 = *((_QWORD *)v12 + 2);
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    }
    if ( !v9
      || !*((_DWORD *)this + 21)
      || (DXGPROCESS::GetCurrent(), LODWORD(v5) = DxgkUnlock2Internal(a2), (int)v5 >= 0) )
    {
      if ( v10 != -1LL )
        *((_QWORD *)this + 12) = v10;
    }
  }
  return (unsigned int)v5;
}
