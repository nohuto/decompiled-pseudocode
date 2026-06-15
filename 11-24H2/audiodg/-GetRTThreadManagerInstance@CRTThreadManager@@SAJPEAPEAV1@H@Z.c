/*
 * XREFs of ?GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@H@Z @ 0x140055170
 * Callers:
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140021538 (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ @ 0x1400638AC (-GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::init_once__lambda_171c398c6aabaca0f0574d3dc33ce85c___ @ 0x1400551D4 (wil--init_once__lambda_171c398c6aabaca0f0574d3dc33ce85c___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRTThreadManager::GetRTThreadManagerInstance(struct CRTThreadManager **a1, int a2)
{
  __int64 v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  wil::init_once__lambda_171c398c6aabaca0f0574d3dc33ce85c___(a1, &v6);
  v3 = gRTThreadManager;
  if ( gRTThreadManager )
  {
    *a1 = (struct CRTThreadManager *)gRTThreadManager;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
