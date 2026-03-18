/*
 * XREFs of GreUnlockDisplayArea @ 0x14032EDE0
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140022278 (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5DB8 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E7958 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140175528 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14026CF08 (--$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBA.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall GreUnlockDisplayArea(__int64 a1, struct tagRECT *a2)
{
  Gre::Base *v4; // rcx
  struct _ERESOURCE **v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // r14
  bool v8; // r15
  struct tagRECT v9; // xmm6
  __int64 v10; // rbx
  void (__fastcall *v11)(_QWORD, struct _RECTL *); // rax
  void (__fastcall *v12)(_QWORD, struct tagRECT *); // rax
  struct tagRECT v13; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v14; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v15; // [rsp+40h] [rbp-30h] BYREF

  v13 = *a2;
  ERECTL::vOrder((ERECTL *)&v13);
  if ( !IsRectEmptyInl(&v13) )
  {
    v5 = (struct _ERESOURCE **)Gre::Base::Globals(v4);
    v6 = (__int64 *)v5;
    if ( *(_DWORD *)(a1 + 140) )
    {
      v7 = 0LL;
      v8 = GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(v5);
      if ( *(_DWORD *)(a1 + 140) )
      {
        v9 = v13;
        do
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v7);
          v14 = v9;
          v13.left = *(_DWORD *)(v10 + 2576);
          v13.top = *(_DWORD *)(v10 + 2580);
          ERECTL::bOffsetSubtract((ERECTL *)&v14, (const struct _POINTL *)&v13, 0);
          if ( bIntersect((const struct _RECTL *)&v14, (const struct _RECTL *)(v10 + 120), &v15) )
          {
            v11 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v10 + 3496);
            if ( v11 )
              v11(*(_QWORD *)(v10 + 1784), &v15);
            if ( v8 )
              SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v10 + 200));
          }
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (unsigned int)v7 < *(_DWORD *)(a1 + 140) );
      }
      if ( v8 )
        goto LABEL_17;
    }
    else
    {
      v12 = *(void (__fastcall **)(_QWORD, struct tagRECT *))(a1 + 3496);
      if ( v12 )
        v12(*(_QWORD *)(a1 + 1784), a2);
      if ( GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>((struct _ERESOURCE **)v6) )
      {
        SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(a1 + 200));
LABEL_17:
        GreReleaseSemaphoreExclusive<6,>(v6);
      }
    }
  }
}
