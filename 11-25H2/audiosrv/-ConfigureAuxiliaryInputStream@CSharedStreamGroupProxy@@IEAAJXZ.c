/*
 * XREFs of ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1800A6330
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUIAudioModeEffectsWatcher@@@Z @ 0x180059270 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterForAudioRenderEndpointChangeNotifications@CAudioResourceManager@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x1800A3600 (-RegisterForAudioRenderEndpointChangeNotifications@CAudioResourceManager@@UEAAJAEAVWeakRef@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG_N@Z @ 0x1800B86FC (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800EDC88 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ??1?$unique_ptr@UAuxiliaryInputDescriptor@@U?$default_delete@UAuxiliaryInputDescriptor@@@std@@@std@@QEAA@XZ @ 0x1800EEE10 (--1-$unique_ptr@UAuxiliaryInputDescriptor@@U-$default_delete@UAuxiliaryInputDescriptor@@@std@@@s.c)
 *     ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x1800F14B0 (-GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSharedStreamGroupProxy::ConfigureAuxiliaryInputStream(CSharedStreamGroupProxy *this)
{
  union _RTL_RUN_ONCE *v3; // rcx
  struct AuxiliaryInputDescriptor *v4; // rbx
  int AuxiliaryInputDescriptor; // eax
  CAudioResourceManager *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  struct AuxiliaryInputDescriptor *v12; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_QWORD *)this + 37) )
    return 0LL;
  if ( g_AudioResourceManager )
    v3 = (union _RTL_RUN_ONCE *)((char *)g_AudioResourceManager - 8);
  else
    v3 = 0LL;
  CAudioResourceManager::RegisterForAudioRenderEndpointChangeNotifications(
    v3 + 4,
    (CSharedStreamGroupProxy *)((char *)this + 360));
  v4 = (struct AuxiliaryInputDescriptor *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  v12 = v4;
  AuxiliaryInputDescriptor = CSharedStreamGroupProxy::GetAuxiliaryInputDescriptor(
                               (CSharedStreamGroupProxy *)((char *)this + 8),
                               v4);
  if ( AuxiliaryInputDescriptor < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x40D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)AuxiliaryInputDescriptor,
      v9);
LABEL_17:
    v8 = 0;
    goto LABEL_18;
  }
  if ( *(_DWORD *)v4 != 1 )
    goto LABEL_17;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>(&v11, this);
  v6 = g_AudioResourceManager;
  if ( g_AudioResourceManager )
    v6 = (struct IAudioResourceManager *)((char *)g_AudioResourceManager - 8);
  v7 = CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x411,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
LABEL_18:
  std::unique_ptr<AuxiliaryInputDescriptor>::~unique_ptr<AuxiliaryInputDescriptor>(&v12);
  return v8;
}
