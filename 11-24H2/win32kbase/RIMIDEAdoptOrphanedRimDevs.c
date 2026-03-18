/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x1401D3130
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14014F6E0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401272F8 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMRemoveHoldingFrame @ 0x140151764 (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_RIMAdoptionBugcheck__private_IsEnabledDeviceUsageNoInline @ 0x1401D30DC (Feature_RIMAdoptionBugcheck__private_IsEnabledDeviceUsageNoInline.c)
 *     RIMIDEIsCompatibleDevice @ 0x1401E6BC4 (RIMIDEIsCompatibleDevice.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  _QWORD **v5; // r15
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  PVOID **v8; // rdi
  _QWORD *v9; // rdi
  int v10; // r8d
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rsi
  PVOID ***v14; // r12
  _QWORD *v15; // rbx
  __int64 *v16; // r13
  const struct RIMDEV *v17; // r15
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 *v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // rdx
  PVOID *v28; // r8
  _QWORD *v29; // rax
  _QWORD *result; // rax
  _QWORD *v31; // [rsp+28h] [rbp-18h] BYREF
  _QWORD **v32; // [rsp+30h] [rbp-10h]

  UserSessionState = W32GetUserSessionState(Object);
  RIMLockExclusive(UserSessionState + 56);
  v5 = (_QWORD **)(W32GetUserSessionState(v3) + 136);
  v6 = *v5;
  v32 = &v31;
  v31 = &v31;
  while ( v6 != v5 )
  {
    v7 = (unsigned __int64)(v6 + 7) & -(__int64)(v6 != (_QWORD *)16);
    v8 = *(PVOID ***)(v7 + 0x140);
    if ( !(unsigned int)Feature_RIMAdoptionBugcheck__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_BYTE *)(*(_QWORD *)(((unsigned __int64)(v6 + 7) & -(__int64)(v6 != (_QWORD *)16)) + 0x20) + 11LL) )
        goto LABEL_28;
      if ( !v8 )
        goto LABEL_28;
      if ( !*((_BYTE *)v8 + 81) )
        goto LABEL_28;
      v4 = (_QWORD *)*(unsigned int *)(((unsigned __int64)(v6 + 7) & -(__int64)(v6 != (_QWORD *)16)) + 0xA8);
      if ( ((unsigned __int16)v4 & 0x2000) == 0
        || (*(_DWORD *)(((unsigned __int64)(v6 + 7) & -(__int64)(v6 != (_QWORD *)16)) + 0xB8) & 4) != 0
        && ((unsigned int)v4 & 0x40000000) == 0 )
      {
        goto LABEL_28;
      }
      if ( v8 == Object )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 882);
      if ( !(unsigned int)RIMIDEIsCompatibleDevice(Object, (unsigned __int64)(v6 + 7) & -(__int64)(v6 != (_QWORD *)16)) )
        goto LABEL_28;
      v9 = (_QWORD *)(v7 + 104);
      if ( (_QWORD *)*v9 == v9 )
        goto LABEL_26;
      v10 = 888;
      goto LABEL_25;
    }
    if ( !v8 )
      goto LABEL_28;
    if ( *(_BYTE *)(*(_QWORD *)(((unsigned __int64)(v6 + 7) & -(__int64)(v6 != (_QWORD *)16)) + 0x20) + 11LL) )
      goto LABEL_28;
    if ( !*((_BYTE *)v8 + 81) )
      goto LABEL_28;
    v4 = (_QWORD *)*(unsigned int *)(((unsigned __int64)(v6 + 7) & -(__int64)(v6 != (_QWORD *)16)) + 0xA8);
    if ( ((unsigned __int16)v4 & 0x2000) == 0
      || (*(_DWORD *)(((unsigned __int64)(v6 + 7) & -(__int64)(v6 != (_QWORD *)16)) + 0xB8) & 4) != 0
      && ((unsigned int)v4 & 0x40000000) == 0 )
    {
      goto LABEL_28;
    }
    if ( v8 == Object )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 858);
    if ( !(unsigned int)RIMIDEIsCompatibleDevice(Object, (unsigned __int64)(v6 + 7) & -(__int64)(v6 != (_QWORD *)16)) )
      goto LABEL_28;
    v9 = (_QWORD *)(v7 + 104);
    if ( (_QWORD *)*v9 != v9 )
    {
      v10 = 864;
LABEL_25:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v10);
    }
