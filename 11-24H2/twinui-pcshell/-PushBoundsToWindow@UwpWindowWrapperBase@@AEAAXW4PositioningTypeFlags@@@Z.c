/*
 * XREFs of ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800A9F94
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800A8374 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     _lambda_cc5ed20aaab4032583b283f4fa22eb03_::operator() @ 0x1800A9AF8 (_lambda_cc5ed20aaab4032583b283f4fa22eb03_--operator().c)
 *     ?SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800A9C0C (-SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@.c)
 *     _lambda_7695e591477d8b1c45133260318902fa_::operator() @ 0x1800A9DEC (_lambda_7695e591477d8b1c45133260318902fa_--operator().c)
 * Callees:
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x1800AA0A4 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::PushBoundsToWindow(__int64 a1, char a2)
{
  __int64 result; // rax
  char v5; // al
  char v6; // cl
  UINT uFlags; // r10d

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  if ( *(_BYTE *)(a1 + 488) && *(_DWORD *)(a1 + 296) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
      v6 = a2 & 0xFD;
      if ( v5 )
        v6 = a2;
      uFlags = 2 * ((v6 & 1) == 0) + 17428;
      if ( (v6 & 2) == 0 )
        uFlags |= 1u;
      if ( SetWindowPos(
             (HWND)*(int *)(a1 + 296),
             0LL,
             (int)*(float *)(a1 + 472),
             (int)*(float *)(a1 + 476),
             (int)*(float *)(a1 + 480),
             (int)*(float *)(a1 + 484),
             uFlags) )
      {
        UwpWindowReadyState::PosChanged(
          (UwpWindowReadyState *)(a1 + 360),
          (int)*(float *)(a1 + 480),
          (int)*(float *)(a1 + 484));
      }
    }
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
  }
  return result;
}
