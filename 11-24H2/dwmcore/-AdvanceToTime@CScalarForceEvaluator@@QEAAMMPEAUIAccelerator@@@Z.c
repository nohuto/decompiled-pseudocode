/*
 * XREFs of ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x18012AE78
 * Callers:
 *     ?AdvanceToTime@CVector3ForceEvaluator@@QEAA?AUD2DVector3@@MPEAUIAccelerator@@00@Z @ 0x1801BB31C (-AdvanceToTime@CVector3ForceEvaluator@@QEAA-AUD2DVector3@@MPEAUIAccelerator@@00@Z.c)
 *     ?Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180227830 (-Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1802AF9F0 (-Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x18012B060 (-Integrate@CScalarForceEvaluator@@AEAA-AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18012B3DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CScalarForceEvaluator::AdvanceToTime(
        CScalarForceEvaluator *this,
        float a2,
        struct IAccelerator *a3,
        int a4)
{
  float v7; // xmm2_4
  float v8; // xmm2_4
  int v9; // eax
  __int64 v10; // rax
  __int128 v11; // xmm6
  int v12; // ebx
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm7_4
  float (__fastcall *v18)(struct IAccelerator *); // rax
  float v19; // xmm6_4
  double v20; // xmm0_8
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  __int128 v28; // [rsp+30h] [rbp-88h] BYREF
  CScalarForceEvaluator *v29; // [rsp+C0h] [rbp+8h] BYREF
  int v30; // [rsp+C8h] [rbp+10h] BYREF

  if ( a2 == *(float *)this )
    return *((float *)this + 9);
  v7 = a2 - *(float *)this;
  if ( (*((_BYTE *)this + 64) & 2) != 0 )
    v7 = fmaxf(0.0, fminf(a2 - *(float *)this, 0.25));
  v8 = v7 + *((float *)this + 1);
  *((float *)this + 1) = v8;
  while ( v8 >= 0.0099999998 )
  {
    if ( (unsigned int)dword_1803F8D18 > 5 && (byte_1803F8D28 & 4) != 0 && (qword_1803F8D30 & 4) == qword_1803F8D30 )
    {
      v30 = *((_DWORD *)this + 1);
      v29 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1803F8D18,
        (unsigned int)&unk_1803CF6D5,
        (_DWORD)a3,
        a4,
        (__int64)&v29,
        (__int64)&v30);
    }
    v9 = *((_DWORD *)this + 7);
    *((_OWORD *)this + 2) = *(_OWORD *)((char *)this + 12);
    *((_DWORD *)this + 12) = v9;
    v10 = CScalarForceEvaluator::Integrate(
            this,
            &v28,
            (char *)this + 12,
            a3,
            *((_DWORD *)this + 2),
            LODWORD(FLOAT_0_0099999998));
    *(_OWORD *)((char *)this + 12) = *(_OWORD *)v10;
    *((_DWORD *)this + 7) = *(_DWORD *)(v10 + 16);
    v11 = *(_OWORD *)v10;
    v12 = *(_DWORD *)(v10 + 16);
    if ( (*(unsigned int (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a3 + 48LL))(a3) )
    {
      *((_BYTE *)this + 64) &= ~4u;
      v18 = *(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a3 + 24LL);
      if ( (*((_BYTE *)this + 64) & 1) != 0 )
      {
        if ( *((float *)this + 13) != (float)((float)(v18(a3) - *((float *)this + 4)) > 0.0) )
        {
          v19 = *((float *)this + 9);
          v20 = (*(double (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a3 + 24LL))(a3);
          v12 = *((_DWORD *)this + 7);
          v21 = (float)(*(float *)&v20 - v19) / (float)(*((float *)this + 4) - v19);
          v22 = 1.0 - v21;
          v23 = v21 * *((float *)this + 4);
          v24 = v21 * *((float *)this + 5);
          v28 = *(_OWORD *)((char *)this + 12);
          *(float *)&v20 = v22;
          v25 = v22 * *((float *)this + 10);
          *((_BYTE *)this + 64) &= ~1u;
          *((_BYTE *)this + 64) |= 4u;
          *((float *)&v28 + 2) = v25 + v24;
          *((float *)&v28 + 1) = v23 + (float)(*(float *)&v20 * v19);
          v11 = v28;
        }
      }
      else
      {
        v26 = v18(a3) - *((float *)this + 4);
        *((_BYTE *)this + 64) &= ~1u;
        v27 = (float)(v26 > 0.0);
        *((float *)this + 13) = v27;
        *((_BYTE *)this + 64) |= COERCE_FLOAT(LODWORD(v27) & _xmm) >= 0.0000011920929;
      }
    }
    v8 = *((float *)this + 1) - 0.0099999998;
    v13 = *((float *)this + 2) + 0.0099999998;
    *(_OWORD *)((char *)this + 12) = v11;
    *((_DWORD *)this + 7) = v12;
    *((float *)this + 1) = v8;
    *((float *)this + 2) = v13;
  }
  v14 = v8 / 0.0099999998;
  v15 = *((float *)this + 4) * v14;
  v16 = (float)(1.0 - v14) * *((float *)this + 9);
  *(float *)this = a2;
  return v16 + v15;
}
