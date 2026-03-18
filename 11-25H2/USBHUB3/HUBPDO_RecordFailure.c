/*
 * XREFs of HUBPDO_RecordFailure @ 0x14001A30C
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B00 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 */

__int64 __fastcall HUBPDO_RecordFailure(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  unsigned int *v5; // r15
  int v6; // r9d
  unsigned int v7; // edx
  size_t v8; // r12
  void *Pool2; // rax
  int v10; // edx

  v2 = a1 + 56;
  v3 = 0;
  v5 = *(unsigned int **)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v6 = 14;
LABEL_4:
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      a2,
      5,
      v6,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v6 = 15;
    goto LABEL_4;
  }
  v7 = *v5;
  v8 = 4096LL;
  if ( *v5 > 0x1000 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        v7,
        5,
        16,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
      v2 = a1 + 56;
    }
    goto LABEL_12;
  }
  v8 = *v5;
  if ( v7 >= 0x14 )
  {
LABEL_12:
    Pool2 = (void *)ExAllocatePool2(64LL, v8, 1681082453LL);
    *(_QWORD *)v2 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v5, v8);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1424LL) = *(_DWORD *)(*(_QWORD *)v2 + 12LL);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
          v10,
          5,
          18,
          (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
      }
      return (unsigned int)-1073741670;
    }
    return v3;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      2u,
      5u,
      0x11u,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
      *v5,
      20);
  return (unsigned int)-1073741789;
}
