/*
 * XREFs of KiInitializeUserApc @ 0x1403D2E04
 * Callers:
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KePopulateContinuationContext @ 0x1403D3414 (KePopulateContinuationContext.c)
 *     KeContextFromKframes @ 0x1403D3460 (KeContextFromKframes.c)
 *     RtlpGetNonLegacyXStateAreaLength @ 0x1403D3A3C (RtlpGetNonLegacyXStateAreaLength.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D43F8 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     KeCopyExceptionRecord @ 0x1404252B0 (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x140447F80 (KiSetupForInstrumentationReturn.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 */

unsigned __int64 __fastcall KiInitializeUserApc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rdx
  int v11; // r15d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // r14
  __int64 v16; // r13
  _QWORD *v17; // rdi
  _DWORD *v18; // rdx
  unsigned __int64 result; // rax
  _QWORD *v20; // r8
  const char *i; // rax
  unsigned __int64 v22; // rcx
  NTSTATUS v23; // eax
  unsigned __int64 v24; // rtt
  unsigned int v25; // r9d
  __int64 v26; // rdx
  unsigned int Size; // [rsp+34h] [rbp-184h]
  _QWORD *v29; // [rsp+40h] [rbp-178h]
  _QWORD *v31; // [rsp+60h] [rbp-158h]
  _QWORD *v33; // [rsp+88h] [rbp-130h]
  char v34[2]; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v35; // [rsp+AAh] [rbp-10Eh]
  _QWORD *v36; // [rsp+B8h] [rbp-100h]
  _QWORD *v37; // [rsp+C0h] [rbp-F8h]
  _QWORD *v38; // [rsp+C8h] [rbp-F0h]
  SIZE_T v39; // [rsp+D0h] [rbp-E8h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+E0h] [rbp-D8h] BYREF

  v7 = a4;
  v8 = a3;
  memset_0(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    v11 = 1048603;
    v12 = 0LL;
    if ( (_bittest64(&KeFeatureBits, 0x17u) & ((a7 & 2) != 0)) != 0 )
    {
      v11 = 1048667;
      v12 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
    {
      v11 |= 0x100040u;
      v13 = v12 | 0x800;
    }
    else
    {
      v13 = v12 & 0xFFFFFFFFFFFFF7FFuLL;
    }
    v14 = *(_QWORD **)(a2 + 384);
    v29 = v14;
    v15 = v14;
    Size = 0;
    if ( (v11 & 0x100040) == 0x100040 )
    {
      Size = RtlpGetNonLegacyXStateAreaLength(v13);
      v15 = (_QWORD *)(((unsigned __int64)v15 - Size) & 0xFFFFFFFFFFFFFFC0uLL);
      v14 = v29;
    }
    v33 = (_QWORD *)((unsigned __int64)(v15 - 5) & 0xFFFFFFFFFFFFFFF0uLL);
    v36 = v33;
    v16 = (__int64)(v33 - 4);
    v37 = v33 - 8;
    v38 = v33 - 12;
    v17 = v33 - 166;
    v39 = (char *)v14 - (char *)(v33 - 166);
    ProbeForWrite(v33 - 166, v39, 0x10u);
    *((_OWORD *)v33 - 4) = 0LL;
    *(v33 - 6) = 0LL;
    *((_DWORD *)v33 - 16) = 1;
    *((_DWORD *)v33 - 15) = 2;
    if ( (a7 & 1) != 0 )
      *((_DWORD *)v33 - 15) = 3;
    if ( (v11 & 0x100040) == 0x100040 )
    {
      v18 = v33 - 12;
      *v18 = -1232;
      v18[1] = *(_DWORD *)(a2 + 384) - (_DWORD)v17;
      v18[2] = -1232;
      v18[3] = 1232;
      v18[4] = (_DWORD)v15 - ((_DWORD)v33 - 96);
      v18[5] = *(_DWORD *)(a2 + 384) - (_DWORD)v15;
      memset_0(v15, 0, Size);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        v15[1] = v13 | 0x8000000000000000uLL;
    }
    *((_DWORD *)v17 + 12) = v11;
    KeContextFromKframes(a2, a1, v17);
    *(_QWORD *)(((unsigned __int64)(v15 - 5) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18) = v17[19];
    *v33 = v17[31];
    KePopulateContinuationContext();
    v7 = a4;
    v8 = a3;
  }
  else
  {
    v31 = *(_QWORD **)(a2 + 208);
    v22 = (unsigned __int64)(v31 + 162);
    if ( (((_BYTE)v31 + 16) & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v22 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v22 = *(_BYTE *)v22;
    *(_BYTE *)(v22 + 31) = *(_BYTE *)(v22 + 31);
    v17 = v31;
    if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
    {
      v23 = KiUnwindUserSspForApcContextCopyBypass(v31);
      if ( v23 < 0 )
        RtlRaiseStatus(v23);
    }
    v16 = (__int64)(v31 + 162);
  }
  *(_OWORD *)v16 = 0LL;
  *(_OWORD *)(v16 + 16) = 0LL;
  if ( (a7 & 4) != 0 )
  {
    *(_QWORD *)v16 = a5;
    *(_QWORD *)(v16 + 8) = v17;
    a5 = v16;
  }
  *v17 = v7;
  v17[1] = a5;
  v17[2] = a6;
  v17[3] = v8;
  v17[4] = a7;
  *(_QWORD *)(a2 + 384) = v17;
  *(_QWORD *)(a2 + 360) = qword_140FC74D8;
  *(_WORD *)(a2 + 368) = 51;
  if ( *(_BYTE *)(a2 + 43) != 2 )
    KiSetupForInstrumentationReturn(a2);
  result = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140E62750;
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140E62750 )
  {
    __sidt(v34);
    v20 = (_QWORD *)v35;
    for ( i = (const char *)v35; (unsigned __int64)i < v35 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v25 = 848;
    v26 = qword_140E62740;
    while ( v25 >= 8 )
    {
      v26 = __ROR8__(v26 - *v20++, qword_140E62748);
      v25 -= 8;
    }
    while ( v25 )
    {
      v26 = __ROR8__(v26 - *(unsigned __int8 *)v20, qword_140E62748);
      v20 = (_QWORD *)((char *)v20 + 1);
      --v25;
    }
    if ( qword_140E62758 != v26 )
    {
      if ( qword_140E62710 )
        goto LABEL_42;
      qword_140E62710 = (unsigned int)__ROL4__(603979780, 166);
      qword_140E62718 = 0LL;
      qword_140E62720 = 0LL;
      qword_140E62728 = 269LL;
      qword_140E62730 = v35;
    }
    if ( !qword_140E62710 )
    {
LABEL_33:
      v24 = 41929663 * (__rdtsc() >> 4);
      result = v24 / 0x12A05F2000LL;
      qword_140E62750 = MEMORY[0xFFFFF78000000008] + v24 % 0x12A05F2000LL - MEMORY[0xFFFFF780000003B0] + 288000000000LL;
      return result;
    }
LABEL_42:
    if ( stru_140E626D0.DeferredRoutine != KiScanQueues )
    {
      stru_140E626D0.TargetInfoAsUlong = 275;
      stru_140E626D0.DeferredRoutine = KiScanQueues;
      stru_140E626D0.DeferredContext = &stru_140E626D0;
      stru_140E626D0.DpcData = 0LL;
      stru_140E626D0.ProcessorHistory = 0LL;
    }
    qword_140E62738 = 989824LL;
    KeInsertQueueDpc(&stru_140E626D0, 0LL, 0LL);
    goto LABEL_33;
  }
  return result;
}
