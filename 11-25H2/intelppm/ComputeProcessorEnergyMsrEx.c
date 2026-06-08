/*
 * XREFs of ComputeProcessorEnergyMsrEx @ 0x140006AA0
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTracePackageEnergyCounterUpdate @ 0x1400032C0 (ProcLibTracePackageEnergyCounterUpdate.c)
 *     EnumerateNextDevice @ 0x140004B78 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400053BC (ResetEnumerationContext.c)
 *     ComputeProcessorEnergyMsr @ 0x140005B30 (ComputeProcessorEnergyMsr.c)
 *     ProcLibTraceEnergyCounterUpdate @ 0x1400087E0 (ProcLibTraceEnergyCounterUpdate.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     memmove @ 0x140010040 (memmove.c)
 */

unsigned __int64 *__fastcall ComputeProcessorEnergyMsrEx(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  __int64 v7; // r13
  unsigned int SystemArgument1; // r9d
  __int64 v9; // rdi
  unsigned int v10; // r10d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 SystemArgument1_low; // rdi
  unsigned int *p_ActiveThreadCount; // r12
  __int64 v16; // r14
  __int64 DpcData_high; // r15
  unsigned __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // r11
  __int64 v21; // r15
  __int128 *v22; // r12
  unsigned int *v23; // r13
  unsigned __int64 *v24; // rdi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r8
  double v29; // xmm2_8
  double v30; // xmm1_8
  double v31; // xmm0_8
  double v32; // xmm1_8
  double v33; // xmm3_8
  double v34; // xmm0_8
  _LIST_ENTRY *Flink; // xmm2_8
  double v36; // xmm1_8
  int *v37; // rcx
  __int64 v38; // r10
  double *v39; // r9
  int v40; // eax
  unsigned __int64 v41; // r9
  double v42; // xmm1_8
  unsigned int *v43; // r10
  __int64 v44; // rbx
  double *v45; // r11
  signed __int64 v46; // rdx
  double v47; // xmm0_8
  unsigned __int64 v48; // rax
  int v49; // ecx
  double v50; // xmm1_8
  unsigned __int64 v51; // rax
  double v52; // xmm1_8
  __int64 *v53; // rdx
  __int64 v54; // r11
  double *v55; // r10
  double v56; // xmm0_8
  __int64 v57; // rax
  double v58; // xmm1_8
  __int64 v59; // rax
  double v60; // xmm0_8
  void **p_Reserved; // rax
  __int64 v62; // r9
  double *v63; // rcx
  double v64; // xmm0_8
  double v65; // xmm0_8
  double *v66; // rax
  __int64 v67; // r9
  double *v68; // rcx
  double v69; // xmm0_8
  double v70; // xmm0_8
  int v71; // ecx
  double v72; // xmm0_8
  double v73; // xmm0_8
  unsigned __int64 v74; // rax
  unsigned __int64 *result; // rax
  __int64 v77; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v78; // [rsp+40h] [rbp-C0h]
  __int64 v79; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v80; // [rsp+50h] [rbp-B0h]
  __int128 v81; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v82; // [rsp+68h] [rbp-98h]
  __int128 v83; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v84[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD Src[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v86; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v87; // [rsp+C8h] [rbp-38h]
  _DWORD v88[6]; // [rsp+D0h] [rbp-30h]
  double v89[4]; // [rsp+E8h] [rbp-18h]
  _BYTE v90[32]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v91[40]; // [rsp+128h] [rbp+28h] BYREF

  v80 = a5;
  v5 = a3;
  v6 = 0LL;
  v78 = a3;
  v7 = a2;
  v79 = a2;
  v77 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  memset(v84, 0, sizeof(v84));
  if ( !a1 )
  {
    if ( (WPP_MAIN_CB.DeviceQueue.Type & 0x40) != 0 )
    {
      SystemArgument1 = (unsigned int)WPP_MAIN_CB.Dpc.SystemArgument1;
      v9 = 4LL;
      if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) <= 4 )
      {
        v10 = 0;
        if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
        {
          v11 = 0LL;
          while ( 1 )
          {
            v12 = __readmsr(*(_DWORD *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v11 + 4));
            v88[v11 / 4] = v12;
            LODWORD(v12) = v12 - *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + v11);
            *(_DWORD *)((char *)Src + v11) = v12;
            if ( (unsigned int)v12 > 0x7FFFFFFF )
              break;
            ++v10;
            v11 += 4LL;
            if ( v10 >= SystemArgument1 )
              goto LABEL_9;
          }
        }
        else
        {
LABEL_9:
          if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
          {
            v13 = 0LL;
            SystemArgument1_low = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
            memmove(&v83, Src, 4LL * LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1));
            do
            {
              ProcLibTracePackageEnergyCounterUpdate(
                *(_DWORD *)((char *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v13 + 4),
                *(unsigned int *)((char *)Src + v13));
              *(_DWORD *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + v13) = v88[v13 / 4];
              v13 += 4LL;
              --SystemArgument1_low;
            }
            while ( SystemArgument1_low );
            v9 = 4LL;
          }
          if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
          {
            p_ActiveThreadCount = &WPP_MAIN_CB.ActiveThreadCount;
            v16 = 0LL;
            DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
            do
            {
              v18 = __readmsr(*p_ActiveThreadCount);
              v19 = v18 - *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v16);
              ProcLibTracePackageEnergyCounterUpdate(*p_ActiveThreadCount, v19);
              *(_QWORD *)((char *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong + v16) = v18;
              v9 = 4LL;
              *(_QWORD *)((char *)v84 + v16) = v19;
              v16 += 8LL;
              ++p_ActiveThreadCount;
              --DpcData_high;
            }
            while ( DpcData_high );
            v5 = v78;
            v7 = v79;
          }
          DWORD2(v82) = 32;
          *(_QWORD *)&v81 = &qword_1400191C8;
          *((_QWORD *)&v81 + 1) = &qword_1400191C8;
          v87 = 0LL;
          v86 = 0LL;
          *(_QWORD *)&v82 = 0LL;
          ResetEnumerationContext((__int64 *)&v81);
          if ( !(unsigned int)EnumerateNextDevice((__int64 *)&v81, &v77) )
          {
            do
            {
              v21 = v77;
              v22 = &v86;
              v23 = (unsigned int *)&CounterId;
              Src[0] = 3LL;
              v24 = (unsigned __int64 *)(*(_QWORD *)(v77 + 368) + 24LL);
              do
              {
                v25 = *v24;
                v26 = *(v24 - 1);
                if ( v26 < *v24 )
                  v27 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink->Flink + v26 - v25 + 1;
                else
                  v27 = v26 - v25;
                ProcLibTraceEnergyCounterUpdate(v21, *v23, v27);
                *(_QWORD *)v22 += v27;
                ++v23;
                *v24 = v26;
                v22 = (__int128 *)((char *)v22 + 8);
                v24 += 3;
                --Src[0];
              }
              while ( Src[0] );
              v6 = 0LL;
            }
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)&v81, &v77) );
            v20 = v87;
            v9 = 4LL;
            v5 = v78;
            v7 = v79;
          }
          v28 = 1000000 * v5 / (qword_140019A78 * (unsigned __int64)(unsigned int)dword_140019A6C);
          if ( v28 && (_QWORD)v86 )
          {
            v29 = v86 < 0
                ? (double)(int)(BYTE8(v86) & 1 | (*((_QWORD *)&v86 + 1) >> 1))
                + (double)(int)(BYTE8(v86) & 1 | (*((_QWORD *)&v86 + 1) >> 1))
                : (double)SDWORD2(v86);
            v30 = v7 < 0
                ? (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1))
                + (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1))
                : (double)(int)v7;
            v31 = v5 < 0
                ? (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1))
                + (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1))
                : (double)(int)v5;
            v32 = v30 / v31;
            v33 = (__int64)v86 < 0
                ? (double)(int)(v86 & 1 | ((unsigned __int64)v86 >> 1))
                + (double)(int)(v86 & 1 | ((unsigned __int64)v86 >> 1))
                : (double)(int)v86;
            v89[0] = v29 / v33 * v32;
            if ( v20 )
            {
              if ( v20 < 0 )
                v34 = (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1))
                    + (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1));
              else
                v34 = (double)(int)v20;
              v89[2] = v32;
              v89[1] = v29 / v34 * v32;
              v89[3] = 1.0 - v32;
              if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) != 0 )
              {
                if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 1 && LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
                {
                  Flink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink;
                  if ( (v28 & 0x8000000000000000uLL) != 0LL )
                    v36 = (double)(int)(v28 & 1 | (v28 >> 1)) + (double)(int)(v28 & 1 | (v28 >> 1));
                  else
                    v36 = (double)(int)v28;
                  v37 = (int *)&v83;
                  v38 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
                  v39 = (double *)v90;
                  do
                  {
                    v40 = *v37++;
                    *v39++ = (double)v40 * 1000000.0 * *(double *)&Flink / v36;
                    --v38;
                  }
                  while ( v38 );
                }
              }
              else if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
              {
                v41 = ((unsigned __int64)*(unsigned int *)&WPP_MAIN_CB.DeviceQueue.Type >> 1) & 0x1F;
                if ( (v28 & 0x8000000000000000uLL) != 0LL )
                  v42 = (double)(int)(v28 & 1 | (v28 >> 1)) + (double)(int)(v28 & 1 | (v28 >> 1));
                else
                  v42 = (double)(int)v28;
                v43 = (unsigned int *)&v83;
                v44 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
                v45 = (double *)v90;
                do
                {
                  v46 = (unsigned __int64)*v43 << v41;
                  if ( v46 < 0 )
                  {
                    v48 = ((unsigned __int64)*v43 << v41) & 1 | ((unsigned __int64)*v43 << v41 >> 1);
                    v47 = (double)(int)v48 + (double)(int)v48;
                  }
                  else
                  {
                    v47 = (double)(int)v46;
                  }
                  ++v43;
                  *v45++ = v47 / v42;
                  --v44;
                }
                while ( v44 );
              }
              if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
              {
                v49 = qword_140019A80 * v28;
                if ( ((qword_140019A80 * v28) & 0x8000000000000000uLL) != 0LL )
                {
                  v51 = v49 & 1 | ((qword_140019A80 * v28) >> 1);
                  v50 = (double)(int)v51 + (double)(int)v51;
                }
                else
                {
                  v50 = (double)v49;
                }
                v52 = v50 / 1000000.0;
                v53 = (__int64 *)v84;
                v54 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
                v55 = (double *)v91;
                do
                {
                  if ( *v53 < 0 )
                  {
                    v57 = *v53 & 1 | ((unsigned __int64)*v53 >> 1);
                    v56 = (double)(int)v57 + (double)(int)v57;
                  }
                  else
                  {
                    v56 = (double)(int)*v53;
                  }
                  ++v53;
                  *v55++ = v56 * 100.0 / v52;
                  --v54;
                }
                while ( v54 );
              }
              v58 = *(double *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
              v59 = 0LL;
              do
              {
                v60 = *(double *)((char *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink + v59 * 8) * v89[v59];
                ++v59;
                v58 = v58 + v60;
                --v9;
              }
              while ( v9 );
              if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
              {
                p_Reserved = &WPP_MAIN_CB.Reserved;
                v62 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
                v63 = (double *)v90;
                do
                {
                  v64 = *v63++;
                  v65 = v64 * *(double *)p_Reserved++;
                  v58 = v58 + v65;
                  --v62;
                }
                while ( v62 );
              }
              if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
              {
                v66 = (double *)&unk_140021CE0;
                v67 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
                v68 = (double *)v91;
                do
                {
                  v69 = *v66++;
                  v70 = v69 * *v68++;
                  v58 = v58 + v70;
                  --v67;
                }
                while ( v67 );
              }
              if ( v58 >= 0.0 && v58 <= (double)SHIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) )
              {
                if ( v58 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) >> 1) )
                  goto LABEL_84;
                v71 = 100;
                if ( a4 <= 0x64 )
                  v71 = a4;
                if ( v58 <= (double)(HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) * v71 / 0x64u) )
                {
LABEL_84:
                  if ( (v28 & 0x8000000000000000uLL) != 0LL )
                    v72 = (double)(int)(v28 & 1 | (v28 >> 1)) + (double)(int)(v28 & 1 | (v28 >> 1));
                  else
                    v72 = (double)(int)v28;
                  v73 = v72 * v58;
                  v74 = 0LL;
                  if ( v73 >= 9.223372036854776e18 )
                  {
                    v73 = v73 - 9.223372036854776e18;
                    if ( v73 < 9.223372036854776e18 )
                      v74 = 0x8000000000000000uLL;
                  }
                  v6 = v74 + (unsigned int)(int)v73;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      ComputeProcessorEnergyMsr(0, 0LL, 0LL, 0LL, v80);
      v6 = *v80;
    }
  }
  result = v80;
  *v80 = v6;
  return result;
}
