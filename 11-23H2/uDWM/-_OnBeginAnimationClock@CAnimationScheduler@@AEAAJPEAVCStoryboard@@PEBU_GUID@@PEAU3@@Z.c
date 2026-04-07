/*
 * XREFs of ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x180014014
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800141DC (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x1800096D0 (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180013164 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180014178 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationScheduler::_OnBeginAnimationClock(
        CAnimationScheduler *this,
        struct CStoryboard *a2,
        const struct _GUID *a3,
        struct _GUID *a4)
{
  unsigned int v4; // esi
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  _DWORD *v9; // r8
  HRESULT v10; // eax
  __int64 v11; // rdx
  GUID v12; // xmm0
  CDesktopManager *v13; // rax
  CAnimationClockCoordinator *v14; // r15
  unsigned int v15; // eax
  int AnimationDuration; // eax
  unsigned int v17; // r8d
  GUID *p_pguid; // rax
  __int64 v20; // rax
  unsigned int v21[4]; // [rsp+20h] [rbp-40h] BYREF
  struct _GUID v22; // [rsp+30h] [rbp-30h] BYREF
  GUID pguid; // [rsp+40h] [rbp-20h] BYREF

  v4 = *((_DWORD *)a2 + 18);
  v7 = 0;
  pguid = GUID_NULL;
  v8 = 1;
  v9 = dword_1801477B0;
  do
  {
    if ( *v9 == v4 )
    {
      v11 = 5LL * v7;
      v20 = *(_QWORD *)&dword_1801477B0[10 * v7 + 1] - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v20 )
        v20 = *(_QWORD *)&dword_1801477B0[10 * v7 + 3] - *(_QWORD *)GUID_NULL.Data4;
      if ( !v20 )
      {
        v12 = *(GUID *)&dword_1801477B0[10 * v7 + 5];
        v8 = dword_1801477B0[10 * v7 + 9];
        pguid = v12;
        goto LABEL_6;
      }
    }
    ++v7;
    v9 += 10;
  }
  while ( v7 < 0xB );
  v10 = CoCreateGuid(&pguid);
  v11 = (unsigned int)v10;
  if ( v10 < 0 )
    goto LABEL_11;
  v12 = pguid;
LABEL_6:
  v13 = CDesktopManager::s_pDesktopManagerInstance;
  *((GUID *)a2 + 3) = v12;
  v14 = (CAnimationClockCoordinator *)*((_QWORD *)v13 + 21);
  v15 = (*(__int64 (__fastcall **)(struct CStoryboard *, __int64))(*(_QWORD *)a2 + 32LL))(a2, v11);
  v22 = pguid;
  LODWORD(v11) = CAnimationClockCoordinator::OnCreateAnimationClock(v14, &v22, v15);
  if ( (int)(v11 + 0x80000000) < 0 || (_DWORD)v11 == -2147019886 )
  {
    v21[0] = 0;
    AnimationDuration = GetAnimationDuration(v4, v8, v21);
    v17 = v21[0];
    v22 = pguid;
    if ( AnimationDuration < 0 )
      v17 = 0;
    LODWORD(v11) = CAnimationClockCoordinator::OnBeginAnimationClock(v14, &v22, v17);
    if ( (_DWORD)v11 == -2147019873 )
      LODWORD(v11) = 0;
  }
LABEL_11:
  if ( a4 )
  {
    p_pguid = &pguid;
    if ( (int)v11 < 0 )
      p_pguid = &GUID_NULL;
    *a4 = *p_pguid;
  }
  return (unsigned int)v11;
}
