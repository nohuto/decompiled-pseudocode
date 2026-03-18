/*
 * XREFs of rimFreeSpecificDevFinal @ 0x14017A888
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1400C6E18 (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMFreeSpecificDev @ 0x1401D1E88 (RIMFreeSpecificDev.c)
 *     RIMFreeSpecificDevOnCreateFailure @ 0x1401D1F64 (RIMFreeSpecificDevOnCreateFailure.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimDereferenceDev @ 0x140133C98 (rimDereferenceDev.c)
 *     RIMRemoveHoldingFrame @ 0x140151764 (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

LONG_PTR __fastcall rimFreeSpecificDevFinal(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 UserSessionState; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(a2 + 168) & 0x40000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 810LL);
  }
  v4 = (_QWORD *)(a2 + 88);
  v5 = *(_QWORD *)(a2 + 88);
  if ( v5 != a2 + 88 )
  {
    if ( *(_QWORD **)(v5 + 8) != v4 || (v6 = *(_QWORD **)(a2 + 96), (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)(a2 + 96) = a2 + 88;
    *v4 = v4;
  }
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v5);
    RIMLockExclusive(UserSessionState + 56);
    *(_DWORD *)(a2 + 184) |= 4u;
    v9 = W32GetUserSessionState(v8);
    RIMUnlockExclusive(v9 + 56);
  }
  if ( *(_DWORD *)(a2 + 48) == 2 )
    RIMRemoveHoldingFrame(a1, a2);
  return rimDereferenceDev(a2);
}
