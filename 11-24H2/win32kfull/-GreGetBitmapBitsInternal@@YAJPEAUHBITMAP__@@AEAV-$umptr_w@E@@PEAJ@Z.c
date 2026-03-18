/*
 * XREFs of ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x140029E58
 * Callers:
 *     NtGdiGetBitmapBits @ 0x14018AF20 (NtGdiGetBitmapBits.c)
 *     GreGetBitmapBits @ 0x14030DA38 (GreGetBitmapBits.c)
 * Callees:
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x140028D88 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBitmapBitsInternal(Gre::Base *a1, __int64 a2, unsigned int *a3)
{
  ULONG cjBits; // edi
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  __int64 v8; // rsi
  LONG v9; // ecx
  LONG v10; // edx
  HDEV v11; // rax
  __int64 v12; // rbx
  int v13; // ecx
  struct _SURFOBJ *v14; // rdx
  ULONG v15; // ecx
  unsigned int v16; // r14d
  struct _SURFOBJ *v17; // rdx
  void *v18; // rax
  POINTL pptlSrc; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  char v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+74h] [rbp-8Ch]
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v25[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v27[2]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v28[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  struct _SURFOBJ v32; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v33[32]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v34; // [rsp+130h] [rbp+30h]
  RECTL prclDest; // [rsp+138h] [rbp+38h] BYREF

  cjBits = 0;
  v7 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v26, v7);
  SURFREF::SURFREF((SURFREF *)v33, (HSURF)a1);
  v8 = v34;
  if ( !v34 || (*(_DWORD *)(v34 + 112) & 0x4000000) == 0 )
  {
    EngSetLastError(6u);
    goto LABEL_26;
  }
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  v9 = *(_DWORD *)(v34 + 56);
  v10 = *(_DWORD *)(v34 + 60);
  cjBits = v10
         * (((unsigned int)(*(_DWORD *)&gaulConvert[2 * *(unsigned int *)(v34 + 96)] * v9 + 15) >> 3) & 0x1FFFFFFE);
  if ( *(_QWORD *)a2 )
  {
    *(_OWORD *)&v32.dhsurf = 0LL;
    v32.dhpdev = *(DHPDEV *)(v34 + 40);
    v11 = *(HDEV *)(v34 + 48);
    v32.sizlBitmap.cx = v9;
    v32.sizlBitmap.cy = v10;
    prclDest.right = v9;
    prclDest.bottom = v10;
    v32.hdev = v11;
    memset(&v32.cjBits, 0, 40);
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v24 = *(_QWORD *)(v34 + 48);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v25, (struct PDEVOBJ *)&v24);
    v12 = 0LL;
    if ( v8 )
    {
      if ( v8 != -24 )
      {
        v13 = *(_DWORD *)(v8 + 112);
        if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
        {
          v12 = v8;
          GreLockDisplayDevice(*(_QWORD *)(v8 + 48));
        }
      }
    }
    v27[0] = 0LL;
    v14 = (struct _SURFOBJ *)(v34 + 24);
    if ( !v34 )
      v14 = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v27, v14) )
      goto LABEL_22;
    if ( *(_WORD *)(v34 + 100) == 3 )
    {
      v28[3] = 0;
      v31 = 0;
      v28[0] = *(_DWORD *)(v34 + 96);
      v28[1] = *(_DWORD *)(v34 + 56);
      v28[2] = *(_DWORD *)(v34 + 60);
      v29 = 0LL;
      v30 = *(_DWORD *)(v34 + 112) & 0x40000;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v21, (struct _DEVBITMAPINFO *)v28, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        goto LABEL_28;
      v8 = v21;
      EngCopyBits(
        (SURFOBJ *)(-(__int64)(v21 != 0) & (v21 + 24)),
        (SURFOBJ *)((v34 + 24) & -(__int64)(v34 != 0)),
        0LL,
        0LL,
        &prclDest,
        &pptlSrc);
    }
    if ( !cjBits )
    {
LABEL_22:
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v27);
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v27);
      if ( v12 )
        GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v25);
      goto LABEL_25;
    }
    v15 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 16);
    v16 = *a3;
    if ( (*a3 & 0x80000000) == 0 && v16 < cjBits )
    {
      if ( v15 + v16 > cjBits )
        v15 = cjBits - v16;
      if ( v15 )
      {
        v17 = (struct _SURFOBJ *)(v8 + 24);
        v18 = (void *)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 16));
        v32.cjBits = v15;
        v32.lDelta = v16;
        v32.pvBits = v18;
        if ( !v8 )
          v17 = 0LL;
        bDoGetSetBitmapBits(&v32, v17, 1);
        cjBits = v32.cjBits;
        *a3 = v16 + v32.cjBits;
        goto LABEL_22;
      }
    }
LABEL_28:
    cjBits = 0;
    goto LABEL_22;
  }
LABEL_25:
  SURFMEM::~SURFMEM((SURFMEM *)&v21);
LABEL_26:
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v33);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v26);
  return cjBits;
}
