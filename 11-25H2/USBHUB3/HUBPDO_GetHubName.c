/*
 * XREFs of HUBPDO_GetHubName @ 0x140018BA0
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B00 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetHubSymbolicLinkName @ 0x140018D20 (HUBPDO_GetHubSymbolicLinkName.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1400338C0 (HUBMISC_StripSymbolicNamePrefix.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

__int64 __fastcall HUBPDO_GetHubName(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  _QWORD *v4; // rsi
  size_t v6; // rbp
  const void *v7; // rax
  int v8; // r14d
  __int64 v9; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  size_t Size; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2[3];
  v3 = 0;
  Size = 0LL;
  v4 = a2;
  DestinationString = 0LL;
  v6 = *(unsigned int *)(a2[23] + 8LL);
  if ( v2 )
  {
    if ( (unsigned int)v6 >= 6 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1632LL) & 2) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
        memset((void *)v2, 0, v6);
        HUBPDO_GetHubSymbolicLinkName(a1, &DestinationString);
        v7 = (const void *)HUBMISC_StripSymbolicNamePrefix(&DestinationString, &Size);
        v8 = Size;
        if ( v7 && (unsigned int)v6 >= (int)Size + 6 )
          memmove((void *)(v2 + 4), v7, Size);
        v9 = (unsigned int)(v8 + 6);
        *(_DWORD *)v2 = v9;
        v4[7] = v9;
      }
      else
      {
        *(_DWORD *)v2 = 6;
        *(_WORD *)(v2 + 4) = 0;
        a2[7] = 6LL;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
          3u,
          5u,
          0xDu,
          (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
          v6,
          6);
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        (_DWORD)a2,
        5,
        12,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  return v3;
}
