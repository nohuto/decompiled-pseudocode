/*
 * XREFs of ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x1800971BC
 * Callers:
 *     ?OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z @ 0x1800AB03C (-OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z.c)
 *     ?StartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x1801257C0 (-StartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEBQEAVBamoAnimationTargetClientPri.c)
 *     ?OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x180140D10 (-OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePay.c)
 *     ?StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@Z @ 0x1801433B0 (-StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E86C (--_U@YAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ABBBC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2)
{
  void *result; // rax
  unsigned __int64 v3; // rdi
  void *v5; // rax
  const struct std::nothrow_t *v6; // rdx
  const char *v7; // r9
  void *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = 0LL;
  v3 = a2;
  if ( a2 )
  {
    if ( a2 > 0x100 )
      return operator new[](v3);
    result = (void *)*((_QWORD *)this + 16);
    if ( !result )
    {
      v5 = operator new[](0x100uLL);
      v8 = (void *)*((_QWORD *)this + 16);
      *((_QWORD *)this + 16) = v5;
      if ( v8 )
        operator delete(v8, v6);
      result = (void *)*((_QWORD *)this + 16);
      if ( !result )
        wil::details::in1diag3::_FailFast_NullAlloc(
          retaddr,
          (void *)0x55D,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v7);
    }
    if ( *((_BYTE *)this + 136) )
      return operator new[](v3);
    else
      *((_BYTE *)this + 136) = 1;
  }
  return result;
}
