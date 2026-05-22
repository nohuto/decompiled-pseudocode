/*
 * XREFs of ?RemoteInsert@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013F330
 * Callers:
 *     ?CallRemoteInsertOnStub@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IAEBUDisplayOcclusionRect@@@Z @ 0x18013CEF8 (-CallRemoteInsertOnStub@BamoList_DisplayOcclusionRect_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@.c)
 *     ?RemoteInsert@BamoList_DisplayOcclusionRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013F2D0 (-RemoteInsert@BamoList_DisplayOcclusionRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAE.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180059E30 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSendRemoteInsert@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXIAEBUDisplayOcclusionRect@@@Z @ 0x18013D870 (-LogSendRemoteInsert@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl::RemoteInsert(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl *this,
        unsigned int a2,
        const struct DisplayOcclusionRect *a3,
        const char *a4)
{
  __int64 v7; // rcx
  int v9; // eax
  const struct DisplayOcclusionRect *v10; // r8
  unsigned int v11; // edi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  struct IMessageCallSendHost *v21; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h]
  __int128 v24; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+80h] [rbp-80h]
  __int128 v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int128 v28; // [rsp+B0h] [rbp-50h]
  __int128 v29; // [rsp+C0h] [rbp-40h]
  __int128 v30; // [rsp+D0h] [rbp-30h]
  __int128 v31; // [rsp+E0h] [rbp-20h]
  __int128 v32; // [rsp+F0h] [rbp-10h]
  __int128 v33; // [rsp+100h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]
  unsigned int v35; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v36; // [rsp+158h] [rbp+58h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB90E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( *((_BYTE *)this + 56) )
  {
    v21 = 0LL;
    v35 = 0;
    v36 = 0;
    v9 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v21, &v35, &v36);
    v11 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl::LogSendRemoteInsert(
        this,
        a2,
        v10);
      v12 = *((_OWORD *)a3 + 1);
      v23 = *(_OWORD *)a3;
      v13 = *((_OWORD *)a3 + 2);
      v24 = v12;
      v14 = *((_OWORD *)a3 + 3);
      v25 = v13;
      v15 = *((_OWORD *)a3 + 4);
      v26 = v14;
      v16 = *((_OWORD *)a3 + 5);
      v27 = v15;
      v17 = *((_OWORD *)a3 + 6);
      v28 = v16;
      v18 = *((_OWORD *)a3 + 8);
      v29 = v17;
      v30 = *((_OWORD *)a3 + 7);
      v19 = *((_OWORD *)a3 + 9);
      v31 = v18;
      v20 = *((_OWORD *)a3 + 10);
      v32 = v19;
      v33 = v20;
      v22[0] = v35;
      v22[1] = v36;
      return CoreUICallSend(v21, v22, 2LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB91E,
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
      (void *)0xB917,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
