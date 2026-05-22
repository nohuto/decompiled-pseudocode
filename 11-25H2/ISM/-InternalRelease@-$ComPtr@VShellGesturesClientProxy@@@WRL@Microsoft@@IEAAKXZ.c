/*
 * XREFs of ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079864
 * Callers:
 *     ??1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ @ 0x180079820 (--1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180088DB0 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18008D3FC (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??1?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18009A4D4 (--1-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A2C6C (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x1800A337C (--1DeviceInputHost@@UEAA@XZ.c)
 *     ??1InputObserverClientProxy@@UEAA@XZ @ 0x180135DCC (--1InputObserverClientProxy@@UEAA@XZ.c)
 *     ?OnDisconnected@InputObserverClientProxy@@UEAAJXZ @ 0x180135F60 (-OnDisconnected@InputObserverClientProxy@@UEAAJXZ.c)
 *     ??1EdgyControllerClientProxy@@UEAA@XZ @ 0x1801540C0 (--1EdgyControllerClientProxy@@UEAA@XZ.c)
 *     ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18015418C (-CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerC.c)
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x180154A50 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180157008 (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x18015A76C (-CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwrit.c)
 *     ?OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ @ 0x18015A8D0 (-OnDisconnected@ShellHandwritingClientProxy@@MEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801A05D8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 *     ??1Edge@@QEAA@XZ @ 0x1801A0654 (--1Edge@@QEAA@XZ.c)
 *     ??1EdgyConnection@@UEAA@XZ @ 0x1801A0684 (--1EdgyConnection@@UEAA@XZ.c)
 *     ?Initialize@EdgyConnection@@QEAAJXZ @ 0x1801A08B0 (-Initialize@EdgyConnection@@QEAAJXZ.c)
 *     ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801A1F3C (--4-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A2DFC (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A3078 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ??1ShellHandwritingProcessor@@UEAA@XZ @ 0x1801A77CC (--1ShellHandwritingProcessor@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ @ 0x1801A7F58 (-RuntimeClassInitialize@ShellHandwritingProcessor@@QEAAJXZ.c)
 *     _dynamic_atexit_destructor_for__MPCManager::s_instance__ @ 0x1801D23C0 (_dynamic_atexit_destructor_for__MPCManager--s_instance__.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
