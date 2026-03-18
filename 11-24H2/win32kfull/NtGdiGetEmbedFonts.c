/*
 * XREFs of NtGdiGetEmbedFonts @ 0x140337990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x14030DBB4 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall NtGdiGetEmbedFonts(int a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  result = 0LL;
  v5 = *(_QWORD *)(v2 + 20408);
  v6[0] = v5;
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 28) )
      return PUBLIC_PFTOBJ::GetEmbedFonts((PUBLIC_PFTOBJ *)v6, v5, v3);
  }
  return result;
}
