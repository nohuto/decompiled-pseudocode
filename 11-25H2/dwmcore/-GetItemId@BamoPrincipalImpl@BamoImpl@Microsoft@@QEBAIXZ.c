/*
 * XREFs of ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180279034
 * Callers:
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x180279FE8 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18027B324 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?SendMaterializeProxy@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18027B5E0 (-SendMaterializeProxy@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSend.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  unsigned int *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r10
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (unsigned int *)((char *)this + 24);
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v3 = *(_QWORD *)(v2 + 64);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, Microsoft::BamoImpl::BamoPrincipalImpl *, char *))(*(_QWORD *)v3 + 24LL))(
             v3,
             *(unsigned int *)(v2 + 28),
             this,
             (char *)this + 24);
      if ( v4 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x42B,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v4,
          v6);
    }
  }
  return *v1;
}
