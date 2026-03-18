/*
 * XREFs of ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x14005CF58
 * Callers:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3DC0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400A3EA8 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1400B19E0 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::dtorHelper(RFONTOBJ *this)
{
  HSEMAPHORE v2; // rbx
  struct _GRETHREAD *v3; // rax
  struct _GRETHREAD *v4; // rdi
  __int64 v5; // rcx
  char v6; // cl
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  struct _GRETHREAD *v12; // rax
  unsigned __int64 v14; // rdx
  int v15; // r8d
  int v16; // eax

  v2 = *(HSEMAPHORE *)(*(_QWORD *)this + 856LL);
  GreAcquireSemaphoreInternal(v2);
  v3 = GreGetCurrentThreadCrossSessionCheck();
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)v3;
    if ( (*(_QWORD *)v3 & 0xFFFFFFFFFFFF8000uLL) != 0 && (v5 & 0x8000) == 0 )
    {
      v14 = 0LL;
      v15 = 37;
      do
      {
        v16 = v14;
        if ( !_bittest64(&v5, v14) )
          v16 = v15;
        ++v14;
        v15 = v16;
      }
      while ( v14 < 0x40 );
      if ( v16 > 15 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v14, (unsigned int)v16);
    }
    v6 = *((_BYTE *)v4 + 23);
    *((_BYTE *)v4 + 23) = v6 + 1;
    if ( !v6 )
      *(_QWORD *)v4 |= 0x8000uLL;
  }
  v7 = *(_DWORD *)(*(_QWORD *)this + 720LL);
  RFONTOBJ::vUnlockEUDCFontsGlyphCache(this);
  if ( (v7 & 1) != 0 )
  {
    v11 = *(_QWORD *)(W32GetSessionState(v9, v8, v10) + 96);
    GreAcquirePushLockShared2<16,0>(v11 + 4872);
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 13508));
    GreReleasePushLockShared2<16,0>(v11 + 4872);
  }
  *(_DWORD *)(*(_QWORD *)this + 720LL) &= 0xFFFFFEFE;
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", v2);
    v12 = GreGetCurrentThreadCrossSessionCheck();
    if ( v12 )
    {
      if ( (*((_BYTE *)v12 + 23))-- == 1 )
        *(_QWORD *)v12 &= ~0x8000uLL;
      if ( !*(_QWORD *)v12 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v2);
  }
}
