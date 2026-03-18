/*
 * XREFs of ?EmitSleepStudyVidMmEvictionDataEvents@DripsBlockerTrackingHelper@@IEAAX_KIPEA_K@Z @ 0x1403FEC78
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1401CB140 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z @ 0x1403D4640 (-EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyVidMmEvictionDataEvents(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  _QWORD *v4; // rbx
  __int64 v8; // rdi
  __int64 i; // rcx
  ULONGLONG Value; // rax
  DripsBlockerTrackingHelper *v11; // rcx
  DripsBlockerTrackingHelper *v12; // rcx
  DripsBlockerTrackingHelper *v13; // rcx
  DripsBlockerTrackingHelper *v14; // rcx
  GUID ActivityId; // [rsp+30h] [rbp-48h] BYREF

  v4 = (_QWORD *)((char *)this + 302176);
  ActivityId = 0LL;
  v8 = 6LL;
  do
  {
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    {
      if ( a4[i] == *(v4 - 1) )
      {
        Value = *v4 >> 20;
        *(_QWORD *)&ActivityId.Data1 = *(v4 - 1);
        DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
          (DripsBlockerTrackingHelper *)&ActivityId,
          a2,
          L"Total Size of VRAM (MB)",
          24,
          Value,
          &ActivityId);
        DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
          (DripsBlockerTrackingHelper *)&ActivityId,
          a2,
          L"Self Refresh Memory Eviction Threshold (MB)",
          44,
          v4[1] >> 20,
          &ActivityId);
        DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
          v11,
          a2,
          L"Self Refresh Memory Eviction Timer (sec)",
          41,
          v4[2] / 0x989680uLL,
          &ActivityId);
        DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
          v12,
          a2,
          L"Self Refresh Memory Eviction Timer DC (sec)",
          44,
          v4[3] / 0x989680uLL,
          &ActivityId);
        DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
          v13,
          a2,
          L"Self Refresh Memory Eviction Timer AC (sec)",
          44,
          v4[4] / 0x989680uLL,
          &ActivityId);
        DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
          v14,
          a2,
          L"Total Bytes Purged",
          19,
          v4[5],
          &ActivityId);
        break;
      }
    }
    v4 += 8;
    --v8;
  }
  while ( v8 );
}
