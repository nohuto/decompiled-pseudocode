/*
 * XREFs of ?RemoteRemove@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z @ 0x18004862C
 * Callers:
 *     ?CallRemoteRemoveOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@I@Z @ 0x1800485DC (-CallRemoteRemoveOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bam.c)
 *     ?RemoteRemove@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z @ 0x1800AF7B0 (-RemoteRemove@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UE.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800481DC (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180048218 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?LogSendRemoteRemove@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXI@Z @ 0x18008AE54 (-LogSendRemoteRemove@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Li.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_StubImpl::RemoteRemove(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_StubImpl *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  struct IMessageCallSendHost *SendHost; // rsi
  __int64 v9; // rdi
  __int64 ItemId; // rbx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-48h]
  _QWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = *((_QWORD *)this + 4);
  if ( *(_DWORD *)(v6 + 44) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA7CA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( *((_BYTE *)this + 56) )
  {
    v7 = *(_QWORD *)(v6 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 32) + 64LL) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v6);
      v9 = *(unsigned int *)(*((_QWORD *)this + 4) + 36LL);
      ItemId = (unsigned int)Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)this
                                                                               + 3));
      ++*((_DWORD *)this + 4);
      *((_BYTE *)this + 60) = 1;
      Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_StubImpl::LogSendRemoteRemove(
        this,
        a2);
      v16[0] = v9;
      v16[1] = ItemId;
      return CoreUICallSend(SendHost, v16, 2LL);
    }
    v13 = -2018375675;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v7 + 32),
      0x87B20805,
      0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x181,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      (const char *)0x87B20805LL,
      v15);
    v14 = 42970LL;
  }
  else
  {
    v12 = *((_QWORD *)this + 3);
    v13 = -2018375660;
    if ( v12 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v12 + 16) + 32LL),
        0x87B20814,
        0);
    v14 = 42963LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
    (const char *)v13,
    v15);
  return v13;
}
