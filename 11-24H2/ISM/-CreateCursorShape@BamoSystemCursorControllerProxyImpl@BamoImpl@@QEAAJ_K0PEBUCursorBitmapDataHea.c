/*
 * XREFs of ?CreateCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x180115C4C
 * Callers:
 *     ?CreateCursorShape@BamoSystemCursorControllerProxy@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x180115BC0 (-CreateCursorShape@BamoSystemCursorControllerProxy@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendCreateCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x18011AC54 (-LogSendCreateCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K0PEBUCursorBitmap.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerProxyImpl::CreateCursorShape(
        BamoImpl::BamoSystemCursorControllerProxyImpl *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        const struct CursorBitmapDataHeader *a4,
        unsigned int a5,
        const unsigned __int8 *a6,
        unsigned int a7)
{
  char *v7; // rbx
  __int64 v11; // r10
  int v12; // edi
  __int64 v13; // rdx
  const struct CursorBitmapDataHeader *v15; // r9
  struct IMessageCallSendHost *v16; // r14
  const unsigned __int8 *v17; // [rsp+28h] [rbp-58h]
  unsigned int v18; // [rsp+60h] [rbp-20h] BYREF
  struct IMessageCallSendHost *v19[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v21; // [rsp+B0h] [rbp+30h] BYREF

  v7 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9EE7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    v12 = -2018375660;
    if ( v11 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v11 + 24) + 32LL),
        0x87B20814,
        0);
    v13 = 40688LL;
    goto LABEL_7;
  }
  v19[0] = 0LL;
  v21 = 0;
  v18 = 0;
  v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v19, &v21, &v18);
  if ( v12 < 0 )
  {
    v13 = 40695LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  v16 = v19[0];
  if ( *((_BYTE *)this + 31) )
  {
    if ( v19[0] )
      v7 = (char *)v19[0] - 16;
    v7[72] = 1;
  }
  BamoImpl::BamoSystemCursorControllerProxyImpl::LogSendCreateCursorShape(this, a2, a3, v15, a5, v17, a7);
  v19[0] = (struct IMessageCallSendHost *)v21;
  v19[1] = (struct IMessageCallSendHost *)v18;
  return CoreUICallSend(v16, v19, 2LL);
}
