/*
 * XREFs of DxgkDispMgrSourceOperation @ 0x140414C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline @ 0x14006CA9C (Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14030C710 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x14031592C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403AC50C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrSourceOperation(_OWORD *a1)
{
  ULONG64 v2; // rcx
  NTSTATUS v3; // edi
  __int64 v4; // r8
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v7; // rcx
  int v8; // r14d
  int v9; // r15d
  void *v10; // rcx
  struct DXGADAPTER *v11; // r15
  unsigned int v12; // r12d
  ADAPTER_DISPLAY *v13; // rcx
  int VidPnSourceOwnerType; // r14d
  void *v15; // rcx
  struct DXGADAPTER **v16; // rcx
  struct DXGADAPTER *v17; // r14
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  void *v21; // rcx
  PVOID Object; // [rsp+40h] [rbp-1A8h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-1A0h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-198h]
  __int128 Src; // [rsp+60h] [rbp-188h] BYREF
  struct _LUID v26; // [rsp+70h] [rbp-178h] BYREF
  struct DXGADAPTER *v27[2]; // [rsp+78h] [rbp-170h] BYREF
  struct DXGADAPTER *v28[3]; // [rsp+88h] [rbp-160h] BYREF
  _BYTE v29[144]; // [rsp+A0h] [rbp-148h] BYREF
  _BYTE v30[144]; // [rsp+130h] [rbp-B8h] BYREF

  *(_OWORD *)Handle = 0LL;
  Src = 0LL;
  v2 = (ULONG64)(a1 + 2);
  if ( v2 < (unsigned __int64)a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *a1;
  Src = a1[1];
  Object = 0LL;
  v3 = ObReferenceObjectByHandleWithTag(
         Handle[1],
         0x20000u,
         g_pDxgkDisplayManagerObjectType,
         1,
         0x4B677844u,
         &Object,
         0LL);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(3LL, Handle[1]);
    WdLogGlobalForLineNumber = 1160;
    goto LABEL_9;
  }
  v4 = *((_QWORD *)Object + 1);
  if ( !v4 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1166;
LABEL_8:
    v3 = -1073741811;
    goto LABEL_9;
  }
  if ( LODWORD(Handle[0]) == 1 )
  {
    *(_QWORD *)&Src = *(_QWORD *)(v4 + 32);
    DWORD2(Src) = *(_DWORD *)(*((_QWORD *)Object + 1) + 40LL);
    HIDWORD(Src) = -1;
    v28[0] = 0LL;
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v28, (const struct _LUID *)&Src);
    v17 = v28[0];
    if ( v28[0] )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v28[0], 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30, 0LL) >= 0 )
      {
        v18 = *((_QWORD *)v17 + 390);
        if ( v18 )
        {
          if ( DWORD2(Src) < *(_DWORD *)(v18 + 96) )
          {
            v23 = -1;
            v19 = DmmEnumClientVidPnPathTargetsFromSource(v17, DWORD2(Src), 0LL, &v23);
            v20 = HIDWORD(Src);
            if ( v19 >= 0 )
              v20 = v23;
            HIDWORD(Src) = v20;
          }
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    }
    v21 = a1 + 1;
    if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
      v21 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v21, &Src, 0x10uLL);
    v16 = v28;
    goto LABEL_47;
  }
  if ( LODWORD(Handle[0]) == 2 )
  {
    LODWORD(Src) = 4;
    v26 = *(struct _LUID *)(*((_QWORD *)Object + 1) + 32LL);
    v27[0] = 0LL;
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v27, &v26);
    v11 = v27[0];
    if ( v27[0] )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v27[0], 0LL);
      v12 = *(_DWORD *)(*((_QWORD *)Object + 1) + 40LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL) >= 0 )
      {
        v13 = (ADAPTER_DISPLAY *)*((_QWORD *)v11 + 390);
        if ( v13 )
        {
          if ( v12 < *((_DWORD *)v13 + 24) )
          {
            VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v13, v12);
            if ( DXGADAPTER::IsVSyncAvailable(v11, v12) )
            {
              if ( VidPnSourceOwnerType == 2 )
                LODWORD(Src) = 8;
              else
                LODWORD(Src) = VidPnSourceOwnerType != 0 ? 1 : 16;
            }
            else
            {
              LODWORD(Src) = 2;
            }
          }
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
    }
    v15 = a1 + 1;
    if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
      v15 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v15, &Src, 4uLL);
    v16 = v27;
LABEL_47:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v16, 0LL);
    goto LABEL_9;
  }
  if ( LODWORD(Handle[0]) != 3 )
    goto LABEL_8;
  IsEnabledDeviceUsageNoInline = Feature_DDisplayPreserveVidpn__private_IsEnabledDeviceUsageNoInline();
  v7 = *((_QWORD *)Object + 1);
  if ( IsEnabledDeviceUsageNoInline )
  {
    v8 = *(_DWORD *)(v7 + 60);
    v9 = *(_DWORD *)(v7 + 64);
    if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v7) + 102) & 4) != 0 && v8 == 113 && !v9 )
      LODWORD(Src) = 21;
    else
      LODWORD(Src) = v8;
  }
  else
  {
    LODWORD(Src) = *(_DWORD *)(v7 + 60);
  }
  v10 = a1 + 1;
  if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
    v10 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v10, &Src, 4uLL);
LABEL_9:
  NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
  return (unsigned int)v3;
}
