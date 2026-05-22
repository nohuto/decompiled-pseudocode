/*
 * XREFs of ?SendMaterializeProxy@BamoActivatableEntityPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800476C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?UpdateWindowIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180047DCC (-UpdateWindowIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2M.c)
 *     ?UpdateParentIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180047F64 (-UpdateParentIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2M.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800481DC (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180048218 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // r12
  int v7; // eax
  _BYTE *v8; // r14
  __int64 v9; // rcx
  struct IMessageCallSendHost *SendHost; // rdi
  __int64 v11; // rbx
  unsigned int ItemId; // eax
  int v13; // eax
  __int64 v14; // rcx
  struct IMessageCallSendHost *v15; // rax
  __int64 v16; // r8
  struct IMessageCallSendHost *v17; // rdi
  __int64 v18; // rcx
  unsigned int *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rcx
  struct IMessageCallSendHost *v24; // rax
  __int64 v25; // r8
  struct IMessageCallSendHost *v26; // rdi
  unsigned int *v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rcx
  unsigned int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-30h]
  __int64 v42; // [rsp+40h] [rbp-10h] BYREF
  __int64 v43; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v45; // [rsp+90h] [rbp+40h]

  v3 = *((_QWORD *)a3 + 4);
  if ( *(_BYTE *)(v3 + 48) )
  {
    v39 = (__int64)a2 + 56;
    if ( !a2 )
      v39 = 72LL;
    *(_BYTE *)v39 = 1;
  }
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v42 = *(unsigned int *)(v3 + 36);
  v43 = *(unsigned int *)(v3 + 40);
  LOWORD(v41) = 1;
  v7 = CoreUICallSend(a2, &v42, 2LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5CB0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v41);
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateWindowIdRemoteCache(this, a3);
  BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateParentIdRemoteCache(this, a3);
  v8 = (char *)a3 + 56;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 4) + 24LL) + 32LL);
    if ( *v8 && *(_QWORD *)(v9 + 64) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)a3 + 4));
      v11 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)a3 + 3));
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v42 = v11;
      v43 = ItemId;
      LOWORD(v41) = 2;
      v13 = CoreUICallSend(SendHost, &v42, 2LL);
      if ( v13 < 0 && v13 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x5E12,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v13,
          v41);
    }
    else
    {
      if ( v9 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          (struct Microsoft::BamoImpl::ConnectionIndirector **)v9,
          0x87B20805,
          0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v41);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 4) + 24LL) + 32LL);
    if ( *v8 && *(_QWORD *)(v14 + 64) )
    {
      v15 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)a3 + 4));
      v16 = *((_QWORD *)a3 + 3);
      v17 = v15;
      v18 = *((_QWORD *)a3 + 4);
      v19 = (unsigned int *)(v16 + 24);
      v20 = *(unsigned int *)(v18 + 36);
      v45 = *(_DWORD *)(v18 + 36);
      if ( !*(_DWORD *)(v16 + 24) && *(int *)(v16 + 8) > 0 )
      {
        v33 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 32LL);
        v34 = *(_QWORD *)(v33 + 64);
        if ( v34 )
        {
          v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v34 + 24LL))(
                  v34,
                  *(unsigned int *)(v33 + 28),
                  v16,
                  v16 + 24);
          if ( v35 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x42B,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v35,
              v41);
          v20 = v45;
        }
      }
      v21 = *v19;
      ++*((_DWORD *)a3 + 4);
      v43 = v21;
      *((_BYTE *)a3 + 60) = 1;
      v42 = v20;
      LOWORD(v41) = 3;
      v22 = CoreUICallSend(v17, &v42, 2LL);
      if ( (int)(v22 + 0x80000000) >= 0 && v22 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x5E48,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v22,
          v41);
    }
    else
    {
      if ( v14 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          (struct Microsoft::BamoImpl::ConnectionIndirector **)v14,
          0x87B20805,
          0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v41);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 4) + 24LL) + 32LL);
    if ( *v8 && *(_QWORD *)(v23 + 64) )
    {
      v24 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)a3 + 4));
      v25 = *((_QWORD *)a3 + 3);
      v26 = v24;
      v27 = (unsigned int *)(v25 + 24);
      v28 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      if ( !*(_DWORD *)(v25 + 24) && *(int *)(v25 + 8) > 0 )
      {
        v36 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 32LL);
        v37 = *(_QWORD *)(v36 + 64);
        if ( v37 )
        {
          v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v37 + 24LL))(
                  v37,
                  *(unsigned int *)(v36 + 28),
                  v25,
                  v25 + 24);
          if ( v38 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x42B,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v38,
              v41);
        }
      }
      v29 = *v27;
      ++*((_DWORD *)a3 + 4);
      v43 = v29;
      *((_BYTE *)a3 + 60) = 1;
      v42 = v28;
      LOWORD(v41) = 4;
      v30 = CoreUICallSend(v26, &v42, 2LL);
      if ( (int)(v30 + 0x80000000) >= 0 && v30 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x5E7E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v30,
          v41);
    }
    else
    {
      if ( v23 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          (struct Microsoft::BamoImpl::ConnectionIndirector **)v23,
          0x87B20805,
          0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v41);
    }
  }
  v31 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v31 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5CBF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v31,
      v41);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    v40 = (__int64)a2 + 56;
    if ( !a2 )
      v40 = 72LL;
    *(_BYTE *)v40 = 1;
  }
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v42 = *(unsigned int *)(v3 + 36);
  v43 = *(unsigned int *)(v3 + 40);
  LOWORD(v41) = 81;
  v32 = CoreUICallSend(a2, &v42, 2LL);
  if ( v32 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5CD5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v32,
      v41);
}
