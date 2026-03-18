/*
 * XREFs of ?SetProductVersionInfo@@YAHXZ @ 0x1402B5EB8
 * Callers:
 *     _SetWatermarkStrings @ 0x1402B5F40 (_SetWatermarkStrings.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011C530 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall SetProductVersionInfo(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  unsigned int v6; // ecx
  char *v7; // r8
  unsigned __int64 v8; // r9

  v2 = 1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928);
  if ( *(_DWORD *)(v4 + 2164) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    v6 = 126;
    if ( *(_WORD *)(UserSessionState + 66664) <= 0x7Eu )
      v6 = *(unsigned __int16 *)(UserSessionState + 66664);
    v7 = *(char **)(UserSessionState + 66672);
    v8 = v6 >> 1;
    *(_DWORD *)(UserSessionState + 66656) = v8;
    if ( (int)RtlStringCchCopyNW((char *)(UserSessionState + 66528), 64LL, v7, v8) < 0 )
      return 0;
  }
  return v2;
}
