/*
 * XREFs of ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1801A651C
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18002699C (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1801A6660 (--0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x1801A6C44 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CGDIBitmapRealization::Create(void *a1, struct _LUID a2, struct IGDIBitmapRealization **a3)
{
  CGDIBitmapRealization *v6; // rax
  CGDIBitmapRealization *v7; // rax
  CGDIBitmapRealization *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  _DWORD v12[2]; // [rsp+30h] [rbp-89h] BYREF
  void *v13; // [rsp+38h] [rbp-81h]
  struct _LUID v14; // [rsp+40h] [rbp-79h]
  __int128 v15; // [rsp+48h] [rbp-71h]
  _DWORD v16[20]; // [rsp+60h] [rbp-59h] BYREF
  __int128 v17; // [rsp+B0h] [rbp-9h]

  *a3 = 0LL;
  memset_0(v16, 0, 0x90uLL);
  v16[12] = 0;
  v16[19] = 0;
  v12[1] = 0;
  v16[0] = 1;
  v16[17] = 1;
  v17 = _xmm;
  v15 = 0LL;
  v16[18] = 1065353216;
  v12[0] = 2;
  v13 = a1;
  v14 = a2;
  v6 = (CGDIBitmapRealization *)operator new(0x1A8uLL);
  if ( v6
    && (v7 = CGDIBitmapRealization::CGDIBitmapRealization(
               v6,
               (const struct CSM_BUFFER_ATTRIBUTES *)v16,
               (const struct CSM_REALIZATION_INFO *)v12),
        (v8 = v7) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CGDIBitmapRealization *)((char *)v7 + 8));
    v9 = CDxHandleBitmapRealization::Initialize(v8);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x2Bu, 0LL);
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v8);
    }
    else
    {
      *a3 = (CGDIBitmapRealization *)((char *)v8 + 400);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Au, 0LL);
  }
  return v10;
}
