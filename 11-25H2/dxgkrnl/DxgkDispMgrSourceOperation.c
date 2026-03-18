/*
 * XREFs of DxgkDispMgrSourceOperation @ 0x14041A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040898 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402D5A28 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14032A060 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403B80D0 (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrSourceOperation(_OWORD *a1)
{
  ULONG64 v2; // rcx
  NTSTATUS v3; // edi
  __int64 v4; // r8
  void *v6; // rcx
  struct DXGADAPTER *v7; // r15
  unsigned int v8; // r12d
  ADAPTER_DISPLAY *v9; // rcx
  int VidPnSourceOwnerType; // r14d
  void *v11; // rcx
  struct DXGADAPTER **v12; // rcx
  struct DXGADAPTER *v13; // r14
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  void *v17; // rcx
  unsigned int v18; // [rsp+40h] [rbp-1A8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-1A0h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-198h]
  __int128 Src; // [rsp+60h] [rbp-188h] BYREF
  struct _LUID v22; // [rsp+70h] [rbp-178h] BYREF
  struct DXGADAPTER *v23[2]; // [rsp+78h] [rbp-170h] BYREF
  struct DXGADAPTER *v24[3]; // [rsp+88h] [rbp-160h] BYREF
  _BYTE v25[144]; // [rsp+A0h] [rbp-148h] BYREF
  _BYTE v26[144]; // [rsp+130h] [rbp-B8h] BYREF

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
    WdLogGlobalForLineNumber = 1092;
    goto LABEL_9;
  }
  v4 = *((_QWORD *)Object + 1);
  if ( !v4 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1098;
LABEL_8:
    v3 = -1073741811;
    goto LABEL_9;
  }
  if ( LODWORD(Handle[0]) == 1 )
  {
    *(_QWORD *)&Src = *(_QWORD *)(v4 + 32);
    DWORD2(Src) = *(_DWORD *)(*((_QWORD *)Object + 1) + 40LL);
    HIDWORD(Src) = -1;
    v24[0] = 0LL;
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v24, (const struct _LUID *)&Src);
    v13 = v24[0];
    if ( v24[0] )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v24[0], 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL) >= 0 )
      {
        v14 = *((_QWORD *)v13 + 390);
        if ( v14 )
        {
          if ( DWORD2(Src) < *(_DWORD *)(v14 + 96) )
          {
            v18 = -1;
            v15 = DmmEnumClientVidPnPathTargetsFromSource(v13, DWORD2(Src), 0LL, &v18);
            v16 = HIDWORD(Src);
            if ( v15 >= 0 )
              v16 = v18;
            HIDWORD(Src) = v16;
          }
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
    }
    v17 = a1 + 1;
    if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
      v17 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v17, &Src, 0x10uLL);
    v12 = v24;
    goto LABEL_40;
  }
  if ( LODWORD(Handle[0]) == 2 )
  {
    LODWORD(Src) = 4;
    v22 = *(struct _LUID *)(*((_QWORD *)Object + 1) + 32LL);
    v23[0] = 0LL;
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v23, &v22);
    v7 = v23[0];
    if ( v23[0] )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v23[0], 0LL);
      v8 = *(_DWORD *)(*((_QWORD *)Object + 1) + 40LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25, 0LL) >= 0 )
      {
        v9 = (ADAPTER_DISPLAY *)*((_QWORD *)v7 + 390);
        if ( v9 )
        {
          if ( v8 < *((_DWORD *)v9 + 24) )
          {
            VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v9, v8);
            if ( DXGADAPTER::IsVSyncAvailable(v7, v8) )
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
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
    }
    v11 = a1 + 1;
    if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
      v11 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v11, &Src, 4uLL);
    v12 = v23;
LABEL_40:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v12, 0LL);
    goto LABEL_9;
  }
  if ( LODWORD(Handle[0]) != 3 )
    goto LABEL_8;
  LODWORD(Src) = *(_DWORD *)(v4 + 60);
  v6 = a1 + 1;
  if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
    v6 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v6, &Src, 4uLL);
LABEL_9:
  NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
  return (unsigned int)v3;
}
