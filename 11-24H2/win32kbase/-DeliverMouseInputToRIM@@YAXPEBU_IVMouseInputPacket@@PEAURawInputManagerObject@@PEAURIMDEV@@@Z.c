/*
 * XREFs of ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x140215FF0
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216C00 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     RIMQueueMouseInput @ 0x1401E72D4 (RIMQueueMouseInput.c)
 *     ?GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z @ 0x140216164 (-GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall DeliverMouseInputToRIM(
        const struct _IVMouseInputPacket *a1,
        struct RawInputManagerObject *a2,
        struct RIMDEV *a3)
{
  char *v3; // rsi
  unsigned int v7; // r9d
  struct _IVMouseInputData *v8; // rdx
  struct _MOUSE_INPUT_DATA *v9; // rcx
  __int64 v10; // rdx
  struct _MOUSE_INPUT_DATA *v11; // rcx
  __int64 v12; // r8
  _MOUSE_INPUT_DATA v13; // [rsp+20h] [rbp-1A8h] BYREF

  v3 = (char *)a2 + 760;
  RIMLockExclusive((__int64)a2 + 760);
  v7 = *((_DWORD *)a1 + 8);
  if ( v7 )
  {
    v8 = (struct _IVMouseInputData *)*((_QWORD *)a1 + 3);
    v9 = &v13;
    do
    {
      GetMouseInputDataFromIVMouseInput(v9, v8);
      v8 = (struct _IVMouseInputData *)(v10 + 48);
      v9 = v11 + 1;
    }
    while ( v12 != 1 );
  }
  RIMQueueMouseInput(a2, a3, &v13, v7);
  RIMUnlockExclusive((__int64)v3);
}
