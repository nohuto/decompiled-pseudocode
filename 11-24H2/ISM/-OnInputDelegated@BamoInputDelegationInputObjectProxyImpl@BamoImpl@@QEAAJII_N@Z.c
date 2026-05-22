/*
 * XREFs of ?OnInputDelegated@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJII_N@Z @ 0x180133DBC
 * Callers:
 *     ?OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z @ 0x180133D50 (-OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180044B94 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180044D14 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendOnInputDelegated@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@AEAAXII_N@Z @ 0x180133738 (-LogSendOnInputDelegated@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@AEAAXII_N@Z.c)
 */

__int64 __fastcall BamoImpl::BamoInputDelegationInputObjectProxyImpl::OnInputDelegated(
        BamoImpl::BamoInputDelegationInputObjectProxyImpl *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r10
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rdi
  char *v11; // rax
  unsigned int v12; // [rsp+50h] [rbp-20h] BYREF
  struct IMessageCallSendHost *v13[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v15; // [rsp+A0h] [rbp+30h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFC17,
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
      (void *)0xFC20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v13[0] = 0LL;
    v15 = 0;
    v12 = 0;
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v13, &v15, &v12);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v13[0];
      if ( *((_BYTE *)this + 31) )
      {
        v11 = (char *)v13[0] - 16;
        if ( !v13[0] )
          v11 = 0LL;
        v11[72] = 1;
      }
      BamoImpl::BamoInputDelegationInputObjectProxyImpl::LogSendOnInputDelegated(this, a2);
      v13[0] = (struct IMessageCallSendHost *)v15;
      v13[1] = (struct IMessageCallSendHost *)v12;
      return CoreUICallSend(v10, v13, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFC27,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
