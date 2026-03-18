/*
 * XREFs of ?SendMaterializeProxy@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18027B5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180279034 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v8; // rax
  int ItemId; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-58h]
  int v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 4);
  v4 = (__int64)a2 + 56;
  if ( *(_BYTE *)(v3 + 48) )
  {
    v8 = (__int64)a2 + 56;
    if ( !a2 )
      v8 = 72LL;
    *(_BYTE *)v8 = 1;
  }
  ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v18 = *(unsigned int *)(v3 + 36);
  v19 = *(unsigned int *)(v3 + 40);
  v10 = CoreUICallSend(a2, &v18, 2LL, 7LL, 2, &unk_18038ED05, ItemId, v16, v18);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E04,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v10,
      v14);
  v11 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E13,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v11,
      v14);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    if ( !a2 )
      v4 = 72LL;
    *(_BYTE *)v4 = 1;
  }
  v12 = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v18 = *(unsigned int *)(v3 + 36);
  v19 = *(unsigned int *)(v3 + 40);
  v13 = CoreUICallSend(a2, &v18, 2LL, 7LL, 5, &unk_18038ED05, v12, v17, v18);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E29,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v13,
      v15);
}
