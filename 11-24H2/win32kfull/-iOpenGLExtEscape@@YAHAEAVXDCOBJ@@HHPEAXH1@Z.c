/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140326F78
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1400C2818 (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140023F40 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1400596DC (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400CE708 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x14010EFB4 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1401960E4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1401C6E60 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401DE154 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140325BB8 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x140325D54 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVEXCLUDEWNDOBJ@@QEAA@XZ @ 0x140325E78 (--1DEVEXCLUDEWNDOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x140325E9C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140326B28 (-LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1403277E0 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x14032EAE0 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x140331CAC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct XDCOBJ *a1, int a2, signed int a3, void *a4, int a5, void *a6)
{
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // esi
  __int64 v11; // r8
  __int64 v12; // rcx
  struct SURFACE *v14; // r13
  HDEV v15; // rcx
  HDEV DeviceHdev; // rax
  ULONG v17; // ecx
  WNDOBJ *v18; // rdx
  HDC *v19; // rdi
  __int64 v20; // r9
  int v21; // r13d
  ULONG v22; // ecx
  XLATE *v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned __int16 *v27; // rdx
  int Xlate; // eax
  int v29; // eax
  __int64 v30; // rcx
  struct REGION *v31; // rax
  struct REGION *v32; // rax
  int v34; // [rsp+34h] [rbp-8C4h] BYREF
  HDEV v35; // [rsp+38h] [rbp-8C0h] BYREF
  XLATE *v36; // [rsp+40h] [rbp-8B8h] BYREF
  int v37; // [rsp+48h] [rbp-8B0h]
  struct SURFACE *v38; // [rsp+50h] [rbp-8A8h]
  _QWORD *v39; // [rsp+58h] [rbp-8A0h]
  void *Src; // [rsp+60h] [rbp-898h]
  WNDOBJ *v41; // [rsp+68h] [rbp-890h] BYREF
  HDEV *Parameter; // [rsp+70h] [rbp-888h] BYREF
  char *v43; // [rsp+78h] [rbp-880h]
  int v44; // [rsp+80h] [rbp-878h]
  signed int v45; // [rsp+84h] [rbp-874h]
  void *v46; // [rsp+88h] [rbp-870h]
  void *v47; // [rsp+90h] [rbp-868h]
  int v48; // [rsp+98h] [rbp-860h]
  unsigned int v49; // [rsp+9Ch] [rbp-85Ch]
  struct _RECTL v50; // [rsp+A0h] [rbp-858h] BYREF
  HDC v51[4]; // [rsp+B0h] [rbp-848h] BYREF
  char v52; // [rsp+D0h] [rbp-828h]
  WNDOBJ *pwo; // [rsp+140h] [rbp-7B8h]
  void *v54; // [rsp+150h] [rbp-7A8h] BYREF
  int v55; // [rsp+158h] [rbp-7A0h]
  int v56; // [rsp+15Ch] [rbp-79Ch]
  _DWORD v57[8]; // [rsp+160h] [rbp-798h] BYREF
  __int64 v58; // [rsp+180h] [rbp-778h]
  char v59; // [rsp+190h] [rbp-768h] BYREF
  char v60[1152]; // [rsp+230h] [rbp-6C8h] BYREF
  unsigned __int16 v61[2]; // [rsp+6B0h] [rbp-248h] BYREF
  struct _RECTL v62; // [rsp+6B4h] [rbp-244h] BYREF

  Src = a4;
  v54 = a6;
  if ( (unsigned int)dword_140398BB8 > 5 && tlgKeywordOn((__int64)&dword_140398BB8, 0x400000000000LL) )
  {
    v34 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)&dword_140398BB8,
      byte_14036A1F7,
      v8,
      v9,
      (__int64)&v34);
  }
  v10 = 0;
  v37 = 0;
  v34 = 0;
  `vector constructor iterator'(v60, 72LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v12 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    EngSetLastError(6u);
LABEL_6:
    `vector destructor iterator'(v60, 72LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v36 = 0LL;
  v35 = *(HDEV *)(v12 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v51, a1, v11);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v52 & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_8;
  v14 = XDCOBJ::pSurfaceEff(a1);
  v38 = v14;
  if ( ((_DWORD)v35[10] & 0x20000) != 0 )
  {
    v15 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
    v50 = *(struct _RECTL *)(*(_QWORD *)a1 + 1032LL);
    DeviceHdev = hdevFindDeviceHdev(v15, &v50, (struct EWNDOBJ *)((unsigned __int64)pwo & -(__int64)(pwo != 0LL)));
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v35 + 318) )
      {
        v14 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 318);
        v38 = v14;
      }
      v35 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v35 + 359) || ((_DWORD)v35[10] & 0x8000) != 0 )
  {
LABEL_8:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ(v51);
    EXLATEOBJ::vAltUnlock(&v36);
    goto LABEL_6;
  }
  v39 = (_QWORD *)*((_QWORD *)a1 + 2);
  SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v50, v39);
  v41 = 0LL;
  v58 = 0LL;
  v57[0] = 0;
  v46 = 0LL;
  v49 = 0;
  Parameter = &v35;
  if ( v14 )
    v43 = (char *)v14 + 24;
  else
    v43 = 0LL;
  v44 = a2;
  v45 = a3;
  v48 = a5;
  v47 = v54;
  if ( a2 != 4352 )
  {
    v46 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v10 = v49;
    goto LABEL_73;
  }
  if ( (unsigned __int64)a3 >= 0x18 )
  {
    if ( (unsigned __int64)a3 > 0x98 )
    {
      v19 = (HDC *)PALLOCNOZ(a3, 1818718023LL);
      if ( !v19 )
      {
        v17 = 8;
        goto LABEL_24;
      }
    }
    else
    {
      v19 = (HDC *)&v59;
    }
    memmove(v19, Src, a3);
    if ( (*((_DWORD *)v19 + 1) & 4) != 0 )
    {
      v20 = *((unsigned int *)v19 + 2);
      if ( (unsigned int)v20 > 0x10 || (unsigned int)a3 < (unsigned __int64)(8 * v20 + 24) )
      {
        v22 = 8;
        goto LABEL_35;
      }
      v21 = LookUpWndobjs(a1, (struct DCOBJ *)v60, v19 + 3, v20);
      if ( v21 < 0 )
        goto LABEL_69;
    }
    else
    {
      v21 = v34;
    }
    if ( (*((_DWORD *)v19 + 1) & 2) != 0 )
    {
      if ( *((_DWORD *)v35 + 523) != 2 && *((_DWORD *)v35 + 523) != 3 )
        goto LABEL_40;
      v24 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      if ( v24 )
      {
        v25 = 16;
        if ( *((_DWORD *)v35 + 523) != 2 )
          v25 = 256;
        v26 = 0;
        v27 = v61;
        do
          *v27++ = v26++;
        while ( v26 < v25 );
        Xlate = EXLATEOBJ::bMakeXlate(&v36, v61, v24, (__int64)v38, v25, v25);
        v23 = 0LL;
        if ( Xlate )
          v23 = v36;
      }
      else
      {
        v23 = 0LL;
      }
      if ( !v23 )
LABEL_40:
        v23 = (XLATE *)(v39 + 569);
    }
    else
    {
      v23 = 0LL;
    }
    v19[2] = (HDC)v23;
    v29 = *((_DWORD *)v19 + 1);
    if ( (v29 & 4) != 0 )
      goto LABEL_62;
    if ( (v29 & 1) == 0 )
    {
      v19[1] = 0LL;
      goto LABEL_62;
    }
    v18 = pwo;
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v30 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v30 != *(_QWORD *)(*(_QWORD *)a1 + 496LL)
        && *(_QWORD *)(*(_QWORD *)(v30 + 48) + 24LL) != *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
LABEL_69:
        if ( (unsigned int)a3 > 0x98 )
          Win32FreePool(v19);
        goto LABEL_73;
      }
      v19[1] = (HDC)pwo;
