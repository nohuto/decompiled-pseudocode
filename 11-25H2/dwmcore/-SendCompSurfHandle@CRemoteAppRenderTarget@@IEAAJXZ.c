/*
 * XREFs of ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028C7A4
 * Callers:
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x18028BAF0 (-CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x18028C848 (-SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SendCompSurfHandle(CRemoteAppRenderTarget *this)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  CRemoteAppRenderTarget *v4; // rcx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v8[9]; // [rsp+38h] [rbp-50h] BYREF

  v1 = *((_QWORD *)this + 23);
  v2 = 0;
  if ( v1 )
  {
    v7 = 6LL;
    memset_0(v8, 0, 0x40uLL);
    v8[0] = *((_QWORD *)this + 326);
    v8[1] = v1;
    v5 = CRemoteAppRenderTarget::SendMetaData(v4, (const struct _DWMIndirectMetaData *)&v7);
    v2 = v5;
    if ( v5 >= 0 )
      *((_BYTE *)this + 2630) = 0;
    else
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x1A8u, 0LL);
  }
  return v2;
}
