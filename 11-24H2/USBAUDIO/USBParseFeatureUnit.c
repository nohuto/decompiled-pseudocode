/*
 * XREFs of USBParseFeatureUnit @ 0x140037500
 * Callers:
 *     USBParseConvertControlUnits @ 0x140036A00 (USBParseConvertControlUnits.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     memset @ 0x14001BF00 (memset.c)
 *     BusApiBuildFeatureFunctionUnit @ 0x140034498 (BusApiBuildFeatureFunctionUnit.c)
 *     USBParseGetUnitString @ 0x1400381B4 (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1400423F0 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1400425A8 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseFeatureUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // r14d
  int ChannelConfigForUnit; // eax
  __int64 v15; // rdx
  unsigned int UnitString; // ebx
  int v17; // r13d
  unsigned __int64 v18; // r14
  _DWORD *Pool2; // r15
  __int64 v20; // rdx
  int v21; // ecx
  __int16 v22; // r8
  int v23; // r9d
  int v24; // [rsp+40h] [rbp-20h] BYREF
  int v25; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v26; // [rsp+48h] [rbp-18h] BYREF
  int v27; // [rsp+50h] [rbp-10h]

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = *a2;
  if ( (unsigned __int8)v5 < 6u
    || (unsigned __int64)&a2[v5] > *(_QWORD *)(v4 + 40)
                                 + (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL) )
  {
    v26 = 0x7034825E7LL;
    v27 = -1073741823;
    RtlLogUnexpectedCodepath(&v26, a2);
  }
  else
  {
    v6 = a2[3];
    v7 = *(_QWORD *)(v4 + 48);
    v8 = *(_QWORD *)(v4 + 40);
    v24 = 0;
    v9 = 0;
    v25 = 0;
    v26 = 0LL;
    v10 = USBParseCountOutputChannelsForUnit(v8, v7, v6, &v24);
    v12 = v10;
    if ( v10 < 0 )
    {
      v26 = 0x18033794F9LL;
      v27 = v10;
      RtlLogUnexpectedCodepath(&v26, v11);
      return v12;
    }
    ChannelConfigForUnit = USBParseGetChannelConfigForUnit(*(_QWORD *)(v4 + 40), *(_QWORD *)(v4 + 48), a2[3], &v25);
    UnitString = ChannelConfigForUnit;
    if ( ChannelConfigForUnit < 0 )
    {
      v26 = 0x19033794F9LL;
      v27 = ChannelConfigForUnit;
      RtlLogUnexpectedCodepath(&v26, v15);
      return UnitString;
    }
    v17 = v24;
    v18 = ((unsigned __int64)*a2 - 7) / a2[5];
    if ( (_DWORD)v18 != v24 + 1 )
    {
      if ( v25 )
      {
        if ( (unsigned int)v18 >= v24 + 1 )
          return (unsigned int)-1073741438;
        v9 = v24 - v18 + 1;
      }
      else
      {
        if ( (_DWORD)v18 != v24 )
          return (unsigned int)-1073741438;
        v9 = 1;
      }
    }
    UnitString = USBParseGetUnitString(a1, a2, &v26);
    if ( (UnitString & 0x80000000) != 0 )
      return UnitString;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL * (unsigned int)(v9 + v18), 1096972357LL);
    if ( !Pool2 )
      return UnitString;
    v20 = 0LL;
    v24 = a2[4];
    if ( !(_DWORD)v18 )
    {
LABEL_23:
      if ( (unsigned int)v20 < v9 + (int)v18 )
        memset(&Pool2[v20], 0, 4LL * (unsigned int)(v9 + v18 - v20));
      UnitString = BusApiBuildFeatureFunctionUnit(a1, a2[3], v17, v25, &v24, (const WCHAR *)v26, Pool2);
      ExFreePool(Pool2);
      return UnitString;
    }
    while ( 1 )
    {
      v21 = a2[5];
      v22 = 0;
      if ( a2[5] )
        break;
LABEL_22:
      Pool2[v20] = v22 & 3 | (4 * (v22 & 0xFFFC));
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= (unsigned int)v18 )
        goto LABEL_23;
    }
    v23 = v21 + v20 * v21;
    while ( *a2 >= (unsigned __int64)(unsigned int)--v23 + 6 )
    {
      v22 = a2[v23 + 6] | (unsigned __int16)(v22 << 8);
      if ( !--v21 )
        goto LABEL_22;
    }
    v26 = 0x8034825E7LL;
    v27 = -1073741823;
    RtlLogUnexpectedCodepath(&v26, v20);
    ExFreePool(Pool2);
  }
  return 3221225473LL;
}
