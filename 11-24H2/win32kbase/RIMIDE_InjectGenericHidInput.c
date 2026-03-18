/*
 * XREFs of RIMIDE_InjectGenericHidInput @ 0x140121F98
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x14011CB70 (NtUserInjectGenericHidInput.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x140219F4C (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401221F4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall RIMIDE_InjectGenericHidInput(__int64 a1, int a2, const void *a3, unsigned int a4)
{
  size_t v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax

  v4 = a4;
  InputTraceLogging::RIM::InjectInput((a1 + 72) & -(__int64)(a1 != 0), 1LL, 1LL);
  v7 = *(_QWORD *)(a1 + 392);
  v8 = *(_QWORD *)(a1 + 440);
  if ( !*(_DWORD *)(v8 + 16) )
    *(_DWORD *)(v8 + 16) = 1;
  RIMLockExclusive(v7 + 104);
  if ( !*(_BYTE *)(v7 + 81) )
  {
    if ( a2 && (_DWORD)v4 && ((unsigned __int8)a3 & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(*(void **)(*(_QWORD *)(a1 + 512) + 24LL), a3, v4);
    RIMLockExclusive(v7 + 760);
    *(_DWORD *)(a1 + 312) = 0;
    *(_QWORD *)(a1 + 320) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 512) + 44LL);
    rimProcessDeviceBufferAndStartRead(
      (struct RawInputManagerObject *)v7,
      (struct RIMDEV *)((a1 + 72) & -(__int64)(a1 != 0)));
    RIMUnlockExclusive(v7 + 760);
  }
  RIMUnlockExclusive(v7 + 104);
  return 0LL;
}
