/*
 * XREFs of BcpDisplayCriticalCharacter @ 0x140699A70
 * Callers:
 *     BcpDisplayErrorInformation @ 0x14069A26C (BcpDisplayErrorInformation.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069B3E0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140698FEC (BgpDisplayCharacterEx.c)
 *     BcpSetCursorPosition @ 0x14069B148 (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpDisplayCriticalCharacter(__int16 a1, int a2, int a3)
{
  ULONG v3; // esi
  unsigned int v4; // r8d
  unsigned int v5; // edi
  unsigned int v6; // r9d
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp-28h]
  unsigned int v11; // [rsp+58h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = a3;
  LOWORD(v12) = a1;
  v3 = BcpCursor;
  v4 = BcpCursor;
  v5 = *(&BcpCursor + 1);
  v6 = *(&BcpCursor + 1);
  v7 = *(_QWORD *)(qword_140E3EBE0 + 24);
  v13 = 0;
  v12 = 0;
  v8 = dword_140EEFD38;
  *(_DWORD *)(v7 + 56) = a2;
  *(_DWORD *)(qword_140E3EBE0 + 8) = a2;
  result = BgpDisplayCharacterEx(0x20u, (__int64 *)qword_140E3EBE0, v4, v6, *(_DWORD *)(v7 + 40), -1, &v13, &v12, v10);
  if ( (int)result >= 0 )
  {
    if ( v8 < v5 + v12 )
      v8 = v5 + v12;
    v11 = v8;
    return BcpSetCursorPosition(v3 + v13, v5, &v11);
  }
  return result;
}
