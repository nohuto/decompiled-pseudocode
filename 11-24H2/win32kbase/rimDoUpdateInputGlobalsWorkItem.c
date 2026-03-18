/*
 * XREFs of rimDoUpdateInputGlobalsWorkItem @ 0x1400D97B0
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     LINPSourceFromPointerType @ 0x1400D9874 (LINPSourceFromPointerType.c)
 *     RIMGetPointerInputType @ 0x1400D98AC (RIMGetPointerInputType.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99A0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 */

__int64 __fastcall rimDoUpdateInputGlobalsWorkItem(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // eax

  v1 = *(_QWORD *)(a1 + 56);
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1108LL);
  v2 = *(_QWORD *)(W32GetUserSessionState(a1) + 3064);
  v3 = v1 + 528;
  if ( !v1 )
    v3 = 456LL;
  v4 = RIMGetPointerInputType(*(_QWORD *)v3);
  v5 = LINPSourceFromPointerType(v4);
  return CInputGlobals::UpdateInputGlobals(
           v2,
           (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
           v5);
}
