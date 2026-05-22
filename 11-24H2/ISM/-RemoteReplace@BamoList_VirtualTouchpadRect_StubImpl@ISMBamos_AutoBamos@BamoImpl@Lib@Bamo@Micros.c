/*
 * XREFs of ?RemoteReplace@BamoList_VirtualTouchpadRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18013FBE0
 * Callers:
 *     ?CallRemoteReplaceOnStub@BamoList_VirtualTouchpadRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IAEBUVirtualTouchpadRect@@@Z @ 0x18013D088 (-CallRemoteReplaceOnStub@BamoList_VirtualTouchpadRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@.c)
 *     ?RemoteReplace@BamoList_VirtualTouchpadRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18013FB80 (-RemoteReplace@BamoList_VirtualTouchpadRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAE.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180059E30 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendRemoteReplace@BamoList_VirtualTouchpadRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXIAEBUVirtualTouchpadRect@@@Z @ 0x18013DB38 (-LogSendRemoteReplace@BamoList_VirtualTouchpadRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_StubImpl::RemoteReplace(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_StubImpl *this,
        unsigned int a2,
        const struct VirtualTouchpadRect *a3,
        const char *a4)
{
  __int64 v7; // rcx
  int v9; // eax
  const struct VirtualTouchpadRect *v10; // r8
  unsigned int v11; // edi
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  struct IMessageCallSendHost *v14; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v19; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int v20; // [rsp+B8h] [rbp+38h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xCF6F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( *((_BYTE *)this + 56) )
  {
    v14 = 0LL;
    v19 = 0;
    v20 = 0;
    v9 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v14, &v19, &v20);
    v11 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_StubImpl::LogSendRemoteReplace(
        this,
        a2,
        v10);
      v12 = *(_OWORD *)a3;
      v13 = *((_QWORD *)a3 + 2);
      v15[0] = v19;
      v15[1] = v20;
      v16 = v12;
      v17 = v13;
      return CoreUICallSend(v14, v15, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF7F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9);
      return v11;
    }
  }
  else
  {
    v7 = *((_QWORD *)this + 3);
    if ( v7 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v7 + 16) + 32LL),
        0x87B20814,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF78,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