LABEL_62:
      if ( pwo )
      {
        if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
        {
          v41 = pwo;
          EngControlSprites(pwo, 1u);
        }
      }
      else
      {
        v31 = XDCOBJ::prgnEffRao((DC **)a1);
        v54 = *(void **)((char *)v31 + 52);
        v55 = *((_DWORD *)v31 + 15);
        v56 = *((_DWORD *)v31 + 16);
        v32 = XDCOBJ::prgnEffRao((DC **)a1);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v61, v32, (struct ERECTL *)&v54);
        DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v57, a1, &v62);
      }
      ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 92LL);
      v46 = v19;
      if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      {
        v10 = v49;
        if ( (*((_DWORD *)v19 + 1) & 4) != 0 )
          v10 = (v21 << 16) | (unsigned __int16)v49;
      }
      goto LABEL_69;
    }
    v22 = 6;
LABEL_35:
    EngSetLastError(v22);
    goto LABEL_69;
  }
  v17 = 87;
LABEL_24:
  EngSetLastError(v17);
LABEL_73:
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v57, (__int64)v18);
  DEVEXCLUDEWNDOBJ::~DEVEXCLUDEWNDOBJ(&v41);
  if ( *(_QWORD *)&v50.left )
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      *(__int64 *)&v50.left);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ(v51);
  EXLATEOBJ::vAltUnlock(&v36);
  `vector destructor iterator'(v60, 72LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v10;
}
