/*
 * XREFs of ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18008A564
 * Callers:
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18008B288 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@44444444444444444444@Z @ 0x180089D30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     _anonymous_namespace_::AxisContainsInteraction @ 0x180089FB4 (_anonymous_namespace_--AxisContainsInteraction.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180128018 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

char __fastcall CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  char v8; // si
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+148h] [rbp-30h] BYREF
  int v19; // [rsp+150h] [rbp-28h]
  _DWORD v20[5]; // [rsp+158h] [rbp-20h] BYREF
  int v21; // [rsp+16Ch] [rbp-Ch]
  int v22; // [rsp+170h] [rbp-8h]
  int v23; // [rsp+174h] [rbp-4h]
  int v24; // [rsp+178h] [rbp+0h]
  int v25; // [rsp+17Ch] [rbp+4h]
  int v26; // [rsp+180h] [rbp+8h]
  int v27; // [rsp+184h] [rbp+Ch]
  int v28; // [rsp+188h] [rbp+10h]
  int v29; // [rsp+18Ch] [rbp+14h]
  int v30; // [rsp+190h] [rbp+18h]
  int v31; // [rsp+194h] [rbp+1Ch]
  __int64 v32; // [rsp+198h] [rbp+20h]
  __int64 v33; // [rsp+1A0h] [rbp+28h]
  __int64 v34; // [rsp+1A8h] [rbp+30h]
  __int64 v35; // [rsp+1B0h] [rbp+38h]
  __int64 *v36; // [rsp+1B8h] [rbp+40h]

  if ( *(_DWORD *)(a2 + 24) && !anonymous_namespace_::AxisContainsInteraction(a3) )
    return 0;
  v8 = 1;
  v9 = 0LL;
  do
  {
    if ( (unsigned int)v9 >= *(_DWORD *)(a2 + 24) )
      break;
    v10 = *(_QWORD *)a2;
    v11 = *((_DWORD *)a1 + 198);
    if ( v11 >= *(_DWORD *)(*(_QWORD *)a2 + 12 * v9) && v11 <= *(_DWORD *)(v10 + 12 * v9 + 4) )
    {
      if ( (*(_BYTE *)(v10 + 12 * v9 + 8) & 0x40) != 0 )
        *(_BYTE *)a3 = 0;
      if ( *(char *)(*(_QWORD *)a2 + 12 * v9 + 8) < 0 )
        *(_BYTE *)(a3 + 1) = 0;
      v12 = *(_QWORD *)a2;
      v30 = 0;
      v29 = 0;
      v28 = 0;
      v27 = 0;
      v23 = 0;
      v20[3] = 0;
      v13 = *(_DWORD *)(v12 + 12 * v9 + 8);
      v25 = 0;
      v24 = 0;
      v22 = 0;
      v20[4] = 0;
      v20[2] = 0;
      v20[1] = 0;
      v26 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v21 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v20[0] = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v31 = 1065353216;
      if ( (v13 & 1) != 0 && *(float *)(a3 + 4) > 0.0 )
        v20[0] = 0;
      if ( (v13 & 2) != 0 && *(float *)(a3 + 4) < 0.0 )
        v20[0] = 0;
      if ( (v13 & 4) != 0 && *(float *)(a3 + 8) > 0.0 )
        v21 = 0;
      if ( (v13 & 8) != 0 && *(float *)(a3 + 8) < 0.0 )
        v21 = 0;
      if ( (v13 & 0x10) != 0 && *(float *)(a3 + 12) < 0.0 )
        v26 = 0;
      if ( (v13 & 0x20) != 0 && *(float *)(a3 + 12) > 0.0 )
        v26 = 0;
      v14 = *(_DWORD *)(a3 + 12);
      v18 = *(_QWORD *)(a3 + 4);
      v19 = v14;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v18, (const struct D2DVector3 *)&v18, (const struct D2DMatrix *)v20);
      v15 = v19;
      *(_QWORD *)(a3 + 4) = v18;
      *(_DWORD *)(a3 + 12) = v15;
      if ( !anonymous_namespace_::AxisContainsInteraction(a3) )
      {
        v8 = 0;
        *a4 = *((_DWORD *)a1 + 196);
      }
      if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
      {
        v16 = *(_QWORD *)a2;
        v32 = a1[60];
        v33 = a1[40];
        v34 = a1[20];
        v35 = *a1;
        v36 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v16,
          (__int64)&unk_1803CBA42);
      }
    }
    v9 = (unsigned int)(v9 + 1);
  }
  while ( v8 );
  return v8;
}
