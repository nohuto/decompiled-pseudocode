/*
 * XREFs of ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800FEF74
 * Callers:
 *     ?InitializeMmcssTask@CGlobalMit@@MEAAJXZ @ 0x1800FE070 (-InitializeMmcssTask@CGlobalMit@@MEAAJXZ.c)
 *     ?InitializeMMCSSTask@CGlobalManipulationManager@@EEAAJXZ @ 0x1800FE190 (-InitializeMMCSSTask@CGlobalManipulationManager@@EEAAJXZ.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1800FEACC (-Partition_SetCurrentMmTask@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagM.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800FF984 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x18022F810 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800FDC68 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800FDCC8 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800FE280 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x1800FFD44 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CMmcssTask::Set(struct _RTL_CRITICAL_SECTION *this, const struct DWM_MMTASK *a2, char a3)
{
  const struct DWM_MMTASK *v4; // rdi
  struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // rax
  int v8; // esi
  int v9; // r9d
  unsigned int v10; // eax
  _DWORD *p_Type; // rcx
  int Runtime; // eax

  v4 = 0LL;
  EnterCriticalSection(this);
  if ( a2 && *(_WORD *)a2 )
    v4 = a2;
  if ( CMmcssTask::AreEqualMmTask(&this[1].DebugInfo->Type, (LPCWCH)v4) )
    goto LABEL_17;
  if ( this[1].DebugInfo )
    CMmcssTask::Revert(this);
  if ( !v4 )
  {
    p_Type = &this[1].DebugInfo->Type;
    goto LABEL_16;
  }
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo )
    goto LABEL_9;
  Runtime = CMmcssTask::LoadRuntime((CMmcssTask *)this);
  v8 = Runtime;
  if ( Runtime >= 0 )
  {
    DebugInfo = (struct _RTL_CRITICAL_SECTION_DEBUG *)operator new(0x90uLL);
    this[1].DebugInfo = DebugInfo;
    if ( DebugInfo )
    {
LABEL_9:
      *(_OWORD *)&DebugInfo->Type = *(_OWORD *)v4;
      DebugInfo->ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v4 + 1);
      *(_OWORD *)&DebugInfo->EntryCount = *((_OWORD *)v4 + 2);
      *(_OWORD *)&DebugInfo[1].Type = *((_OWORD *)v4 + 3);
      DebugInfo[1].ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v4 + 4);
      *(_OWORD *)&DebugInfo[1].EntryCount = *((_OWORD *)v4 + 5);
      *(_OWORD *)&DebugInfo[2].Type = *((_OWORD *)v4 + 6);
      DebugInfo[2].ProcessLocksList = (LIST_ENTRY)*((_OWORD *)v4 + 7);
      *(_OWORD *)&DebugInfo[2].EntryCount = *((_OWORD *)v4 + 8);
      *(_QWORD *)&this[1].DebugInfo[2].Flags = 0LL;
      if ( !a3 )
        goto LABEL_17;
      v8 = CMmcssTask::Apply(this, 0);
      v9 = v8;
      if ( v8 >= 0 )
        goto LABEL_17;
      v10 = 204;
      goto LABEL_12;
    }
    v8 = -2147024882;
    v10 = 192;
    v9 = -2147024882;
  }
  else
  {
    v9 = Runtime;
    v10 = 188;
  }
LABEL_12:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v10, 0LL);
  p_Type = &this[1].DebugInfo->Type;
  if ( p_Type )
  {
    if ( v8 == -2147023096 )
    {
      p_Type[33] = 0;
      goto LABEL_17;
    }
LABEL_16:
    operator delete(p_Type, 0x90uLL);
    this[1].DebugInfo = 0LL;
  }
LABEL_17:
  LeaveCriticalSection(this);
  return 0LL;
}
