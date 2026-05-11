/*
 * XREFs of USBParseProcessUnit @ 0x140038F80
 * Callers:
 *     USBParseConvertControlUnits @ 0x140036D20 (USBParseConvertControlUnits.c)
 * Callees:
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 *     BusApiBuildProcessFunctionUnit @ 0x1400349A0 (BusApiBuildProcessFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x140036CB0 (USBParseBuildSourceIdArray.c)
 *     USBParseGetUnitString @ 0x1400384D4 (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x140042740 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1400428F8 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseProcessUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int8 *v8; // r15
  unsigned __int8 *v9; // r13
  int UnitString; // ebx
  int v11; // r12d
  void *Pool2; // r14
  __int64 v13; // rcx
  unsigned __int8 *v14; // rdx
  int v15; // eax
  __int64 v16; // r15
  int *v17; // rsi
  __int64 v18; // r13
  __int64 v19; // r8
  int ChannelConfigForUnit; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rdx
  unsigned __int8 *v24; // rax
  _DWORD *v25; // rcx
  unsigned __int16 *v26; // rdx
  int v27; // eax
  __int64 v29; // [rsp+50h] [rbp-39h]
  int v30; // [rsp+70h] [rbp-19h] BYREF
  int v31; // [rsp+74h] [rbp-15h] BYREF
  int v32; // [rsp+78h] [rbp-11h]
  PCWSTR v33; // [rsp+80h] [rbp-9h] BYREF
  __int64 v34; // [rsp+88h] [rbp-1h]
  int v35[2]; // [rsp+90h] [rbp+7h] BYREF
  int v36; // [rsp+98h] [rbp+Fh]

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v35 = a1;
  v5 = *a2;
  v34 = *(_QWORD *)(v2 + 72);
  if ( (unsigned __int8)v5 < 7u
    || (v6 = *(_QWORD *)(v34 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v34 + 40) + 2LL), (unsigned __int64)&a2[v5] > v6)
    || (v7 = a2[6], (unsigned __int64)&a2[v7 + 12] > v6) )
  {
    v35[1] = 1;
    goto LABEL_36;
  }
  v33 = 0LL;
  v8 = &a2[v7];
  v9 = &a2[v7 + 13 + a2[v7 + 11]];
  v32 = *((unsigned __int16 *)a2 + 2) + 1;
  UnitString = USBParseGetUnitString(a1, a2, &v33);
  if ( UnitString < 0 )
    return (unsigned int)UnitString;
  v11 = 0;
  Pool2 = 0LL;
  if ( (unsigned __int64)v9 < v6 )
  {
    v13 = v8[11] - 1LL;
    if ( v13 >= 0 )
    {
      v14 = &v8[v13 + 12];
      do
      {
        v15 = *v14--;
        v11 = v15 | (v11 << 8);
        --v13;
      }
      while ( v13 >= 0 );
    }
    if ( (unsigned int)(v32 - 2) > 1 )
    {
      LODWORD(v16) = 0;
      goto LABEL_12;
    }
    v16 = *v9;
    if ( !*v9 )
    {
LABEL_12:
      v17 = (int *)USBParseBuildSourceIdArray(a2[6], a2 + 7);
      if ( !v17 )
      {
        UnitString = -1073741670;
LABEL_32:
        if ( Pool2 )
          ExFreePool(Pool2);
        return (unsigned int)UnitString;
      }
      v18 = v34;
      v19 = a2[3];
      v31 = 0;
      v30 = 0;
      ChannelConfigForUnit = USBParseCountOutputChannelsForUnit(*(_QWORD *)(v34 + 40), *(_QWORD *)(v34 + 48), v19, &v31);
      UnitString = ChannelConfigForUnit;
      if ( ChannelConfigForUnit < 0 )
      {
        v35[1] = 27;
      }
      else
      {
        ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                                 *(_QWORD *)(v18 + 40),
                                 *(_QWORD *)(v18 + 48),
                                 a2[3],
                                 &v30);
        UnitString = ChannelConfigForUnit;
        if ( ChannelConfigForUnit >= 0 )
        {
          UnitString = BusApiBuildProcessFunctionUnit(
                         *(__int64 *)v35,
                         a2[3],
                         a2[6],
                         v32,
                         v31,
                         v30,
                         a2[6],
                         v17,
                         v33,
                         v11,
                         v29,
                         v16,
                         (__int64)Pool2);
LABEL_30:
          ExFreePool(v17);
          goto LABEL_32;
        }
        v35[1] = 26;
      }
      v35[0] = 53974265;
      v36 = ChannelConfigForUnit;
      RtlLogUnexpectedCodepath(v35, v21);
      goto LABEL_30;
    }
    v22 = *v9;
    Pool2 = (void *)ExAllocatePool2(256LL, 4 * v16, 1096972357LL);
    if ( Pool2 )
    {
      v23 = 2LL * (unsigned int)(v16 - 1);
      v24 = &v9[v23 + 1];
      if ( (unsigned __int64)v24 >= v6 || v24 <= a2 || *a2 < (__int64)&v9[v23 - (_QWORD)a2 + 2] )
      {
        ExFreePool(Pool2);
        v35[1] = 3;
        goto LABEL_36;
      }
      if ( (_DWORD)v16 )
      {
        v25 = Pool2;
        v26 = (unsigned __int16 *)(v9 + 1);
        do
        {
          v27 = *v26++;
          *v25++ = v27;
          --v22;
        }
        while ( v22 );
      }
      goto LABEL_12;
    }
    return (unsigned int)-1073741670;
  }
  v35[1] = 2;
LABEL_36:
  v35[0] = 53883493;
  v36 = -1073741823;
  RtlLogUnexpectedCodepath(v35, a2);
  return 3221225473LL;
}
