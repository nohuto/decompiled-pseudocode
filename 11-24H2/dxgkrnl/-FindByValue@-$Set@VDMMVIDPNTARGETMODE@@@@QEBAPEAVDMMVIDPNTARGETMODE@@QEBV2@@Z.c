/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1400352AC
 * Callers:
 *     ?Add@?$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1400351C4 (-Add@-$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14004C2B4 (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025B514 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<DMMVIDPNTARGETMODE>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // ecx
  int v9; // r9d

  v2 = a1 + 24;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 == a1 + 24 )
    return 0LL;
  v5 = v4 - 8;
  while ( v5 )
  {
    if ( *(_DWORD *)(v5 + 76) == *(_DWORD *)(a2 + 76)
      && *(_DWORD *)(v5 + 80) == *(_DWORD *)(a2 + 80)
      && *(_DWORD *)(v5 + 84) == *(_DWORD *)(a2 + 84)
      && *(_DWORD *)(v5 + 88) == *(_DWORD *)(a2 + 88)
      && *(_DWORD *)(v5 + 92) == *(_DWORD *)(a2 + 92)
      && *(_DWORD *)(v5 + 96) == *(_DWORD *)(a2 + 96)
      && *(_DWORD *)(v5 + 100) == *(_DWORD *)(a2 + 100)
      && *(_DWORD *)(v5 + 104) == *(_DWORD *)(a2 + 104)
      && *(_QWORD *)(v5 + 112) == *(_QWORD *)(a2 + 112) )
    {
      v7 = *(_DWORD *)(a2 + 120);
      if ( (((unsigned __int8)v7 ^ *(_BYTE *)(v5 + 120)) & 7) == 0
        && (((unsigned __int16)v7 ^ (unsigned __int16)*(_DWORD *)(v5 + 120)) & 0x1F8) == 0 )
      {
        v8 = *(_DWORD *)(a2 + 128);
        v9 = *(_DWORD *)(v5 + 128);
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)(a2 + 128)) & 3) == 0
          && (((unsigned __int8)v9 ^ (unsigned __int8)v8) & 0xFC) == 0
          && (((unsigned __int16)v9 ^ (unsigned __int16)v8) & 0x3F00) == 0
          && ((v9 ^ v8) & 0xFC000) == 0
          && ((v9 ^ v8) & 0x3F00000) == 0
          && ((v9 ^ v8) & 0xFC000000) == 0 )
        {
          break;
        }
      }
    }
    v6 = *(_QWORD *)(v5 + 8);
    v5 = v6 - 8;
    if ( v6 == v2 )
      v5 = 0LL;
  }
  return v5;
}
