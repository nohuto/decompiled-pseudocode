/*
 * XREFs of ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800635E8
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180063124 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CCombinedGeometryProxy@@QEAAJW4Enum@MilCombineMode@@PEBVCBaseGeometryProxy@@1@Z @ 0x1800636E8 (-Update@CCombinedGeometryProxy@@QEAAJW4Enum@MilCombineMode@@PEBVCBaseGeometryProxy@@1@Z.c)
 *     ?CreateCombinedGeometryProxy@CCompositor@@QEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x180063748 (-CreateCombinedGeometryProxy@CCompositor@@QEAAJPEAPEAVCCombinedGeometryProxy@@@Z.c)
 */

__int64 __fastcall ResourceHelper::CreateCombinedGeometry(__int64 a1, __int64 a2, __int64 a3, CMILRefCountBase **a4)
{
  CMILRefCountBase *v4; // rbx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // eax
  CMILRefCountBase *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = *a4;
  v4 = v13;
  if ( v13 )
  {
    CMILRefCountBase::AddRef(v13);
  }
  else
  {
    v8 = CCompositor::CreateCombinedGeometryProxy(
           *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
           &v13);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x6Fu, 0LL);
      v4 = v13;
      goto LABEL_9;
    }
    v4 = v13;
  }
  v11 = CCombinedGeometryProxy::Update(v4, v9, a1, a2);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x72u, 0LL);
LABEL_9:
    if ( v4 )
      CBaseObject::Release(v4);
    return v10;
  }
  if ( *a4 )
    CBaseObject::Release(*a4);
  *a4 = v4;
  if ( v4 )
  {
    CMILRefCountBase::AddRef(v4);
    goto LABEL_9;
  }
  return v10;
}
