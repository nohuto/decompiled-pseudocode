/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030DDA0
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14020EEF8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1400B72E8 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1400BA59C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1400FE5E4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x140113AD4 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140113D2C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140145FC8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1401E3718 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030EA30 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, HDEV a2, unsigned int a3)
{
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v9; // r15
  struct PFF *v10; // rbx
  BOOL v11; // esi
  signed __int32 v12; // ett
  HSEMAPHORE *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  signed __int32 v17; // ett
  __int64 *v18; // rcx
  __int64 v19; // rdx
  struct PFF **v20; // rdx
  signed __int32 v21; // ett
  signed __int32 v22; // ett
  size_t Size; // [rsp+30h] [rbp-79h]
  struct DHPDEV__ *v24; // [rsp+48h] [rbp-61h]
  struct PFT *v25; // [rsp+50h] [rbp-59h]
  HSEMAPHORE v26; // [rsp+90h] [rbp-19h] BYREF
  HSEMAPHORE v27; // [rsp+98h] [rbp-11h] BYREF
  HSEMAPHORE v28; // [rsp+A0h] [rbp-9h] BYREF
  HSEMAPHORE v29; // [rsp+A8h] [rbp-1h] BYREF
  __int64 *v30[10]; // [rsp+B0h] [rbp+7h] BYREF
  struct PFF **v31; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+128h] [rbp+7Fh] BYREF

  v31 = 0LL;
  if ( ScrutinizeFontLoad(3u, 0LL) < 0 )
    return 1LL;
  v9 = *(_QWORD *)(W32GetSessionState(v7, v6) + 96) + 4872LL;
  SEMOBJ<17>::SEMOBJ<17>(&v26, v9);
  v10 = DEVICE_PFTOBJ::pPFFGet(this, (unsigned __int64)a2, &v31);
  SEMOBJ<17>::vUnlock(&v26);
  v11 = v10 != 0LL;
  if ( !v10 )
  {
    v25 = *(struct PFT **)this;
    v24 = (struct DHPDEV__ *)*((_QWORD *)a2 + 223);
    LODWORD(Size) = 0;
    v32 = 0LL;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v30,
      a3,
      0LL,
      0,
      0,
      0LL,
      Size,
      0LL,
      a2,
      v24,
      v25,
      0,
      0,
      (struct FNTCHECKSUM *)&v32,
      0LL,
      0LL,
      0);
    if ( v30[0] )
    {
      if ( (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v30, a2, a3) )
      {
        SEMOBJ<17>::SEMOBJ<17>(&v28, v9);
        if ( !DEVICE_PFTOBJ::pPFFGet(this, (unsigned __int64)a2, &v31) && ((_DWORD)a2[10] & 0x40) == 0 )
        {
          if ( (unsigned int)PFFOBJ::bAddHash(v30, 0LL, v14) )
          {
            v18 = v30[0];
            v11 = 1;
            v19 = *(_QWORD *)this;
            if ( (*((_DWORD *)v30[0] + 13) & 0x200) == 0 )
              ++*(_DWORD *)(v19 + 32);
            ++*(_DWORD *)(v19 + 28);
            v20 = v31;
            if ( *v31 )
              *((_QWORD *)*v31 + 2) = v18;
            v18[1] = (__int64)*v20;
            v18[2] = 0LL;
            *v20 = (struct PFF *)v18;
            PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v30);
            *((_DWORD *)a2 + 887) = a3;
            _m_prefetchw(a2 + 10);
            do
              v21 = *((_DWORD *)a2 + 10);
            while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 10, v21 | 0x40, v21) );
          }
          else
          {
            PFFOBJ::vRemoveHash((PFFOBJ *)v30, v15, v16);
            _m_prefetchw(a2 + 10);
            do
              v17 = *((_DWORD *)a2 + 10);
            while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 10, v17 | 0x40, v17) );
          }
        }
        v13 = &v28;
      }
      else
      {
        SEMOBJ<17>::SEMOBJ<17>(&v27, v9);
        if ( ((_DWORD)a2[10] & 0x40) == 0 )
        {
          _m_prefetchw(a2 + 10);
          do
            v12 = *((_DWORD *)a2 + 10);
          while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 10, v12 | 0x40, v12) );
        }
        v13 = &v27;
      }
    }
    else
    {
      SEMOBJ<17>::SEMOBJ<17>(&v29, v9);
      if ( ((_DWORD)a2[10] & 0x40) == 0 )
      {
        _m_prefetchw(a2 + 10);
        do
          v22 = *((_DWORD *)a2 + 10);
        while ( v22 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 10, v22 | 0x40, v22) );
      }
      v13 = &v29;
    }
    SEMOBJ<17>::vUnlock(v13);
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v30);
  }
  return v11;
}
