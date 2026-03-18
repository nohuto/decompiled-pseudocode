/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801F05F8
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801F0510 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801F0560 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x18013927C (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ??$CalculateHandledInteractions@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BA18 (--$CalculateHandledInteractions@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BD68 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801F0DF8 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801F0ED4 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444444@Z @ 0x1801F1270 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_1801F1270.c)
 *     ??$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x1801F1444 (--$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801F1FB8 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions(
        CInteractionProcessor *this,
        __int128 *a2,
        _BYTE *a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        _OWORD *a8)
{
  int v12; // r12d
  char v13; // r14
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned __int8 v20; // al
  int v21; // r9d
  unsigned __int8 v22; // r15
  unsigned __int8 v23; // r14
  unsigned __int8 v24; // si
  _BYTE *v25; // rcx
  char *v26; // rdx
  int v27; // edi
  unsigned int v28; // ecx
  int *v29; // rax
  __int128 v30; // xmm0
  int v32; // eax
  bool v33; // zf
  int v34; // [rsp+C8h] [rbp-80h] BYREF
  __int128 v35; // [rsp+D0h] [rbp-78h] BYREF
  __int128 v36; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v37; // [rsp+F8h] [rbp-50h]
  __int128 v38; // [rsp+108h] [rbp-40h]
  __int128 v39; // [rsp+118h] [rbp-30h]
  __int128 v40; // [rsp+128h] [rbp-20h] BYREF
  __int128 v41; // [rsp+138h] [rbp-10h]
  __int128 v42; // [rsp+148h] [rbp+0h]
  __int128 v43; // [rsp+158h] [rbp+10h]
  int v44; // [rsp+168h] [rbp+20h] BYREF
  int v45; // [rsp+16Ch] [rbp+24h] BYREF
  int v46; // [rsp+170h] [rbp+28h] BYREF
  int v47; // [rsp+174h] [rbp+2Ch] BYREF
  int v48; // [rsp+178h] [rbp+30h] BYREF
  int v49; // [rsp+17Ch] [rbp+34h] BYREF
  int v50; // [rsp+180h] [rbp+38h] BYREF
  int v51; // [rsp+184h] [rbp+3Ch] BYREF
  int v52; // [rsp+188h] [rbp+40h] BYREF
  int v53; // [rsp+18Ch] [rbp+44h] BYREF
  int v54; // [rsp+190h] [rbp+48h] BYREF
  int v55; // [rsp+194h] [rbp+4Ch] BYREF
  int v56; // [rsp+198h] [rbp+50h] BYREF
  int v57; // [rsp+19Ch] [rbp+54h] BYREF
  int v58; // [rsp+1A0h] [rbp+58h] BYREF
  int v59; // [rsp+1A4h] [rbp+5Ch] BYREF
  CInteractionProcessor *v60; // [rsp+1A8h] [rbp+60h] BYREF
  _OWORD v61[14]; // [rsp+1B8h] [rbp+70h] BYREF
  int v62; // [rsp+2C8h] [rbp+180h] BYREF

  v12 = 0;
  v13 = 0;
  v14 = *((_DWORD *)this + 196);
  v15 = *((_DWORD *)this + 197);
  v40 = CMILMatrix::Identity;
  v16 = v15 - 2;
  v36 = CMILMatrix::Identity;
  memset(v61, 0, 48);
  v41 = xmmword_1804058D0;
  v42 = xmmword_1804058E0;
  v43 = xmmword_1804058F0;
  v37 = xmmword_1804058D0;
  v38 = xmmword_1804058E0;
  v39 = xmmword_1804058F0;
  v34 = v14;
  v35 = 0uLL;
  v61[3] = xmmword_1803D3A40;
  if ( !v16 )
  {
    v32 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this,
            a2,
            a3,
            a6,
            &v34,
            (__int64)&v35,
            &v40,
            &v36,
            v61);
    goto LABEL_30;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v32 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
            (_DWORD)this,
            (int)this + 160,
            (_DWORD)a2,
            (_DWORD)a3,
            a6,
            (__int64)&v34,
            (__int64)&v35,
            (__int64)&v40,
            (__int64)&v36,
            (__int64)v61);
LABEL_30:
    v12 = v32;
    goto LABEL_31;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( !v19 )
    {
      v33 = *((_DWORD *)this + 160) == -805306369;
      if ( *((_DWORD *)this + 160) == -805306369 )
        LOWORD(v35) = 257;
      *((_QWORD *)&v43 + 1) = 0x3F80000000000000LL;
      *(_QWORD *)&v43 = 0LL;
      HIDWORD(v42) = 0;
      *(_QWORD *)((char *)&v42 + 4) = 0x3F80000000000000LL;
      LODWORD(v42) = 0;
      v41 = 0x3F80000000000000uLL;
      *(_QWORD *)((char *)&v39 + 4) = 0LL;
      LODWORD(v39) = 0;
      *(_QWORD *)&v38 = 0LL;
      v37 = 0x3F80000000000000uLL;
      v34 = !v33 + 2;
      v40 = 0x3F800000uLL;
      HIDWORD(v39) = 1065353216;
      *((_QWORD *)&v38 + 1) = 1065353216LL;
      v36 = 0x3F800000uLL;
      goto LABEL_6;
    }
    if ( v19 != 1 )
      goto LABEL_6;
    v32 = CInteractionProcessor::CalculateHandledInteractions<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this + 480,
            a2,
            a3,
            a6,
            &v34,
            (__int64)&v35,
            &v40,
            &v36,
            v61);
    goto LABEL_30;
  }
  if ( CInteractionProcessor::AllowPenGestureDetection(this) )
  {
    v32 = CInteractionProcessor::CalculateHandledInteractions<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this + 320,
            a2,
            a3,
            a6,
            &v34,
            (__int64)&v35,
            &v40,
            &v36,
            v61);
    goto LABEL_30;
  }
  v13 = 1;
  *(_QWORD *)((char *)&v43 + 4) = 0LL;
  LODWORD(v43) = 0;
  *(_QWORD *)&v42 = 0LL;
  v41 = 0x3F80000000000000uLL;
  *(_QWORD *)((char *)&v39 + 4) = 0LL;
  LODWORD(v39) = 0;
  *(_QWORD *)&v38 = 0LL;
  v37 = 0x3F80000000000000uLL;
  v34 = 2;
  LOWORD(v35) = 257;
  HIDWORD(v43) = 1065353216;
  *((_QWORD *)&v42 + 1) = 1065353216LL;
  v40 = 0x3F800000uLL;
  HIDWORD(v39) = 1065353216;
  *((_QWORD *)&v38 + 1) = 1065353216LL;
  v36 = 0x3F800000uLL;
