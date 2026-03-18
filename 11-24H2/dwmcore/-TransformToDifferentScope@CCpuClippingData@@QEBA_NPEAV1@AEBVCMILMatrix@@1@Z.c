/*
 * XREFs of ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x1800F62FC
 * Callers:
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x1800F6B18 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@std@@QEAAXPEAVCMILMatrix@@@Z @ 0x1800F5DC4 (-reset@-$unique_ptr@VCMILMatrix@@U-$default_delete@VCMILMatrix@@@std@@@std@@QEAAXPEAVCMILMatrix@.c)
 *     ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x1800F5DEC (-IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z.c)
 *     ??$make_unique@VCMILMatrix@@$$V$0A@@std@@YA?AV?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@0@XZ @ 0x1800F62A4 (--$make_unique@VCMILMatrix@@$$V$0A@@std@@YA-AV-$unique_ptr@VCMILMatrix@@U-$default_delete@VCMILM.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x1800F7354 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

bool __fastcall CCpuClippingData::TransformToDifferentScope(
        CCpuClippingData *this,
        struct CCpuClippingData *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4)
{
  void **v4; // rsi
  struct CMILMatrix *v6; // rbx
  struct CMILMatrix **v10; // rax
  struct CMILMatrix *v11; // rdx
  int v12; // eax
  bool v13; // di
  void *v15; // [rsp+48h] [rbp+10h] BYREF

  v4 = (void **)((char *)a2 + 40);
  v6 = (struct CMILMatrix *)*((_QWORD *)a2 + 5);
  if ( v6 )
  {
    *v4 = 0LL;
  }
  else
  {
    v10 = (struct CMILMatrix **)std::make_unique<CMILMatrix,,0>(&v15);
    v6 = *v10;
    *v10 = 0LL;
    if ( v15 )
      operator delete(v15, 0x44uLL);
  }
  if ( CCpuClippingData::CalcScopeTransformFromWorld(a3, a4, v6) && CCpuClippingData::IsScopePreservingTransform(v6) )
  {
    v11 = v6;
    v6 = 0LL;
    std::unique_ptr<CMILMatrix>::reset(v4, v11);
    *((_DWORD *)a2 + 8) = *((_DWORD *)this + 8);
    v12 = *((_DWORD *)this + 9);
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 9) = v12;
    *((_BYTE *)a2 + 64) = *((_BYTE *)this + 64);
    *(_WORD *)((char *)a2 + 65) = 0;
    *((_BYTE *)a2 + 67) = 0;
  }
  v13 = *v4 != 0LL;
  if ( v6 )
    operator delete(v6, 0x44uLL);
  return v13;
}
