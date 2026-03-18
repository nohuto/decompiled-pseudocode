/*
 * XREFs of ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z @ 0x140060290
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x14005EFB0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400BB50C (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BEDA0 (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BFB58 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1400EABCC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

void __fastcall BuildMapperParameters(struct MAPPER::PARAMETERS *a1, struct UDCOBJ *a2, char a3, char a4)
{
  _OWORD *v8; // rax
  _DWORD *v9; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v11; // eax
  unsigned int v12; // eax
  _DWORD *v13; // rdx
  int v14; // eax
  char v15; // al
  int v16; // ecx
  int v17; // ecx
  bool v18; // r8
  bool v19; // al
  bool v20; // al
  int v21; // r8d
  bool v22; // cl
  __int64 v23; // rdx
  Gre::Base *v24; // rcx
  HSEMAPHORE v25; // rsi
  struct _GRETHREAD *v26; // rax
  struct _GRETHREAD *v27; // r14
  __int64 v28; // rcx
  char v29; // cl
  struct _GRETHREAD *v30; // rax
  unsigned __int64 v32; // rdx
  int v33; // r8d
  int v34; // eax
  _DWORD *v35; // [rsp+40h] [rbp+8h] BYREF
  _OWORD *v36; // [rsp+48h] [rbp+10h] BYREF

  DC::QuickInitXform(*(_QWORD *)a2, &v36, 516LL);
  v8 = v36;
  *(_OWORD *)((char *)a1 + 8) = *v36;
  *(_OWORD *)((char *)a1 + 24) = v8[1];
  *((_DWORD *)a1 + 10) = *((_DWORD *)v8 + 8);
  v9 = *(_DWORD **)(*(_QWORD *)a2 + 48LL);
  *(_QWORD *)a1 = v9;
  v35 = v9;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (v35[10] & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
    v11 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    v11 = v35[540];
  *((_DWORD *)a1 + 13) = v11;
  v12 = W32GetCurrentThreadDpiAwarenessContext();
  v13 = v35;
  if ( (v35[10] & 1) != 0 && (v12 & 0xF) - 1 > 1 )
    v14 = (v12 >> 8) & 0x1FF;
  else
    v14 = v35[541];
  *((_DWORD *)a1 + 14) = v14;
  *((_DWORD *)a1 + 15) = v13[453];
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 252LL) & 4) != 0 )
  {
    *(_QWORD *)((char *)a1 + 44) = *(_QWORD *)(*(_QWORD *)a2 + 256LL);
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  *((_BYTE *)a1 + 68) = v15;
  v16 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) >> 31;
  *((_BYTE *)a1 + 69) = (*(_DWORD *)(*(_QWORD *)a2 + 72LL) & 0x20000000) != 0;
  *((_BYTE *)a1 + 70) = v16;
  *((_BYTE *)a1 + 71) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 236LL) & 1;
  *((_BYTE *)a1 + 72) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1;
  *((_BYTE *)a1 + 73) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0;
  *((_BYTE *)a1 + 74) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 2050;
  *((_BYTE *)a1 + 75) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 2) != 0;
  *((_BYTE *)a1 + 76) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x1000) != 0;
  v17 = *(_DWORD *)(*(_QWORD *)a2 + 520LL);
  v18 = (v17 & 1) != 0 && (v17 & 2) == 0;
  *((_BYTE *)a1 + 77) = v18;
  v19 = *(float *)(*(_QWORD *)a2 + 452LL) != 0.0 && !(unsigned int)EFLOAT::bIsZero((EFLOAT *)(*(_QWORD *)a2 + 456LL));
  *((_BYTE *)a1 + 78) = v19;
  *((_BYTE *)a1 + 79) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0;
  v20 = a3 && !v18;
  *((_BYTE *)a1 + 85) = v20;
  *((_BYTE *)a1 + 86) = a4;
  v21 = v13[531];
  v22 = (v13[542] & 8) != 0;
  *((_BYTE *)a1 + 80) = (v13[542] & 0x2000) != 0;
  *((_BYTE *)a1 + 81) = v22;
  *((_BYTE *)a1 + 82) = v21 == 0;
  *((_BYTE *)a1 + 83) = v21 == 4;
  *((_BYTE *)a1 + 84) = PDEVOBJ::cFonts((PDEVOBJ *)&v35) != 0;
  *((_BYTE *)a1 + 88) = *(_BYTE *)(*(_QWORD *)a2 + 36LL) & 1;
  *((_BYTE *)a1 + 89) = *(_DWORD *)(*(_QWORD *)a2 + 32LL) == 1;
  v23 = *(_QWORD *)(*(_QWORD *)a2 + 496LL);
  *((_BYTE *)a1 + 90) = v23 != 0;
  v24 = (Gre::Base *)*(unsigned __int8 *)(*(_QWORD *)a2 + 248LL);
  LOBYTE(v24) = (unsigned __int8)v24 & 1;
  *((_BYTE *)a1 + 87) = (_BYTE)v24;
  if ( v23 )
  {
    v25 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v24) + 1512LL);
    GreAcquireSemaphoreInternal(v25);
    v26 = GreGetCurrentThreadCrossSessionCheck();
    v27 = v26;
    if ( v26 )
    {
      v28 = *(_QWORD *)v26;
      if ( (*(_QWORD *)v26 & 0xFFFFFFFFFFF00000uLL) != 0 && (v28 & 0x100000) == 0 )
      {
        v32 = 0LL;
        v33 = 37;
        do
        {
          v34 = v32;
          if ( !_bittest64(&v28, v32) )
            v34 = v33;
          ++v32;
          v33 = v34;
        }
        while ( v32 < 0x40 );
        if ( v34 > 20 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v32, (unsigned int)v34);
      }
      v29 = *((_BYTE *)v27 + 28);
      *((_BYTE *)v27 + 28) = v29 + 1;
      if ( !v29 )
        *(_QWORD *)v27 |= 0x100000uLL;
    }
    *((_DWORD *)a1 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 496LL) + 96LL);
    if ( v25 )
    {
      EtwTraceGreLockReleaseSemaphore(L"Hmgr", v25);
      v30 = GreGetCurrentThreadCrossSessionCheck();
      if ( v30 )
      {
        if ( (*((_BYTE *)v30 + 28))-- == 1 )
          *(_QWORD *)v30 &= ~0x100000uLL;
        if ( !*(_QWORD *)v30 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v25);
    }
  }
  else
  {
    *((_DWORD *)a1 + 16) = 0;
  }
}
