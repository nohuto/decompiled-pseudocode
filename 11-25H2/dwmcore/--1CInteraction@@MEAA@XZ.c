/*
 * XREFs of ??1CInteraction@@MEAA@XZ @ 0x18013A3D8
 * Callers:
 *     ??_GCInteraction@@MEAAPEAXI@Z @ 0x18013A7C0 (--_GCInteraction@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1801396C0 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x18013A5A0 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x18013A64C (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x18013A67C (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x18013A6E8 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?Find@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEBAHAEBQEAVCInteraction@@@Z @ 0x180217698 (-Find@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEBAHAEBQEAVCInterac.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x180219A0C (McTemplateU0xxq_EventWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18023B330 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteraction::~CInteraction(CInteraction *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  CInteraction *v14; // [rsp+40h] [rbp+8h] BYREF

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
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 1728, v10, v11, v12);
  }
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  memset_0((char *)qword_180405258 + (unsigned int)(Size * *v2), 0, (unsigned int)Size);
  *v2 = 0;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  ReleaseInterface<CWeakReference<CVisual>>((CResourceWeakRef **)this + 15);
  SAFE_DELETE<CInputSinkStruct>((char *)this + 112);
  if ( (*((_BYTE *)this + 201) & 2) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  if ( CInteraction::IsDefaultInteractionStateLocked(this) )
  {
    v14 = this;
    v13 = CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Find(v5, &v14);
    if ( v13 >= 0 )
    {
      v6 = (unsigned int)dword_180406960;
      if ( v13 + 1 <= dword_180406960 )
      {
        if ( v13 + 1 != dword_180406960 )
        {
          memmove_0(
            (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * v13,
            (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * v13 + 8,
            8LL * (dword_180406960 - v13 - 1));
          LODWORD(v6) = dword_180406960;
        }
        v6 = (unsigned int)(v6 - 1);
        dword_180406960 = v6;
      }
    }
  }
  if ( *((_QWORD *)this + 28) || *((_QWORD *)this + 31) || *((_QWORD *)this + 30) || *((_QWORD *)this + 29) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 1728, v4, v6, v7);
  CInteractionProcessor::~CInteractionProcessor((CInteraction *)((char *)this + 360));
  v8 = *((_QWORD *)this + 36);
  if ( v8 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  }
  v9 = *((_QWORD *)this + 35);
  if ( v9 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 26);
  CResource::~CResource(this);
}
