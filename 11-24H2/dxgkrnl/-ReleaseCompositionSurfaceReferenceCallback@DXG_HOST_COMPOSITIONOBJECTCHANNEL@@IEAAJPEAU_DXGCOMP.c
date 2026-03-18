/*
 * XREFs of ?ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE@@PEAU_DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN@@@Z @ 0x1401B73E0
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401B6C90 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::ReleaseCompositionSurfaceReferenceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE *a2,
        struct _DXGCOMPOSITIONMESSAGE_RELEASECOMPOSITIONSURFACEREFERENCE_RETURN *a3)
{
  unsigned int v5; // ebx
  void *v6; // rax

  v5 = -1073741811;
  v6 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 64LL))(
                 *((_QWORD *)this + 1),
                 *((unsigned int *)a2 + 3),
                 17LL);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    v5 = 0;
  }
  else
  {
    WdLogSingleEntry2(3LL, *((unsigned int *)a2 + 3), -1073741811LL);
    WdLogGlobalForLineNumber = 332;
  }
  *((_DWORD *)a3 + 1) = v5;
  return v5;
}
