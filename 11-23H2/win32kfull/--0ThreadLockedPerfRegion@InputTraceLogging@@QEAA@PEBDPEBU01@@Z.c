/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0062E20
 * Callers:
 *     NtUserSendInput @ 0x1C000A260 (NtUserSendInput.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C0062D70 (-OnPointerCursorOperation@@YAXXZ.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     ProcessHidRawInput @ 0x1C014E1F0 (ProcessHidRawInput.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C014EA9E (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionLLMouseButtonHook @ 0x1C01ABA90 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01ABC70 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x1C01D4D00 (NtUserInjectTouchInput.c)
 *     NtUserSetCursorPos @ 0x1C01DAC50 (NtUserSetCursorPos.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C0063064 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01A8B58 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

__int64 **__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        __int64 **this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( (unsigned __int8)InputTraceLogging::Enabled(1LL) )
  {
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      v7 = (__int64 *)Win32AllocateFromPagedLookasideList(InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
      *this = v7;
      if ( v7 )
      {
        *v7 = (__int64)a2;
        (*this)[5] = 0LL;
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9, v8, v10);
        if ( CurrentThreadWin32Thread )
          _InterlockedIncrement((volatile signed __int32 *)(CurrentThreadWin32Thread + 24));
        if ( a3 && *(_QWORD *)a3 )
        {
          *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
          (*this)[5] = (__int64)(*this + 3);
        }
        EtwActivityIdControl(3u, (LPGUID)(*this + 1));
        if ( (unsigned int)dword_1C0359080 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0359080, 1LL) )
        {
          v12 = **this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (int)&dword_1C0359080,
            (__int64)&v12);
        }
        PushW32ThreadLock(this, *this + 6, _lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_);
      }
    }
  }
  return this;
}
