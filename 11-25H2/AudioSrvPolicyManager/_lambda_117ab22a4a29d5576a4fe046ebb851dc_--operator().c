/*
 * XREFs of _lambda_117ab22a4a29d5576a4fe046ebb851dc_::operator() @ 0x18002EEA4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_117ab22a4a29d5576a4fe046ebb851dc__long_IAudioSessionInfo___::_Do_call @ 0x180031640 (std--_Func_impl_no_alloc__lambda_117ab22a4a29d5576a4fe046ebb851dc__long_IAudioSessionInfo___--_D.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002FE8C (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker.c)
 *     WPP_SF_S @ 0x180031C70 (WPP_SF_S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_117ab22a4a29d5576a4fe046ebb851dc_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+28h] [rbp-30h] BYREF
  __int16 v14; // [rsp+40h] [rbp-18h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, v4);
  }
  v5 = 0;
  v6 = *a1;
  v7 = *(_QWORD *)a1[1];
  try
  {
    v8 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 64LL))();
    v13[0] = &CGenerateDuckingNotification::`vftable';
    v13[1] = v7;
    v13[2] = v8;
    v14 = 257;
    CLockedList_UniqueValuesOnly<CDuckingNotification,0>::ForEachEntry(v6 + 72, v13);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v11 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    return *(unsigned int *)v11;
  }
  return v5;
}
