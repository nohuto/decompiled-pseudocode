/*
 * XREFs of ?UpdateEnabledRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18005B0BC
 * Callers:
 *     ?PushStateToProxy@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18005B08C (-PushStateToProxy@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800ACF50 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCache(
        BamoImpl::BamoControllerNavigationManagerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v3; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned int *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v14; // rax
  int v15; // [rsp+20h] [rbp-48h]
  _QWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v3 = *((_QWORD *)a2 + 4);
    v4 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v3 + 24) + 32LL);
    if ( *((_BYTE *)a2 + 56) && *((_QWORD *)v4 + 8) )
    {
      if ( *(_BYTE *)(v3 + 48) )
      {
        v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v4);
        v5 = ((unsigned __int64)v14 + 16) & -(__int64)(v14 != 0LL);
      }
      else
      {
        v5 = *((_QWORD *)v4 + 9);
      }
      v6 = *((_QWORD *)a2 + 3);
      v7 = (unsigned int *)(v6 + 24);
      v8 = *(unsigned int *)(*((_QWORD *)a2 + 4) + 36LL);
      if ( !*(_DWORD *)(v6 + 24) && *(int *)(v6 + 8) > 0 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 32LL);
        v12 = *(_QWORD *)(v11 + 64);
        if ( v12 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v12 + 24LL))(
                  v12,
                  *(unsigned int *)(v11 + 28),
                  v6,
                  v6 + 24);
          if ( v13 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x42B,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v13,
              v15);
        }
      }
      v9 = *v7;
      ++*((_DWORD *)a2 + 4);
      *((_BYTE *)a2 + 60) = 1;
      v16[1] = v9;
      LOWORD(v15) = 0;
      v16[0] = v8;
      v10 = CoreUICallSend(v5, v16, 2LL);
      if ( (int)(v10 + 0x80000000) >= 0 && v10 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x9C58,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v10,
          v15);
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
        v15);
    }
  }
}
