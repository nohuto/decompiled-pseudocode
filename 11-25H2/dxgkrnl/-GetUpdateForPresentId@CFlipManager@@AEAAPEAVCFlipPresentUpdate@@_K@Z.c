/*
 * XREFs of ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x14004C7C0
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049C48 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140050598 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C6F8 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     <none>
 */

struct CFlipPresentUpdate *__fastcall CFlipManager::GetUpdateForPresentId(CFlipManager *this, __int64 a2)
{
  char *v2; // r9
  __int64 v3; // r8
  char *v4; // rcx
  char *v5; // rax
  __int64 v6; // rcx

  v2 = (char *)this + 152;
  v3 = 0LL;
  v4 = (char *)*((_QWORD *)this + 19);
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v5 = v4 - 24;
      v6 = -(__int64)v4;
      v3 = (unsigned __int64)v5 & -(__int64)(v6 != 0);
      if ( !v3 || *(_QWORD *)(((unsigned __int64)v5 & -(__int64)(v6 != 0)) + 0x40) == a2 )
        break;
      v4 = *(char **)(((unsigned __int64)v5 & -(__int64)(v6 != 0)) + 0x18);
      if ( v4 == v2 )
        return 0LL;
    }
  }
  return (struct CFlipPresentUpdate *)v3;
}
