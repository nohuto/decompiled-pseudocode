/*
 * XREFs of ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x1800EAEE4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x1800EB264 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CManipulationTransform::ProcessSetComponents(
        CManipulationTransform *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS *a3)
{
  char *v3; // r15
  unsigned int v4; // ebx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r14
  unsigned __int64 v11; // rcx
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  unsigned int v14; // xmm0_4
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-20h]
  __int64 v20; // [rsp+30h] [rbp-20h]
  unsigned int v21; // [rsp+38h] [rbp-18h]
  unsigned int v22; // [rsp+38h] [rbp-18h]
  unsigned int v23; // [rsp+38h] [rbp-18h]

  v3 = (char *)this + 160;
  v4 = 0;
  v18 = *((_QWORD *)a3 + 1);
  v21 = *((_DWORD *)a3 + 4);
  if ( this == (CManipulationTransform *)-160LL )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xE8u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x58u, 0LL);
    return (unsigned int)-2147024809;
  }
  v7 = *(_QWORD *)v3 - v18;
  if ( *(_QWORD *)v3 == v18 )
    v7 = *((unsigned int *)v3 + 2) - (unsigned __int64)v21;
  if ( v7 )
  {
    *(_QWORD *)v3 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 2), (__m128)*((unsigned int *)a3 + 3)).m128_u64[0];
    *((_DWORD *)v3 + 2) = v21;
    *((_BYTE *)this + 272) = 1;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    CResource::InvalidateAnimationSources(this, 1);
    CResource::InvalidateAnimationSources(this, 5);
  }
  v8 = (_QWORD *)((char *)this + 172);
  v19 = *(_QWORD *)((char *)a3 + 20);
  v22 = *((_DWORD *)a3 + 7);
  if ( this == (CManipulationTransform *)-172LL )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xE8u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x5Bu, 0LL);
    return (unsigned int)-2147024809;
  }
  v9 = *v8 - v19;
  if ( *v8 == v19 )
    v9 = *((unsigned int *)this + 45) - (unsigned __int64)v22;
  if ( v9 )
  {
    *v8 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 5), (__m128)*((unsigned int *)a3 + 6)).m128_u64[0];
    *((_DWORD *)this + 45) = v22;
    *((_BYTE *)this + 272) = 1;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    CResource::InvalidateAnimationSources(this, 2);
    CResource::InvalidateAnimationSources(this, 5);
  }
  v10 = (_QWORD *)((char *)this + 184);
  v20 = *((_QWORD *)a3 + 4);
  v23 = *((_DWORD *)a3 + 10);
  if ( this == (CManipulationTransform *)-184LL )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xE8u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x5Eu, 0LL);
    return (unsigned int)-2147024809;
  }
  v11 = *v10 - v20;
  if ( *v10 == v20 )
    v11 = *((unsigned int *)this + 48) - (unsigned __int64)v23;
  if ( v11 )
  {
    *v10 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 8), (__m128)*((unsigned int *)a3 + 9)).m128_u64[0];
    *((_DWORD *)this + 48) = v23;
    *((_BYTE *)this + 272) = 1;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    CResource::InvalidateAnimationSources(this, 3);
    CResource::InvalidateAnimationSources(this, 5);
  }
  v12 = (__m128)*((unsigned int *)a3 + 11);
  v13 = (__m128)*((unsigned int *)a3 + 12);
  v14 = *((_DWORD *)a3 + 13);
  v15 = (_QWORD *)((char *)this + 196);
  if ( this == (CManipulationTransform *)-196LL )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xE8u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x61u, 0LL);
    return (unsigned int)-2147024809;
  }
  v16 = *v15 - __PAIR64__(v13.m128_u32[0], v12.m128_u32[0]);
  if ( *v15 == __PAIR64__(v13.m128_u32[0], v12.m128_u32[0]) )
    v16 = *((unsigned int *)this + 51) - (unsigned __int64)v14;
  if ( v16 )
  {
    *v15 = _mm_unpacklo_ps(v12, v13).m128_u64[0];
    *((_DWORD *)this + 51) = v14;
    *((_BYTE *)this + 272) = 1;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    CResource::InvalidateAnimationSources(this, 4);
    CResource::InvalidateAnimationSources(this, 5);
  }
  if ( *((_BYTE *)this + 272) )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      (const struct D2DVector3 *)v3,
      (CManipulationTransform *)((char *)this + 184),
      (CManipulationTransform *)((char *)this + 196),
      (CManipulationTransform *)((char *)this + 208));
    *((_BYTE *)this + 272) = 0;
  }
  return v4;
}
