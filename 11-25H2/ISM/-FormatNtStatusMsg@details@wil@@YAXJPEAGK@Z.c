/*
 * XREFs of ?FormatNtStatusMsg@details@wil@@YAXJPEAGK@Z @ 0x18009FF90
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180084C48 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 */

void __fastcall wil::details::FormatNtStatusMsg(DWORD dwMessageId, LPWSTR lpBuffer, DWORD nSize)
{
  HINSTANCE NtDllModuleHandle; // rax

  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  FormatMessageW(0x1A00u, NtDllModuleHandle, dwMessageId, 0x400u, lpBuffer, nSize, 0LL);
}
