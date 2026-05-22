/*
 * XREFs of ?SetMPCConstantManagerClient@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoMPCConstantManagerClientPrincipal@@@Z @ 0x18000ED28
 * Callers:
 *     ?SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrincipal@@@Z @ 0x18000ECE0 (-SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrinc.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateMPCConstantManagerClientRemoteCacheStatic@BamoMPCManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B91D8 (-UpdateMPCConstantManagerClientRemoteCacheStatic@BamoMPCManagerPrincipalImpl@BamoImpl@@CAJPEAVBa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::SetMPCConstantManagerClient(
        BamoImpl::BamoMPCManagerPrincipalImpl *this,
        struct BamoMPCConstantManagerClientPrincipal *a2)
{
  __int64 v3; // rbx
  __int64 i; // rbx
  int updated; // eax
  unsigned int v6; // esi
  int v7; // [rsp+20h] [rbp-8h]
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoMPCConstantManagerClientPrincipal *))a2)(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoMPCManagerPrincipalImpl::UpdateMPCConstantManagerClientRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  this);
      v6 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated,
          v7);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2920,
          (unsigned int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64"
                        "\\MPCManagerBamo.MPCManagerBamo.bamo.h",
          (const char *)v6,
          v8);
      }
    }
  }
}
