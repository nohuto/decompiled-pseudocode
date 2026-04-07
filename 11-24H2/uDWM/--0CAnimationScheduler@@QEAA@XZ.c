/*
 * XREFs of ??0CAnimationScheduler@@QEAA@XZ @ 0x180085FB8
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CAnimationScheduler *__fastcall CAnimationScheduler::CAnimationScheduler(CAnimationScheduler *this)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  int v3; // r8d
  CAnimationScheduler *v4; // r9
  CAnimationScheduler *result; // rax
  char v6; // dl

  *(_QWORD *)this = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 1) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 16, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>(v1 + 48, v2, v3);
  result = v4;
  *((_BYTE *)v4 + 80) = v6;
  return result;
}
