/*
 * XREFs of ?GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIFORMAT@@@Z @ 0x1401C2B70
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x14041A8C0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402D57C8 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1403CD138 (-ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::GetOwnedSourceAndPixelFormatFromTarget(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int *a4,
        enum _D3DDDIFORMAT *a5)
{
  __int64 v6; // rsi
  DWORD LowPart; // ebx
  struct DXGADAPTER *v9; // rdi
  int SourceConnectedToTargetInClientVidPn; // ebx
  enum _D3DDDIFORMAT v11; // ecx
  struct _LUID v12; // [rsp+20h] [rbp-A1h] BYREF
  struct DXGADAPTER *v13[3]; // [rsp+28h] [rbp-99h] BYREF
  _BYTE v14[144]; // [rsp+40h] [rbp-81h] BYREF

  v6 = a3;
  LowPart = a2.LowPart;
  v12 = a2;
  if ( !DXGDISPLAYMANAGEROBJECT::ContainsTarget(this, a2, a3) )
    return 3221226021LL;
  v13[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v13, &v12);
  v9 = v13[0];
  if ( !v13[0] )
  {
    WdLogSingleEntry2(3LL, v12.HighPart, LowPart);
    WdLogGlobalForLineNumber = 299;
LABEL_5:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v13, 0LL);
    return 3221226021LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, v13[0], 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL) < 0 )
  {
    WdLogSingleEntry2(3LL, v12.HighPart, LowPart);
    WdLogGlobalForLineNumber = 305;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
    goto LABEL_5;
  }
  if ( *((_QWORD *)v9 + 390) )
  {
    SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v9, v6, a4);
    if ( SourceConnectedToTargetInClientVidPn < 0
      || (v11 = *(_DWORD *)(3984LL * *a4 + *(_QWORD *)(*((_QWORD *)v9 + 390) + 128LL) + 652),
          (*a5 = v11) == D3DDDIFMT_UNKNOWN) )
    {
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 323;
      *a5 = D3DDDIFMT_A8R8G8B8;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, v12.HighPart, LowPart);
    WdLogGlobalForLineNumber = 311;
    SourceConnectedToTargetInClientVidPn = -1073741275;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v13, 0LL);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
