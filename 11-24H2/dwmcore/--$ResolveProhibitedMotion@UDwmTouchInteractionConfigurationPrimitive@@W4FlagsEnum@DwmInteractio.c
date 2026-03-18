/*
 * XREFs of ??$ResolveProhibitedMotion@UDwmTouchInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180089908
 * Callers:
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18008B288 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@44444444444444444444@Z @ 0x180089D30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     _anonymous_namespace_::AxisContainsInteraction @ 0x180089FB4 (_anonymous_namespace_--AxisContainsInteraction.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180128018 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveProhibitedMotion<DwmTouchInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 *a1,
        __int64 *a2,
        unsigned __int8 *a3,
        _DWORD *a4)
{
  unsigned __int8 v8; // si
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // ecx
  int v13; // xmm7_4
  __int64 v14; // rax
  int v15; // xmm8_4
  int v16; // xmm9_4
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // r8d
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // [rsp+F8h] [rbp-80h] BYREF
  int v24; // [rsp+FCh] [rbp-7Ch] BYREF
  int v25; // [rsp+100h] [rbp-78h] BYREF
  int v26; // [rsp+104h] [rbp-74h] BYREF
  int v27; // [rsp+108h] [rbp-70h] BYREF
  int v28; // [rsp+10Ch] [rbp-6Ch] BYREF
  int v29; // [rsp+110h] [rbp-68h] BYREF
  int v30; // [rsp+114h] [rbp-64h] BYREF
  int v31; // [rsp+118h] [rbp-60h] BYREF
  int v32; // [rsp+11Ch] [rbp-5Ch] BYREF
  int v33; // [rsp+120h] [rbp-58h] BYREF
  int v34; // [rsp+124h] [rbp-54h] BYREF
  int v35; // [rsp+128h] [rbp-50h] BYREF
  int v36; // [rsp+12Ch] [rbp-4Ch] BYREF
  int v37; // [rsp+130h] [rbp-48h] BYREF
  int v38; // [rsp+134h] [rbp-44h] BYREF
  int v39; // [rsp+138h] [rbp-40h] BYREF
  int v40; // [rsp+13Ch] [rbp-3Ch] BYREF
  int v41; // [rsp+140h] [rbp-38h] BYREF
  int v42; // [rsp+144h] [rbp-34h] BYREF
  __int64 v43; // [rsp+148h] [rbp-30h] BYREF
  int v44; // [rsp+150h] [rbp-28h]
  _DWORD v45[5]; // [rsp+158h] [rbp-20h] BYREF
  int v46; // [rsp+16Ch] [rbp-Ch]
  int v47; // [rsp+170h] [rbp-8h]
  int v48; // [rsp+174h] [rbp-4h]
  int v49; // [rsp+178h] [rbp+0h]
  int v50; // [rsp+17Ch] [rbp+4h]
  int v51; // [rsp+180h] [rbp+8h]
  int v52; // [rsp+184h] [rbp+Ch]
  int v53; // [rsp+188h] [rbp+10h]
  int v54; // [rsp+18Ch] [rbp+14h]
  int v55; // [rsp+190h] [rbp+18h]
  int v56; // [rsp+194h] [rbp+1Ch]
  __int64 v57; // [rsp+198h] [rbp+20h] BYREF
  __int64 v58; // [rsp+1A0h] [rbp+28h] BYREF
  __int64 v59; // [rsp+1A8h] [rbp+30h] BYREF
  __int64 v60; // [rsp+1B0h] [rbp+38h] BYREF
  _QWORD v61[10]; // [rsp+1B8h] [rbp+40h] BYREF
  int v62; // [rsp+240h] [rbp+C8h] BYREF

  if ( *((_DWORD *)a2 + 6) && !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
    return 0;
  v8 = 1;
  v10 = 0LL;
  do
  {
    if ( (unsigned int)v10 >= *((_DWORD *)a2 + 6) )
      break;
    v11 = *a2;
    v12 = *((_DWORD *)a1 + 198);
    if ( v12 >= *(_DWORD *)(*a2 + 12 * v10) && v12 <= *(_DWORD *)(v11 + 12 * v10 + 4) )
    {
      if ( (*(_BYTE *)(v11 + 12 * v10 + 8) & 0x40) != 0 )
        *a3 = 0;
      if ( *(char *)(*a2 + 12 * v10 + 8) < 0 )
        a3[1] = 0;
      v13 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v14 = *a2;
      v15 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v55 = 0;
      v16 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v54 = 0;
      v53 = 0;
      v52 = 0;
      v48 = 0;
      v45[3] = 0;
      v17 = *(_DWORD *)(v14 + 12 * v10 + 8);
      v50 = 0;
      v49 = 0;
      v47 = 0;
      v45[4] = 0;
      v45[2] = 0;
      v45[1] = 0;
      v51 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v46 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v45[0] = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v56 = 1065353216;
      if ( (v17 & 1) != 0 && *((float *)a3 + 1) > 0.0 )
      {
        v45[0] = 0;
        v16 = 0;
      }
      if ( (v17 & 2) != 0 && *((float *)a3 + 1) < 0.0 )
      {
        v45[0] = 0;
        v16 = 0;
      }
      if ( (v17 & 4) != 0 && *((float *)a3 + 2) > 0.0 )
      {
        v46 = 0;
        v15 = 0;
      }
      if ( (v17 & 8) != 0 && *((float *)a3 + 2) < 0.0 )
      {
        v46 = 0;
        v15 = 0;
      }
      if ( (v17 & 0x10) != 0 && *((float *)a3 + 3) < 0.0 )
      {
        v51 = 0;
        v13 = 0;
      }
      if ( (v17 & 0x20) != 0 && *((float *)a3 + 3) > 0.0 )
      {
        v51 = 0;
        v13 = 0;
      }
      v18 = *((_DWORD *)a3 + 3);
      v43 = *(_QWORD *)(a3 + 4);
      v44 = v18;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v43, (const struct D2DVector3 *)&v43, (const struct D2DMatrix *)v45);
      v19 = v44;
      *(_QWORD *)(a3 + 4) = v43;
      *((_DWORD *)a3 + 3) = v19;
      if ( !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
      {
        v8 = 0;
        *a4 = *((_DWORD *)a1 + 196);
      }
      if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
      {
        v22 = *a2;
        v31 = *((_DWORD *)a3 + 3);
        v32 = *((_DWORD *)a3 + 2);
        v33 = *((_DWORD *)a3 + 1);
        v34 = a3[1];
        v35 = *a3;
        v62 = v13;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        v26 = v15;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        v30 = v16;
        v36 = *(_DWORD *)(v22 + 4 * v21 + 8);
        v37 = *(_DWORD *)(v22 + 4 * v21 + 4);
        v38 = *(_DWORD *)(v22 + 4 * v21);
        v40 = v8;
        v41 = *((_DWORD *)a1 + 198);
        v42 = *((_DWORD *)a1 + 197);
        v57 = a1[60];
        v58 = a1[40];
        v59 = a1[20];
        v60 = *a1;
        v39 = v10;
        v61[0] = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v22,
          (unsigned int)&unk_1803CBA42,
          v20,
          v21,
          (__int64)v61,
          (__int64)&v60,
          (__int64)&v59,
          (__int64)&v58,
          (__int64)&v57,
          (__int64)&v42,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v62);
      }
    }
    v10 = (unsigned int)(v10 + 1);
  }
  while ( v8 );
  return v8;
}
