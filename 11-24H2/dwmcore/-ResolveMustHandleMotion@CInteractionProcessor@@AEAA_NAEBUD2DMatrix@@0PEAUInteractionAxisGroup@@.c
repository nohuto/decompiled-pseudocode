/*
 * XREFs of ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18008B364
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18008AA88 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x18008BBDC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@_ea_18008BBDC.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180128018 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z @ 0x18012AA5C (-D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveMustHandleMotion(
        CInteractionProcessor *this,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3,
        struct InteractionAxisGroup *a4,
        struct InteractionAxis *a5,
        enum InteractionState *a6)
{
  struct InteractionAxis *v6; // rdi
  unsigned int v8; // r11d
  const struct D2DMatrix *v9; // r9
  unsigned __int8 v11; // bl
  int v12; // ecx
  char v13; // r15
  bool v14; // si
  bool v15; // r15
  int v16; // eax
  const struct D2DMatrix *v17; // r10
  unsigned int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // xmm0_8
  float v21; // xmm0_4
  CInteractionProcessor *v23; // [rsp+D8h] [rbp-80h] BYREF
  int v24; // [rsp+E0h] [rbp-78h]
  __int64 v25; // [rsp+E8h] [rbp-70h] BYREF
  int v26; // [rsp+F0h] [rbp-68h]
  int v27; // [rsp+F8h] [rbp-60h] BYREF
  int v28; // [rsp+FCh] [rbp-5Ch] BYREF
  int v29; // [rsp+100h] [rbp-58h] BYREF
  int v30; // [rsp+104h] [rbp-54h] BYREF
  int v31; // [rsp+108h] [rbp-50h] BYREF
  int v32; // [rsp+10Ch] [rbp-4Ch] BYREF
  int v33; // [rsp+110h] [rbp-48h] BYREF
  int v34; // [rsp+114h] [rbp-44h] BYREF
  int v35; // [rsp+118h] [rbp-40h] BYREF
  int v36; // [rsp+11Ch] [rbp-3Ch] BYREF
  int v37; // [rsp+120h] [rbp-38h] BYREF
  BOOL v38; // [rsp+124h] [rbp-34h] BYREF
  BOOL v39; // [rsp+128h] [rbp-30h] BYREF
  int v40; // [rsp+12Ch] [rbp-2Ch] BYREF
  int v41; // [rsp+130h] [rbp-28h] BYREF
  __int64 v42; // [rsp+138h] [rbp-20h] BYREF
  __int64 v43; // [rsp+140h] [rbp-18h] BYREF
  _QWORD v44[4]; // [rsp+148h] [rbp-10h] BYREF
  int v46; // [rsp+1C0h] [rbp+68h] BYREF

  v6 = a5;
  v8 = 0;
  v9 = a3;
  v11 = 1;
  if ( *((_BYTE *)a4 + 1) )
  {
    LOBYTE(a3) = -(*((_BYTE *)a5 + 1) != 0);
    v11 = (unsigned __int8)a3 & 1;
  }
  if ( *(_BYTE *)a4 )
    v11 &= -(*(_BYTE *)a5 != 0);
  if ( *((_BYTE *)a4 + 2) && *((float *)a5 + 3) == 0.0 )
    v11 &= -((*((_BYTE *)this + 808) & 4) != 0);
  v12 = 0;
  v13 = *((_BYTE *)this + 148);
  v23 = 0LL;
  v14 = (v13 & 0x20) != 0;
  v24 = 0;
  v15 = (v13 & 0x10) != 0;
  if ( v15 || v14 )
  {
    v16 = *((_DWORD *)a5 + 3);
    v23 = *(CInteractionProcessor **)((char *)a5 + 4);
    v24 = v16;
    D3DXVec3TransformCoord((struct D2DVector3 *)&v23, (const struct D2DVector3 *)&v23, v9);
    v18 = v8;
    if ( !v11 )
    {
LABEL_15:
      v12 = *((_DWORD *)this + 196);
      *(_WORD *)v6 = 0;
      *(_DWORD *)a6 = v12;
      *(_QWORD *)((char *)v6 + 4) = 0LL;
      *((_DWORD *)v6 + 3) = v8;
      goto LABEL_16;
    }
    while ( v18 < *((_DWORD *)a4 + 8) )
    {
      v19 = *((_QWORD *)a4 + 1);
      v20 = *(_QWORD *)(v19 + 16LL * v18);
      LODWORD(v19) = *(_DWORD *)(v19 + 16LL * v18 + 8);
      v25 = v20;
      v26 = v19;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v25, (const struct D2DVector3 *)&v25, v17);
      v21 = D3DXVector3Angle((const struct D2DVector3 *)&v23, (const struct D2DVector3 *)&v25);
      if ( COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.17453
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - 3.1415927) & _xmm) >= 0.17453
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 + 3.1415927) & _xmm) >= 0.17453 )
      {
        v8 = 0;
        v11 = 0;
        goto LABEL_15;
      }
      v17 = a2;
      v11 = 1;
      ++v18;
    }
  }
  else if ( !v11 )
  {
    goto LABEL_15;
  }
LABEL_16:
  if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v46 = v24;
    v27 = HIDWORD(v23);
    v28 = (int)v23;
    v29 = *((_DWORD *)v6 + 3);
    v30 = *((_DWORD *)v6 + 2);
    v31 = *((_DWORD *)v6 + 1);
    v32 = *((unsigned __int8 *)v6 + 1);
    v33 = *(unsigned __int8 *)v6;
    v34 = *((_DWORD *)a4 + 8);
    v35 = *((unsigned __int8 *)a4 + 2);
    v36 = *((unsigned __int8 *)a4 + 1);
    v37 = *(unsigned __int8 *)a4;
    v38 = v14;
    v39 = v15;
    v40 = v11;
    v41 = *((_DWORD *)this + 197);
    v42 = *((_QWORD *)this + 60);
    v43 = *((_QWORD *)this + 40);
    v44[0] = *((_QWORD *)this + 20);
    v25 = *(_QWORD *)this;
    v23 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned int)&unk_1803CBF7A,
      (_DWORD)a3,
      (_DWORD)v9,
      (__int64)&v23,
      (__int64)&v25,
      (__int64)v44,
      (__int64)&v43,
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
      (__int64)&v46);
  }
  return v11;
}
