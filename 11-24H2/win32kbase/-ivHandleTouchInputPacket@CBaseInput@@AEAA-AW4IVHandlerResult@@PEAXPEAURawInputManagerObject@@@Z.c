/*
 * XREFs of ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140217080
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x1402175C0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x14005AA08 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x14005AA28 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimProcessCompleteFrame @ 0x140180150 (rimProcessCompleteFrame.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x140199A48 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1401EBC98 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x14020D850 (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     FindRimDevByName @ 0x140217BF0 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x140217ED8 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleTouchInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned int v6; // r15d
  void **i; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // r8d
  __int64 RimDevByName; // r14
  __int64 v13; // rcx
  char *v14; // rbx
  __int64 v15; // rcx
  PVOID Buffer; // [rsp+58h] [rbp+38h] BYREF
  char v17; // [rsp+68h] [rbp+48h] BYREF

  v4 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  Buffer = (PVOID)a2;
  *(_QWORD *)(a2 + 8) = a2 + v4;
  v6 = 1;
  for ( i = (void **)(a2 + 208); ; i = (void **)(v8 + 16) )
  {
    CIVDeserializer::Deserialize((CIVDeserializer *)&Buffer, i);
    if ( !*(_QWORD *)v9 )
      break;
    CIVDeserializer::Deserialize((CIVDeserializer *)&Buffer, (void **)(*(_QWORD *)v9 + 8LL));
  }
  CIVDeserializer::Deserialize((CIVDeserializer *)&Buffer, (void **)(a2 + 216));
  if ( *(_DWORD *)(a2 + 224) == v10 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v17);
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      RIMUnlockExclusive(a3 + 104);
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v17);
      return 2LL;
    }
    RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
    RIMUnlockExclusive(a3 + 104);
    if ( RimDevByName )
    {
      Buffer = 0LL;
      rimGetCompleteFrameFromIVCompleteFrame(a2, RimDevByName, &Buffer);
      if ( Buffer )
      {
        RIMLockExclusive(a3 + 104);
        RIMLockExclusive(a3 + 760);
        rimProcessCompleteFrame(a3, RimDevByName, (int *)Buffer);
        RIMUnlockExclusive(a3 + 760);
        RIMUnlockExclusive(a3 + 104);
      }
    }
    else
    {
      v6 = 0;
    }
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v17);
  }
  else
  {
    Buffer = 0LL;
    rimGetCompleteFrameFromIVCompleteFrame(a2, 0LL, &Buffer);
    v14 = (char *)Buffer;
    if ( Buffer )
    {
      v15 = *(_QWORD *)(W32GetUserSessionState(v13) + 16840);
      *(_QWORD *)(v15 + 1408) = v14;
      CRIMBase::SensorDoWorkAndWait(v15, 0xEu);
      GreDeleteFastMutex(v14);
    }
  }
  return v6;
}
