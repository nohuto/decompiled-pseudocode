/*
 * XREFs of ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1401C5EF0
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1401B6C0C (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ujqzr2jxxx_EtwWriteTransfer @ 0x1400573B8 (McTemplateK0ujqzr2jxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGIIE@Z @ 0x1401C5D80 (-EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGIIE@Z.c)
 *     ?EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1402EDF98 (-EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 *     ?EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z @ 0x1403DB400 (-EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z.c)
 *     ?EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@IEAAX_K@Z @ 0x1403F5CF8 (-EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@IEAAX_K@Z.c)
 *     ?EmitSleepStudyVidMmEvictionDataEvents@DripsBlockerTrackingHelper@@IEAAX_KIPEA_K@Z @ 0x140405058 (-EmitSleepStudyVidMmEvictionDataEvents@DripsBlockerTrackingHelper@@IEAAX_KIPEA_K@Z.c)
 *     ?EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAU_UNICODE_STRING@@I@Z @ 0x140409768 (-EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAU_UNICODE_STRING@@I@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
        DripsBlockerTrackingHelper *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // r14d
  unsigned __int64 *v7; // r12
  unsigned int v8; // ebx
  const char *v9; // r15
  char *v10; // rdi
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONGLONG Value; // rax
  DripsBlockerTrackingHelper *v16; // rcx
  unsigned __int64 v17; // rcx
  ULONGLONG v18; // rax
  __int64 v19; // r14
  unsigned int v20; // r12d
  char *v21; // r15
  char *v22; // r15
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rbx
  ULONGLONG v26; // rax
  __int64 v27; // r9
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned __int16 *v31; // rax
  char v32; // [rsp+30h] [rbp-D0h]
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-9Ch]
  unsigned int v35; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v36; // [rsp+70h] [rbp-90h]
  const char *v37; // [rsp+78h] [rbp-88h]
  struct _UNICODE_STRING v38; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  unsigned __int64 v41; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v42; // [rsp+A8h] [rbp-58h] BYREF
  struct _STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  GUID ActivityId; // [rsp+C0h] [rbp-40h] BYREF
  GUID v45; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v46; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v47[80]; // [rsp+F0h] [rbp-10h] BYREF

  v4 = a3;
  v34 = a3;
  v36 = a4;
  v7 = a4;
  memset(v47, 0, 0x42uLL);
  v33 = 0;
  *(_QWORD *)&v38.Length = 4325376LL;
  v38.Buffer = (wchar_t *)v47;
  v45 = 0LL;
  ActivityId = 0LL;
  v46 = 0LL;
  DripsBlockerTrackingHelper::EmitSleepStudyTotalTimeModernStandbyTelemetry(this, a2);
  DripsBlockerTrackingHelper::EmitSleepStudyVidMmEvictionDataEvents(this, a2, v4, v7);
  v8 = 0;
  v9 = (char *)this + 8;
  v35 = 0;
  v10 = (char *)this + 64;
  v37 = (char *)this + 8;
  v40 = -64LL - (_QWORD)this;
  do
  {
    if ( v10[40] )
    {
      v11 = 0LL;
      if ( v4 )
      {
        while ( v7[v11] != *((_QWORD *)v10 - 8) )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= v4 )
            goto LABEL_41;
        }
        DestinationString = 0LL;
        RtlInitAnsiString(&DestinationString, v9);
        v12 = RtlAnsiStringToUnicodeString(&v38, &DestinationString, 0);
        if ( v12 >= 0 )
        {
          *(_QWORD *)&v46 = *((_QWORD *)v10 - 8);
          *(_QWORD *)ActivityId.Data4 = (v8 << 6) + v46 + 1;
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
              (v38.Length >> 1) + 1,
              v13,
              v14,
              a2,
              (__int64)&v46,
              (v38.Length >> 1) + 1,
              (__int64)v38.Buffer,
              (__int64)&ActivityId,
              *v10 + v10[8] + *(v10 - 8) + v10[16],
              a2);
          Value = *((unsigned int *)v10 + 7);
          if ( (_DWORD)Value )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              (DripsBlockerTrackingHelper *)&ActivityId,
              a2,
              L"Count of core access locks",
              0x1Bu,
              Value,
              &ActivityId);
          v16 = (DripsBlockerTrackingHelper *)*((_QWORD *)v10 - 2);
          if ( (unsigned __int64)v16 >= 0x2710 )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              v16,
              a2,
              L"GPU Total Time(ms)",
              0x13u,
              (unsigned __int64)v16 / 0x2710,
              &ActivityId);
          v17 = *((_QWORD *)v10 + 1) / 0x2710uLL;
          if ( v17 || *((_QWORD *)v10 + 2) >= 0x2710uLL )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              (DripsBlockerTrackingHelper *)v17,
              a2,
              L"D0 Total Lag Time(ms)",
              0x16u,
              v17 + *((_QWORD *)v10 + 2) / 0x2710uLL,
              &ActivityId);
          v18 = *((unsigned int *)v10 + 6);
          if ( (_DWORD)v18 )
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
              (DripsBlockerTrackingHelper *)&ActivityId,
              a2,
              L"Count of D3 wake ups",
              0x15u,
              v18,
              &ActivityId);
          v41 = *(_QWORD *)ActivityId.Data4;
          DripsBlockerTrackingHelper::EmitSleepStudyBlockerTelemetry(this, a2, &v41, &v38, v8);
          v39 = 0LL;
          v19 = 0LL;
          v20 = *((_DWORD *)v10 - 5);
          if ( v20 )
          {
            v21 = &v10[v40];
            do
            {
              v33 = 0;
              v22 = &v21[72 * v19];
              v23 = DripsBlockerTrackingHelper::EtwProfilerTypeName(
                      *(unsigned int *)((char *)this + (_QWORD)v22 + 172),
                      &v33);
              v25 = *(_QWORD *)((char *)this + (_QWORD)v22 + 128) + *(_QWORD *)((char *)this + (_QWORD)v22 + 136);
              *(_QWORD *)v45.Data4 = (unsigned int)v19 + *(_QWORD *)ActivityId.Data4 + 1LL;
              if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
                McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
                  (__int64)&v45,
                  (unsigned int)v19 + *(_QWORD *)ActivityId.Data4 + 1LL,
                  v24,
                  a2,
                  (__int64)&ActivityId,
                  v33,
                  v23,
                  (__int64)&v45,
                  v25 + *((_BYTE *)this + (_QWORD)v22 + 152) + *((_BYTE *)this + (_QWORD)v22 + 160),
                  a2);
              if ( v25 > v39 )
              {
                v39 = v25;
                v20 = v19;
              }
              v26 = *(unsigned int *)((char *)this + (_QWORD)v22 + 148);
              if ( (_DWORD)v26 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v45,
                  a2,
                  L"Count of core access locks",
                  0x1Bu,
                  v26,
                  &v45);
              v27 = *(_QWORD *)((char *)this + (_QWORD)v22 + 152) / 10000LL;
              if ( v27 > 0 || *(_QWORD *)&v10[72 * v19 + 96] / 10000LL > 0 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)(9 * v19),
                  a2,
                  L"D0 Lag Time(ms)",
                  0x10u,
                  v27 + *(_QWORD *)&v10[72 * v19 + 96] / 10000LL,
                  &v45);
              v21 = &v10[v40];
              v28 = *(_DWORD *)&v10[72 * v19 + 168 + v40 + (_QWORD)this];
              if ( v28 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v45,
                  a2,
                  L"Count of D3 wake ups",
                  0x15u,
                  v28,
                  &v45);
              v29 = *(_DWORD *)&v21[72 * v19 + 176 + (_QWORD)this];
              if ( v29 )
                DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                  (DripsBlockerTrackingHelper *)&v45,
                  a2,
                  L"Count of DFx blocks",
                  0x14u,
                  v29,
                  &v45);
              v30 = *((_DWORD *)v10 - 5);
              v19 = (unsigned int)(v19 + 1);
            }
            while ( (unsigned int)v19 < v30 );
            if ( v20 == v30 )
            {
              v8 = v35;
            }
            else
            {
              v33 = 0;
              v31 = (unsigned __int16 *)DripsBlockerTrackingHelper::EtwProfilerTypeName(
                                          *(unsigned int *)&v10[72 * v20 + 108],
                                          &v33);
              v8 = v35;
              v42 = *(_QWORD *)ActivityId.Data4;
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerActivationTelemetry(this, a2, &v42, v31, v35, v20, v32);
            }
            v9 = v37;
          }
          v4 = v34;
          v7 = v36;
        }
        else
        {
          WdLogSingleEntry1(3LL, v12);
          WdLogGlobalForLineNumber = 165;
        }
      }
    }
LABEL_41:
    ++v8;
    v9 += 4720;
    v10 += 4720;
    v35 = v8;
    v37 = v9;
  }
  while ( v8 < 0x40 );
}
