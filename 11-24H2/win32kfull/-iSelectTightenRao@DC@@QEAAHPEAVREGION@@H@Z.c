/*
 * XREFs of ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400CE3D8
 * Callers:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400CE13C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400CE8CC (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x140148144 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14015763C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140175528 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iSelectTightenRao(DC *this, struct REGION *a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v6; // esi
  __int64 v8; // rbx
  unsigned int sizeScan; // eax
  __int64 v10; // rbx
  unsigned int v11; // eax
  bool v12; // zf
  RGNOBJ *v13; // rcx
  const struct _POINTL *v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h] BYREF
  struct REGION *v17; // [rsp+30h] [rbp-30h] BYREF
  struct tagSIZE v18; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v19; // [rsp+40h] [rbp-20h] BYREF

  v3 = *((_QWORD *)this + 20);
  v6 = 0;
  if ( a3 == 5 )
  {
    if ( !a2 )
    {
      v6 = 2;
      if ( v3 )
      {
        v17 = (struct REGION *)*((_QWORD *)this + 20);
        --*(_DWORD *)(v3 + 76);
        if ( !*((_DWORD *)v17 + 19) )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
        *((_QWORD *)this + 20) = 0LL;
      }
      return v6;
    }
  }
  else if ( a3 != 1 || !a2 || v3 )
  {
    v17 = a2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
    if ( !v16 )
      return v6;
    if ( v3 )
    {
      v15 = v3;
      v6 = RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)&v15, (struct RGNOBJ *)&v17, a3);
      if ( v6 )
      {
        ++*(_DWORD *)(v16 + 76);
        *((_QWORD *)this + 20) = v16;
        if ( --*(_DWORD *)(v15 + 76) )
          return v6;
        v13 = (RGNOBJ *)&v15;
        goto LABEL_17;
      }
LABEL_16:
      v13 = (RGNOBJ *)&v16;
LABEL_17:
      RGNOBJ::vDeleteRGNOBJ(v13);
      return v6;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
    v18 = 0LL;
    if ( v15 )
    {
      DC::vGet_sizlWindow(this, &v18);
      v14 = (const struct _POINTL *)*((_QWORD *)this + 6);
      *(struct tagSIZE *)&v19.right = v18;
      *(_QWORD *)&v19.left = 0LL;
      if ( *((_QWORD *)this + 62) )
      {
        SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v18);
        if ( (v14[5].x & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          ERECTL::bOffsetAdd((ERECTL *)&v19, v14 + 322, 0);
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          *(_QWORD *)&v18);
      }
      ERECTL::bOffsetSubtract((ERECTL *)&v19, (const struct _POINTL *)this + (*((_DWORD *)this + 10) & 1) + 127, 0);
      RGNOBJ::vSet((RGNOBJ *)&v15, &v19);
      v6 = RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)&v15, (struct RGNOBJ *)&v17, a3);
      if ( v6 )
      {
        ++*(_DWORD *)(v16 + 76);
        *((_QWORD *)this + 20) = v16;
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
    v12 = v6 == 0;
LABEL_15:
    if ( !v12 )
      return v6;
    goto LABEL_16;
  }
  v17 = a2;
  v16 = v3;
  if ( !v3 || *(_DWORD *)(v3 + 76) != 1 )
  {
    sizeScan = REGION_CORE::get_sizeScan((struct REGION *)((char *)a2 + 24));
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15, sizeScan);
    if ( !v15 )
      return v6;
    RGNOBJ::vCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v17);
    ++*(_DWORD *)(v15 + 76);
    v10 = v15;
    v11 = RGNOBJ::iComplexity((RGNOBJ *)&v15);
    *((_QWORD *)this + 20) = v10;
    v6 = v11;
    if ( !v3 )
      return v6;
    v12 = --*(_DWORD *)(v16 + 76) == 0;
    goto LABEL_15;
  }
  if ( RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v17) )
  {
    v8 = v16;
    v6 = RGNOBJ::iComplexity((RGNOBJ *)&v16);
    *((_QWORD *)this + 20) = v8;
  }
  return v6;
}
