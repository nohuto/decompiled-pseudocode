/*
 * XREFs of ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216AA0
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x1402175C0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x140215F50 (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 *     FindRimDevByName @ 0x140217BF0 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x140217ED8 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardInputPacket(
        __int64 a1,
        UNICODE_STRING *a2,
        struct RawInputManagerObject *a3)
{
  unsigned int v5; // ebx
  struct RIMDEV *RimDevByName; // rax

  a2->Buffer = (USHORT *)((char *)&a2->Length + ((unsigned __int64)a2->Buffer & 0xFFFFFFFFFFFFFFFEuLL));
  v5 = 1;
  RIMLockExclusive((__int64)a3 + 104);
  if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
  {
    v5 = 2;
  }
  else
  {
    RimDevByName = (struct RIMDEV *)FindRimDevByName(a2);
    if ( RimDevByName )
      DeliverKeyboardInputToRim((struct _IVKeyboardInputPacket *)a2, a3, RimDevByName);
    else
      v5 = 0;
  }
  RIMUnlockExclusive((__int64)a3 + 104);
  return v5;
}
