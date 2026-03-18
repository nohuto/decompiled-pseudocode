/*
 * XREFs of ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18020BC00
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x1800EB264 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333333333@Z @ 0x18020BF08 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333333333@Z @ 0x18020C03C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTempl.c)
 */

void __fastcall CManipulationTransform::GetRealization(
        CManipulationTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  struct D2DMatrix *v3; // r9
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  unsigned int v9; // edx
  __int64 v10; // rcx
  int v11; // [rsp+A0h] [rbp+7h] BYREF
  int v12; // [rsp+A4h] [rbp+Bh] BYREF
  int v13; // [rsp+A8h] [rbp+Fh] BYREF
  int v14; // [rsp+ACh] [rbp+13h] BYREF
  int v15; // [rsp+B0h] [rbp+17h] BYREF
  int v16; // [rsp+B4h] [rbp+1Bh] BYREF
  int v17; // [rsp+B8h] [rbp+1Fh] BYREF
  int v18; // [rsp+BCh] [rbp+23h] BYREF
  int v19; // [rsp+C0h] [rbp+27h] BYREF
  int v20; // [rsp+C4h] [rbp+2Bh] BYREF
  int v21; // [rsp+C8h] [rbp+2Fh] BYREF
  int v22; // [rsp+CCh] [rbp+33h] BYREF
  _DWORD v23[8]; // [rsp+D0h] [rbp+37h] BYREF
  int v24; // [rsp+100h] [rbp+67h] BYREF
  int v25; // [rsp+110h] [rbp+77h] BYREF
  int v26; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = (CManipulationTransform *)((char *)this + 208);
  if ( *((_BYTE *)this + 272) )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      (CManipulationTransform *)((char *)this + 160),
      (CManipulationTransform *)((char *)this + 184),
      (CManipulationTransform *)((char *)this + 196),
      v3);
    *((_BYTE *)this + 272) = 0;
  }
  v6 = *((_OWORD *)v3 + 1);
  v7 = *((_OWORD *)v3 + 2);
  v8 = *((_OWORD *)v3 + 3);
  *(_OWORD *)a3 = *(_OWORD *)v3;
  *((_OWORD *)a3 + 1) = v6;
  *((_OWORD *)a3 + 2) = v7;
  *((_OWORD *)a3 + 3) = v8;
  *((_DWORD *)a3 + 16) = 0;
  v9 = dword_1803F8D18;
  v10 = qword_1803F8D30;
  if ( (unsigned int)dword_1803F8D18 > 4 )
  {
    if ( (byte_1803F8D28 & 1) != 0 && (qword_1803F8D30 & 1) == qword_1803F8D30 )
    {
      v24 = *((_DWORD *)this + 67);
      v25 = *((_DWORD *)this + 66);
      v26 = *((_DWORD *)this + 65);
      v20 = *((_DWORD *)this + 64);
      v21 = *((_DWORD *)this + 63);
      v22 = *((_DWORD *)this + 62);
      v23[0] = *((_DWORD *)this + 61);
      v11 = *((_DWORD *)this + 60);
      v12 = *((_DWORD *)this + 59);
      v13 = *((_DWORD *)this + 58);
      v14 = *((_DWORD *)this + 57);
      v15 = *((_DWORD *)this + 56);
      v16 = *((_DWORD *)this + 55);
      v17 = *((_DWORD *)this + 54);
      v18 = *((_DWORD *)this + 53);
      v19 = *(_DWORD *)v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        qword_1803F8D30,
        (unsigned int)&unk_1803CE566,
        (_DWORD)a3,
        (_DWORD)v3,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24);
      v10 = qword_1803F8D30;
      v9 = dword_1803F8D18;
    }
    if ( v9 > 4 && (byte_1803F8D28 & 1) != 0 && (v10 & 1) == v10 )
    {
      v24 = *((_DWORD *)this + 51);
      v25 = *((_DWORD *)this + 50);
      v26 = *((_DWORD *)this + 49);
      v19 = *((_DWORD *)this + 48);
      v18 = *((_DWORD *)this + 47);
      v17 = *((_DWORD *)this + 46);
      v16 = *((_DWORD *)this + 45);
      v15 = *((_DWORD *)this + 44);
      v14 = *((_DWORD *)this + 43);
      v13 = *((_DWORD *)this + 42);
      v12 = *((_DWORD *)this + 41);
      v11 = *((_DWORD *)this + 40);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (unsigned int)&unk_1803CE5EB,
        (_DWORD)a3,
        (_DWORD)v3,
        (__int64)&v11,
        (__int64)&v12,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v16,
        (__int64)&v17,
        (__int64)&v18,
        (__int64)&v19,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24);
    }
  }
}
