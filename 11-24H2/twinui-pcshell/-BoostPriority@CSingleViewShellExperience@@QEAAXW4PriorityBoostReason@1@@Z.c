/*
 * XREFs of ?BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x18003CE18
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x1800555D0 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800B3D8C (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x18003CCA4 (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ??$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x18003CFF0 (--$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHA.c)
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18003D1E4 (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800B4020 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     _lambda_1881f14c940759e6669602314532d756_::operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void____TP_TIMER__) @ 0x180680D54 (_lambda_1881f14c940759e6669602314532d756_--operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSingleViewShellExperience::BoostPriority(__int64 a1, int a2)
{
  int v3; // eax
  struct _TP_TIMER *v4; // rsi
  void (__stdcall *v5)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER); // rax
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v7; // rbp
  DWORD LastError; // ebx
  HSTRING v9; // rcx
  PCWSTR StringRawBuffer; // rax
  HSTRING v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h] BYREF
  PCWSTR v19; // [rsp+70h] [rbp+18h] BYREF
  PCWSTR v20; // [rsp+78h] [rbp+20h] BYREF

  v18 = a2;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_9;
    if ( (*(_BYTE *)(a1 + 132) & 0x20) != 0 )
      goto LABEL_9;
    if ( *(_BYTE *)(a1 + 140) )
      goto LABEL_9;
    *(_BYTE *)(a1 + 140) = 1;
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v3 >= 0 )
      goto LABEL_9;
    v13 = 1202LL;
LABEL_16:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v13,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_9;
  }
  CSingleViewShellExperience::BoostDiskIo((CSingleViewShellExperience *)a1);
  if ( !*(_BYTE *)(a1 + 141) )
  {
    v14 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 141) = 1;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 120LL))(v14, a1);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x47A,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v15);
  }
  v3 = CSingleViewShellExperience::EnsureUnboostCallback((CSingleViewShellExperience *)a1);
  if ( v3 < 0 )
  {
    v13 = 1149LL;
    goto LABEL_16;
  }
  v4 = *(struct _TP_TIMER **)(a1 + 144);
  pftDueTime = (struct _FILETIME)-300000000LL;
  if ( v4 )
    goto LABEL_8;
  v5 = (void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER))lambda_1881f14c940759e6669602314532d756_::operator_void____cdecl____TP_CALLBACK_INSTANCE___void____TP_TIMER___();
  ThreadpoolTimer = CreateThreadpoolTimer(v5, (PVOID)a1, 0LL);
  v7 = *(struct _TP_TIMER **)(a1 + 144);
  v4 = ThreadpoolTimer;
  if ( v7 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v7);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 144) = v4;
  if ( v4 )
LABEL_8:
    SetThreadpoolTimer(v4, &pftDueTime, 0, 0);
LABEL_9:
  v9 = *(HSTRING *)(a1 + 16);
  pftDueTime.dwLowDateTime = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v9, 0LL);
  v11 = *(HSTRING *)(a1 + 8);
  v19 = StringRawBuffer;
  v20 = WindowsGetStringRawBuffer(v11, 0LL);
  return SingleViewExperienceTelemetry::OnPriorityBoostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
           (unsigned int)&v20,
           (unsigned int)&v19,
           (unsigned int)&v18,
           (int)a1 + 141,
           (__int64)&pftDueTime,
           a1 + 140);
}
