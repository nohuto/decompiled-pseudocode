/*
 * XREFs of GreRealizeDefaultPalette @ 0x1401E60CC
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023BD28 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x1402BCC90 (xxxFlushPalette.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140029210 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C8FBC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x14030F080 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 */

__int64 __fastcall GreRealizeDefaultPalette(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // rdx
  HSEMAPHORE v11; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[14]; // [rsp+40h] [rbp-C0h] BYREF
  HDC v15[18]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+160h] [rbp+60h] BYREF
  __int64 v17; // [rsp+168h] [rbp+68h] BYREF

  v2 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v14, (HDC)a1, v2);
  if ( v14[0] )
  {
    v17 = *(_QWORD *)(v14[0] + 48LL);
    v4 = Gre::Base::Globals((Gre::Base *)(v14[0] != 0LL));
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v13, v4);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v12, (struct PDEVOBJ *)&v17);
    v5 = *(_QWORD *)(*(_QWORD *)(v14[0] + 48LL) + 56LL);
    if ( v5 )
    {
      GreAcquireSemaphoreInternal(*(HSEMAPHORE *)(*(_QWORD *)(v14[0] + 48LL) + 56LL));
      GrepAcquireLockValidate<4>();
    }
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15, (struct PDEVOBJ *)&v17);
    if ( (*(_DWORD *)(v17 + 2156) & 0x100) != 0 )
    {
      v16 = *(_QWORD *)(v17 + 1792);
      SEMOBJ<13>::SEMOBJ<13>(&v11, v2);
      v6 = v16;
      if ( (*(_DWORD *)(v16 + 24) & 0x11000) != 0 )
      {
        GrepSetSystemPaletteUse((struct XDCOBJ *)v14, 1u);
        v6 = v16;
      }
      v7 = *(_DWORD *)(v6 + 60) >> 1;
      v8 = *(_DWORD *)(v6 + 28) - v7;
      if ( (unsigned int)v7 < v8 )
      {
        v9 = 4 * v7;
        v10 = v8 - (unsigned int)v7;
        while ( 1 )
        {
          v9 += 4LL;
          *(_BYTE *)(*(_QWORD *)(v6 + 112) + v9 - 1) &= ~0x20u;
          if ( !--v10 )
            break;
          v6 = v16;
        }
      }
      *((_QWORD *)v2 + 457) = 0LL;
      XEPALOBJ::vUpdateTime((XEPALOBJ *)&v16);
      *(_DWORD *)(*(_QWORD *)(v14[0] + 976LL) + 152LL) |= 0xFu;
      SEMOBJ<13>::vUnlock(&v11);
    }
    DEVLOCKOBJ::~DEVLOCKOBJ(v15);
    if ( v5 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v5);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v12);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v13);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
  return 0LL;
}
