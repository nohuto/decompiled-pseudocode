/*
 * XREFs of ?PositionView@TabletModePositioner@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@AEBULAYOUT_ENVIRONMENT_DETAILS@@PEAUIApplicationViewOperation@@@Z @ 0x18051C3B4
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180518614 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModePositioner::PositionView(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        const RECT *a4,
        struct IApplicationViewOperation *a5)
{
  BOOL v6; // eax
  __int64 v7; // r9
  int v8; // edi
  __int64 v9; // rdx
  __int64 (__fastcall *v11)(struct IApplicationViewOperation *, RECT *); // rax
  int v12; // eax
  unsigned int v13; // ebx
  RECT v14; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = EqualRect(a3, a4);
  v7 = *(_QWORD *)a5;
  if ( v6 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(v7 + 48))(a5, 3LL);
    if ( v8 < 0 )
    {
      v9 = 2571LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
  }
  else
  {
    v11 = *(__int64 (__fastcall **)(struct IApplicationViewOperation *, RECT *))(v7 + 56);
    v14 = *a3;
    v8 = v11(a5, &v14);
    if ( v8 < 0 )
    {
      v9 = 2576LL;
      goto LABEL_4;
    }
    v8 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)a5 + 48LL))(a5, 4LL);
    if ( v8 < 0 )
    {
      v9 = 2577LL;
      goto LABEL_4;
    }
    v8 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)a5 + 64LL))(a5, 3LL);
    if ( v8 < 0 )
    {
      v9 = 2578LL;
      goto LABEL_4;
    }
  }
  v12 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)a5 + 72LL))(a5, 1LL);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA15,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