LABEL_31:
  if ( v12 < 0 )
    return (unsigned int)v12;
LABEL_6:
  v20 = CInteractionProcessor::ResolveProhibitedMotion(this, a5, &v35, &v34);
  v22 = v20;
  if ( v13 )
  {
    if ( v20 )
      goto LABEL_10;
  }
  else
  {
    if ( v20
      && CInteractionProcessor::ResolveMustHandleMotion(
           this,
           (const struct D2DMatrix *)&v36,
           (const struct D2DMatrix *)v61,
           a4,
           (struct InteractionAxis *)&v35,
           (enum InteractionState *)&v34) )
    {
      v22 = 1;
LABEL_10:
      v23 = v35;
      v24 = BYTE1(v35);
      if ( *((_BYTE *)this + 1248) )
        v23 = 1;
      if ( *((_BYTE *)this + 1249) )
        v24 = 1;
      LOBYTE(v35) = v23;
      BYTE1(v35) = v24;
      v25 = (char *)this + 808;
      if ( *((float *)&v35 + 1) != 0.0 )
        *((_BYTE *)this + 808) |= 1u;
      if ( *((float *)&v35 + 2) != 0.0 )
        *v25 |= 2u;
      v26 = (char *)this + 808;
      if ( *((float *)&v35 + 3) != 0.0 )
      {
        *v25 |= 4u;
        v26 = (char *)this + 808;
      }
      if ( v23 || (v25 = v26, v24) )
        *v25 |= 8u;
      goto LABEL_22;
    }
    v22 = 0;
  }
  v24 = BYTE1(v35);
  v23 = v35;
LABEL_22:
  v27 = v34;
  if ( v34 == 3
    && (*((_BYTE *)this + 1264) & 4) != 0
    && (unsigned int)CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 0) )
  {
    v27 = 4;
  }
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v28 = *((unsigned __int8 *)this + 808);
    v62 = *((_DWORD *)this + 315);
    v34 = *((_DWORD *)this + 314);
    v44 = *((_DWORD *)this + 313);
    v45 = *((unsigned __int8 *)this + 1249);
    v46 = *((unsigned __int8 *)this + 1248);
    v47 = HIDWORD(v35);
    v48 = DWORD2(v35);
    v49 = DWORD1(v35);
    v50 = v24;
    v51 = v23;
    v52 = v22;
    v57 = v27;
    v53 = (v28 >> 3) & 1;
    v60 = this;
    v54 = (v28 >> 2) & 1;
    v55 = (v28 >> 1) & 1;
    v58 = *((_DWORD *)this + 196);
    v59 = *((_DWORD *)this + 197);
    v56 = v28 & 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v56,
      (unsigned int)&unk_1803D6EF2,
      4,
      v21,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v34,
      (__int64)&v62);
  }
  v29 = a7;
  v30 = v35;
  *((_DWORD *)this + 196) = v27;
  *v29 = v27;
  *a8 = v30;
  return (unsigned int)v12;
}
