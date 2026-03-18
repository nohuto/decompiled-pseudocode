/*
 * XREFs of ?GrepFontIsLinked@@YAHAEAVUDCOBJ@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401D9C14
 * Callers:
 *     NtGdiFontIsLinked @ 0x14025F5D0 (NtGdiFontIsLinked.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DB50 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3DC0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3EA8 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVUDCOBJ@@@Z @ 0x1400BEB94 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVUDCOBJ@@@Z.c)
 */

__int64 __fastcall GrepFontIsLinked(struct UDCOBJ *a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rbx
  __int64 v7; // rsi
  char v9; // cl
  _QWORD v10[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+90h] [rbp+8h] BYREF
  int v12; // [rsp+A0h] [rbp+18h] BYREF
  int v13; // [rsp+A4h] [rbp+1Ch]

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v12 = 18;
  v13 = *(unsigned __int16 *)(v1 + 12);
  v11 = 0LL;
  RFONTOBJ::vInit((RFONTOBJ *)&v11, a1, 0, 2u, (const struct RFONTOBJ::Tag *)&v12);
  if ( v11 )
  {
    v6 = *(_QWORD *)(v11 + 120);
    v7 = *(_QWORD *)(W32GetSessionState(v5, v4) + 96) + 4872LL;
    GreAcquirePushLockShared2<16,0>(v7);
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8636), 1u);
    GreReleasePushLockShared2<16,0>(v7);
    if ( v6 && (*(_DWORD *)(v6 + 12) & 8) == 0 )
    {
      if ( *(_DWORD *)(v11 + 716) )
      {
        LOBYTE(v2) = *(_DWORD *)(v7 + 14688) != 0;
      }
      else if ( *(_QWORD *)(v7 + 8656)
             || *(_QWORD *)(v7 + 8664)
             || *(_DWORD *)(v7 + 14696)
             && (IFIOBJR::IFIOBJR((IFIOBJR *)v10, *(const struct _IFIMETRICS **)(v6 + 32), (struct RFONTOBJ *)&v11, a1),
                 v9 = *(_BYTE *)(v10[0] + 44LL),
                 (unsigned __int8)(v9 - 3) > 0xFBu)
             && v9 != 1
             && (*(_BYTE *)(v7 + 14072) & (unsigned __int8)(v9 + 2) & 0xF) != 0 )
      {
        v2 = 1;
      }
      else if ( *(_QWORD *)(v6 + 120) )
      {
        v2 = 1;
      }
    }
    GreAcquirePushLockShared2<16,0>(v7);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 8636));
    GreReleasePushLockShared2<16,0>(v7);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
  return v2;
}
