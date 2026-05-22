/*
 * XREFs of ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079504
 * Callers:
 *     ??1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ @ 0x1800794C0 (--1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180089560 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18008DB6C (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??1?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18009A66C (--1-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A303C (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x1800A374C (--1DeviceInputHost@@UEAA@XZ.c)
 *     ??1InputObserverClientProxy@@UEAA@XZ @ 0x180137F9C (--1InputObserverClientProxy@@UEAA@XZ.c)
 *     ?OnDisconnected@InputObserverClientProxy@@UEAAJXZ @ 0x180138130 (-OnDisconnected@InputObserverClientProxy@@UEAAJXZ.c)
 *     ??1EdgyControllerClientProxy@@UEAA@XZ @ 0x180156290 (--1EdgyControllerClientProxy@@UEAA@XZ.c)
 *     ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18015635C (-CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerC.c)
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x180156C20 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801591D8 (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x18015B59C (-CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwrit.c)
 *     ?OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ @ 0x18015B700 (-OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801A7BE8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801A7C64 (--1Edge@@QEAA@XZ.c)
 *     ??1EdgyConnection@@UEAA@XZ @ 0x1801A7C94 (--1EdgyConnection@@UEAA@XZ.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x1801A7EC0 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801A954C (--4-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AA40C (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AA688 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ??1ShellHandwritingProcessor@@UEAA@XZ @ 0x1801AED8C (--1ShellHandwritingProcessor@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x1801AF4F0 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 *     _dynamic_atexit_destructor_for__MPCManager::s_instance__ @ 0x1801D9E70 (_dynamic_atexit_destructor_for__MPCManager--s_instance__.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 8LL))(v2 + 16);
  }
  return result;
}
