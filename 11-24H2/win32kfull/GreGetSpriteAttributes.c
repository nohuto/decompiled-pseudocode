/*
 * XREFs of GreGetSpriteAttributes @ 0x140038AC4
 * Callers:
 *     NtUserGetLayeredWindowAttributes @ 0x140036B20 (NtUserGetLayeredWindowAttributes.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400949E4 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzUpdateShadowAlpha @ 0x14015DFA4 (zzzUpdateShadowAlpha.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140023E24 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140027730 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z @ 0x140038BD4 (-GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetSpriteAttributes(
        Gre::Base *a1,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct _BLENDFUNCTION *a5,
        unsigned int *a6,
        int a7)
{
  unsigned int v7; // ebx
  int v11; // edi
  Gre::Base *v12; // rcx
  void *v13; // r8
  struct Gre::Base::SESSION_GLOBALS *v14; // r13
  Gre::Base *v15; // rcx
  __int64 v16; // rcx
  _BYTE v18[8]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v21[32]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v22; // [rsp+70h] [rbp-38h]

  v7 = 0;
  v11 = 1;
  v14 = Gre::Base::Globals(a1);
  if ( !a7 || !IsDwmActive(v12) )
    return (unsigned int)GdiGetSpriteAttributes((HDEV)a1, a2, v13, a4, a5, a6);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v18, v14, (__int64)a1, 0);
  if ( IsDwmActive(v15) )
  {
    v11 = 0;
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v21, a2, 0LL);
    v16 = v22;
    if ( v22 )
    {
      v7 = 1;
      *a4 = *(_DWORD *)(v22 + 80);
      *a5 = *(struct _BLENDFUNCTION *)(v16 + 76);
      *a6 = *(_DWORD *)(v16 + 72);
    }
    DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v21);
  }
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(v20);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v19);
  if ( v11 )
    return (unsigned int)GdiGetSpriteAttributes((HDEV)a1, a2, v13, a4, a5, a6);
  return v7;
}
