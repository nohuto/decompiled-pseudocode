/*
 * XREFs of ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x14030F080
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1401E60CC (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x140338800 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140029210 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z @ 0x1401D99B8 (--0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepSetSystemPaletteUse(struct XDCOBJ *a1, int a2)
{
  int v3; // edi
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  int v6; // r14d
  _DWORD *v7; // rax
  int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rdx
  int v18; // ecx
  unsigned int v19; // r8d
  __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 i; // r8
  __int64 v24; // [rsp+30h] [rbp-89h] BYREF
  _BYTE v25[8]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v26; // [rsp+40h] [rbp-79h] BYREF
  HDC v27[24]; // [rsp+50h] [rbp-69h] BYREF
  _DWORD *v28; // [rsp+120h] [rbp+67h] BYREF
  int v29; // [rsp+128h] [rbp+6Fh]
  __int64 v30; // [rsp+130h] [rbp+77h] BYREF
  HSEMAPHORE v31; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v3 = 1;
  v4 = 0;
  v5 = (_QWORD *)*((_QWORD *)a1 + 2);
  v6 = 0;
  v30 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v26);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v25, (struct PDEVOBJ *)&v30);
  NEEDPDEVPOINTERLOCK::NEEDPDEVPOINTERLOCK((NEEDPDEVPOINTERLOCK *)&v24, *(_QWORD **)(*(_QWORD *)a1 + 48LL));
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v27, (struct PDEVOBJ *)&v30);
  v28 = *(_DWORD **)(v30 + 1792);
  if ( (*(_DWORD *)(v30 + 2156) & 0x100) != 0 )
  {
    SEMOBJ<13>::SEMOBJ<13>(&v31, v5);
    v7 = v28;
    v8 = v28[6];
    if ( (v8 & 0x1000) != 0 )
      v4 = 2;
    else
      v4 = (v8 & 0x10000 | 0x8000u) >> 15;
    if ( v3 == 1 )
    {
      if ( (v8 & 0x11000) != 0 )
      {
        v9 = v5[471];
        v10 = v28[15] >> 1;
        v11 = 10LL;
        if ( v10 > 0xA || (v11 = v10) != 0 )
        {
          v12 = 0LL;
          v13 = (unsigned int)v11;
          do
          {
            v14 = *((_QWORD *)v7 + 14);
            v29 = *(_DWORD *)(v12 + *(_QWORD *)(v9 + 112));
            HIBYTE(v29) = 48;
            *(_DWORD *)(v12 + v14) = v29;
            v12 += 4LL;
            v7 = v28;
            --v13;
          }
          while ( v13 );
        }
        else
        {
          v11 = 0LL;
        }
        LODWORD(v15) = v7[7];
        LODWORD(v16) = 20;
        if ( (_DWORD)v11 )
        {
          while ( 1 )
          {
            v16 = (unsigned int)(v16 - 1);
            v15 = (unsigned int)(v15 - 1);
            v17 = *((_QWORD *)v7 + 14);
            v29 = *(_DWORD *)(*(_QWORD *)(v9 + 112) + 4 * v16);
            HIBYTE(v29) = 48;
            *(_DWORD *)(v17 + 4 * v15) = v29;
            if ( !--v11 )
              break;
            v7 = v28;
          }
        }
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xFu;
        v28[6] &= 0xFFFEEFFF;
        XEPALOBJ::vUpdateTime((XEPALOBJ *)&v28);
        v6 = 1;
      }
      goto LABEL_29;
    }
    if ( v3 == 2 )
    {
      v18 = v28[7];
      if ( !v18 )
      {
        v4 = 0;
LABEL_29:
        SEMOBJ<13>::vUnlock(&v31);
        if ( v6 && (*(_DWORD *)(v30 + 40) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v30 + 1752) )
            (*(void (__fastcall **)(_QWORD, _DWORD **, _QWORD, _QWORD, _DWORD))(v30 + 1752))(
              *(_QWORD *)(*(_QWORD *)(v30 + 24) + 1784LL),
              &v28,
              0LL,
              0LL,
              v28[7]);
          else
            v4 = 0;
        }
        goto LABEL_34;
      }
      v19 = 1;
      if ( (unsigned int)(v18 - 1) > 1 )
      {
        do
        {
          v20 = v19++;
          *(_BYTE *)(*((_QWORD *)v7 + 14) + 4 * v20 + 3) = 0;
          v7 = v28;
        }
        while ( v19 < v28[7] - 1 );
      }
      v21 = v7[6] & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < v28[7]; v7 = v28 )
      {
        *(_BYTE *)(*((_QWORD *)v7 + 14) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v21 = v7[6] & 0xFFFEEFFF | 0x10000;
    }
    v7[6] = v21;
    goto LABEL_29;
  }
LABEL_34:
  DEVLOCKOBJ::~DEVLOCKOBJ(v27);
  if ( v24 )
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v24);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v25);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v26);
  return v4;
}
