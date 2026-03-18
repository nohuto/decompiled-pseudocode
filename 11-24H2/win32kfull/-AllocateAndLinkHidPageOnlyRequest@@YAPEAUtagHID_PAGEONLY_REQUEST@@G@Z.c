/*
 * XREFs of ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x140228B40
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x14013104C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     <none>
 */

struct tagHID_PAGEONLY_REQUEST *__fastcall AllocateAndLinkHidPageOnlyRequest(__int16 a1)
{
  struct tagHID_PAGEONLY_REQUEST *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagHID_PAGEONLY_REQUEST *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx

  result = (struct tagHID_PAGEONLY_REQUEST *)Win32AllocPoolZInit(24LL, 1919447893LL);
  v5 = result;
  if ( result )
  {
    *((_WORD *)result + 8) = a1;
    v6 = W32GetUserSessionState(v4, v3) + 208;
    v7 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
      __fastfail(3u);
    *((_QWORD *)v5 + 1) = v6;
    *(_QWORD *)v5 = v7;
    *(_QWORD *)(v7 + 8) = v5;
    *(_QWORD *)v6 = v5;
    return v5;
  }
  return result;
}
