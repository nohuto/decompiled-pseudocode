/*
 * XREFs of HUBDSM_ComparingDeviceOnReEnumeration @ 0x140021070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBDSM_ComparingDeviceOnReEnumeration(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  const void *v3; // rcx
  int v4; // edx
  int v5; // r9d

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4089;
  v3 = (const void *)(v1 + 1732);
  if ( (*(_DWORD *)(v1 + 2464) & 4) != 0 )
  {
    if ( RtlCompareMemory(v3, (const void *)(v1 + 2536), 0x12uLL) != 18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 41;
LABEL_8:
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
          v4,
          5,
          v5,
          (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids);
        return 4061;
      }
      return 4061;
    }
  }
  else if ( RtlCompareMemory(v3, (const void *)(v1 + 1988), 0x12uLL) != 18 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 42;
      goto LABEL_8;
    }
    return 4061;
  }
  return v2;
}
