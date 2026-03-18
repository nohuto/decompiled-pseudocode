/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801E7B0C
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x180258274 (-ProcessInput@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAA?AUDwmTouchpadInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801E7F4C (-GetConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x1801E7FF4 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18021AF80 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  int v6; // r14d
  char v8; // di
  char v9; // r15
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // ecx
  unsigned __int8 v14; // dl
  char v15; // cl
  char v16; // cl
  __int64 v17; // xmm1_8
  unsigned __int8 v18; // si
  bool v19; // al
  unsigned int v20; // ecx
  bool v21; // al
  char v22; // al
  char v23; // al
  int v24; // xmm1_4
  __int128 v25; // [rsp+38h] [rbp-41h] BYREF
  __int64 v26; // [rsp+48h] [rbp-31h]
  _BYTE v27[64]; // [rsp+50h] [rbp-29h] BYREF

  v3 = a3;
  if ( !*a1 )
    return (unsigned int)-2147019873;
  v6 = 0;
  v8 = 0;
  v9 = 2;
  if ( (*((_BYTE *)a1 + 148) & 1) != 0 || *((_DWORD *)a1 + 36) != *(_DWORD *)(a2 + 8) )
  {
    CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v25,
      *(unsigned int *)(a2 + 8),
      a3);
    if ( (*(_BYTE *)(a2 + 24) & 8) == 0 && (unsigned int)(*(_DWORD *)a2 - 2) <= 2 )
      DWORD2(v25) &= 0xFFFFFF3F;
    CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v25);
    if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
      v18 = BYTE8(v25) | 0xC0;
    else
      v18 = BYTE8(v25) & 0x3F;
    v19 = (v18 & 1) != 0 || (v18 & 2) != 0;
    if ( ((*((_BYTE *)a1 + 124) & 3) != 0) != v19
      || ((v18 & 4) != 0 || (v18 & 8) != 0 ? (v22 = 1) : (v22 = 0),
          ((*((_BYTE *)a1 + 124) & 0xC) != 0) != v22
       || ((v18 & 0x10) != 0 || (v18 & 0x20) != 0 ? (v23 = 1) : (v23 = 0), ((*((_BYTE *)a1 + 124) & 0x30) != 0) != v23)) )
    {
      v8 = 1;
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a1 + 40LL))(*a1, v27) != 1
      && (v8 || ((v18 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v18 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0) )
    {
      v8 = 1;
    }
    v20 = *((unsigned __int8 *)a1 + 148);
    if ( (v20 & 8) != 0 )
    {
      if ( !v8 )
      {
LABEL_46:
        if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 && (a1[17] & 2) != 0 )
          v8 = 1;
        goto LABEL_6;
      }
    }
    else
    {
      v21 = ((v20 >> 4) & 1) != (*((float *)a1 + 32) == 45.0) || ((v20 >> 5) & 1) != (*((float *)a1 + 33) == 45.0);
      v8 |= v21;
    }
    if ( *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v8 = 1;
    goto LABEL_46;
  }
LABEL_6:
  if ( *((_DWORD *)a1 + 39) == 2 && ((*((_BYTE *)a1 + 136) ^ (*((_BYTE *)a1 + 148) >> 1)) & 1) != 0 )
  {
    if ( (*((_BYTE *)a1 + 148) & 2) != 0
      && (unsigned int)dword_1803F8D18 > 4
      && tlgKeywordOn((__int64)&dword_1803F8D18, 2LL) )
    {
      *(_QWORD *)&v25 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v10,
        (unsigned int)&unk_1803CBA14,
        a3,
        v3,
        (__int64)&v25);
    }
  }
  else if ( !v8 && (*((_BYTE *)a1 + 148) & 4) == 0 )
  {
    goto LABEL_9;
  }
  v11 = *((_DWORD *)a1 + 39);
  LODWORD(v26) = 0;
  v12 = *((_DWORD *)a1 + 4);
  LODWORD(v25) = v11;
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    v13 = v12 | 0xC0;
  else
    v13 = v12 & 0xFFFFFF3F;
  v14 = *((_BYTE *)a1 + 148);
  DWORD1(v25) = v13;
  if ( (v14 & 8) != 0 )
  {
    v24 = *((_DWORD *)a1 + 33);
    DWORD2(v25) = *((_DWORD *)a1 + 32);
    HIDWORD(v25) = v24;
  }
  else
  {
    if ( (v14 & 0x10) != 0 )
      DWORD2(v25) = 1110704128;
    else
      DWORD2(v25) = 0;
    if ( (v14 & 0x20) != 0 )
      HIDWORD(v25) = 1110704128;
    else
      HIDWORD(v25) = 0;
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    v15 = v14 >> 1;
  else
    v15 = 0;
  v16 = v26 & 0xFE | v15 & 1;
  *((_BYTE *)a1 + 148) = v14 ^ (v14 ^ (2 * v16)) & 2;
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 || (*(_BYTE *)(a2 + 24) & 4) == 0 )
    v9 = 0;
  HIDWORD(v26) = *((_DWORD *)a1 + 38);
  LOBYTE(v26) = v9 | v16 & 0xFD;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int64))(*(_QWORD *)*a1 + 16LL))(*a1, &v25, a3, v3);
  if ( v6 >= 0 )
  {
    v17 = v26;
    *(_OWORD *)(a1 + 15) = v25;
    a1[17] = v17;
LABEL_9:
    *((_BYTE *)a1 + 148) &= ~4u;
  }
  return (unsigned int)v6;
}
