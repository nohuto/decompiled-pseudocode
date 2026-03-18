/*
 * XREFs of DxgkDispMgrTargetOperation @ 0x14041A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1401C2898 (-CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z.c)
 *     ?GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIFORMAT@@@Z @ 0x1401C2B70 (-GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIF.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1401C2DD8 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1401C2F68 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403B80D0 (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403BBB3C (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 */

__int64 __fastcall DxgkDispMgrTargetOperation(ULONG64 a1)
{
  ULONG64 v2; // rcx
  int OwnedSourceAndPixelFormatFromTarget; // ebx
  __int64 v4; // r9
  DXGDISPLAYMANAGEROBJECT *v5; // r10
  _QWORD *v6; // rdx
  void **v7; // rcx
  int v9; // eax
  PVOID Object; // [rsp+40h] [rbp-58h] BYREF
  PVOID v11; // [rsp+48h] [rbp-50h] BYREF
  PVOID v12; // [rsp+50h] [rbp-48h] BYREF
  HANDLE Handle[2]; // [rsp+58h] [rbp-40h]
  struct _LUID v14[2]; // [rsp+68h] [rbp-30h]
  HANDLE v15[2]; // [rsp+78h] [rbp-20h]
  HANDLE v16; // [rsp+88h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+10h] BYREF
  enum _D3DDDIFORMAT v18; // [rsp+B0h] [rbp+18h] BYREF
  int v19; // [rsp+B8h] [rbp+20h]

  *(_OWORD *)Handle = 0LL;
  *(_OWORD *)&v14[0].LowPart = 0LL;
  *(_OWORD *)v15 = 0LL;
  v16 = 0LL;
  v2 = a1 + 56;
  if ( v2 < a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *(_OWORD *)a1;
  *(_OWORD *)&v14[0].LowPart = *(_OWORD *)(a1 + 16);
  *(_OWORD *)v15 = *(_OWORD *)(a1 + 32);
  v16 = *(HANDLE *)(a1 + 48);
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
      WdLogGlobalForLineNumber = 992;
LABEL_26:
      OwnedSourceAndPixelFormatFromTarget = -1073741811;
      goto LABEL_27;
    }
    if ( LODWORD(Handle[0]) == 1 )
    {
      v9 = DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership((__int64)v5, *(_QWORD *)v14, v14[1].LowPart, v4, (int)v15[0]);
    }
    else
    {
      if ( LODWORD(Handle[0]) != 2 )
      {
        if ( LODWORD(Handle[0]) == 3 )
        {
          v11 = 0LL;
          OwnedSourceAndPixelFormatFromTarget = ObReferenceObjectByHandleWithTag(
                                                  v15[0],
                                                  0x20000u,
                                                  g_pDxgkDisplayManagerObjectType,
                                                  1,
                                                  0x4B677844u,
                                                  &v11,
                                                  0LL);
          if ( OwnedSourceAndPixelFormatFromTarget >= 0 )
          {
            if ( !*(_QWORD *)v11 )
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 1015;
              NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v11);
              goto LABEL_26;
            }
            OwnedSourceAndPixelFormatFromTarget = DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
                                                    *(DXGDISPLAYMANAGEROBJECT **)Object,
                                                    v14[0],
                                                    v14[1].LowPart,
                                                    *(struct DXGDISPLAYMANAGEROBJECT **)v11);
          }
          else
          {
            WdLogSingleEntry1(3LL, Handle[1]);
            WdLogGlobalForLineNumber = 1010;
          }
          v7 = &v11;
        }
        else
        {
          if ( LODWORD(Handle[0]) != 4 )
            goto LABEL_26;
          v17 = -1;
          v18 = D3DDDIFMT_A8R8G8B8;
          OwnedSourceAndPixelFormatFromTarget = DXGDISPLAYMANAGEROBJECT::GetOwnedSourceAndPixelFormatFromTarget(
                                                  v5,
                                                  v14[0],
                                                  v14[1].LowPart,
                                                  &v17,
                                                  &v18);
          if ( OwnedSourceAndPixelFormatFromTarget < 0 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 1029;
            goto LABEL_27;
          }
          OwnedSourceAndPixelFormatFromTarget = DXGDISPLAYMANAGEROBJECT::CreateSourceObject(
                                                  *(DXGDISPLAYMANAGEROBJECT **)Object,
                                                  v14[0],
                                                  v17,
                                                  (struct _OBJECT_ATTRIBUTES *)v15[0],
                                                  (ACCESS_MASK)v15[1],
                                                  &v16);
          v19 = OwnedSourceAndPixelFormatFromTarget;
          if ( OwnedSourceAndPixelFormatFromTarget < 0 )
            goto LABEL_27;
          v12 = 0LL;
          if ( ObReferenceObjectByHandleWithTag(
                 v16,
                 0x20000u,
                 g_pDxgkDisplayManagerObjectType,
                 1,
                 0x4B677844u,
                 &v12,
                 0LL) >= 0 )
            *(_DWORD *)(*((_QWORD *)v12 + 1) + 60LL) = v18;
          v6 = (_QWORD *)(a1 + 48);
          if ( a1 + 48 >= MmUserProbeAddress )
            v6 = (_QWORD *)MmUserProbeAddress;
          *v6 = v16;
          v7 = &v12;
        }
        NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(v7);
        goto LABEL_27;
      }
      v9 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(*(DXGDISPLAYMANAGEROBJECT **)Object, v14[0], v14[1].LowPart);
    }
    OwnedSourceAndPixelFormatFromTarget = v9;
    goto LABEL_27;
  }
  WdLogSingleEntry1(3LL, Handle[1]);
  WdLogGlobalForLineNumber = 986;
LABEL_27:
  NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
  return (unsigned int)OwnedSourceAndPixelFormatFromTarget;
}
