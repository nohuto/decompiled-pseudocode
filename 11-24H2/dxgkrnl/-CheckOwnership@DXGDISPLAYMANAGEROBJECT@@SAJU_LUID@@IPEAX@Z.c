/*
 * XREFs of ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x140313A24
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C9B44 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@Z @ 0x140050598 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ?IsDispBrokerProcess@DXGPROCESS@@QEBAEXZ @ 0x14006F448 (-IsDispBrokerProcess@DXGPROCESS@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@@Z @ 0x140312F70 (-GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV-$auto_rc@VDXGDISPLAYMANAGEROBJ.c)
 *     DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___ @ 0x14031321C (DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x14031592C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403AC50C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::CheckOwnership(struct _LUID a1, unsigned int a2, void *a3)
{
  unsigned int v3; // edi
  DWORD LowPart; // ebx
  struct DXGADAPTER *v7; // rsi
  unsigned int i; // r14d
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // ebx
  ReferenceCounted *v13; // rbx
  NTSTATUS v15; // esi
  __int64 v16; // rax
  DXGPROCESS *Current; // rax
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-A8h] BYREF
  ReferenceCounted *v20; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v21; // [rsp+68h] [rbp-98h] BYREF
  ReferenceCounted *v22; // [rsp+78h] [rbp-88h] BYREF
  struct _LUID v23; // [rsp+80h] [rbp-80h] BYREF
  ReferenceCounted *v24; // [rsp+88h] [rbp-78h] BYREF
  ReferenceCounted **v25; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v26[144]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = 0;
  v23 = a1;
  Object = 0LL;
  LowPart = a1.LowPart;
  if ( a3 )
  {
    v15 = ObReferenceObjectByHandleWithTag(a3, 0x20000u, g_pDxgkDisplayManagerObjectType, 1, 0x4B677844u, &Object, 0LL);
    if ( v15 < 0 )
    {
      WdLogSingleEntry1(2LL, a3);
      WdLogGlobalForLineNumber = 416;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to open display manager source object with handle 0x%I64x",
        (__int64)a3,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x4B677844u);
      return (unsigned int)v15;
    }
    v16 = *((_QWORD *)Object + 1);
    if ( !v16 )
    {
      WdLogSingleEntry1(2LL, Object);
      WdLogGlobalForLineNumber = 422;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Display manager object 0x%I64x was not a source object.",
        (__int64)Object,
        0LL,
        0LL,
        0LL,
        0LL);
      v3 = -1073741811;
      goto LABEL_52;
    }
    if ( !*(_BYTE *)(v16 + 56) )
    {
      WdLogSingleEntry1(2LL, Object);
      WdLogGlobalForLineNumber = 428;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Display manager object 0x%I64x was not a source object.",
        (__int64)Object,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x4B677844u);
      return 3221225506LL;
    }
  }
  v21 = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v21, &v23);
  v7 = v21;
  if ( v21 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v21, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL) >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        v19 = -1;
        v9 = DmmEnumClientVidPnPathTargetsFromSource(v7, a2, i, &v19);
        v10 = v9;
        if ( v9 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
          if ( v7 )
            DXGADAPTER::ReleaseReference(v7);
          if ( Object )
            ObfDereferenceObjectWithTag(Object, 0x4B677844u);
          return v10;
        }
        if ( v9 == 1075708748 || v19 == -1 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
          if ( v7 )
            DXGADAPTER::ReleaseReference(v7);
          if ( Object )
            ObfDereferenceObjectWithTag(Object, 0x4B677844u);
          return 0LL;
        }
        v22 = 0LL;
        v25 = &v22;
        v12 = DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765_(v7, v19, &v25);
        if ( v12 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v21, 0LL);
          v3 = v12;
          goto LABEL_52;
        }
        v13 = v22;
        v24 = v22;
        if ( a3 )
        {
          if ( !v22 )
          {
            Current = DXGPROCESS::GetCurrent(v11);
            if ( !Current || !DXGPROCESS::IsDispBrokerProcess(Current) )
              goto LABEL_46;
            auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset(&v24, 0LL);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
            DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v21, 0LL);
LABEL_52:
            NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
            return v3;
          }
          v20 = 0LL;
          DXGDISPLAYMANAGERSOURCEOBJECT::GetDisplayManagerObject(*((_QWORD *)Object + 1), &v20);
          if ( v20 != v22 )
          {
            auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset(&v20, 0LL);
LABEL_46:
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 505;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Access denied to take ownership of VidPn source",
              505LL,
              0LL,
              0LL,
              0LL,
              0LL);
            auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset(&v24, 0LL);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
            DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v21, 0LL);
            v3 = -1073741790;
            goto LABEL_52;
          }
          if ( v20 )
            ReferenceCounted::Release(v20);
          v20 = 0LL;
          if ( v13 )
            goto LABEL_15;
        }
        else if ( v22 )
        {
          if ( *((_BYTE *)v22 + 184) )
            goto LABEL_46;
LABEL_15:
          ReferenceCounted::Release(v13);
          continue;
        }
      }
    }
    WdLogSingleEntry2(3LL, v23.HighPart, LowPart);
    WdLogGlobalForLineNumber = 443;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  }
  else
  {
    WdLogSingleEntry2(3LL, v23.HighPart, LowPart);
    WdLogGlobalForLineNumber = 437;
  }
  if ( v7 )
    DXGADAPTER::ReleaseReference(v7);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x4B677844u);
  return 3221226021LL;
}
