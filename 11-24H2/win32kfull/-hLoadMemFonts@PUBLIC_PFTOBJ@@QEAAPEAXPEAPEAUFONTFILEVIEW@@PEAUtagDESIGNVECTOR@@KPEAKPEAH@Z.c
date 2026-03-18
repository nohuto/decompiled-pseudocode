/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAUFONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x140113770
 * Callers:
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x140115154 (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14005EDEC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1400B72E8 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B764C (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     UmfdLoadFontFileView @ 0x1400B76D4 (UmfdLoadFontFileView.c)
 *     ??$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B7A3C (--$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1400FDD28 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1400FE5E4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1400FECC0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x140113AD4 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140113D2C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140145FC8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x140146918 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1401E3718 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::hLoadMemFonts(
        struct PFT **this,
        struct FONTFILEVIEW **a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6)
{
  struct FONTFILEVIEW **v6; // rbx
  struct FONTFILEVIEW *v7; // rdx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 SessionState; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  struct PFT *v33; // rcx
  struct PFF **v34; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  struct PFF **v36; // [rsp+90h] [rbp-80h] BYREF
  char v37[4]; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v38; // [rsp+9Ch] [rbp-74h]
  unsigned int v39[2]; // [rsp+A0h] [rbp-70h] BYREF
  HDEV v40; // [rsp+A8h] [rbp-68h] BYREF
  int *v41; // [rsp+B0h] [rbp-60h] BYREF
  __int64 *v42[3]; // [rsp+B8h] [rbp-58h] BYREF
  char v43[8]; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-38h] BYREF
  wchar_t Dst[32]; // [rsp+E0h] [rbp-30h] BYREF

  v6 = a2;
  v7 = *a2;
  v41 = a6;
  v38 = a4;
  v11 = 0LL;
  *(_QWORD *)v43 = *((_QWORD *)v7 + 2);
  *(_DWORD *)v37 = *((_DWORD *)v7 + 6);
  v36 = 0LL;
  if ( (int)ScrutinizeFontLoad(1LL) < 0 )
  {
    Win32FreePool(v6);
    return 0LL;
  }
  else
  {
    v40 = 0LL;
    UmfdHostLifeTimeManager::EnsureUmfdHost(v13, v12, v14);
    SessionState = W32GetSessionState(v16, v15, v17);
    SEMOBJ<25>::SEMOBJ<25>((HSEMAPHORE *)&v44, *(_QWORD *)(SessionState + 96) + 4872LL);
    *(_QWORD *)v39 = 0LL;
    UmfdLoadFontFileView(0LL, 0LL, v6, 1u, (char)v43, (char)v37, a3, a4, (__int64 *)&v36, &v40, v39, 1, 0LL);
    if ( v44 )
      GreReleaseSemaphoreCommon<25,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v44);
    if ( v36 )
    {
      v19 = (*((__int64 (__fastcall **)(struct PFF **, __int64, _QWORD))v40 + 386))(v36, 2LL, 0LL);
      v23 = v19;
      if ( v19 )
      {
        if ( v19 != -1 )
        {
          *a5 = v19;
          v24 = W32GetSessionState(v21, v20, v22);
          swprintf_s(
            Dst,
            0x1EuLL,
            L"MEMORY-%u",
            (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v24 + 96) + 24024LL)));
          v25 = -1LL;
          do
            ++v25;
          while ( Dst[v25] );
          LODWORD(Size) = a4;
          PFFMEMOBJ::PFFMEMOBJ(
            (PFFMEMOBJ *)v42,
            v23,
            Dst,
            v25 + 1,
            1u,
            a3,
            Size,
            (unsigned __int64)v36,
            v40,
            0LL,
            *this,
            0x10u,
            0x30u,
            (struct FNTCHECKSUM *)v39,
            v6,
            0LL,
            0);
          v26 = v42[0];
          if ( v42[0] )
          {
            v6 = 0LL;
            *v41 = 0;
            if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v42, Dst, v23, 0LL, 0LL) )
            {
              v30 = W32GetSessionState(v28, v27, v29);
              SEMOBJ<17>::SEMOBJ<17>((HSEMAPHORE *)&v41, *(_QWORD *)(v30 + 96) + 4872LL);
              if ( (unsigned int)PFFOBJ::bAddHash(v42, 0LL, v31) )
              {
                v36 = 0LL;
                if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, (int)v25 + 1, 1, a3, v38, &v36, 0) )
                {
                  v33 = *this;
                  if ( (*((_DWORD *)v26 + 13) & 0x200) == 0 )
                    ++*((_DWORD *)v33 + 8);
                  ++*((_DWORD *)v33 + 7);
                  v34 = v36;
                  if ( *v36 )
                    *((_QWORD *)*v36 + 2) = v26;
                  v26[1] = (__int64)*v34;
                  v26[2] = 0LL;
                  *v34 = (struct PFF *)v26;
                  PFFOBJ::vSetUniqueness((PFFOBJ *)v42);
                  PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v42);
                  v11 = *((unsigned int *)v26 + 37);
                }
              }
              else
              {
                PFFOBJ::vRemoveHash((PFFOBJ *)v42);
              }
              SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v41);
            }
          }
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v42);
        }
      }
    }
    if ( v6 )
      Win32FreePool(v6);
    return v11;
  }
}
