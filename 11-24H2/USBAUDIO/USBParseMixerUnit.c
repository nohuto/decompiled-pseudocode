/*
 * XREFs of USBParseMixerUnit @ 0x140038920
 * Callers:
 *     USBParseConvertControlUnits @ 0x140036A00 (USBParseConvertControlUnits.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     USBHwAllocateAndBag @ 0x14002D688 (USBHwAllocateAndBag.c)
 *     BusApiBuildMixerFunctionUnit @ 0x1400345C0 (BusApiBuildMixerFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x140036990 (USBParseBuildSourceIdArray.c)
 *     USBParseGetUnitString @ 0x1400381B4 (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1400423F0 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1400425A8 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseMixerUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // rdi
  __int64 v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 *v9; // rsi
  int UnitString; // ebx
  int v11; // ecx
  unsigned int i; // edx
  int v13; // r8d
  int v14; // eax
  int v15; // r15d
  unsigned __int64 v16; // r8
  unsigned int v17; // r12d
  unsigned __int64 v18; // rcx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // r15d
  char *v23; // r14
  __int64 v24; // rdx
  char *v25; // rcx
  signed __int64 v26; // rsi
  int *v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  int ChannelConfigForUnit; // eax
  __int64 v33; // rdx
  int v34; // [rsp+50h] [rbp-19h] BYREF
  char *v35; // [rsp+58h] [rbp-11h] BYREF
  const WCHAR *v36; // [rsp+60h] [rbp-9h] BYREF
  __int64 v37; // [rsp+68h] [rbp-1h]
  __int64 v38; // [rsp+70h] [rbp+7h] BYREF
  int v39; // [rsp+78h] [rbp+Fh]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v37 = a1;
  v5 = *(_QWORD *)(v2 + 72);
  v6 = *(_QWORD *)(v5 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v5 + 40) + 2LL);
  v7 = *a2;
  if ( (unsigned __int8)v7 < 5u || (unsigned __int64)&a2[v7] > v6 || (v8 = a2[4], (unsigned __int64)&a2[v8 + 9] > v6) )
  {
    LODWORD(v38) = 53816052;
    goto LABEL_40;
  }
  v9 = &a2[v8 + 5];
  v36 = 0LL;
  UnitString = USBParseGetUnitString(a1, a2, &v36);
  if ( UnitString < 0 )
    return (unsigned int)UnitString;
  if ( *(_WORD *)(v9 + 1) )
  {
    v11 = 0;
    for ( i = 0; i < 0x10; ++i )
    {
      v14 = v11 + 1;
      v13 = *(unsigned __int16 *)(v9 + 1);
      if ( !_bittest(&v13, i) )
        v14 = v11;
      v11 = v14;
    }
    if ( v14 != *v9 )
      return (unsigned int)-1073741438;
  }
  a2 = (unsigned __int8 *)v3[4];
  v15 = 0;
  v16 = *v3;
  v34 = 0;
  v35 = 0LL;
  if ( v16 < (unsigned __int64)(unsigned int)((_DWORD)a2 + 1) + 9 )
  {
    LODWORD(v38) = 53975322;
LABEL_40:
    HIDWORD(v38) = 1;
    goto LABEL_41;
  }
  v17 = v16 - (_DWORD)a2 - 10;
  v18 = (unsigned __int64)&v9[v17 + 3];
  v38 = v17;
  if ( v18 < v6 && v18 > (unsigned __int64)v3 && (__int64)v16 >= (__int64)&v9[v17 - (_QWORD)v3 + 4] )
  {
    v19 = 0LL;
    if ( (_DWORD)a2 )
    {
      while ( 1 )
      {
        v20 = USBParseCountOutputChannelsForUnit(*(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48), v3[v19 + 5], &v34);
        UnitString = v20;
        if ( v20 < 0 )
          break;
        v15 += v34;
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= v3[4] )
          goto LABEL_20;
      }
      v38 = 0x15033794F9LL;
      v39 = v20;
      RtlLogUnexpectedCodepath(&v38, v21);
      return (unsigned int)UnitString;
    }
LABEL_20:
    v22 = ((v15 * (unsigned int)*v9) >> 3) + ((((_BYTE)v15 * *v9) & 7) != 0);
    if ( v22 <= v17 )
    {
      v23 = (char *)(v9 + 4);
    }
    else
    {
      UnitString = USBHwAllocateAndBag((PVOID *)&v35, v22, 256LL, *(void **)(v37 + 8));
      if ( UnitString < 0 )
        return (unsigned int)-1073741670;
      v23 = v35;
      if ( v17 )
      {
        v24 = v38;
        v25 = v35;
        v26 = v9 - (unsigned __int8 *)v35;
        do
        {
          *v25 = v25[v26 + 4];
          ++v25;
          --v24;
        }
        while ( v24 );
      }
    }
    v28 = (int *)USBParseBuildSourceIdArray(v3[4], v3 + 5);
    if ( !v28 )
      return (unsigned int)UnitString;
    v29 = v3[3];
    v30 = *(_QWORD *)(v5 + 48);
    v31 = *(_QWORD *)(v5 + 40);
    LODWORD(v35) = 0;
    v34 = 0;
    ChannelConfigForUnit = USBParseCountOutputChannelsForUnit(v31, v30, v29, &v35);
    UnitString = ChannelConfigForUnit;
    if ( ChannelConfigForUnit < 0 )
    {
      HIDWORD(v38) = 23;
    }
    else
    {
      ChannelConfigForUnit = USBParseGetChannelConfigForUnit(*(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48), v3[3], &v34);
      UnitString = ChannelConfigForUnit;
      if ( ChannelConfigForUnit >= 0 )
      {
        UnitString = BusApiBuildMixerFunctionUnit(v37, v3[3], (int)v35, v34, v3[4], v28, v36, v22, v23);
LABEL_37:
        ExFreePool(v28);
        return (unsigned int)UnitString;
      }
      HIDWORD(v38) = 22;
    }
    LODWORD(v38) = 53974265;
    v39 = ChannelConfigForUnit;
    RtlLogUnexpectedCodepath(&v38, v33);
    goto LABEL_37;
  }
  v38 = 0x203352AF4LL;
LABEL_41:
  v39 = -1073741823;
  RtlLogUnexpectedCodepath(&v38, a2);
  return 3221225473LL;
}
