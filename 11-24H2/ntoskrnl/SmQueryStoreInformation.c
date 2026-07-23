/*
 * XREFs of SmQueryStoreInformation @ 0x140A11F10
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     SmProcessCompressionAcceleratorRequest @ 0x14079797C (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x140797B20 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessListRequest @ 0x1407980E8 (SmProcessListRequest.c)
 *     SmProcessProcessStoreInfoRequest @ 0x140798488 (SmProcessProcessStoreInfoRequest.c)
 *     SmProcessRegistrationRequest @ 0x1407985CC (SmProcessRegistrationRequest.c)
 *     SmProcessStatsRequest @ 0x1407987A8 (SmProcessStatsRequest.c)
 *     SmcProcessListRequest @ 0x1407992C8 (SmcProcessListRequest.c)
 *     SmcProcessStatsRequest @ 0x14079953C (SmcProcessStatsRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     SmProcessCompressionInfoRequest @ 0x140A120D4 (SmProcessCompressionInfoRequest.c)
 */

__int64 __fastcall SmQueryStoreInformation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        KPROCESSOR_MODE a4,
        unsigned int *a5)
{
  int v7; // ecx
  void *v8[2]; // [rsp+20h] [rbp-28h]
  size_t Size; // [rsp+30h] [rbp-18h]

  if ( a3 < 0x18 )
    return 3221225990LL;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  Size = *(_QWORD *)(a2 + 16);
  if ( (unsigned int)*(_OWORD *)a2 != 1 )
    return 3221225561LL;
  if ( a3 != 24 )
    return 3221225476LL;
  if ( HIDWORD(v8[0]) != 2 && HIDWORD(v8[0]) != 5 )
  {
    if ( HIDWORD(v8[0]) > 0x18 || (v7 = 29368576, !_bittest(&v7, HIDWORD(v8[0]))) )
    {
      if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
        return 3221225506LL;
    }
  }
  switch ( HIDWORD(v8[0]) )
  {
    case 2:
      return SmProcessStatsRequest((__int64)v8[1], Size, a5, a4);
    case 5:
      return SmProcessListRequest((_OWORD *)v8[1], Size, a5, a4);
    case 8:
      return SmcProcessListRequest((unsigned __int64)v8[1], Size, a5, a4);
    case 0xD:
      return SmcProcessStatsRequest((unsigned __int64)v8[1], Size, a5, a4);
    case 0xF:
      return SmProcessRegistrationRequest((unsigned __int64)v8[1], Size, a5, a4);
    case 0x16:
      return SmProcessCompressionInfoRequest(v8[1], (unsigned int)Size);
    case 0x17:
      return SmProcessProcessStoreInfoRequest((unsigned __int64)v8[1], Size, a4);
    case 0x18:
      return SmProcessCompressionReadStatsRequest((char *)v8[1], (unsigned int)Size, a5, a4);
    case 0x19:
      return SmProcessCompressionAcceleratorRequest((char *)v8[1], (unsigned int)Size, a5, a4);
  }
  return 3221225475LL;
}
