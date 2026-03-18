/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18008AA88
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18008A9A0 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18008A9F0 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 * Callees:
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18008B288 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18008B364 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444444@Z @ 0x18008B700 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ??$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18008B8D4 (--$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x18008C684 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800947AC (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ??$CalculateHandledInteractions@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180128138 (--$CalculateHandledInteractions@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180128488 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions(
        CInteractionProcessor *this,
        int a2,
        int a3,
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
  int v36; // [rsp+E8h] [rbp-60h] BYREF
  int v37; // [rsp+ECh] [rbp-5Ch]
  int v38; // [rsp+F0h] [rbp-58h]
  int v39; // [rsp+F4h] [rbp-54h]
  __int128 v40; // [rsp+F8h] [rbp-50h]
  __int128 v41; // [rsp+108h] [rbp-40h]
  __int128 v42; // [rsp+118h] [rbp-30h]
  int v43; // [rsp+128h] [rbp-20h] BYREF
  int v44; // [rsp+12Ch] [rbp-1Ch]
  int v45; // [rsp+130h] [rbp-18h]
  int v46; // [rsp+134h] [rbp-14h]
  __int128 v47; // [rsp+138h] [rbp-10h]
  __int128 v48; // [rsp+148h] [rbp+0h]
  __int128 v49; // [rsp+158h] [rbp+10h]
  int v50; // [rsp+168h] [rbp+20h] BYREF
  int v51; // [rsp+16Ch] [rbp+24h] BYREF
  int v52; // [rsp+170h] [rbp+28h] BYREF
  int v53; // [rsp+174h] [rbp+2Ch] BYREF
  int v54; // [rsp+178h] [rbp+30h] BYREF
  int v55; // [rsp+17Ch] [rbp+34h] BYREF
  int v56; // [rsp+180h] [rbp+38h] BYREF
  int v57; // [rsp+184h] [rbp+3Ch] BYREF
  int v58; // [rsp+188h] [rbp+40h] BYREF
  int v59; // [rsp+18Ch] [rbp+44h] BYREF
  int v60; // [rsp+190h] [rbp+48h] BYREF
  int v61; // [rsp+194h] [rbp+4Ch] BYREF
  int v62; // [rsp+198h] [rbp+50h] BYREF
  int v63; // [rsp+19Ch] [rbp+54h] BYREF
  int v64; // [rsp+1A0h] [rbp+58h] BYREF
  int v65; // [rsp+1A4h] [rbp+5Ch] BYREF
  CInteractionProcessor *v66; // [rsp+1A8h] [rbp+60h] BYREF
  _OWORD v67[14]; // [rsp+1B8h] [rbp+70h] BYREF
  int v68; // [rsp+2C8h] [rbp+180h] BYREF

  v12 = 0;
  v13 = 0;
  v14 = *((_DWORD *)this + 196);
  v15 = *((_DWORD *)this + 197);
  v43 = CMILMatrix::Identity;
  v16 = v15 - 2;
  v44 = *(&CMILMatrix::Identity + 1);
  v36 = CMILMatrix::Identity;
  v37 = *(&CMILMatrix::Identity + 1);
  memset(v67, 0, 48);
  v45 = *(&CMILMatrix::Identity + 2);
  v46 = *(&CMILMatrix::Identity + 3);
  v47 = xmmword_1803F9850;
  v48 = xmmword_1803F9860;
  v49 = xmmword_1803F9870;
  v38 = *(&CMILMatrix::Identity + 2);
  v39 = *(&CMILMatrix::Identity + 3);
  v40 = xmmword_1803F9850;
  v41 = xmmword_1803F9860;
  v42 = xmmword_1803F9870;
  v34 = v14;
  v35 = 0uLL;
  v67[3] = xmmword_1803C8D70;
  if ( !v16 )
  {
    v32 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (_DWORD)this,
            (_DWORD)this,
            a2,
            a3,
            a6,
            (__int64)&v34,
            (__int64)&v35,
            (__int64)&v43,
            (__int64)&v36,
            (__int64)v67);
    goto LABEL_30;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v32 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
            (_DWORD)this,
            (int)this + 160,
            a2,
            a3,
            a6,
            (__int64)&v34,
            (__int64)&v35,
            (__int64)&v43,
            (__int64)&v36,
            (__int64)v67);
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
      *((_QWORD *)&v49 + 1) = 0x3F80000000000000LL;
      *(_QWORD *)&v49 = 0LL;
      HIDWORD(v48) = 0;
      *(_QWORD *)((char *)&v48 + 4) = 0x3F80000000000000LL;
      LODWORD(v48) = 0;
      v47 = 0x3F80000000000000uLL;
      v46 = 0;
      v45 = 0;
      v44 = 0;
      *(_QWORD *)((char *)&v42 + 4) = 0LL;
      LODWORD(v42) = 0;
      *(_QWORD *)&v41 = 0LL;
      v40 = 0x3F80000000000000uLL;
      v39 = 0;
      v38 = 0;
      v37 = 0;
      v34 = !v33 + 2;
      v43 = 1065353216;
      HIDWORD(v42) = 1065353216;
      *((_QWORD *)&v41 + 1) = 1065353216LL;
      v36 = 1065353216;
      goto LABEL_6;
    }
    if ( v19 != 1 )
      goto LABEL_6;
    v32 = CInteractionProcessor::CalculateHandledInteractions<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>(
            (_DWORD)this,
            (int)this + 480,
            a2,
            a3,
            a6,
            (__int64)&v34,
            (__int64)&v35,
            (__int64)&v43,
            (__int64)&v36,
            (__int64)v67);
    goto LABEL_30;
  }
  if ( CInteractionProcessor::AllowPenGestureDetection(this) )
  {
    v32 = CInteractionProcessor::CalculateHandledInteractions<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>(
            (_DWORD)this,
            (int)this + 320,
            a2,
            a3,
            a6,
            (__int64)&v34,
            (__int64)&v35,
            (__int64)&v43,
            (__int64)&v36,
            (__int64)v67);
    goto LABEL_30;
  }
  v13 = 1;
  *(_QWORD *)((char *)&v49 + 4) = 0LL;
  LODWORD(v49) = 0;
  *(_QWORD *)&v48 = 0LL;
  v47 = 0x3F80000000000000uLL;
  v46 = 0;
  v45 = 0;
  v44 = 0;
  *(_QWORD *)((char *)&v42 + 4) = 0LL;
  LODWORD(v42) = 0;
  *(_QWORD *)&v41 = 0LL;
  v40 = 0x3F80000000000000uLL;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  v34 = 2;
  LOWORD(v35) = 257;
  HIDWORD(v49) = 1065353216;
  *((_QWORD *)&v48 + 1) = 1065353216LL;
  v43 = 1065353216;
  HIDWORD(v42) = 1065353216;
  *((_QWORD *)&v41 + 1) = 1065353216LL;
  v36 = 1065353216;
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
           (const struct D2DMatrix *)v67,
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
    && (unsigned int)CInteractionProcessor::SupportsPointerType(this, *((unsigned int *)this + 197), 0LL) )
  {
    v27 = 4;
  }
  if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v28 = *((unsigned __int8 *)this + 808);
    v68 = *((_DWORD *)this + 315);
    v34 = *((_DWORD *)this + 314);
    v50 = *((_DWORD *)this + 313);
    v51 = *((unsigned __int8 *)this + 1249);
    v52 = *((unsigned __int8 *)this + 1248);
    v53 = HIDWORD(v35);
    v54 = DWORD2(v35);
    v55 = DWORD1(v35);
    v56 = v24;
    v57 = v23;
    v58 = v22;
    v63 = v27;
    v59 = (v28 >> 3) & 1;
    v66 = this;
    v60 = (v28 >> 2) & 1;
    v61 = (v28 >> 1) & 1;
    v64 = *((_DWORD *)this + 196);
    v65 = *((_DWORD *)this + 197);
    v62 = v28 & 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v62,
      (unsigned int)&unk_1803CC0D3,
      4,
      v21,
      (__int64)&v66,
      (__int64)&v65,
      (__int64)&v64,
      (__int64)&v63,
      (__int64)&v62,
      (__int64)&v61,
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
      (__int64)&v34,
      (__int64)&v68);
  }
  v29 = a7;
  v30 = v35;
  *((_DWORD *)this + 196) = v27;
  *v29 = v27;
  *a8 = v30;
  return (unsigned int)v12;
}
