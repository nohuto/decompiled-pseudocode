/*
 * XREFs of DxgkEngReleaseStableSprite @ 0x140171040
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1400D5DB8 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401710CC (--$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall DxgkEngReleaseStableSprite(Gre::Base *a1, int a2)
{
  unsigned int v2; // edi
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  __int64 HDEV; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax

  v2 = 0;
  if ( a2 )
  {
    HDEV = UserGetHDEV();
    v6 = HDEV;
    if ( HDEV )
    {
      v7 = *(_DWORD *)(HDEV + 140);
      if ( v7 )
      {
        do
        {
          SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(*(_QWORD *)(*(_QWORD *)(v6 + 144) + 8LL * (v7 - v2 - 1))
                                                              + 200LL));
          v7 = *(_DWORD *)(v6 + 140);
          ++v2;
        }
        while ( v2 < v7 );
      }
      else
      {
        SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v6 + 200));
      }
    }
  }
  v3 = Gre::Base::Globals(a1);
  return GreReleaseSemaphoreShared<6,>(v3);
}