LABEL_26:
    v11 = v32;
    if ( *v32 != &v31 )
LABEL_63:
      __fastfail(3u);
    v4 = &v31;
    *v9 = &v31;
    v9[1] = v11;
    *v11 = v9;
    v32 = (_QWORD **)v9;
    *(_DWORD *)(v7 + 184) |= 0x10u;
LABEL_28:
    v6 = (_QWORD *)*v6;
  }
  v12 = W32GetUserSessionState(v4);
  RIMUnlockExclusive(v12 + 56);
  v13 = v31;
  while ( 1 )
  {
    result = &v31;
    if ( v13 == &v31 )
      return result;
    v14 = (PVOID ***)(v13 + 27);
    v15 = v13;
    v16 = (__int64 *)v13[27];
    v17 = (const struct RIMDEV *)(v13 - 13);
    RIMLockExclusive((__int64)(v16 + 13));
    v18 = (_QWORD *)*v13;
    v13 = v18;
    if ( (_QWORD *)v18[1] != v15 )
      goto LABEL_63;
    v19 = (_QWORD *)v15[1];
    if ( (_QWORD *)*v19 != v15 )
      goto LABEL_63;
    *v19 = v18;
    v20 = v16 + 53;
    v18[1] = v19;
    v15[1] = v15;
    *v15 = v15;
    while ( 1 )
    {
      v21 = *v20;
      if ( !*v20 )
        break;
      if ( (const struct RIMDEV *)v21 == v17 )
      {
        if ( v15[16] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 918);
        *v20 = *(v15 - 8);
        break;
      }
      v20 = (__int64 *)(v21 + 40);
    }
    if ( (v15[8] & 0x200) != 0 )
    {
      v22 = v15 - 2;
      if ( (_QWORD *)*v22 == v22 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 927);
      v23 = (_QWORD *)*v22;
      if ( *(_QWORD **)(*v22 + 8LL) != v22 )
        goto LABEL_63;
      v24 = (_QWORD *)v22[1];
      if ( (_QWORD *)*v24 != v22 )
        goto LABEL_63;
      *v24 = v23;
      v23[1] = v24;
      v22[1] = v22;
      *v22 = v22;
      *((_DWORD *)v15 + 16) &= ~0x200u;
      InputTraceLogging::RIM::ResumeDevice(v17);
    }
    if ( (*((_DWORD *)v15 + 20) & 0x80u) != 0 )
    {
      v25 = (_QWORD *)(v15[44] + 920LL);
      v26 = *v25;
      if ( *(_QWORD **)(*v25 + 8LL) != v25 )
        goto LABEL_63;
      v27 = *(_QWORD **)(v15[44] + 928LL);
      if ( (_QWORD *)*v27 != v25 )
        goto LABEL_63;
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      v25[1] = v25;
      *v25 = v25;
    }
    RIMRemoveHoldingFrame((__int64)v16, (__int64)v17);
    RIMUnlockExclusive((__int64)(v16 + 13));
    ObfDereferenceObject(v16);
    RIMLockExclusive((__int64)(Object + 13));
    if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 954);
    *v14 = Object;
    *(v15 - 8) = Object[53];
    Object[53] = (PVOID *)v17;
    if ( (Object[104] || *((_DWORD *)Object + 264))
      && !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_DWORD *)v15 + 16) = v15[8] & 0xFC27FFFF | 0x80000;
    }
    if ( (*((_DWORD *)v15 + 20) & 0x80u) != 0 )
    {
      v28 = Object[55];
      v29 = (_QWORD *)(v15[44] + 920LL);
      if ( *v28 != Object + 54 )
        goto LABEL_63;
      *v29 = Object + 54;
      v29[1] = v28;
      *v28 = v29;
      Object[55] = (PVOID *)v29;
    }
    RIMUnlockExclusive((__int64)(Object + 13));
  }
}
