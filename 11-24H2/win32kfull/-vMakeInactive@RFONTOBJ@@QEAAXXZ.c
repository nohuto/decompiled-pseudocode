/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14005D0AC
 * Callers:
 *     RFONT_vMakeInactive @ 0x14005CDD0 (RFONT_vMakeInactive.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025B70C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025BE74 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3DC0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3EA8 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BBF8C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400DCDFC (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x14025A0F4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 SessionState; // rax
  unsigned int v6; // ecx
  struct RFONT **v7; // rbx
  int v8; // esi
  int InactiveHelper; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct RFONT *v12; // rcx
  int v13; // ebp
  __int64 v14; // rdi
  __int64 v15; // rbx
  struct RFONT *v16; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v17[8]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v18[112]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v18, 0, sizeof(v18));
  if ( *(_QWORD *)this )
  {
    SessionState = W32GetSessionState(v3, v2, v4);
    SEMOBJ<18>::SEMOBJ<18>(v17, *(_QWORD *)(SessionState + 96) + 4872LL);
    if ( *(int *)(*(_QWORD *)this + 668LL) <= 0 )
    {
      SEMOBJ<18>::vUnlock(v17);
      return;
    }
    SEMOBJ<18>::vUnlock(v17);
    v6 = *(_DWORD *)(*(_QWORD *)this + 848LL);
    if ( v6 <= 0xA )
    {
      memset_0(v18, 0, sizeof(v18));
      v8 = 0;
      v7 = (struct RFONT **)v18;
    }
    else
    {
      v7 = (struct RFONT **)PALLOCMEM(8 * v6 + 32, 1718382187LL);
      if ( !v7 )
        return;
      v8 = 1;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v7);
    v12 = *v7;
    v13 = InactiveHelper;
    if ( *v7 )
    {
      v14 = 0LL;
      do
      {
        v16 = v12;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v16, 0LL);
        v16 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
        v12 = v7[++v14];
      }
      while ( v12 );
    }
    if ( v8 )
      Win32FreePool(v7);
    if ( v13 )
    {
      v15 = *(_QWORD *)(W32GetSessionState(v12, v10, v11) + 96);
      GreAcquirePushLockShared2<16,0>(v15 + 4872);
      _InterlockedDecrement((volatile signed __int32 *)(v15 + 13508));
      GreReleasePushLockShared2<16,0>(v15 + 4872);
    }
  }
}
