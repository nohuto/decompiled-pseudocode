/*
 * XREFs of DxgkDispMgrTargetOperation @ 0x1404150A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline @ 0x14006CA9C (Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E0 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiPanelBufferingSetAutomaticPolicy @ 0x14008A96C (DpiPanelBufferingSetAutomaticPolicy.c)
 *     DpiPanelBufferingSetOverrideState @ 0x14008AB54 (DpiPanelBufferingSetOverrideState.c)
 *     ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1401C6EB8 (-CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z.c)
 *     ?GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIFORMAT@@AEAW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@@Z @ 0x1401C7194 (-GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIF.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1401C742C (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1401C75BC (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403AC50C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403AFCBC (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 */

__int64 __fastcall DxgkDispMgrTargetOperation(ULONG64 a1)
{
  ULONG64 v2; // rcx
  int OwnedSourceAndPixelFormatFromTarget; // ebx
  __int64 v4; // r9
  DXGDISPLAYMANAGEROBJECT *v5; // r10
  struct DXGADAPTER *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *v9; // rdx
  void **v10; // rcx
  int v12; // eax
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  PVOID v14; // [rsp+58h] [rbp-80h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-78h]
  struct _LUID v16[2]; // [rsp+70h] [rbp-68h] BYREF
  HANDLE v17[2]; // [rsp+80h] [rbp-58h]
  HANDLE v18; // [rsp+90h] [rbp-48h] BYREF
  PVOID v19; // [rsp+98h] [rbp-40h] BYREF
  int v20; // [rsp+A0h] [rbp-38h]
  struct DXGADAPTER *v21[2]; // [rsp+A8h] [rbp-30h] BYREF
  _BYTE v22[32]; // [rsp+B8h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+E8h] [rbp+10h] BYREF
  enum _D3DDDIFORMAT v24; // [rsp+F0h] [rbp+18h] BYREF
  int v25; // [rsp+F8h] [rbp+20h] BYREF

  *(_OWORD *)Handle = 0LL;
  *(_OWORD *)&v16[0].LowPart = 0LL;
  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  v2 = a1 + 56;
  if ( v2 < a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *(_OWORD *)a1;
  *(_OWORD *)&v16[0].LowPart = *(_OWORD *)(a1 + 16);
  *(_OWORD *)v17 = *(_OWORD *)(a1 + 32);
  v18 = *(HANDLE *)(a1 + 48);
  Object = 0LL;
  OwnedSourceAndPixelFormatFromTarget = ObReferenceObjectByHandleWithTag(
                                          Handle[1],
                                          0x20000u,
                                          g_pDxgkDisplayManagerObjectType,
                                          1,
                                          0x4B677844u,
                                          &Object,
                                          0LL);
  if ( OwnedSourceAndPixelFormatFromTarget >= 0 )
  {
    v5 = *(DXGDISPLAYMANAGEROBJECT **)Object;
    if ( !*(_QWORD *)Object )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1000;
LABEL_47:
      OwnedSourceAndPixelFormatFromTarget = -1073741811;
      goto LABEL_48;
    }
    if ( LODWORD(Handle[0]) == 1 )
    {
      v12 = DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership(
              (__int64)v5,
              *(_QWORD *)v16,
              v16[1].LowPart,
              v4,
              (int)v17[0]);
    }
    else
    {
      if ( LODWORD(Handle[0]) != 2 )
      {
        if ( LODWORD(Handle[0]) == 3 )
        {
          v14 = 0LL;
          OwnedSourceAndPixelFormatFromTarget = ObReferenceObjectByHandleWithTag(
                                                  v17[0],
                                                  0x20000u,
                                                  g_pDxgkDisplayManagerObjectType,
                                                  1,
                                                  0x4B677844u,
                                                  &v14,
                                                  0LL);
          if ( OwnedSourceAndPixelFormatFromTarget >= 0 )
          {
            if ( !*(_QWORD *)v14 )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 1023;
              NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v14);
              goto LABEL_47;
            }
            OwnedSourceAndPixelFormatFromTarget = DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
                                                    *(DXGDISPLAYMANAGEROBJECT **)Object,
                                                    v16[0],
                                                    v16[1].LowPart,
                                                    *(struct DXGDISPLAYMANAGEROBJECT **)v14);
          }
          else
          {
            WdLogSingleEntry1(3LL, Handle[1]);
            WdLogGlobalForLineNumber = 1018;
          }
          v10 = &v14;
        }
        else
        {
          if ( LODWORD(Handle[0]) != 4 )
          {
            if ( LODWORD(Handle[0]) != 5
              || !(unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
            {
              goto LABEL_47;
            }
            if ( ((__int64)v17[0] & 1) != 0 )
              goto LABEL_18;
            if ( ((__int64)v17[0] & 8) == 0 )
            {
              WdLogSingleEntry0(3 - ((__int64)v17[0] & 1));
              WdLogGlobalForLineNumber = 1088;
              goto LABEL_47;
            }
            if ( ((__int64)v17[0] & 1) != 0 )
            {
LABEL_18:
              if ( ((__int64)v17[0] & 8) != 0 )
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 1096;
                goto LABEL_47;
              }
            }
            v21[0] = 0LL;
            if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v21, v16) )
            {
              v6 = v21[0];
              DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                (DXGADAPTERSTOPRESETLOCKSHARED *)v22,
                v21[0],
                1);
              v7 = *((_QWORD *)v6 + 27);
              if ( v7 )
              {
                if ( ((__int64)v17[0] & 1) != 0 )
                {
                  v8 = DpiPanelBufferingSetOverrideState(
                         v7,
                         v16[1].LowPart,
                         (unsigned int)-__CFSHR__(v17[0], 2),
                         -__CFSHR__(v17[0], 3));
                }
                else
                {
                  if ( ((__int64)v17[0] & 8) == 0 )
                  {
                    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
                    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v21, 0LL);
                    goto LABEL_47;
                  }
                  v8 = DpiPanelBufferingSetAutomaticPolicy(v7, v16[1].LowPart, HIDWORD(v17[0]));
                }
                OwnedSourceAndPixelFormatFromTarget = v8;
              }
              else
              {
                WdLogSingleEntry1(2LL, v6);
                WdLogGlobalForLineNumber = 1114;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Adapter 0x%I64x had no FDO",
                  (__int64)v6,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                OwnedSourceAndPixelFormatFromTarget = -1073741275;
              }
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
            }
            else
            {
              OwnedSourceAndPixelFormatFromTarget = -1073741811;
              WdLogSingleEntry3(3LL, v16[0].LowPart, v16[0].HighPart, -1073741811LL);
              WdLogGlobalForLineNumber = 1104;
            }
            DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v21, 0LL);
            goto LABEL_48;
          }
          v23 = -1;
          v24 = D3DDDIFMT_A8R8G8B8;
          v25 = 0;
          OwnedSourceAndPixelFormatFromTarget = DXGDISPLAYMANAGEROBJECT::GetOwnedSourceAndPixelFormatFromTarget(
                                                  v5,
                                                  v16[0],
                                                  v16[1].LowPart,
                                                  &v23,
                                                  &v24,
                                                  (enum _DISPLAYCONFIG_HDR_PIXEL_FORMAT *)&v25);
          if ( OwnedSourceAndPixelFormatFromTarget < 0 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1038;
            goto LABEL_48;
          }
          OwnedSourceAndPixelFormatFromTarget = DXGDISPLAYMANAGEROBJECT::CreateSourceObject(
                                                  *(DXGDISPLAYMANAGEROBJECT **)Object,
                                                  v16[0],
                                                  v23,
                                                  (struct _OBJECT_ATTRIBUTES *)v17[0],
                                                  (ACCESS_MASK)v17[1],
                                                  &v18);
          v20 = OwnedSourceAndPixelFormatFromTarget;
          if ( OwnedSourceAndPixelFormatFromTarget < 0 )
            goto LABEL_48;
          v19 = 0LL;
          if ( ObReferenceObjectByHandleWithTag(
                 v18,
                 0x20000u,
                 g_pDxgkDisplayManagerObjectType,
                 1,
                 0x4B677844u,
                 &v19,
                 0LL) >= 0 )
          {
            *(_DWORD *)(*((_QWORD *)v19 + 1) + 60LL) = v24;
            if ( (unsigned int)Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline() )
              *(_DWORD *)(*((_QWORD *)v19 + 1) + 64LL) = v25;
          }
          v9 = (_QWORD *)(a1 + 48);
          if ( a1 + 48 >= MmUserProbeAddress )
            v9 = (_QWORD *)MmUserProbeAddress;
          *v9 = v18;
          v10 = &v19;
        }
        NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(v10);
        goto LABEL_48;
      }
      v12 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(*(DXGDISPLAYMANAGEROBJECT **)Object, v16[0], v16[1].LowPart);
    }
    OwnedSourceAndPixelFormatFromTarget = v12;
    goto LABEL_48;
  }
  WdLogSingleEntry1(3LL, Handle[1]);
  WdLogGlobalForLineNumber = 994;
LABEL_48:
  NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
  return (unsigned int)OwnedSourceAndPixelFormatFromTarget;
}
