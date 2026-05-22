/*
 * XREFs of ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18005A2D4
 * Callers:
 *     ?ClearPrincipalReady@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x1800B8608 (-ClearPrincipalReady@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z.c)
 *     ?MarkPrincipalReadyOnPropertiesRefreshed@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x1800B92C0 (-MarkPrincipalReadyOnPropertiesRefreshed@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct Microsoft::BamoImpl::BamoPrincipalImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2)
{
  _DWORD *v2; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // r8
  unsigned int v4; // r10d
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_DWORD *)*((_QWORD *)this + 24);
  v3 = this;
  while ( v2 != *((_DWORD **)this + 25) )
  {
    if ( *v2 == (_DWORD)a2 )
      return 0LL;
    ++v2;
  }
  v4 = *((_DWORD *)this + 7);
  v5 = 0LL;
  v10 = 0LL;
  if ( (_DWORD)a2 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)v3 + 8) + 56LL))(
           *((_QWORD *)v3 + 8),
           v4,
           (unsigned int)a2,
           &v10);
    a2 = 0x80000000LL;
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x492,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)v6,
        v8);
    v5 = v10;
  }
  if ( v5 )
    return (struct Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64, __int64, Microsoft::BamoImpl::BaseBamoConnectionImpl *))(*(_QWORD *)v5 + 40LL))(
                                                              v5,
                                                              a2,
                                                              v3);
  return 0LL;
}
