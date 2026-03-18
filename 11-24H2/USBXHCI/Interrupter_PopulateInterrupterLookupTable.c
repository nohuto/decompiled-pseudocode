/*
 * XREFs of Interrupter_PopulateInterrupterLookupTable @ 0x14007C4C4
 * Callers:
 *     Interrupter_PrepareHardware @ 0x14007C5D0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Interrupter_PopulateInterrupterLookupTable(__int64 a1)
{
  _DWORD *v1; // rsi
  unsigned int v3; // ebx
  ULONG ActiveProcessorCount; // eax
  __int64 Pool2; // rax
  int v6; // edx
  unsigned __int16 v7; // dx
  unsigned int i; // r8d

  v1 = (_DWORD *)(a1 + 24);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1036LL) == 1 && *v1 == 2 || *v1 == 1 )
  {
    return 0;
  }
  else
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    *(_DWORD *)(a1 + 48) = ActiveProcessorCount;
    Pool2 = ExAllocatePool2(64LL, 2 * ActiveProcessorCount, 1229146200LL);
    v3 = 0;
    *(_QWORD *)(a1 + 56) = Pool2;
    if ( Pool2 )
    {
      v7 = 1;
      for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL * i) = v7;
        v7 += ((unsigned __int16)(v7 + 1) == *(_DWORD *)(a1 + 64)) + 1;
        if ( (unsigned int)v7 >= *v1 )
          v7 = 1;
      }
    }
    else
    {
      v3 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v6,
          9,
          63,
          (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
      }
    }
  }
  return v3;
}
