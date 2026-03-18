/*
 * XREFs of ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1401056F4
 * Callers:
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140104018 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserCountClipboardFormats @ 0x140105230 (NtUserCountClipboardFormats.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x140203EF0 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     ?IsFmtBlocked@@YAHI@Z @ 0x140103EFC (-IsFmtBlocked@@YAHI@Z.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x140106134 (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 */

__int64 __fastcall CountNumClipFormatForIL(__int64 *a1, __int64 a2)
{
  unsigned int *v2; // rbx
  unsigned int v3; // edi
  int v5; // esi
  unsigned int *v6; // rbp
  int v7; // eax
  __int64 v8; // xmm0_8
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-10h]

  v2 = *(unsigned int **)(a2 + 128);
  v3 = 0;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a2 + 136);
    if ( v5 )
    {
      v6 = v2 + 5;
      do
      {
        v7 = *((_DWORD *)a1 + 2);
        v12 = *a1;
        --v5;
        v8 = *(_QWORD *)v6;
        v13 = v7;
        v9 = v6[2];
        v14 = v8;
        v15 = v9;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(&v14, &v12) || !(unsigned int)IsFmtBlocked(*v2, v10) )
          ++v3;
        v2 += 8;
        v6 += 8;
      }
      while ( v5 );
    }
  }
  return v3;
}
