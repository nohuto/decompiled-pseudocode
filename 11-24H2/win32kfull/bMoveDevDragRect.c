/*
 * XREFs of bMoveDevDragRect @ 0x1401E7398
 * Callers:
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBAB4 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     ?cIntersect@@YAKPEBU_RECTL@@PEAU1@J@Z @ 0x1401E7784 (-cIntersect@@YAKPEBU_RECTL@@PEAU1@J@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bMoveDevDragRect(Gre::Base *a1, LONG *a2, const struct _RECTL *a3, int a4)
{
  int v4; // r14d
  HDEV v7; // r12
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  __int64 v9; // r13
  LONG v10; // r8d
  LONG v11; // r10d
  LONG v12; // eax
  Gre::Base *v13; // r15
  int v14; // r11d
  int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  void **v18; // r14
  HDEV v19; // r15
  struct _RECTL *v20; // rdi
  unsigned int v21; // esi
  LONG v22; // ecx
  void *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rbx
  void **v26; // rdi
  void *v27; // rsi
  void *v29; // rsi
  struct tagSIZE v31; // [rsp+88h] [rbp-78h] BYREF
  Gre::Base *v32; // [rsp+90h] [rbp-70h] BYREF
  Gre::Base *v33; // [rsp+98h] [rbp-68h]
  Gre::Base *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  _BYTE v36[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v38[128]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v39[128]; // [rsp+140h] [rbp+40h] BYREF
  struct _RECTL v40; // [rsp+1C0h] [rbp+C0h] BYREF
  int v41; // [rsp+1D0h] [rbp+D0h]
  LONG v42; // [rsp+1D4h] [rbp+D4h]
  LONG v43; // [rsp+1D8h] [rbp+D8h]
  LONG v44; // [rsp+1DCh] [rbp+DCh]
  int v45; // [rsp+1E0h] [rbp+E0h]
  LONG v46; // [rsp+1E4h] [rbp+E4h]
  int v47; // [rsp+1E8h] [rbp+E8h]
  int v48; // [rsp+1ECh] [rbp+ECh]
  int v49; // [rsp+1F0h] [rbp+F0h]
  int v50; // [rsp+1F4h] [rbp+F4h]
  int v51; // [rsp+1F8h] [rbp+F8h]
  LONG v52; // [rsp+1FCh] [rbp+FCh]

  v31 = 0LL;
  v4 = a4;
  v33 = a1;
  v7 = (HDEV)a1;
  v32 = a1;
  v8 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v37, v8);
  v9 = *(_QWORD *)v8 + 1144LL;
  v35 = v9;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v9);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v36, (struct PDEVOBJ *)&v32);
  v10 = a2[1];
  v11 = a2[3];
  v12 = *a2;
  v13 = v32;
  v34 = v32;
  v14 = *((_DWORD *)v32 + 314);
  v40.left = v12;
  v40.top = v10;
  v40.bottom = v11;
  v42 = v10;
  v15 = a2[2] - v14;
  v43 = a2[2];
  v41 = v15;
  v48 = v10 + v14;
  v47 = v15;
  v51 = v15;
  v50 = v11 - v14;
  v40.right = v12 + v14;
  v44 = v11;
  v45 = v12 + v14;
  v46 = v10;
  v49 = v12 + v14;
  v52 = v11;
  v16 = cIntersect(a3, &v40, v10);
  v17 = 0;
  if ( !v16 )
  {
LABEL_8:
    v24 = v17;
    v25 = 4 - v17;
    v26 = (void **)((char *)v13 + 8 * v24 + 1216);
    if ( v4 )
    {
      do
      {
        v27 = *v26;
        if ( *v26 )
        {
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v39, 0LL);
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v38, 0LL);
          GrepUpdateSprite(
            v7,
            0LL,
            v27,
            (struct OPTAPIDCOBJ *)v39,
            0LL,
            0LL,
            (struct OPTAPIDCOBJ *)v38,
            0LL,
            0,
            0LL,
            0x2000000u,
            0LL,
            0LL,
            v4,
            0,
            0);
          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v38);
          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v39);
        }
        ++v26;
        --v25;
      }
      while ( v25 );
    }
    else
    {
      do
      {
        v29 = *v26;
        if ( *v26 )
        {
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v39, 0LL);
          OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v38, 0LL);
          GrepUpdateSprite(
            v7,
            0LL,
            v29,
            (struct OPTAPIDCOBJ *)v39,
            0LL,
            0LL,
            (struct OPTAPIDCOBJ *)v38,
            0LL,
            0,
            0LL,
            0,
            0LL,
            0LL,
            0,
            0,
            0);
          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v38);
          OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v39);
        }
        ++v26;
        --v25;
      }
      while ( v25 );
    }
    goto LABEL_12;
  }
  v18 = (void **)((char *)v13 + 1216);
  v19 = v7;
  v20 = &v40;
  v21 = v16;
  do
  {
    v22 = v20->bottom - v20->top;
    v31.cx = v20->right - v20->left;
    v31.cy = v22;
    v23 = *v18;
    if ( *v18 )
    {
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v38, 0LL);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v39, 0LL);
      GrepUpdateSprite(
        v19,
        0LL,
        v23,
        (struct OPTAPIDCOBJ *)v38,
        (struct tagPOINT *)&v40 + 2 * v17,
        &v31,
        (struct OPTAPIDCOBJ *)v39,
        0LL,
        0,
        0LL,
        0x2000000u,
        0LL,
        0LL,
        a4,
        0,
        0);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v39);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v38);
    }
    ++v17;
    ++v18;
    ++v20;
  }
  while ( v17 < v21 );
  v13 = v34;
  v9 = v35;
  if ( v17 < 4 )
  {
    v4 = a4;
    v7 = (HDEV)v33;
    goto LABEL_8;
  }
LABEL_12:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v36);
  if ( v9 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v9);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v37);
  return 1LL;
}
