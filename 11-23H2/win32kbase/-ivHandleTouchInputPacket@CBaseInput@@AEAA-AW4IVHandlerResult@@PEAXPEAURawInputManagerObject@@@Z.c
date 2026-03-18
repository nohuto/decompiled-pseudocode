/*
 * XREFs of ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE100
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C00766E0 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0076738 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C00B322C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     rimProcessCompleteFrame @ 0x1C00E2880 (rimProcessCompleteFrame.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01A0A18 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     FindRimDevByName @ 0x1C01EE9D4 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01EED78 (IsRimObjectUnregistered.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x1C01FD1C0 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandleTouchInputPacket(__int64 a1, __int64 a2, HANDLE *a3)
{
  unsigned __int64 v4; // rax
  unsigned int v6; // edi
  void **i; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // r8d
  LARGE_INTEGER *RimDevByName; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rbx
  __int64 v17; // rcx
  PVOID Buffer; // [rsp+58h] [rbp+38h] BYREF
  char v20; // [rsp+68h] [rbp+48h] BYREF

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
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v20, 1);
    RIMLockExclusive((__int64)(a3 + 13));
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      CInpPushLock::UnLockExclusive((CInpPushLock *)(a3 + 13));
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v20);
      return 2;
    }
    else
    {
      RimDevByName = (LARGE_INTEGER *)FindRimDevByName((PCUNICODE_STRING)a2);
      CInpPushLock::UnLockExclusive((CInpPushLock *)(a3 + 13));
      if ( RimDevByName )
      {
        Buffer = 0LL;
        rimGetCompleteFrameFromIVCompleteFrame(a2, (__int64)RimDevByName, &Buffer);
        if ( Buffer )
        {
          RIMLockExclusive((__int64)(a3 + 13));
          RIMLockExclusive((__int64)(a3 + 95));
          rimProcessCompleteFrame(a3, RimDevByName, (LARGE_INTEGER *)Buffer);
          CInpPushLock::UnLockExclusive((CInpPushLock *)(a3 + 95));
          CInpPushLock::UnLockExclusive((CInpPushLock *)(a3 + 13));
        }
      }
      else
      {
        v6 = 0;
      }
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v20);
    }
  }
  else
  {
    Buffer = 0LL;
    rimGetCompleteFrameFromIVCompleteFrame(a2, 0LL, &Buffer);
    v16 = (char *)Buffer;
    if ( Buffer )
    {
      v17 = *(_QWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 16840);
      *(_QWORD *)(v17 + 1424) = v16;
      CRIMBase::SensorDoWorkAndWait(v17, 0xEu);
      Win32FreePool(v16);
    }
  }
  return v6;
}
