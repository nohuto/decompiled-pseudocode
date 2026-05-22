/*
 * XREFs of ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18006268C
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180062640 (-OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCallProlog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x1800AC40C (-OnCallProlog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::BamoImpl::CalloutWrapperObject *__fastcall Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        Microsoft::BamoImpl::CalloutWrapperObject *a1,
        __int64 a2)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  if ( a2 && *(_DWORD *)(a2 + 184) == GetCurrentThreadId() && !*(_DWORD *)(a2 + 188) )
  {
    *(_QWORD *)a1 = a2;
    if ( *(_DWORD *)(a2 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x9A3,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v4);
    *(_DWORD *)(a2 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 16) + 32LL))(*(_QWORD *)(a2 + 16));
  }
  if ( *((_QWORD *)a1 + 1) )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallProlog(a1);
  return a1;
}
