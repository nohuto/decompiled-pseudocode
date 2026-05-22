/*
 * XREFs of ?UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180046170
 * Callers:
 *     ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180046090 (-SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800AE450 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoControllerNavigationManagerPrincipalImpl *a2)
{
  __int64 v2; // r9
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned int *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v15; // rax
  int v16; // [rsp+20h] [rbp-48h]
  _QWORD v17[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *((_QWORD *)a1 + 4);
  if ( !*(_DWORD *)(v2 + 44) && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 32LL) + 64LL) )
  {
    v4 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v2 + 24) + 32LL);
    if ( *((_BYTE *)a1 + 56) && *((_QWORD *)v4 + 8) )
    {
      if ( *(_BYTE *)(v2 + 48) )
      {
        v15 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v4);
        v5 = ((unsigned __int64)v15 + 16) & -(__int64)(v15 != 0LL);
      }
      else
      {
        v5 = *((_QWORD *)v4 + 9);
      }
      v6 = *((_QWORD *)a1 + 3);
      v7 = (unsigned int *)(v6 + 24);
      v8 = *(unsigned int *)(*((_QWORD *)a1 + 4) + 36LL);
      if ( !*(_DWORD *)(v6 + 24) && *(int *)(v6 + 8) > 0 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 32LL);
        v13 = *(_QWORD *)(v12 + 64);
        if ( v13 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v13 + 24LL))(
                  v13,
                  *(unsigned int *)(v12 + 28),
                  v6,
                  v6 + 24);
          if ( v14 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x42B,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v14,
              v16);
        }
      }
      v9 = *v7;
      ++*((_DWORD *)a1 + 4);
      *((_BYTE *)a1 + 60) = 1;
      v17[1] = v9;
      LOWORD(v16) = 0;
      v17[0] = v8;
      v10 = CoreUICallSend(v5, v17, 2LL);
      if ( (int)(v10 + 0x80000000) >= 0 && v10 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x9272,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v10,
          v16);
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
        v16);
    }
  }
  return 0LL;
}
