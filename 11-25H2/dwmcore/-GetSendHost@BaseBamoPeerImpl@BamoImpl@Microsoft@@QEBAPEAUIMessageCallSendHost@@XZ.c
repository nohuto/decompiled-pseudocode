/*
 * XREFs of ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1802790B0
 * Callers:
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1801CF4C4 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18027B324 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18027C864 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x18027E134 (-UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z @ 0x180278068 (--0BufferingMessageCallHost@BamoImpl@Microsoft@@QEAA@PEAUIMessageCallSendHost@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IMessageCallSendHost *__fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  Microsoft::BamoImpl::BufferingMessageCallHost *v3; // rax
  const char *v4; // r9
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  if ( !*((_BYTE *)this + 48) )
    return *(struct IMessageCallSendHost **)(v1 + 72);
  v2 = *(_QWORD *)(v1 + 88);
  if ( !v2 )
  {
    v3 = (Microsoft::BamoImpl::BufferingMessageCallHost *)operator new(0x68uLL);
    if ( v3 )
      v3 = Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost(
             v3,
             *(struct IMessageCallSendHost **)(v1 + 72));
    v5 = *(_QWORD *)(v1 + 88);
    *(_QWORD *)(v1 + 88) = v3;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v2 = *(_QWORD *)(v1 + 88);
    if ( !v2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x296,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v4);
  }
  return (struct IMessageCallSendHost *)(v2 + 16);
}
