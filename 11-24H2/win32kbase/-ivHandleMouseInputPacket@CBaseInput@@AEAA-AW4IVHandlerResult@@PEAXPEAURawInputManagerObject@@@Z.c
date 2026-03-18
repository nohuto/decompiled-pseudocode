/*
 * XREFs of ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216C00
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x1402175C0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x140199A48 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x140215FF0 (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x140216094 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     FindRimDevByName @ 0x140217BF0 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x140217ED8 (IsRimObjectUnregistered.c)
 *     ApiSetTransformPointForIvSpatialInput @ 0x1402225A4 (ApiSetTransformPointForIvSpatialInput.c)
 */

__int64 __fastcall CBaseInput::ivHandleMouseInputPacket(__int64 a1, __int64 a2, struct RawInputManagerObject *a3)
{
  int v3; // eax
  unsigned int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 MouseProcessor; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rbp
  int v15; // ebx
  __int64 RimDevByName; // rax
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 16);
  v18 = a2;
  v6 = 1;
  if ( (v3 & 4) != 0 )
    *(_QWORD *)(a2 + 8) = a2 + (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  CIVDeserializer::Deserialize((CIVDeserializer *)&v18, (void **)(a2 + 24));
  EnterSharedCrit(1u, 1u);
  v7 = 0LL;
  if ( *(_DWORD *)(a2 + 32) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(a2 + 24) + 48 * v7;
      LODWORD(v19) = *(_DWORD *)(v8 + 20);
      v9 = *(_DWORD *)(v8 + 24);
      v18 = 0LL;
      v10 = *(_QWORD *)(v8 + 32);
      HIDWORD(v19) = v9;
      if ( !(unsigned int)ApiSetTransformPointForIvSpatialInput(v10, v19, &v18) )
        break;
      v7 = (unsigned int)(v7 + 1);
      *(_QWORD *)(v8 + 20) = v18;
      if ( (unsigned int)v7 >= *(_DWORD *)(a2 + 32) )
        goto LABEL_6;
    }
    UserSessionSwitchLeaveCritWithNonPaged();
    return 0LL;
  }
  else
  {
LABEL_6:
    UserSessionSwitchLeaveCritWithNonPaged();
    if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    {
      v18 = *(_QWORD *)(a2 + 36);
      MouseProcessor = anonymous_namespace_::GetMouseProcessor(v11);
      if ( MouseProcessor )
      {
        v13 = MouseProcessor + 4064;
        W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(MouseProcessor + 4064), 0);
        *(_QWORD *)(v13 + 8) = v18;
        *(_BYTE *)(v13 + 16) = 1;
        W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v13, 0LL);
      }
    }
    v14 = 0LL;
    v15 = *(_DWORD *)(a2 + 16) & 2;
    if ( (*(_DWORD *)(a2 + 16) & 4) != 0 )
    {
      RIMLockExclusive((__int64)a3 + 104);
      if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
      {
        RIMUnlockExclusive((__int64)a3 + 104);
        return 2LL;
      }
      RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
      if ( RimDevByName )
      {
        if ( v15 )
        {
          v14 = *(_QWORD **)(RimDevByName + 32);
          if ( v14 )
            v14 = (_QWORD *)v14[9];
        }
        else
        {
          DeliverMouseInputToRIM((const struct _IVMouseInputPacket *)a2, a3, (struct RIMDEV *)RimDevByName);
        }
      }
      else
      {
        v6 = 0;
      }
      RIMUnlockExclusive((__int64)a3 + 104);
    }
    if ( v15 )
      DeliverSynthesizedMouseInput((const struct _IVMouseInputPacket *)a2, v14);
    return v6;
  }
}
