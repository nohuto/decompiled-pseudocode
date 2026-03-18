/*
 * XREFs of ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x1801AFB40
 * Callers:
 *     ?CompleteDuplicateResource@CChannelContext@@QEAAJI@Z @ 0x1801AFA18 (-CompleteDuplicateResource@CChannelContext@@QEAAJI@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1801B17D4 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x1801AFDC0 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::AssignEntry(HANDLE_TABLE *this, unsigned int a2, int a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // rax
  int v10; // eax

  v6 = 0;
  if ( !a3 || !a2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x18Eu, 0LL);
    return 2147942487LL;
  }
  if ( a2 < *((_DWORD *)this + 3) || (v10 = HANDLE_TABLE::ResizeToFit(this, a2), v6 = v10, v10 >= 0) )
  {
    v7 = *((_DWORD *)this + 2) * a2;
    v8 = *((_QWORD *)this + 3);
    if ( !*(_DWORD *)(v7 + v8) )
    {
      *(_DWORD *)(v7 + v8) = a3;
      return v6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1AAu, 0LL);
    return 2147942487LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x19Bu, 0LL);
  return v6;
}
