/*
 * XREFs of ??1CInteraction@@MEAA@XZ @ 0x180095454
 * Callers:
 *     ??_GCInteraction@@MEAAPEAXI@Z @ 0x180095840 (--_GCInteraction@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x180094BF0 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x18009561C (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800956C8 (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800956F8 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x180095764 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180096750 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?Find@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEBAHAEBQEAVCInteraction@@@Z @ 0x18020B5A8 (-Find@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEBAHAEBQEAVCInterac.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x18020D97C (McTemplateU0xxq_EventWriteTransfer.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteraction::~CInteraction(CInteraction *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r8d
  CInteraction *v11; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CInteraction::`vftable'{for `CResource'};
  v2 = (_DWORD *)((char *)this + 1720);
  *((_QWORD *)this + 9) = &CInteraction::`vftable'{for `IInteractionResource'};
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0xxq_EventWriteTransfer(
      (_DWORD)this,
      (unsigned int)&INTERACTION_DESTROYED,
      (_DWORD)this,
      (_DWORD)this,
      *v2);
  v3 = *((_QWORD *)this + 216);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, 0LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 1728);
  }
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  memset_0((char *)qword_1803F9258 + (unsigned int)(Size * *v2), 0, (unsigned int)Size);
  *v2 = 0;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  ReleaseInterface<CWeakReference<CVisual>>((CResourceWeakRef **)this + 15, v4, v5);
  SAFE_DELETE<CInputSinkStruct>((char *)this + 112);
  if ( (*((_BYTE *)this + 201) & 2) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  if ( CInteraction::IsDefaultInteractionStateLocked(this) )
  {
    v11 = this;
    v9 = CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Find(v6, &v11);
    if ( v9 >= 0 )
    {
      v10 = dword_1803FA900;
      if ( v9 + 1 <= dword_1803FA900 )
      {
        if ( v9 + 1 != dword_1803FA900 )
        {
          memmove_0(
            (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * v9,
            (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * v9 + 8,
            8LL * (dword_1803FA900 - v9 - 1));
          v10 = dword_1803FA900;
        }
        dword_1803FA900 = v10 - 1;
      }
    }
  }
  if ( *((_QWORD *)this + 28) || *((_QWORD *)this + 31) || *((_QWORD *)this + 30) || *((_QWORD *)this + 29) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 1728);
  CInteractionProcessor::~CInteractionProcessor((CInteraction *)((char *)this + 360));
  v7 = *((_QWORD *)this + 36);
  if ( v7 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 16LL))(v7 + 8);
  }
  v8 = *((_QWORD *)this + 35);
  if ( v8 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 26);
  CResource::~CResource(this);
}
