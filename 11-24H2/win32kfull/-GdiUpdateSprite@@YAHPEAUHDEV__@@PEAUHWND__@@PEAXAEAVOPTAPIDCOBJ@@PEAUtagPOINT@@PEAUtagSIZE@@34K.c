/*
 * XREFs of ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1400DF7B0
 * Callers:
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBC4C (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     GreTransferDwmStateToSpriteState @ 0x1401325C8 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F0D0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9120 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D2050 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400DF014 (--$GreReleaseSemaphoreExclusive@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1400DFA14 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400E01B8 (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x140213F7C (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GdiUpdateSprite(
        Gre::Base *a1,
        HWND a2,
        void *a3,
        struct OPTAPIDCOBJ *a4,
        struct _POINTL *a5,
        struct tagSIZE *a6,
        struct OPTAPIDCOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  unsigned int updated; // edi
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int64 *v16; // rbx
  struct _RECTL *v17; // r12
  Gre::Base *v18; // rsi
  const struct _SPRITESTATE *v19; // rcx
  struct SPRITE *Sprite; // rcx
  struct _METASPRITE *MetaSprite; // rax
  int v23; // r9d
  int v24; // r10d
  __int64 v25; // r14
  struct _METASPRITE *v26; // rbx
  struct _POINTL *v27; // r8
  __int64 v28; // rax
  int v29; // [rsp+50h] [rbp-71h]
  Gre::Base *v30; // [rsp+58h] [rbp-69h] BYREF
  struct _POINTL v31; // [rsp+60h] [rbp-61h] BYREF
  struct _BLENDFUNCTION *v32; // [rsp+68h] [rbp-59h]
  struct _POINTL *v33; // [rsp+70h] [rbp-51h]
  struct OPTAPIDCOBJ *v34; // [rsp+78h] [rbp-49h]
  struct tagSIZE *v35; // [rsp+80h] [rbp-41h]
  struct OPTAPIDCOBJ *v36; // [rsp+88h] [rbp-39h]
  __int64 *v37; // [rsp+98h] [rbp-29h]
  _BYTE v38[8]; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-19h] BYREF

  updated = 0;
  v31 = 0LL;
  v29 = 0;
  v35 = a6;
  v34 = a7;
  v33 = a8;
  v32 = a10;
  v36 = a4;
  v30 = a1;
  v15 = Gre::Base::Globals(a1);
  v16 = (__int64 *)v15;
  v37 = (__int64 *)v15;
  if ( (a11 & 0x200000) == 0 )
  {
    GreAcquireSemaphoreShared<1,>(v15);
    GreAcquireSemaphore<2,>(v16);
    v29 = 1;
  }
  if ( a12 )
    v39 = (__int128)*a12;
  v17 = (struct _RECTL *)&v39;
  if ( !a12 )
    v17 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v38, (struct PDEVOBJ *)&v30);
  PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v30);
  v18 = v30;
  v19 = (Gre::Base *)((char *)v30 + 80);
  if ( *((_DWORD *)v30 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v19, a2, a3, 0);
    if ( MetaSprite )
    {
      v25 = 0LL;
      updated = v23 + 1;
      if ( v24 )
      {
        v26 = MetaSprite;
        do
        {
          v27 = 0LL;
          v28 = *(_QWORD *)(*((_QWORD *)v18 + 18) + 8 * v25);
          if ( a5 )
          {
            v27 = &v31;
            v31.x = a5->x - *(_DWORD *)(v28 + 2576);
            v31.y = a5->y - *(_DWORD *)(v28 + 2580);
          }
          updated &= bSpUpdateSprite(*((struct SPRITE **)v26 + v25 + 3), v36, v27, v35, v34, v33, a9, v32, a11, v17);
          v25 = (unsigned int)(v25 + 1);
        }
        while ( (unsigned int)v25 < *((_DWORD *)v18 + 35) );
        v16 = v37;
      }
    }
  }
  else
  {
    Sprite = pSpGetSprite(v19, a2, a3);
    if ( Sprite )
      updated = bSpUpdateSprite(Sprite, v36, a5, v35, v34, v33, a9, v32, a11, v17);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v38);
  if ( v29 )
  {
    GreReleaseSemaphoreExclusive<2,>(v16);
    GreReleaseSemaphoreShared<1,>(v16);
  }
  return updated;
}
