/*
 * XREFs of ?OnForegroundTransferFromComponent@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJAEBUTransferForegroundInfo@@@Z @ 0x180131B20
 * Callers:
 *     ?OnForegroundTransferFromComponent@BamoCUIHostInputObjectProxy@@UEAAJAEBUTransferForegroundInfo@@@Z @ 0x180131AD0 (-OnForegroundTransferFromComponent@BamoCUIHostInputObjectProxy@@UEAAJAEBUTransferForegroundInfo@.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendOnForegroundTransferFromComponent@BamoCUIHostInputObjectProxyImpl@BamoImpl@@AEAAXAEBUTransferForegroundInfo@@@Z @ 0x180131838 (-LogSendOnForegroundTransferFromComponent@BamoCUIHostInputObjectProxyImpl@BamoImpl@@AEAAXAEBUTra.c)
 */

__int64 __fastcall BamoImpl::BamoCUIHostInputObjectProxyImpl::OnForegroundTransferFromComponent(
        BamoImpl::BamoCUIHostInputObjectProxyImpl *this,
        const struct TransferForegroundInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rdi
  char *v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _QWORD v14[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v19; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+C0h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v21; // [rsp+C8h] [rbp+48h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8D44,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    if ( v6 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D4D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v21 = 0LL;
    v19 = 0;
    v20 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v21, &v19, &v20);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v21;
      if ( *((_BYTE *)this + 31) )
      {
        v11 = (char *)v21 - 16;
        if ( !v21 )
          v11 = 0LL;
        v11[72] = 1;
      }
      BamoImpl::BamoCUIHostInputObjectProxyImpl::LogSendOnForegroundTransferFromComponent(this, a2);
      v12 = *(_OWORD *)a2;
      v17 = *((_DWORD *)a2 + 8);
      v13 = *((_OWORD *)a2 + 1);
      v14[0] = v19;
      v14[1] = v20;
      v15 = v12;
      v16 = v13;
      return CoreUICallSend(v10, v14, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D54,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
