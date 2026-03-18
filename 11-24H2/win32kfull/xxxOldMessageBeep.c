/*
 * XREFs of xxxOldMessageBeep @ 0x1402ADF78
 * Callers:
 *     xxxMessageBeep @ 0x140103034 (xxxMessageBeep.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxSoundSentry @ 0x14010312C (xxxSoundSentry.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x140216730 (-xxxUserBeep@@YAHKK_N@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

__int64 __fastcall xxxOldMessageBeep(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 67056) & 0x80000) != 0 )
  {
    LOBYTE(v2) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v6, v2);
    v4 = xxxUserBeep(440LL, 125LL, 1);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v6);
    return v4;
  }
  else
  {
    xxxSoundSentry(v3, v2);
    return 1LL;
  }
}
