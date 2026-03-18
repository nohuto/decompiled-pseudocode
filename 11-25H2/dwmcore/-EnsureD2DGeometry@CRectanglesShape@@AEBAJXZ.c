/*
 * XREFs of ?EnsureD2DGeometry@CRectanglesShape@@AEBAJXZ @ 0x1801E3F44
 * Callers:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801E3C90 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRectanglesShape::EnsureD2DGeometry(CRectanglesShape *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  CGlobalDrawingContext *v6; // rcx
  __int64 (__fastcall *v7)(CGlobalDrawingContext *); // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF
  CGlobalDrawingContext *v16; // [rsp+58h] [rbp+28h] BYREF
  CGlobalDrawingContext *v17; // [rsp+60h] [rbp+30h] BYREF

  v1 = 0;
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    v3 = *((_QWORD *)this + 2);
    v4 = *(_QWORD *)g_DeviceManager;
    if ( *((_QWORD *)this + 3) - v3 == 16 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, CGlobalDrawingContext **))(v4 + 40))(g_DeviceManager, v3, &v17);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x148u, 0LL);
        goto LABEL_7;
      }
      v6 = v17;
      v17 = 0LL;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, CGlobalDrawingContext **))(v4 + 80))(g_DeviceManager, &v16);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x14Fu, 0LL);
        goto LABEL_7;
      }
      v10 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *, __int64 *))(*(_QWORD *)v16 + 136LL))(v16, &v15);
      v1 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x151u, 0LL);
        goto LABEL_7;
      }
      v11 = *((_QWORD *)this + 2);
      v12 = 0LL;
      if ( (*((_QWORD *)this + 3) - v11) >> 4 )
      {
        v13 = 0LL;
        do
        {
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v15 + 40LL))(
            v15,
            _mm_unpacklo_ps((__m128)*(unsigned int *)(v13 + v11), (__m128)*(unsigned int *)(v13 + v11 + 4)).m128_u64[0],
            0LL);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v15 + 80LL))(
            v15,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(v13 + *((_QWORD *)this + 2) + 8),
              (__m128)*(unsigned int *)(v13 + *((_QWORD *)this + 2) + 4)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v15 + 80LL))(
            v15,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(v13 + *((_QWORD *)this + 2) + 8),
              (__m128)*(unsigned int *)(v13 + *((_QWORD *)this + 2) + 12)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v15 + 80LL))(
            v15,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(v13 + *((_QWORD *)this + 2)),
              (__m128)*(unsigned int *)(v13 + *((_QWORD *)this + 2) + 12)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 64LL))(v15, 1LL);
          v11 = *((_QWORD *)this + 2);
          v13 += 16LL;
          ++v12;
        }
        while ( v12 < (*((_QWORD *)this + 3) - v11) >> 4 );
      }
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
      v1 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x165u, 0LL);
        goto LABEL_7;
      }
      v6 = v16;
      v16 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, (signed __int64)v6, 0LL) )
      ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v6);
  }
LABEL_7:
  if ( v17 )
    (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
  {
    v7 = *(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v16 + 16LL);
    if ( v7 == CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v16);
    else
      v7(v16);
  }
  return v1;
}
