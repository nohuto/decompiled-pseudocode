/*
 * XREFs of GrePtInSprite @ 0x1400226B0
 * Callers:
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1400222C0 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1400223EC (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1400224D4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14019CE40 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 * Callees:
 *     EngAlphaBlend @ 0x14000A5C0 (EngAlphaBlend.c)
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x140020C00 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140023FC8 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x140060C4C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x140060E40 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1401E3554 (-crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x140329100 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrePtInSprite(SURFOBJ **a1, HWND a2, int a3, int a4, int a5, int a6)
{
  HDEV v8; // r13
  unsigned int v9; // edi
  char v10; // r12
  struct Gre::Base::SESSION_GLOBALS *v11; // rbx
  HSEMAPHORE v12; // r15
  __int64 v13; // rcx
  __int64 v14; // r15
  struct Gre::Base::SESSION_GLOBALS *v15; // r13
  struct W32_PUSH_LOCK *v16; // rbx
  _QWORD *v17; // rax
  Gre::Base *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r13
  int v23; // ecx
  struct _SURFOBJ *v24; // r15
  RECTL si128; // xmm0
  _DWORD *pvScan0; // r15
  struct Gre::Base::SESSION_GLOBALS *v27; // rax
  SURFOBJ *v28; // rdx
  XLATEOBJ *v29; // r12
  RECTL *p_prclSrc; // rcx
  struct _GRETHREAD *v31; // rax
  int v35; // [rsp+48h] [rbp-A1h]
  HSEMAPHORE v36; // [rsp+50h] [rbp-99h]
  HSEMAPHORE v38; // [rsp+60h] [rbp-89h]
  _QWORD v39[2]; // [rsp+68h] [rbp-81h] BYREF
  BLENDOBJ pBlendObj; // [rsp+78h] [rbp-71h] BYREF
  int v41; // [rsp+7Ch] [rbp-6Dh]
  char *v42; // [rsp+80h] [rbp-69h]
  char *v43; // [rsp+88h] [rbp-61h]
  char *v44; // [rsp+90h] [rbp-59h]
  _QWORD Buffer[3]; // [rsp+98h] [rbp-51h] BYREF
  int v46; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-31h] BYREF
  char v48; // [rsp+C0h] [rbp-29h]
  RECTL prclSrc; // [rsp+C8h] [rbp-21h] BYREF
  RECTL prclDest; // [rsp+D8h] [rbp-11h] BYREF

  v8 = (HDEV)a1;
  v9 = 0;
  v10 = 1;
  v35 = 1;
  v11 = Gre::Base::Globals((Gre::Base *)a1);
  v12 = (HSEMAPHORE)(*(_QWORD *)v11 + 1144LL);
  v36 = v12;
  GreAcquireSemaphoreInternal(v12);
  GrepAcquireLockValidate<2>();
  if ( a6 && (unsigned int)IsDwmActive() )
  {
    v38 = (HSEMAPHORE)(*(_QWORD *)v11 + 1040LL);
    GreAcquireSemaphoreSharedInternal(v38);
    GrepAcquireLockValidate<6>();
    v13 = *(_QWORD *)v11;
    v46 = 0;
    v47 = v13 + 520;
    Buffer[2] = v8;
    v48 = 1;
    GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(v13 + 520));
    GrepAcquireLockValidate<7>();
    if ( !(unsigned int)IsDwmActive() )
      goto LABEL_37;
    v35 = 0;
    v14 = 0LL;
    Buffer[1] = 0LL;
    v15 = Gre::Base::Globals(0LL);
    Buffer[0] = a2;
    v16 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v15 + 17) + 72LL);
    if ( *((_QWORD *)v15 + 17) != -72LL )
      GreAcquirePushLockExclusive(v16);
    v17 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v15 + 17), Buffer);
    if ( v17 )
      v14 = v17[1];
    if ( v16 )
      GreReleasePushLockExclusive(v16);
    Gre::Base::Globals(v18);
    if ( !v14 || (LOBYTE(v19) = 15, v20 = HmgShareLockCheck(v14, v19), (v21 = v20) == 0) )
    {
LABEL_36:
      v12 = v36;
      v8 = (HDEV)a1;
LABEL_37:
      SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(&v47);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v46);
      EtwTraceGreLockReleaseSemaphore(L"Sprite", v38);
      GrepReleaseLockValidate<6>();
      GreReleaseSemaphoreSharedInternal(v38);
      if ( !v35 )
        goto LABEL_38;
      goto LABEL_46;
    }
    v22 = *(_QWORD *)(v20 + 144);
    if ( a3 >= *(_DWORD *)(v20 + 56)
      && a3 < *(_DWORD *)(v20 + 64)
      && a4 >= *(_DWORD *)(v20 + 60)
      && a4 < *(_DWORD *)(v20 + 68) )
    {
      v9 = 1;
    }
    v23 = *(_DWORD *)(v20 + 72);
    if ( v23 && v23 != 4 && (v23 != 2 || *(_BYTE *)(v20 + 79) || !*(_BYTE *)(v20 + 78)) && v9 )
    {
      a3 -= *(_DWORD *)(v20 + 56);
      a4 -= *(_DWORD *)(v20 + 60);
      v24 = *(struct _SURFOBJ **)(v22 + 184);
      if ( (v23 & 2) != 0 )
      {
        if ( v23 != 3 || *(_BYTE *)(v20 + 79) )
          v10 = 0;
        v39[0] = 0LL;
        SURFREFVIEW::bMap((SURFREFVIEW *)v39, v24);
        if ( v39[0] && v24->iBitmapFormat == 6 )
        {
          if ( v10
            && (*(_DWORD *)(v21 + 80) & 0xFFFFFF) == (crSpGetShapePixel(*(struct _SURFOBJ **)(v22 + 184), a3, a4, a5) & 0xFFFFFF) )
          {
            v9 = 0;
          }
          if ( v9 )
          {
            si128 = (RECTL)_mm_load_si128((const __m128i *)&_xmm);
            pvScan0 = a1[139]->pvScan0;
            *pvScan0 = 0;
            prclSrc.right = a3 + 1;
            prclSrc.bottom = a4 + 1;
            prclDest = si128;
            prclSrc.left = a3;
            prclSrc.top = a4;
            v41 = 0;
            v27 = Gre::Base::Globals(0LL);
            v28 = *(SURFOBJ **)(v22 + 184);
            pBlendObj = *(BLENDOBJ *)(v21 + 76);
            v29 = (XLATEOBJ *)((char *)v27 + 4552);
            v42 = (char *)v27 + 4552;
            v43 = (char *)v27 + 4552;
            v44 = (char *)v27 + 4552;
            EngAlphaBlend(a1[139], v28, 0LL, (XLATEOBJ *)((char *)v27 + 4552), &prclDest, &prclSrc, &pBlendObj);
            if ( !*pvScan0 )
            {
              *pvScan0 = -1;
              EngAlphaBlend(a1[139], *(SURFOBJ **)(v22 + 184), 0LL, v29, &prclDest, &prclSrc, &pBlendObj);
              v9 = *pvScan0 != -1;
            }
          }
        }
        else
        {
          v9 = 0;
        }
        p_prclSrc = (RECTL *)v39;
LABEL_34:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)p_prclSrc);
LABEL_35:
        DEC_SHARE_REF_CNT(v21);
        goto LABEL_36;
      }
      if ( v23 == 1 )
      {
        *(_QWORD *)&prclSrc.left = 0LL;
        SURFREFVIEW::bMap((SURFREFVIEW *)&prclSrc, v24);
        if ( *(_QWORD *)&prclSrc.left && v24->iBitmapFormat == 6 )
        {
          if ( (*(_DWORD *)(v21 + 80) & 0xFFFFFF) == (crSpGetShapePixel(*(struct _SURFOBJ **)(v22 + 184), a3, a4, a5) & 0xFFFFFF) )
            v9 = 0;
        }
        else
        {
          v9 = 0;
        }
        p_prclSrc = &prclSrc;
        goto LABEL_34;
      }
    }
    v21 = v20;
    goto LABEL_35;
  }
LABEL_46:
  v9 = GdiPtInSprite(v8, a2, a3, a4);
LABEL_38:
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreLock", v12);
    v31 = GreGetCurrentThreadCrossSessionCheck();
    if ( v31 )
    {
      if ( (*((_BYTE *)v31 + 10))-- == 1 )
        *(_QWORD *)v31 &= ~4uLL;
      if ( !*(_QWORD *)v31 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v12);
  }
  return v9;
}
