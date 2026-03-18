/*
 * XREFs of EngMapFontFileFDInternal @ 0x1400B39CC
 * Callers:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400B25CC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1400B2790 (-ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400B29FC (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B36C4 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14019EECC (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1401B23A8 (-MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     NtGdiGetFontFileData @ 0x1401B7450 (NtGdiGetFontFileData.c)
 *     ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ @ 0x14021E520 (-TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140220F04 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     EngMapFontFileFD @ 0x1403033E0 (EngMapFontFileFD.c)
 * Callees:
 *     ??1AttachProcessObj@Gre@@QEAA@XZ @ 0x140114714 (--1AttachProcessObj@Gre@@QEAA@XZ.c)
 *     ?Attach@AttachProcessObj@Gre@@QEAAXW4Mode@12@@Z @ 0x1401147E8 (-Attach@AttachProcessObj@Gre@@QEAAXW4Mode@12@@Z.c)
 *     ?vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z @ 0x14019F500 (-vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14019F58C (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z @ 0x1401B1BF4 (-bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z.c)
 *     ?MapViewOfSectionToFontDriverProcess@@YA_NPEAUFILEVIEW@@@Z @ 0x1401BC10C (-MapViewOfSectionToFontDriverProcess@@YA_NPEAUFILEVIEW@@@Z.c)
 *     ?bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1403047F4 (-bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall EngMapFontFileFDInternal(struct FILEVIEW *a1, _QWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v7; // esi
  int v8; // r15d
  Gre::Base *v9; // rcx
  struct _FAST_MUTEX **v10; // r14
  _QWORD *v11; // rbx
  bool v13; // al
  int Section; // ebx
  unsigned int v15; // ebx
  _BYTE v17[80]; // [rsp+30h] [rbp-69h] BYREF
  _OWORD v18[3]; // [rsp+80h] [rbp-19h] BYREF
  char v19; // [rsp+B0h] [rbp+17h]

  memset_0(v17, 0, sizeof(v17));
  v7 = 1;
  v8 = 1;
  v10 = (struct _FAST_MUTEX **)Gre::Base::Globals(v9);
  KeAcquireGuardedMutex(*v10 + 26);
  v11 = (_QWORD *)((char *)a1 + 80);
  if ( *((_QWORD *)a1 + 2) )
  {
    ++*((_DWORD *)a1 + 25);
    v8 = 0;
  }
  else
  {
    if ( !*v11 )
    {
      KeReleaseGuardedMutex(*v10 + 26);
      return 0LL;
    }
    if ( *((_QWORD *)a1 + 4) )
    {
      v13 = MapViewOfSectionToFontDriverProcess(a1);
      v7 = v13;
      if ( v13 )
        *((_DWORD *)a1 + 25) = 1;
      v8 = 0;
    }
  }
  KeReleaseGuardedMutex(*v10 + 26);
  if ( !v8 )
  {
LABEL_22:
    if ( v7 )
    {
      if ( a2 )
        *a2 = *((_QWORD *)a1 + 2);
      if ( a3 )
        *a3 = *((_DWORD *)a1 + 6);
    }
    return v7;
  }
  memset(v18, 0, sizeof(v18));
  v19 = 0;
  if ( a4 )
    Gre::AttachProcessObj::Attach(v18, 0LL);
  Section = bCreateSection(*v11, v17, 0LL, (unsigned int)(*((_BYTE *)a1 + 44) != 0) + 1);
  Gre::AttachProcessObj::~AttachProcessObj((Gre::AttachProcessObj *)v18);
  if ( Section )
  {
    if ( !MapViewOfSectionToFontDriverProcess((struct FILEVIEW *)v17) )
    {
      vUnreferenceFileviewSection((struct FILEVIEW *)v17);
      return 0LL;
    }
    KeAcquireGuardedMutex(*v10 + 26);
    ++*((_DWORD *)a1 + 25);
    if ( *((_QWORD *)a1 + 2) )
    {
      v15 = 0;
    }
    else
    {
      v15 = bMapRoutine(a1, v17, 1LL);
      v7 = v15;
    }
    KeReleaseGuardedMutex(*v10 + 26);
    if ( !v15 )
      vUnmapFileFD((struct FILEVIEW *)v17, 1);
    goto LABEL_22;
  }
  return 0;
}
