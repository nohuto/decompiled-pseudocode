/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14004A50C
 * Callers:
 *     ProcessHidRawInput @ 0x14004A480 (ProcessHidRawInput.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x140092370 (-OnPointerCursorOperation@@YAXXZ.c)
 *     NtUserSetCursorPos @ 0x140092730 (NtUserSetCursorPos.c)
 *     EditionLLMouseWheelHook @ 0x140094C70 (EditionLLMouseWheelHook.c)
 *     EditionLLMouseButtonHook @ 0x140095CD0 (EditionLLMouseButtonHook.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x14017581C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     NtUserInjectTouchInput @ 0x140243180 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x1402453F0 (NtUserSendInput.c)
 *     NtUserInjectTouchpadAction @ 0x140298FF0 (NtUserInjectTouchpadAction.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x140203D08 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

InputTraceLogging::ThreadLockedPerfRegion *__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        __int64 **this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rbx
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( (unsigned int)dword_140398B80 > 6 && (qword_140398B90 & 1) != 0 && (qword_140398B98 & 1) == qword_140398B98 )
  {
    if ( PtiCurrent((__int64)this, (__int64)a2) )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      v10 = (__int64 *)Win32AllocateFromPagedLookasideList(*(_QWORD *)(UserSessionState + 19400));
      *this = v10;
      if ( v10 )
      {
        *v10 = (__int64)a2;
        (*this)[5] = 0LL;
        if ( a3 && *(_QWORD *)a3 )
        {
          *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
          (*this)[5] = (__int64)(*this + 3);
        }
        EtwActivityIdControl(3u, (LPGUID)(*this + 1));
        if ( (unsigned int)dword_140398B80 > 6 && (unsigned __int8)tlgKeywordOn(&dword_140398B80, 1LL, v13, v14) )
        {
          v15 = (__int64)(*this + 1);
          v16 = (*this)[5];
          v19 = **this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (unsigned int)&dword_140398B80,
            (unsigned int)&unk_140364593,
            v15,
            v16,
            (__int64)&v19);
        }
        v17 = *this + 6;
        v18 = PtiCurrent(v12, v11);
        *v17 = *((_QWORD *)v18 + 48);
        *((_QWORD *)v18 + 48) = v17;
        v17[2] = _lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_;
        v17[1] = this;
      }
    }
  }
  return (InputTraceLogging::ThreadLockedPerfRegion *)this;
}
