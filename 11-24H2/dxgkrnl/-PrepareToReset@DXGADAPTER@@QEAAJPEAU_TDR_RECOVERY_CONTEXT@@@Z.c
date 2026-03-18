/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140193794
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140195458 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D01F0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x140034740 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x140036D88 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     TdrBugcheckOnTimeout @ 0x140186C5C (TdrBugcheckOnTimeout.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A7A78 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DXGADAPTER::PrepareToReset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // r15
  ULONG IsResourceAcquiredSharedLite; // eax
  ULONG v6; // ebp
  unsigned int v7; // edi
  int v9; // eax
  char v10; // [rsp+80h] [rbp+8h] BYREF
  char v11; // [rsp+81h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+88h] [rbp+10h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8725;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pTdrContext", 8725LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 391) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8730;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pRenderCore != NULL", 8730LL, 0LL, 0LL, 0LL, 0LL);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 391) + 760LL) + 8LL) + 96LL))(*(_QWORD *)(*((_QWORD *)this + 391) + 768LL));
  if ( !KeResetEvent((PRKEVENT)((char *)this + 256)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8754;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"OldDdiAccess != 0", 8754LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v10);
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 35));
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 35));
  v6 = IsResourceAcquiredSharedLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    if ( IsResourceAcquiredSharedLite )
      ExReleaseResourceLite(*((PERESOURCE *)this + 35));
    v7 = 0;
    while ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 35), 0) )
    {
      if ( v7 >= dword_140160A18 )
      {
        KeSetEvent((PRKEVENT)((char *)this + 256), 0, 0);
        DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v10);
        return 3221225653LL;
      }
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      ++v7;
    }
    *((_DWORD *)a2 + 699) = v7;
  }
  v9 = ADAPTER_RENDER::DdiResetFromTimeout(*((ADAPTER_RENDER **)this + 391));
  if ( v9 < 0 )
  {
    *((_QWORD *)a2 + 13) = *((_QWORD *)this + 72);
    TdrBugcheckOnTimeout(a2, v9, 3);
  }
  *((_BYTE *)this + 3054) = 1;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 35));
    if ( v6 )
      ExAcquireResourceSharedLite(*((PERESOURCE *)this + 35), 1u);
  }
  KeSetEvent((PRKEVENT)((char *)this + 256), 0, 0);
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v10);
  return 0LL;
}
