/*
 * XREFs of ?FreeExpiredCancels@CFlipManager@@AEAAX_K@Z @ 0x14004F550
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049338 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009EA58 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::FreeExpiredCancels(CFlipManager *this, unsigned __int64 a2)
{
  char *v2; // rdi
  char *v4; // rcx
  __int64 v5; // rcx
  char *v6; // rdx
  __int64 v7; // rbx

  v2 = (char *)this + 192;
  v4 = (char *)*((_QWORD *)this + 24);
  if ( v4 != v2 )
  {
    v5 = (unsigned __int64)(v4 - 8) & -(__int64)(v4 != 0LL);
    if ( v5 )
    {
      do
      {
        v6 = *(char **)(v5 + 8);
        if ( v6 == v2 )
          v7 = 0LL;
        else
          v7 = (unsigned __int64)(v6 - 8) & -(__int64)(v6 != 0LL);
        if ( a2 > *(_QWORD *)(v5 + 24) )
          (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
        v5 = v7;
      }
      while ( v7 );
    }
  }
}
