/*
 * XREFs of USBParseSelectorUnit @ 0x140039290
 * Callers:
 *     USBParseConvertControlUnits @ 0x140036D20 (USBParseConvertControlUnits.c)
 * Callees:
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 *     BusApiBuildFunctionUnit @ 0x14002D1DC (BusApiBuildFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x140036CB0 (USBParseBuildSourceIdArray.c)
 *     USBParseGetUnitString @ 0x1400384D4 (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x140042740 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1400428F8 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseSelectorUnit(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rdi
  __int64 v3; // r8
  __int64 v5; // r15
  unsigned __int64 v6; // rcx
  const WCHAR *SourceString; // r14
  int UnitString; // ebx
  int *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int ChannelConfigForUnit; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  int v17; // edx
  int v18; // [rsp+50h] [rbp-30h] BYREF
  int v19[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  int v21; // [rsp+68h] [rbp-18h]

  v2 = a2;
  v3 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( (unsigned __int8)v3 >= 5u )
  {
    v6 = *(_QWORD *)(v5 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v5 + 40) + 2LL);
    if ( (unsigned __int64)&a2[v3] <= v6 )
    {
      a2 = (unsigned __int8 *)a2[4];
      if ( &v2[(_QWORD)a2 + 5] <= (unsigned __int8 *)v6 )
      {
        SourceString = 0LL;
        UnitString = 0;
        *(_QWORD *)v19 = 0LL;
        if ( !(_BYTE)a2 )
          return (unsigned int)-1073741670;
        if ( (_DWORD)v3 - 6 == (_DWORD)a2 )
        {
          UnitString = USBParseGetUnitString(a1, v2, v19);
          if ( UnitString < 0 )
            return (unsigned int)-1073741670;
          SourceString = *(const WCHAR **)v19;
        }
        else if ( (_DWORD)v3 - 6 + 1 != (_DWORD)a2 )
        {
          return (unsigned int)-1073741670;
        }
        v10 = (int *)USBParseBuildSourceIdArray(v2[4], v2 + 5);
        if ( !v10 )
          return (unsigned int)UnitString;
        v11 = v2[3];
        v12 = *(_QWORD *)(v5 + 48);
        v13 = *(_QWORD *)(v5 + 40);
        v19[0] = 0;
        v18 = 0;
        ChannelConfigForUnit = USBParseCountOutputChannelsForUnit(v13, v12, v11, v19);
        UnitString = ChannelConfigForUnit;
        if ( ChannelConfigForUnit < 0 )
        {
          HIDWORD(v20) = 19;
        }
        else
        {
          ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                                   *(_QWORD *)(v5 + 40),
                                   *(_QWORD *)(v5 + 48),
                                   v2[3],
                                   &v18);
          UnitString = ChannelConfigForUnit;
          if ( ChannelConfigForUnit >= 0 )
          {
            v16 = v2[4];
            v17 = v2[3];
            v20 = 0LL;
            UnitString = BusApiBuildFunctionUnit(a1, v17, 3, v19[0], v18, v16, v10, SourceString, 0, &v20);
LABEL_18:
            ExFreePool(v10);
            return (unsigned int)UnitString;
          }
          HIDWORD(v20) = 18;
        }
        LODWORD(v20) = 53974265;
        v21 = ChannelConfigForUnit;
        RtlLogUnexpectedCodepath(&v20, v15);
        goto LABEL_18;
      }
    }
  }
  v20 = 0x6034825E7LL;
  v21 = -1073741823;
  RtlLogUnexpectedCodepath(&v20, a2);
  return 3221225473LL;
}
