/*
 * XREFs of IrqTranslateResources @ 0x1400B13D0
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x14004F218 (IrqLibAcquireArbiterLock.c)
 *     WPP_RECORDER_SF_dDDq @ 0x14004F2B8 (WPP_RECORDER_SF_dDDq.c)
 *     IrqLibReleaseArbiterLock @ 0x1400564C4 (IrqLibReleaseArbiterLock.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1400B15D0 (IrqTranslatepQueryDeviceIrql.c)
 *     IrqArbGsivFromIrq @ 0x1400B3244 (IrqArbGsivFromIrq.c)
 */

__int64 __fastcall IrqTranslateResources(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        PRTL_RANGE Range)
{
  PRTL_RANGE v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r15
  int v13; // eax
  int v14; // esi
  struct _RTL_RANGE_LIST *v15; // rcx
  __m128i *UserData; // rax
  __m128i v17; // xmm1
  unsigned __int64 v18; // rdx
  char v19; // si
  PRTL_RANGE v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+20h] [rbp-51h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+50h] [rbp-21h] BYREF
  struct _RANGE_LIST_ITERATOR v25; // [rsp+70h] [rbp-1h] BYREF
  PRTL_RANGE v26; // [rsp+C0h] [rbp+4Fh] BYREF

  v7 = Range;
  v26 = 0LL;
  v8 = 0LL;
  v9 = a6;
  memset(&v25, 0, sizeof(v25));
  *(_OWORD *)&Range->Start = *(_OWORD *)a2;
  LODWORD(v7->UserData) = *(_DWORD *)(a2 + 16);
  if ( v9 == a1 )
    return 0LL;
  IrqLibAcquireArbiterLock(0);
  if ( a3 )
  {
    if ( a3 == 1 )
      LODWORD(v8) = -1073741637;
  }
  else
  {
    v13 = IrqArbGsivFromIrq(*(unsigned int *)(a2 + 8));
    Range = 0LL;
    memset(&Iterator, 0, sizeof(Iterator));
    v14 = v13;
    while ( (unsigned int)v8 < ProcessorInstanceCount )
    {
      v15 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v8);
      if ( v15 )
      {
        RtlGetFirstRange(v15, &Iterator, &Range);
        while ( Range )
        {
          UserData = (__m128i *)Range->UserData;
          if ( UserData && UserData[1].m128i_i32[0] == v14 )
          {
            v17 = *UserData;
            v18 = HIDWORD(UserData[1].m128i_i64[0]);
            LODWORD(v7->End) = v18;
            *(ULONGLONG *)((char *)&v7->End + 4) = v17.m128i_i64[0];
            HIWORD(v7->Start) = _mm_extract_epi16(v17, 4);
            LODWORD(v8) = 288;
            WORD2(v7->Start) = (unsigned __int8)IrqTranslatepQueryDeviceIrql(*(unsigned int *)(a2 + 8), v18);
            goto LABEL_22;
          }
          RtlGetNextRange(&Iterator, &Range, 1u);
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    LODWORD(v8) = -1073741275;
    v19 = 0;
    RtlGetFirstRange(RangeList, &v25, &v26);
    v20 = v26;
    if ( !v26 )
      goto LABEL_21;
    do
    {
      if ( v20->Owner == (PVOID)v9 )
        v19 = 1;
      RtlGetNextRange(&v25, &v26, 1u);
      v20 = v26;
    }
    while ( v26 );
    if ( !v19 )
    {
LABEL_21:
      LODWORD(v8) = 0;
      *(_OWORD *)&v7->Start = *(_OWORD *)a2;
      LODWORD(v7->UserData) = *(_DWORD *)(a2 + 16);
    }
  }
LABEL_22:
  IrqLibReleaseArbiterLock();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dDDq((__int64)WPP_GLOBAL_Control->DeviceExtension, WORD2(v7->Start), v21, v22, v23);
  return (unsigned int)v8;
}
