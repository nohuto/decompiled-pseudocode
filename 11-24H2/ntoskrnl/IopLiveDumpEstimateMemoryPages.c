/*
 * XREFs of IopLiveDumpEstimateMemoryPages @ 0x140597940
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140595270 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     HvlCalculateLivedumpSize @ 0x1405873D0 (HvlCalculateLivedumpSize.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140596AE8 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpCapture @ 0x140596E48 (IopLiveDumpCapture.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14059A25C (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14059AF7C (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059B3A0 (IopLiveDumpUncorralProcessors.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IopLiveDumpEstimateMemoryPages(__int64 a1)
{
  __int64 MillisecondCounter; // rax
  __int64 v3; // r15
  int v4; // eax
  __int64 v5; // rdx
  int v6; // esi
  unsigned __int64 v7; // rax
  char v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  bool v11; // zf
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  bool v14; // al
  bool v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[3]; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  bool *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  _QWORD *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]

  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  *(_DWORD *)(a1 + 80) |= 1u;
  v17 = 0LL;
  v3 = MillisecondCounter;
  v19 = 0LL;
  v18 = 0LL;
  IopLiveDumpCallRemovePagesCallbacks((_DWORD *)a1);
  v4 = IopLiveDumpCapture(a1);
  v6 = v4;
  if ( v4 < 0 || v4 == 258 )
  {
    if ( (*(_DWORD *)(a1 + 320) & 1) != 0 )
    {
      LOBYTE(v5) = 1;
      IopLiveDumpUncorralProcessors(a1 + 312, v5);
    }
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    IopLiveDumpTraceMmDuplicateMemoryFailure(a1, (unsigned int)v6);
    if ( v6 == 258 )
    {
      *(_DWORD *)(a1 + 80) |= 0x40u;
      v6 = -1073740682;
    }
  }
  else
  {
    v7 = RtlNumberOfSetBitsEx((__int64 *)(a1 + 544));
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    v8 = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(a1 + 96) = v7 + (v7 >> 4);
    *(_QWORD *)(a1 + 136) = 0LL;
    if ( (v8 & 1) != 0 )
    {
      v9 = IopLiveDumpGetMillisecondCounter(0);
      v6 = HvlCalculateLivedumpSize(v8 & 2, &v17, &v19, &v18);
      *(_QWORD *)(a1 + 288) = IopLiveDumpGetMillisecondCounter(0) - v9;
      if ( v6 < 0 )
      {
        *(_DWORD *)(a1 + 80) |= 0x10u;
        LODWORD(v17) = v6;
        if ( IopLiveDumpIsTracingEnabled() )
        {
          v23[1] = 4LL;
          v23[0] = &v17;
          IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_QUERY_HVL_DUMP_SIZE_FAILURE, 1LL, v23);
        }
        if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
        {
          v18 = 0x1000000LL;
          v25 = &v18;
          v14 = (*(_DWORD *)(a1 + 80) & 0x10) != 0;
          v26 = 8LL;
          v16 = v14;
          v28 = 1LL;
          v27 = &v16;
          v29 = &v17;
          LODWORD(v17) = v6;
          v30 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06E80,
            (unsigned __int8 *)word_14004615A,
            (const GUID *)(a1 + 968),
            (const GUID *)(a1 + 952),
            5u,
            v24);
        }
        v6 = 0;
      }
      else
      {
        v10 = v19;
        v11 = (v19 & 0xFFF) == 0;
        *(_QWORD *)(a1 + 120) = (v17 >> 12) + ((v17 & 0xFFF) != 0);
        v12 = (v10 >> 12) + !v11;
        v13 = v18;
        v11 = (v18 & 0xFFF) == 0;
        *(_QWORD *)(a1 + 128) = v12;
        *(_QWORD *)(a1 + 136) = (v13 >> 12) + !v11;
      }
    }
  }
  *(_QWORD *)(a1 + 440) = IopLiveDumpGetMillisecondCounter(0) - v3;
  IopLiveDumpTraceBufferEstimation(a1);
  memset_0(*(void **)(a1 + 552), 0, 4 * ((*(_QWORD *)(a1 + 544) >> 5) + ((*(_QWORD *)(a1 + 544) & 0x1F) != 0)));
  memset_0(*(void **)(a1 + 608), 0, 4 * ((*(_QWORD *)(a1 + 600) >> 5) + ((*(_QWORD *)(a1 + 600) & 0x1F) != 0)));
  memset_0(*(void **)(a1 + 664), 0, 4 * ((*(_QWORD *)(a1 + 656) >> 5) + ((*(_QWORD *)(a1 + 656) & 0x1F) != 0)));
  *(_DWORD *)(a1 + 80) &= ~1u;
  if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
  {
    v18 = 0x1000000LL;
    v25 = &v18;
    v19 = *(_QWORD *)(a1 + 440);
    v26 = 8LL;
    v27 = (bool *)&v19;
    v17 = *(_QWORD *)(a1 + 448);
    v29 = &v17;
    v20 = *(_QWORD *)(a1 + 456);
    v31 = &v20;
    v21 = *(_QWORD *)(a1 + 464);
    v33 = &v21;
    v22 = *(_QWORD *)(a1 + 472);
    v35 = &v22;
    v23[0] = *(_QWORD *)(a1 + 288);
    v37 = v23;
    v28 = 8LL;
    v30 = 8LL;
    v32 = 8LL;
    v34 = 8LL;
    v36 = 8LL;
    v38 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06E80,
      (unsigned __int8 *)word_140046052,
      (const GUID *)(a1 + 968),
      (const GUID *)(a1 + 952),
      9u,
      v24);
  }
  return (unsigned int)v6;
}
