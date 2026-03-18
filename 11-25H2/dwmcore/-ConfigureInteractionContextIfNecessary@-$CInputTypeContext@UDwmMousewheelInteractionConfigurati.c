/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18021892C
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x180262F30 (-ProcessInput@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAA?AUDwmMousewheelInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x180218CF4 (-GetConfig@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnum.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAXAEBUDwmMousewheelInteractionConfigurationPrimitive@@@Z @ 0x180218D9C (-UpdateActiveConfig@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMIL.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180226980 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // r14d
  char v7; // di
  char v8; // r15
  unsigned __int8 v9; // si
  bool v10; // al
  char v11; // al
  unsigned int v12; // ecx
  bool v13; // al
  char v14; // al
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int8 v18; // dl
  int v19; // xmm1_4
  char v20; // cl
  char v21; // cl
  __int64 v22; // xmm1_8
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int128 v26; // [rsp+38h] [rbp-41h] BYREF
  __int64 v27; // [rsp+48h] [rbp-31h]
  _BYTE v28[64]; // [rsp+50h] [rbp-29h] BYREF

  if ( !*a1 )
    return (unsigned int)-2147019873;
  v5 = 0;
  v7 = 0;
  v8 = 2;
  if ( (*((_BYTE *)a1 + 148) & 1) != 0 || *((_DWORD *)a1 + 36) != *(_DWORD *)(a2 + 8) )
  {
    CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v26,
      *(unsigned int *)(a2 + 8),
      a3);
    if ( (*(_BYTE *)(a2 + 24) & 8) == 0 && (unsigned int)(*(_DWORD *)a2 - 2) <= 2 )
      DWORD2(v26) &= 0xFFFFFF3F;
    CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v26);
    if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
      v9 = BYTE8(v26) | 0xC0;
    else
      v9 = BYTE8(v26) & 0x3F;
    v10 = (v9 & 1) != 0 || (v9 & 2) != 0;
    if ( ((*((_BYTE *)a1 + 124) & 3) != 0) != v10
      || ((v9 & 4) != 0 || (v9 & 8) != 0 ? (v11 = 1) : (v11 = 0),
          ((*((_BYTE *)a1 + 124) & 0xC) != 0) != v11
       || ((v9 & 0x10) != 0 || (v9 & 0x20) != 0 ? (v14 = 1) : (v14 = 0), ((*((_BYTE *)a1 + 124) & 0x30) != 0) != v14)) )
    {
      v7 = 1;
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a1 + 40LL))(*a1, v28) != 1 )
      v7 = v7 || ((v9 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v9 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0;
    v12 = *((unsigned __int8 *)a1 + 148);
    if ( (v12 & 8) != 0 )
    {
      if ( !v7 )
      {
LABEL_27:
        if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 && (a1[17] & 2) != 0 )
          v7 = 1;
        goto LABEL_68;
      }
    }
    else
    {
      v13 = ((v12 >> 4) & 1) != (*((float *)a1 + 32) == 45.0) || ((v12 >> 5) & 1) != (*((float *)a1 + 33) == 45.0);
      v7 |= v13;
    }
    if ( *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v7 = 1;
    goto LABEL_27;
  }
LABEL_68:
  if ( *((_DWORD *)a1 + 39) == 2 && ((*((_BYTE *)a1 + 136) ^ (*((_BYTE *)a1 + 148) >> 1)) & 1) != 0 )
  {
    if ( (*((_BYTE *)a1 + 148) & 2) != 0
      && (unsigned int)dword_180404D18 > 4
      && tlgKeywordOn((__int64)&dword_180404D18, 2LL) )
    {
      *(_QWORD *)&v26 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v23,
        (unsigned int)&unk_1803D698C,
        v24,
        v25,
        (__int64)&v26);
    }
  }
  else if ( !v7 && (*((_BYTE *)a1 + 148) & 4) == 0 )
  {
    goto LABEL_46;
  }
  v15 = *((_DWORD *)a1 + 39);
  LODWORD(v27) = 0;
  v16 = *((_DWORD *)a1 + 4);
  LODWORD(v26) = v15;
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    v17 = v16 | 0xC0;
  else
    v17 = v16 & 0xFFFFFF3F;
  v18 = *((_BYTE *)a1 + 148);
  DWORD1(v26) = v17;
  if ( (v18 & 8) != 0 )
  {
    v19 = *((_DWORD *)a1 + 33);
    DWORD2(v26) = *((_DWORD *)a1 + 32);
    HIDWORD(v26) = v19;
  }
  else
  {
    if ( (v18 & 0x10) != 0 )
      DWORD2(v26) = 1110704128;
    else
      DWORD2(v26) = 0;
    if ( (v18 & 0x20) != 0 )
      HIDWORD(v26) = 1110704128;
    else
      HIDWORD(v26) = 0;
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    v20 = v18 >> 1;
  else
    v20 = 0;
  v21 = v27 & 0xFE | v20 & 1;
  *((_BYTE *)a1 + 148) = v18 ^ (v18 ^ (2 * v21)) & 2;
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 || (*(_BYTE *)(a2 + 24) & 4) == 0 )
    v8 = 0;
  HIDWORD(v27) = *((_DWORD *)a1 + 38);
  LOBYTE(v27) = v8 | v21 & 0xFD;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a1 + 16LL))(*a1, &v26);
  if ( v5 >= 0 )
  {
    v22 = v27;
    *(_OWORD *)(a1 + 15) = v26;
    a1[17] = v22;
LABEL_46:
    *((_BYTE *)a1 + 148) &= ~4u;
  }
  return (unsigned int)v5;
}
