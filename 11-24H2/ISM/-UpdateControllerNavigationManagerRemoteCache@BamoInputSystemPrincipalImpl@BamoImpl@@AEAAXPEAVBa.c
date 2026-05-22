/*
 * XREFs of ?UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800470AC
 * Callers:
 *     ?PushStateToProxy@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180047C1C (-PushStateToProxy@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z.c)
 *     ?UpdateControllerNavigationManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012EC2C (-UpdateControllerNavigationManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPE.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x180044C6C (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180044CA8 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x180045B8C (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  struct Microsoft::Bamo::BamoPrincipal *v3; // rcx
  __int64 v4; // rcx
  struct IMessageCallSendHost *SendHost; // rdi
  __int64 v6; // rbx
  unsigned int ItemId; // eax
  unsigned int v8; // eax
  int v9; // [rsp+20h] [rbp-38h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v3 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 6);
    if ( v3 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v3,
        *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 4) + 16LL));
    v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL) + 32LL);
    if ( *((_BYTE *)a2 + 56) && *(_QWORD *)(v4 + 64) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)a2 + 4));
      v6 = *(unsigned int *)(*((_QWORD *)a2 + 4) + 36LL);
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)a2 + 3));
      ++*((_DWORD *)a2 + 4);
      *((_BYTE *)a2 + 60) = 1;
      v10[1] = ItemId;
      LOWORD(v9) = 1;
      v10[0] = v6;
      v8 = CoreUICallSend(SendHost, v10, 2LL);
      if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x39D2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v8,
          v9);
    }
    else
    {
      if ( v4 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          (struct Microsoft::BamoImpl::ConnectionIndirector **)v4,
          0x87B20805,
          0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v9);
    }
  }
}
