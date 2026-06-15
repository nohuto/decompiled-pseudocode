/*
 * XREFs of _lambda_e71555c2ea4eb41c7555c95167e5b0eb_::operator() @ 0x1800F98FC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e71555c2ea4eb41c7555c95167e5b0eb__bool_ISaDeviceProxy___::_Do_call @ 0x1800FAD30 (std--_Func_impl_no_alloc__lambda_e71555c2ea4eb41c7555c95167e5b0eb__bool_ISaDeviceProxy___--_Do_c.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800A7F1C (memcmp_0.c)
 *     WPP_SF_qdd @ 0x1800C36CC (WPP_SF_qdd.c)
 *     WPP_SF_qDD @ 0x1800FAE20 (WPP_SF_qDD.c)
 *     WPP_SF_qdddd @ 0x1800FAE88 (WPP_SF_qdddd.c)
 *     WPP_SF_qii @ 0x1800FAF0C (WPP_SF_qii.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_e71555c2ea4eb41c7555c95167e5b0eb_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // rax
  unsigned __int16 *v12; // rdi
  size_t v13; // rsi
  const void *v14; // rax
  __int64 v16; // rcx
  int v17; // edi
  int v18; // esi
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // ebx
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+28h] [rbp-40h]
  _BYTE v29[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*a1 + 32);
  if ( v4 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v29);
    v9 = *a1;
    if ( *(_QWORD *)(*a1 + 48) == *v8 && *(_QWORD *)(v9 + 56) == v8[1] )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( v10 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2) )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
        v12 = *(unsigned __int16 **)(*a1 + 16);
        v13 = v12[8] + 18LL;
        if ( v13 == *(unsigned __int16 *)(v11 + 16) + 18LL )
        {
          v14 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          if ( !memcmp_0(v12, v14, v13) )
            return 1;
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v16 = *(_QWORD *)(*a1 + 16);
          v17 = *(unsigned __int16 *)(v16 + 2);
          v18 = *(_DWORD *)(v16 + 4);
          v19 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) + 2);
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          WPP_SF_qdddd(*((_QWORD *)WPP_GLOBAL_Control + 2), v21, v22, a2, *(_DWORD *)(v20 + 4), v19, v18, v17);
        }
      }
      else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v28 = v10;
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2);
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_401f86b9cc1d325f8e48092f944d556b_Traceguids,
          a2,
          v27,
          v28);
      }
    }
    else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v23 = *(_DWORD *)(v9 + 48);
      v24 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v29);
      WPP_SF_qDD(*((_QWORD *)WPP_GLOBAL_Control + 2), v25, v26, a2, *v24, v23);
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    WPP_SF_qii(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, a2, v5, v4);
  }
  return 0;
}
