/*
 * XREFs of ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x140207DC4
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     ClientFrame @ 0x1402F1B90 (ClientFrame.c)
 */

void __fastcall DWP_DrawItem(struct tagDRAWITEMSTRUCT *a1, __int64 a2)
{
  int v3; // eax

  if ( *(_DWORD *)a1 == 2 )
  {
    v3 = *((_DWORD *)a1 + 3);
    if ( v3 == 4 || v3 == 1 && (*((_DWORD *)a1 + 4) & 0x10) != 0 )
    {
      W32GetUserSessionState(a1, a2);
      ClientFrame(*((HDC *)a1 + 4));
    }
  }
}
