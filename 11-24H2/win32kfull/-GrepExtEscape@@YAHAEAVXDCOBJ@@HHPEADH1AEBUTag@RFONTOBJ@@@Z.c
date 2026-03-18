/*
 * XREFs of ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1400C2818
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C2548 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1403268F4 (-GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bPrinter@XDCOBJ@@QEBAHXZ @ 0x1400C210C (-bPrinter@XDCOBJ@@QEBAHXZ.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1400C265C (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1400C26FC (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVXDCOBJ@@@Z @ 0x1400C27C4 (-fBlockExtEscape@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1400C384C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1401F4F38 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x140325F00 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140326C00 (-iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140326F78 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x1403275F8 (-iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x140331CAC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepExtEscape(
        struct XDCOBJ *this,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6,
        const struct RFONTOBJ::Tag *a7)
{
  char *v7; // r14
  __int64 v11; // rcx
  HDEV v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // r8
  int v15; // r15d
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // r10
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, char *, unsigned int, char *); // r11
  struct _SURFOBJ *v21; // r11
  unsigned int v22; // ebx
  unsigned int v24; // eax
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // edx
  HDEV v32; // rcx
  HDEV DeviceHdev; // rdx
  __int64 v34; // r10
  int v35; // [rsp+48h] [rbp-200h]
  HDEV v36; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-1F0h] BYREF
  int v38; // [rsp+60h] [rbp-1E8h]
  int v39; // [rsp+64h] [rbp-1E4h]
  __int64 v40; // [rsp+68h] [rbp-1E0h] BYREF
  struct _RECTL v41; // [rsp+70h] [rbp-1D8h] BYREF
  _BYTE v42[32]; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-1A8h]
  HDC v44[18]; // [rsp+F0h] [rbp-158h] BYREF
  __int128 v45; // [rsp+180h] [rbp-C8h] BYREF
  __int128 v46; // [rsp+190h] [rbp-B8h]
  _BYTE v47[96]; // [rsp+1A0h] [rbp-A8h] BYREF

  v7 = a4;
  *(_QWORD *)&v41.left = a7;
  v11 = *(_QWORD *)this;
  v12 = *(HDEV *)(v11 + 48);
  v36 = v12;
  v13 = 0;
  if ( !*((_DWORD *)v12 + 3) && a2 != 4354 )
    return 0LL;
  v14 = *((unsigned int *)v12 + 650);
  v15 = 0;
  v35 = 0;
  if ( a2 == 8 )
  {
    if ( a3 >= 4 )
    {
      v35 = *(_DWORD *)a4;
      v38 = *(_DWORD *)a4;
      v15 = v38;
      if ( (unsigned int)(v38 - 4352) > 1 || (v14 & 8) == 0 )
        goto LABEL_5;
    }
    return 0LL;
  }
  if ( a2 - 4352 > 1 )
  {
    if ( a2 == 4354 )
    {
      if ( !*(_DWORD *)(v11 + 32) )
        return iWndObjSetupExtEscape(this, 0x1102u, a3, a4, a5, a6);
    }
    else if ( a2 != 3075 && (a2 != 4124 || (unsigned int)UserUnsafeIsCurrentProcessDwm(v11, 4354LL, v14)) )
    {
LABEL_5:
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v44);
      DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v44, this);
      if ( (unsigned int)fBlockExtEscape(this) )
      {
LABEL_34:
        DEVLOCKOBJ::~DEVLOCKOBJ(v44);
        return v13;
      }
      v16 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 32LL) )
      {
        if ( (unsigned int)XDCOBJ::bPrinter(this) )
        {
          if ( !v27 )
            goto LABEL_7;
          v28 = *(_QWORD *)(v27 + 40) == *((_QWORD *)v12 + 223);
        }
        else
        {
          if ( !v27 )
            goto LABEL_34;
          v28 = *(_WORD *)(v27 + 100) == 3;
        }
        if ( !v28 )
          goto LABEL_34;
      }
LABEL_7:
      v45 = 0LL;
      v46 = 0LL;
      v37 = 0LL;
      if ( a2 == 25 )
      {
        if ( *((int *)v12 + 452) < 0 )
        {
          DC::QuickInitXform(v16, &v40, 516LL);
          v37 = v40;
          if ( a3 != 20 )
            goto LABEL_34;
          v45 = *(_OWORD *)v7;
          LODWORD(v46) = *((_DWORD *)v7 + 4);
          *((_QWORD *)&v46 + 1) = &v37;
          v7 = (char *)&v45;
          a3 = 32;
        }
        v29 = *(_QWORD *)this;
        v30 = *(_QWORD *)(*(_QWORD *)this + 496LL);
        if ( v30 && (*(_DWORD *)(v30 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v12 + 452) < 0) )
        {
          v31 = *(_DWORD *)(v29 + 2108);
          *(_DWORD *)v7 -= *(_DWORD *)(v29 + 2104);
          *((_DWORD *)v7 + 1) -= v31;
        }
      }
      if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v15 - 256) <= 0x2FE )
      {
        v24 = DoFontManagement(this, a2, a3, v7, a5, a6, *(const struct RFONTOBJ::Tag **)&v41.left);
LABEL_24:
        v13 = v24;
        goto LABEL_34;
      }
      if ( a2 - 4119 <= 1 || a2 == 8 && (unsigned int)(v15 - 4119) <= 1 )
      {
        v24 = iCheckPassthroughImage(this, (struct PDEVOBJ *)&v36, a2, a3, v7, a5, a6);
        goto LABEL_24;
      }
      if ( (unsigned int)XDCOBJ::bValidSurf(this) && !a6 )
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 496LL) + 92LL);
      v17 = *(_QWORD *)this;
      v18 = (*(_QWORD *)(*(_QWORD *)this + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 496LL) != 0LL);
      v19 = v18;
      if ( ((_DWORD)v12[10] & 0x20000) != 0 && a2 == 8 && (v35 == 4353 || v35 == 4352) )
      {
        v32 = *(HDEV *)(v17 + 48);
        v41 = *(struct _RECTL *)(v17 + 1032);
        DeviceHdev = hdevFindDeviceHdev(v32, &v41, 0LL);
        v19 = v18;
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(*(_QWORD *)this + 496LL) == *((_QWORD *)v12 + 318) )
          {
            v34 = *((_QWORD *)DeviceHdev + 318);
            if ( v34 )
              v19 = v34 + 24;
            else
              v19 = 0LL;
          }
          v12 = DeviceHdev;
          v36 = DeviceHdev;
        }
      }
      v20 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, char *, unsigned int, char *))*((_QWORD *)v12 + 359);
      if ( !v20 )
        goto LABEL_34;
      if ( v19 )
      {
        v22 = v20(v19, a2, a3, v7, a5, a6);
      }
      else
      {
        ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v47);
        SURFFAKEOBJ::SURFFAKEOBJ(
          (SURFFAKEOBJ *)v42,
          *(HDEV *)(*(_QWORD *)this + 48LL),
          *(struct DHPDEV__ **)(*(_QWORD *)this + 24LL));
        if ( !v43 )
        {
          SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v42);
          ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v47);
          goto LABEL_34;
        }
        v21 = (struct _SURFOBJ *)((v43 + 24) & -(__int64)(v43 != 0));
        if ( a2 == 17 && a3 >= 2 )
        {
          *(_DWORD *)(*(_QWORD *)this + 2092LL) = *(unsigned __int16 *)v7;
          PDEVOBJ::Escape((PDEVOBJ *)&v36, v21, 0x11u, a3, v7, a5, a6);
          SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v42);
          ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v47);
          DEVLOCKOBJ::~DEVLOCKOBJ(v44);
          return 1LL;
        }
        if ( a2 == 33 && a3 >= 2 )
        {
          v25 = *(unsigned __int16 *)v7;
          v39 = v25;
          v26 = *(_QWORD *)this;
          if ( v25 )
            *(_DWORD *)(v26 + 36) |= 0x400u;
          else
            *(_DWORD *)(v26 + 36) &= ~0x400u;
          v22 = 1;
        }
        else
        {
          v22 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *, unsigned int, char *))v12 + 359))(
                  (v43 + 24) & -(__int64)(v43 != 0),
                  a2,
                  a3,
                  v7,
                  a5,
                  a6);
        }
        SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v42);
        ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v47);
      }
      DEVLOCKOBJ::~DEVLOCKOBJ(v44);
      return v22;
    }
    return 0LL;
  }
  if ( (v14 & 8) != 0 || *(_DWORD *)(v11 + 32) )
    return 0LL;
  return iOpenGLExtEscape(this, a2, a3, a4, a5, a6);
}
