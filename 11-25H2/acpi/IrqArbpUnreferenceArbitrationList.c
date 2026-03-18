/*
 * XREFs of IrqArbpUnreferenceArbitrationList @ 0x1400B170C
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1400B1B88 (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1400464E8 (ProcessorDeleteDeviceIdtAssignment.c)
 *     WPP_RECORDER_SF_DDq @ 0x140048A5C (WPP_RECORDER_SF_DDq.c)
 *     IcGetPossibleInput @ 0x140096758 (IcGetPossibleInput.c)
 *     LinkNodeGetPossibleGsiv @ 0x1400A8EAC (LinkNodeGetPossibleGsiv.c)
 *     IcRemovePossibleReference @ 0x1400AAE18 (IcRemovePossibleReference.c)
 *     IrqArbGsivFromIrq @ 0x1400B3244 (IrqArbGsivFromIrq.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1400B3264 (ProcessorGetDeviceIdtAssignment.c)
 */

__int64 __fastcall IrqArbpUnreferenceArbitrationList(__int64 a1, _QWORD **a2)
{
  struct _RTL_RANGE_LIST *v2; // rcx
  _QWORD **v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  PRTL_RANGE i; // rcx
  PVOID UserData; // rbx
  _QWORD *j; // r15
  void **v11; // r14
  int v12; // eax
  unsigned int Start; // esi
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // edi
  unsigned int v17; // r12d
  int v18; // r8d
  int v19; // [rsp+20h] [rbp-60h]
  _BYTE v20[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD **v24; // [rsp+C8h] [rbp+48h]

  v24 = a2;
  v2 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  Range = 0LL;
  v3 = a2;
  v21 = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  RtlGetFirstRange(v2, &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDq((__int64)WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6, v19);
      i = Range;
    }
    UserData = i->UserData;
    *((_DWORD *)UserData + 1) &= ~8u;
    for ( j = *v3; v3 != j; j = (_QWORD *)*j )
    {
      v11 = (void **)(j + 4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x14u,
          0x14u,
          (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids);
      if ( Range->Owner == *v11 )
      {
        v12 = *((_DWORD *)UserData + 1);
        if ( (v12 & 8) == 0 )
        {
          *((_DWORD *)UserData + 1) = v12 | 8;
          Start = Range->Start;
          if ( LODWORD(Range->Start) <= LODWORD(Range->End) )
          {
            do
            {
              v14 = IrqArbGsivFromIrq(Start);
              v16 = v14;
              if ( v14 < 0xFFF00000 && (int)IcGetPossibleInput(v14, v15, 0LL) >= 0 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    4u,
                    v18 + 20,
                    v18 + 21,
                    (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids);
                IcRemovePossibleReference(v16, Range->Attributes & 1);
              }
              if ( (int)ProcessorGetDeviceIdtAssignment(*v11, v16, 1LL, v20) >= 0 )
              {
                v17 = DWORD1(v21);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    4u,
                    0x14u,
                    0x16u,
                    (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids);
                ProcessorDeleteDeviceIdtAssignment(*v11, v16, v17, 1);
              }
              ++Start;
            }
            while ( Start <= LODWORD(Range->End) );
            v3 = v24;
          }
          if ( *((_DWORD *)UserData + 2) == 2 )
          {
            LinkNodeGetPossibleGsiv(*((_QWORD *)UserData + 2), 0LL);
            --*(_DWORD *)(*((_QWORD *)UserData + 2) + 28LL);
          }
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 0LL;
}
