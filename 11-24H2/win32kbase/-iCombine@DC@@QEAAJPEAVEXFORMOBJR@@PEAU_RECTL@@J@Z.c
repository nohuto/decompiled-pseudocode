/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401549C0
 * Callers:
 *     GreIntersectClipRect @ 0x14001DA50 (GreIntersectClipRect.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140023A90 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x140025980 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1400262A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14002686C (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14002689C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x14002B9D0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x140035740 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140068670 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x140069C20 (-bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x140069D64 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?CloseFigure@PATH_CORE@@QEAA_NXZ @ 0x14006A830 (-CloseFigure@PATH_CORE@@QEAA_NXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14006AD50 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1400D82E0 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJR *a2, struct _RECTL *a3, int a4)
{
  LONG left; // r9d
  LONG top; // edx
  struct _RECTL *v9; // r9
  __int64 v10; // rsi
  unsigned int v11; // ebx
  const struct REGION_CORE *v12; // rdx
  ULONG_PTR *v14; // rcx
  LONG cx; // r8d
  LONG v16; // ecx
  LONG cy; // r9d
  LONG v18; // edx
  _DWORD *v19; // rbx
  char *v20; // r10
  LONG v21; // r8d
  int v22; // eax
  ULONG_PTR v24; // [rsp+20h] [rbp-E0h] BYREF
  ULONG_PTR v25; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  struct tagSIZE v27; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v28[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh]
  __int64 v30; // [rsp+48h] [rbp-B8h]
  _QWORD v31[4]; // [rsp+90h] [rbp-70h] BYREF
  int v32; // [rsp+B0h] [rbp-50h]
  struct _RECTL v33; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-30h]
  __int16 v35; // [rsp+D8h] [rbp-28h]
  _DWORD v36[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _POINTL v37; // [rsp+E8h] [rbp-18h] BYREF
  LONG x; // [rsp+F0h] [rbp-10h]
  LONG bottom; // [rsp+F4h] [rbp-Ch]
  LONG v40; // [rsp+F8h] [rbp-8h]
  LONG v41; // [rsp+FCh] [rbp-4h]

  left = a3->left;
  top = a3->top;
  v37.x = a3->right;
  x = v37.x;
  bottom = a3->bottom;
  v41 = bottom;
  v36[0] = left;
  v36[1] = top;
  v37.y = top;
  v40 = left;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v28);
  if ( !v30 )
    goto LABEL_34;
  *(_QWORD *)&v33.right = 1LL;
  v34 = 0LL;
  *(_QWORD *)&v33.left = v36;
  v35 = 0;
  if ( !PATH_CORE::bMoveTo(v30 + 24, (__int64)a2, (__int64)&v33)
    || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v28, a2, &v37, 3u)
    || !v30 )
  {
    goto LABEL_35;
  }
  if ( PATH_CORE::CloseFigure((PATH_CORE *)(v30 + 24)) )
    ++v29;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v25, (struct EPATHOBJ *)v28, (struct EPATHOBJ *)1, v9);
  if ( !v25 )
  {
LABEL_34:
    EngSetLastError(8u);
LABEL_35:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v28);
    return 0LL;
  }
  v10 = *((_QWORD *)this + 20);
  v11 = 0;
  DC::vReleaseRao(this);
  if ( v10 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24);
    if ( v24 )
    {
      v26 = v10;
      v11 = RGNOBJ::iCombine((RGNOBJ *)&v24, (struct RGNOBJ *)&v26, (struct RGNOBJ *)&v25, a4);
      if ( !v11 )
      {
        v14 = &v24;
        goto LABEL_14;
      }
      ++*(_DWORD *)(v24 + 76);
      *((_QWORD *)this + 20) = v24;
      if ( (*(_DWORD *)(v26 + 76))-- == 1 )
      {
        v14 = (ULONG_PTR *)&v26;
LABEL_14:
        RGNOBJ::vDeleteRGNOBJ(v14);
      }
    }
LABEL_30:
    RGNOBJ::vDeleteRGNOBJ(&v25);
    goto LABEL_31;
  }
  if ( a4 != 1 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24);
    v27 = 0LL;
    if ( v24 )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v26);
      if ( !v26 )
        goto LABEL_27;
      DC::vGet_sizlWindow(this, &v27);
      cx = v27.cx;
      v16 = 0;
      cy = v27.cy;
      v18 = 0;
      v19 = (_DWORD *)*((_QWORD *)this + 6);
      *(_QWORD *)&v33.left = 0LL;
      *(struct tagSIZE *)&v33.right = v27;
      if ( *((_QWORD *)this + 62) )
      {
        SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v27);
        if ( (v19[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v33.left += v19[644];
          v33.right += v19[644];
          v33.top += v19[645];
          v33.bottom += v19[645];
        }
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          *(_QWORD *)&v27);
        cy = v33.bottom;
        cx = v33.right;
        v18 = v33.top;
        v16 = v33.left;
      }
      v20 = (char *)this + 1024;
      if ( (*((_DWORD *)this + 10) & 1) == 0 )
        v20 = (char *)this + 1016;
      v21 = cx - *(_DWORD *)v20;
      v33.left = v16 - *(_DWORD *)v20;
      v22 = *((_DWORD *)v20 + 1);
      v33.right = v21;
      v33.top = v18 - v22;
      v33.bottom = cy - v22;
      RGNOBJ::vSet((RGNOBJ *)&v26, &v33);
      v11 = RGNOBJ::iCombine((RGNOBJ *)&v24, (struct RGNOBJ *)&v26, (struct RGNOBJ *)&v25, a4);
      if ( v11 )
      {
        ++*(_DWORD *)(v24 + 76);
        *((_QWORD *)this + 20) = v24;
      }
      else
      {
LABEL_27:
        RGNOBJ::vDeleteRGNOBJ(&v24);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v26);
    }
    goto LABEL_30;
  }
  ++*(_DWORD *)(v25 + 76);
  *((_QWORD *)this + 20) = v25;
  v11 = RGNOBJ::iComplexity((RGNOBJ *)&v25, v12);
LABEL_31:
  EPATHOBJ::vUnlock((EPATHOBJ *)v28);
  if ( v32 )
    PopThreadGuardedObject(v31);
  return v11;
}
