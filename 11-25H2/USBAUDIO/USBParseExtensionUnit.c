/*
 * XREFs of USBParseExtensionUnit @ 0x1400375F0
 * Callers:
 *     USBParseConvertControlUnits @ 0x140036D20 (USBParseConvertControlUnits.c)
 * Callees:
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 *     BusApiBuildExtensionFunctionUnit @ 0x14003473C (BusApiBuildExtensionFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x140036CB0 (USBParseBuildSourceIdArray.c)
 *     USBParseGetUnitString @ 0x1400384D4 (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x140042740 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1400428F8 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseExtensionUnit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 *v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // r8
  unsigned __int8 *v9; // rax
  int v10; // ecx
  unsigned __int8 *v11; // r8
  int v12; // eax
  int UnitString; // edi
  int *v14; // r14
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  int ChannelConfigForUnit; // eax
  __int64 v19; // rdx
  int v21; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch] BYREF
  const WCHAR *v23; // [rsp+58h] [rbp-18h] BYREF
  int v24; // [rsp+60h] [rbp-10h]

  v3 = (unsigned __int8 *)a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( *(_BYTE *)a2 < 7u
    || (v5 = *(unsigned __int8 *)a2,
        v6 = *(_QWORD *)(v4 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL),
        v5 + a2 > v6)
    || (a2 = *(unsigned __int8 *)(a2 + 6), (unsigned __int64)&v3[a2 + 12] > v6) )
  {
    HIDWORD(v23) = 1;
  }
  else
  {
    v23 = 0LL;
    a2 += (unsigned __int64)(v3 + 7);
    v7 = 0;
    v8 = *(unsigned __int8 *)(a2 + 4);
    v9 = (unsigned __int8 *)(v8 + a2 + 5);
    if ( (unsigned __int64)v9 < v6 && v9 > v3 && v5 >= (__int64)(a2 + *(unsigned __int8 *)(a2 + 4) - (_QWORD)v3 + 6LL) )
    {
      v10 = *(unsigned __int8 *)(a2 + 4);
      if ( (_BYTE)v8 )
      {
        v11 = (unsigned __int8 *)(a2 + v8 + 5);
        do
        {
          v12 = *v11--;
          v7 = v12 | (v7 << 8);
          --v10;
        }
        while ( v10 );
      }
      UnitString = USBParseGetUnitString(a1, v3, &v23);
      if ( UnitString < 0 )
        return (unsigned int)UnitString;
      v14 = (int *)USBParseBuildSourceIdArray(v3[6], v3 + 7);
      if ( !v14 )
        return (unsigned int)-1073741670;
      v15 = v3[3];
      v16 = *(_QWORD *)(v4 + 48);
      v17 = *(_QWORD *)(v4 + 40);
      v22 = 0;
      v21 = 0;
      ChannelConfigForUnit = USBParseCountOutputChannelsForUnit(v17, v16, v15, &v22);
      UnitString = ChannelConfigForUnit;
      if ( ChannelConfigForUnit < 0 )
      {
        HIDWORD(v23) = 28;
      }
      else
      {
        ChannelConfigForUnit = USBParseGetChannelConfigForUnit(*(_QWORD *)(v4 + 40), *(_QWORD *)(v4 + 48), v3[3], &v21);
        UnitString = ChannelConfigForUnit;
        if ( ChannelConfigForUnit >= 0 )
        {
          UnitString = BusApiBuildExtensionFunctionUnit(
                         a1,
                         v3[3],
                         v22,
                         v21,
                         v3[6],
                         v14,
                         v23,
                         *((unsigned __int16 *)v3 + 2),
                         v7);
LABEL_18:
          ExFreePool(v14);
          return (unsigned int)UnitString;
        }
        HIDWORD(v23) = 29;
      }
      LODWORD(v23) = 53974265;
      v24 = ChannelConfigForUnit;
      RtlLogUnexpectedCodepath(&v23, v19);
      goto LABEL_18;
    }
    HIDWORD(v23) = 2;
  }
  LODWORD(v23) = 53865776;
  v24 = -1073741823;
  RtlLogUnexpectedCodepath(&v23, a2);
  return 3221225473LL;
}
