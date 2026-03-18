/*
 * XREFs of ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216DA0
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x1402175C0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x14005AA08 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x14005AA28 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x14020D850 (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     FindRimDevByName @ 0x140217BF0 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x140217ED8 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePTPInertiaPacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 RimDevByName; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  char v16; // [rsp+48h] [rbp+10h] BYREF
  char v17; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)(a2 + 8) = a2 + (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  v5 = 1;
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v17);
  RIMLockExclusive(a3 + 104);
  v6 = 0LL;
  if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
  {
    RIMUnlockExclusive(a3 + 104);
    v5 = 2;
  }
  else
  {
    RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
    v8 = a3 + 104;
    v9 = RimDevByName;
    RIMUnlockExclusive(v8);
    if ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 456);
      if ( v11 && *(_DWORD *)(v11 + 24) == 7 )
      {
        v12 = *(_QWORD *)(v9 + 32);
        if ( v12 )
          v6 = *(_QWORD *)(v12 + 72);
        v13 = *(_QWORD *)(W32GetUserSessionState(v10) + 16840);
        v14 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(v13 + 1416) = v6;
        *(_QWORD *)(v13 + 1424) = v14;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v16, 1);
        CRIMBase::SensorDoWorkAndWait(v13, 0xFu);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v16);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v17);
  return v5;
}
