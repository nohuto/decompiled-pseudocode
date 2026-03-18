/*
 * XREFs of ?GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIFORMAT@@AEAW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@@Z @ 0x1401C7194
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1404150A0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline @ 0x14006CA9C (Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1403156CC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1403C0428 (-ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::GetOwnedSourceAndPixelFormatFromTarget(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int *a4,
        enum _D3DDDIFORMAT *a5,
        enum _DISPLAYCONFIG_HDR_PIXEL_FORMAT *a6)
{
  DWORD LowPart; // ebx
  __int64 v8; // r12
  ADAPTER_DISPLAY **v10; // rdi
  int SourceConnectedToTargetInClientVidPn; // ebx
  int v12; // ecx
  struct _LUID v13; // [rsp+20h] [rbp-A9h] BYREF
  struct DXGADAPTER *v14[3]; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v15[144]; // [rsp+40h] [rbp-89h] BYREF

  LowPart = a2.LowPart;
  v8 = a3;
  v13 = a2;
  if ( !DXGDISPLAYMANAGEROBJECT::ContainsTarget(this, a2, a3) )
    return 3221226021LL;
  v14[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v14, &v13);
  v10 = (ADAPTER_DISPLAY **)v14[0];
  if ( !v14[0] )
  {
    WdLogSingleEntry2(3LL, v13.HighPart, LowPart);
    WdLogGlobalForLineNumber = 300;
LABEL_5:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v14, 0LL);
    return 3221226021LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, v14[0], 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15, 0LL) < 0 )
  {
    WdLogSingleEntry2(3LL, v13.HighPart, LowPart);
    WdLogGlobalForLineNumber = 306;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
    goto LABEL_5;
  }
  if ( v10[390] )
  {
    SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v10, v8, a4);
    if ( SourceConnectedToTargetInClientVidPn < 0
      || ((*a5 = *(enum _D3DDDIFORMAT *)(4024LL * *a4 + *((_QWORD *)v10[390] + 16) + 652),
           !(unsigned int)Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline())
        ? (v12 = 0)
        : (v12 = *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(v10[390], *a4) + 19)),
          *(_DWORD *)a6 = v12,
          *a5 == D3DDDIFMT_UNKNOWN) )
    {
      WdLogSingleEntry1(3LL, v8);
      WdLogGlobalForLineNumber = 333;
      *a5 = D3DDDIFMT_A8R8G8B8;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, v13.HighPart, LowPart);
    WdLogGlobalForLineNumber = 312;
    SourceConnectedToTargetInClientVidPn = -1073741275;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v14, 0LL);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
