/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801E82A0
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x1802580C4 (-ProcessInput@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     ?GetConfig@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAA?AUDwmPenInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801E8774 (-GetConfig@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Flag.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAXAEBUDwmPenInteractionConfigurationPrimitive@@@Z @ 0x1801E8818 (-UpdateActiveConfig@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // r15d
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // ecx
  unsigned __int8 v10; // dl
  int v11; // xmm1_4
  char v12; // cl
  char v13; // cl
  __int64 v14; // xmm1_8
  char v15; // di
  char v16; // r14
  unsigned int v17; // esi
  bool v18; // zf
  bool v19; // al
  unsigned int v20; // ecx
  bool v21; // al
  char v22; // al
  char v23; // al
  _QWORD *v24; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-49h]
  unsigned int v26; // [rsp+48h] [rbp-41h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-39h] BYREF
  __int64 v28; // [rsp+60h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-21h] BYREF
  void *v30; // [rsp+78h] [rbp-11h]
  int v31; // [rsp+80h] [rbp-9h]
  int v32; // [rsp+84h] [rbp-5h]
  _QWORD *v33; // [rsp+88h] [rbp-1h]
  int v34; // [rsp+90h] [rbp+7h]
  int v35; // [rsp+94h] [rbp+Bh]

  if ( !*a1 )
    return (unsigned int)-2147019873;
  v5 = 0;
  v15 = 0;
  v16 = 2;
  if ( (*((_BYTE *)a1 + 148) & 1) != 0 || *((_DWORD *)a1 + 36) != *(_DWORD *)(a2 + 8) )
  {
    CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v24,
      *(unsigned int *)(a2 + 8),
      a3);
    if ( (*(_BYTE *)(a2 + 24) & 8) == 0 && (unsigned int)(*(_DWORD *)a2 - 2) <= 2 )
      v25 &= 0xFFFFFF3F;
    CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v24);
    if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
      v17 = v25 | 0xC0;
    else
      v17 = v25 & 0xFFFFFF3F;
    v18 = (*((_BYTE *)a1 + 124) & 3) == 0;
    v25 = v17;
    v19 = (v17 & 1) != 0 || (v17 & 2) != 0;
    if ( !v18 != v19
      || ((v17 & 4) != 0 || (v17 & 8) != 0 ? (v22 = 1) : (v22 = 0),
          ((*((_BYTE *)a1 + 124) & 0xC) != 0) != v22
       || ((v17 & 0x10) != 0 || (v17 & 0x20) != 0 ? (v23 = 1) : (v23 = 0), ((*((_BYTE *)a1 + 124) & 0x30) != 0) != v23)) )
    {
      v15 = 1;
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(
                      *a1,
                      &UserData) != 1 )
      v15 = v15
         || (((unsigned __int8)v17 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0
         || ((v17 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0;
    v20 = *((unsigned __int8 *)a1 + 148);
    if ( (v20 & 8) != 0 )
    {
      if ( !v15 )
      {
LABEL_50:
        if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 && (a1[17] & 2) != 0 )
          v15 = 1;
        goto LABEL_51;
      }
    }
    else
    {
      v21 = ((v20 >> 4) & 1) != (*((float *)a1 + 32) == 45.0) || ((v20 >> 5) & 1) != (*((float *)a1 + 33) == 45.0);
      v15 |= v21;
    }
    if ( *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v15 = 1;
    goto LABEL_50;
  }
LABEL_51:
  if ( *((_DWORD *)a1 + 39) != 2 || ((*((_BYTE *)a1 + 148) & 2) != 0) == (a1[17] & 1) )
  {
    if ( !v15 && (*((_BYTE *)a1 + 148) & 4) == 0 )
      goto LABEL_19;
  }
  else if ( (*((_BYTE *)a1 + 148) & 2) != 0
         && (unsigned int)dword_1803F8D18 > 4
         && (byte_1803F8D28 & 2) != 0
         && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v35 = 0;
    v33 = &v24;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1803F8D20;
    v24 = a1;
    v34 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 2LL;
    UserData.Size = *(unsigned __int16 *)off_1803F8D20;
    v30 = &unk_1803CBA1F;
    UserData.Reserved = 2;
    v31 = 34;
    v32 = 1;
    v26 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  v7 = *((_DWORD *)a1 + 39);
  LODWORD(v28) = 0;
  v8 = *((_DWORD *)a1 + 4);
  *(_DWORD *)&EventDescriptor.Id = v7;
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    v9 = v8 | 0xC0;
  else
    v9 = v8 & 0xFFFFFF3F;
  v10 = *((_BYTE *)a1 + 148);
  *(_DWORD *)&EventDescriptor.Level = v9;
  if ( (v10 & 8) != 0 )
  {
    v11 = *((_DWORD *)a1 + 33);
    LODWORD(EventDescriptor.Keyword) = *((_DWORD *)a1 + 32);
    HIDWORD(EventDescriptor.Keyword) = v11;
  }
  else
  {
    if ( (v10 & 0x10) != 0 )
      LODWORD(EventDescriptor.Keyword) = 1110704128;
    else
      LODWORD(EventDescriptor.Keyword) = 0;
    if ( (v10 & 0x20) != 0 )
      HIDWORD(EventDescriptor.Keyword) = 1110704128;
    else
      HIDWORD(EventDescriptor.Keyword) = 0;
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 )
    v12 = v10 >> 1;
  else
    v12 = 0;
  v13 = v28 & 0xFE | v12 & 1;
  *((_BYTE *)a1 + 148) = v10 ^ (v10 ^ (2 * v13)) & 2;
  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 2 || (*(_BYTE *)(a2 + 24) & 4) == 0 )
    v16 = 0;
  HIDWORD(v28) = *((_DWORD *)a1 + 38);
  LOBYTE(v28) = v16 | v13 & 0xFD;
  v5 = (*(__int64 (__fastcall **)(_QWORD, EVENT_DESCRIPTOR *))(*(_QWORD *)*a1 + 16LL))(*a1, &EventDescriptor);
  if ( v5 >= 0 )
  {
    v14 = v28;
    *(EVENT_DESCRIPTOR *)(a1 + 15) = EventDescriptor;
    a1[17] = v14;
LABEL_19:
    *((_BYTE *)a1 + 148) &= ~4u;
  }
  return (unsigned int)v5;
}
