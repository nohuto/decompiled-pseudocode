/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAUFONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x140221180
 * Callers:
 *     NtGdiAddRemoteFontToDC @ 0x140303420 (NtGdiAddRemoteFontToDC.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x140327AD0 (NtGdiAddRemoteMMInstanceToDC.c)
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
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1400FECC0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x140113AD4 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140113D2C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140145FC8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401B7374 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1401E3718 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1402FEB90 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadRemoteFonts(
        PUBLIC_PFTOBJ *this,
        struct XDCOBJ *a2,
        struct FONTFILEVIEW **a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        struct PFF **a6,
        int *a7)
{
  struct FONTFILEVIEW **v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  char *v15; // rdi
  char *v16; // r14
  char *v17; // r9
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // ecx
  __int64 SessionState; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // r14
  struct PFF *v29; // rdi
  struct PFF **v30; // r9
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned int v37; // r8d
  PUBLIC_PFTOBJ *v38; // r14
  __int64 v39; // rcx
  struct PFF **v40; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  unsigned int v43; // [rsp+90h] [rbp-80h]
  struct PFF **v44; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v45[2]; // [rsp+A0h] [rbp-70h] BYREF
  HDEV v46; // [rsp+A8h] [rbp-68h] BYREF
  unsigned __int64 v47; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-58h] BYREF
  int *v49; // [rsp+C0h] [rbp-50h] BYREF
  PUBLIC_PFTOBJ *v50; // [rsp+C8h] [rbp-48h]
  struct FONTFILEVIEW **v51; // [rsp+D0h] [rbp-40h] BYREF
  struct PFF *v52[3]; // [rsp+D8h] [rbp-38h] BYREF
  XDCOBJ *v53; // [rsp+F0h] [rbp-20h]
  char v54[16]; // [rsp+F8h] [rbp-18h] BYREF
  __int128 v55; // [rsp+108h] [rbp-8h]
  char v56; // [rsp+118h] [rbp+8h] BYREF
  wchar_t Dst[32]; // [rsp+128h] [rbp+18h] BYREF

  v7 = a3;
  v44 = a6;
  v8 = 0;
  v49 = a7;
  v9 = a4;
  v53 = a2;
  v50 = this;
  v51 = a3;
  v47 = 0LL;
  if ( Src )
    v10 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v10 = 0;
  v43 = v10;
  *(_OWORD *)v54 = 0LL;
  v55 = 0LL;
  if ( ScrutinizeFontLoad(2u, 0LL) < 0 )
    goto LABEL_37;
  if ( (unsigned int)v9 > 4 )
  {
    v14 = PALLOCMEM(16 * (int)v9, 1986422343LL);
    v15 = (char *)v14;
    if ( v14 )
    {
      v16 = (char *)(v14 + 32);
      goto LABEL_9;
    }
LABEL_37:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v51);
    return 0LL;
  }
  v15 = v54;
  v16 = &v56;
  if ( (_DWORD)v9 )
  {
LABEL_9:
    v17 = v16;
    v13 = v15 - (char *)v7;
    v11 = (__int64)v7;
    v18 = v9;
    do
    {
      *(_QWORD *)(v13 + v11) = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
      v19 = *(_QWORD *)v11;
      v11 += 8LL;
      v12 = *(unsigned int *)(v19 + 24);
      *(_DWORD *)v17 = v12;
      v17 += 4;
      --v18;
    }
    while ( v18 );
  }
  v46 = 0LL;
  UmfdHostLifeTimeManager::EnsureUmfdHost(v12, v11, v13);
  SessionState = W32GetSessionState(v21, v20);
  SEMOBJ<25>::SEMOBJ<25>((HSEMAPHORE *)&v48, *(_QWORD *)(SessionState + 96) + 4872LL);
  *(_QWORD *)v45 = 0LL;
  UmfdLoadFontFileView(0LL, 0LL, v7, v9, (char)v15, (char)v16, Src, v10, (__int64 *)&v47, &v46, v45, 1, 0LL);
  if ( v48 )
    GreReleaseSemaphoreCommon<25,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v48);
  if ( v15 != v54 )
    Win32FreePool(v15);
  if ( v47 )
  {
    v23 = (*((__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))v46 + 386))(v47, 2LL, 0LL);
    v26 = v23;
    if ( v23 )
    {
      if ( v23 != -1 )
      {
        v27 = W32GetSessionState(v25, v24);
        swprintf_s(
          Dst,
          0x1EuLL,
          L"REMOTE-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v27 + 96) + 24028LL)));
        v28 = -1LL;
        do
          ++v28;
        while ( Dst[v28] );
        LODWORD(Size) = v43;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v52,
          v26,
          Dst,
          v28 + 1,
          v9,
          Src,
          Size,
          v47,
          v46,
          0LL,
          *(struct PFT **)v50,
          0x20u,
          0x20u,
          (struct FNTCHECKSUM *)v45,
          v7,
          (struct _UNIVERSAL_FONT_ID *)v44,
          0);
        v29 = v52[0];
        if ( v52[0] )
        {
          v30 = v44;
          v7 = 0LL;
          *v49 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                               (PFFMEMOBJ *)v52,
                               Dst,
                               v26,
                               (struct _UNIVERSAL_FONT_ID *)v30,
                               0LL) )
          {
            v33 = W32GetSessionState(v32, v31);
            SEMOBJ<17>::SEMOBJ<17>((HSEMAPHORE *)&v49, *(_QWORD *)(v33 + 96) + 4872LL);
            if ( (unsigned int)PFFOBJ::bAddHash((__int64 **)v52, 0LL, v34) )
            {
              v37 = v28 + 1;
              v38 = v50;
              v44 = 0LL;
              if ( !PUBLIC_PFTOBJ::pPFFGet(v50, Dst, v37, v9, Src, v43, &v44, 0)
                && (unsigned int)XDCOBJ::bAddRemoteFont(v53, v29) )
              {
                v8 = 1;
                v39 = *(_QWORD *)v38;
                if ( (*((_DWORD *)v29 + 13) & 0x200) == 0 )
                  ++*(_DWORD *)(v39 + 32);
                ++*(_DWORD *)(v39 + 28);
                v40 = v44;
                if ( *v44 )
                  *((_QWORD *)*v44 + 2) = v29;
                *((_QWORD *)v29 + 1) = *v40;
                *((_QWORD *)v29 + 2) = 0LL;
                *v40 = v29;
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v52);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v52, v35, v36);
            }
            SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v49);
          }
        }
        else
        {
          v7 = v51;
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v52);
      }
    }
  }
  if ( v7 )
    Win32FreePool(v7);
  return v8;
}
