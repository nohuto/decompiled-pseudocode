/*
 * XREFs of ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C001CF84
 * Callers:
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C001C740 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C001CEA8 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C014EA9E (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C014F5DC (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     HideMouseTrails @ 0x1C0151750 (HideMouseTrails.c)
 * Callees:
 *     GreMovePointer @ 0x1C001D070 (GreMovePointer.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C001D788 (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030A10 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C0222714 (--$Write@U-$_tlgWrapSz@D@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ?CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z @ 0x1C0222850 (-CursorApiToString@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@12@@Z.c)
 *     ?DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C0222888 (-DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 */

void __fastcall CursorApiRouter::MovePointer(CursorApiRouter *this, HDEV a2, int a3, int a4)
{
  unsigned int v7; // ebx
  CursorApiRouter *v8; // rcx
  int v9; // edi
  int v10; // edx
  int v11; // r9d
  int v12; // r10d
  int v13; // r11d
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+48h] BYREF

  v17 = (__int64)this;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v17, (struct _EX_PUSH_LOCK *)&qword_1C035F100);
  v7 = dword_1C035F0F8;
  qword_1C035F0E8 = (__int64)a2;
  dword_1C035F0F0 = a3;
  dword_1C035F0F4 = a4;
  dword_1C035F0F8 = 2;
  ExReleasePushLockExclusiveEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 == 1 )
    CursorApiRouter::DwmSetPointer(0LL, 0);
  GreMovePointer(a2);
  if ( v7 != 2 )
  {
    CursorApiRouter::ForceSetCurrentCursorShape(v8);
    v9 = (unsigned __int8)byte_1C035F0E4;
    if ( (unsigned int)dword_1C0359080 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0359080, 8LL) )
      {
        LODWORD(v19) = v13;
        LODWORD(v20) = v9;
        LODWORD(v17) = v12;
        LOBYTE(v11) = gDWMCapable != 0;
        v14 = (__int64)"Move";
        LODWORD(v18) = v11;
        v15 = InputTraceLogging::Cursor::CursorApiToString((unsigned int)(v10 - 6));
        v16 = InputTraceLogging::Cursor::CursorApiToString(v7);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_1C0359080,
          (int)&dword_1C031D4B9,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v20,
          (__int64)&v19);
      }
    }
  }
}
