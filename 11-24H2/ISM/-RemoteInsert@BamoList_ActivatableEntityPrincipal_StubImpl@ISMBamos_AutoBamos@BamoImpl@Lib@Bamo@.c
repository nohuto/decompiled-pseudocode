/*
 * XREFs of ?RemoteInsert@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800438F4
 * Callers:
 *     ?CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180042230 (-CallRemoteInsertOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bam.c)
 *     ?RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180042480 (-RemoteInsert@BamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UE.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x180044C6C (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180044CA8 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180044D3C (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?LogSendRemoteInsert@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXII@Z @ 0x18008B2A0 (-LogSendRemoteInsert@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Li.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_StubImpl::RemoteInsert(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_StubImpl *this,
        unsigned int a2,
        struct BamoActivatableEntityPrincipal *a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoPrincipalImpl *v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rcx
  struct IMessageCallSendHost *SendHost; // rsi
  __int64 v10; // rdi
  unsigned int ItemId; // eax
  __int64 v12; // rbx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-48h]
  _QWORD v18[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB480,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      a4);
  if ( *((_BYTE *)this + 56) )
  {
    if ( a3 )
    {
      v6 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoActivatableEntityPrincipal *))(*(_QWORD *)a3 + 32LL))(a3);
      v7 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
             v6,
             *((struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 4));
    }
    else
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
    if ( *((_BYTE *)this + 56) && *(_QWORD *)(v8 + 64) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 4));
      v10 = *(unsigned int *)(*((_QWORD *)this + 4) + 36LL);
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)this + 3));
      ++*((_DWORD *)this + 4);
      v12 = ItemId;
      *((_BYTE *)this + 60) = 1;
      Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_StubImpl::LogSendRemoteInsert(
        this,
        a2,
        v7);
      v18[0] = v10;
      v18[1] = v12;
      return CoreUICallSend(SendHost, v18, 2LL);
    }
    v15 = -2018375675;
    if ( v8 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        (struct Microsoft::BamoImpl::ConnectionIndirector **)v8,
        0x87B20805,
        0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x181,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      (const char *)0x87B20805LL,
      v17);
    v16 = 46225LL;
  }
  else
  {
    v14 = *((_QWORD *)this + 3);
    v15 = -2018375660;
    if ( v14 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v14 + 16) + 32LL),
        0x87B20814,
        0);
    v16 = 46217LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
    (const char *)v15,
    v17);
  return v15;
}
