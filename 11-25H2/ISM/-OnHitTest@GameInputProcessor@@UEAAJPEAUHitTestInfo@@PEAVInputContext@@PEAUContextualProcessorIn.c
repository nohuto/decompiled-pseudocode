/*
 * XREFs of ?OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18004B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180015AA8 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Reallocate@$00@?$vector@KV?$allocator@K@std@@@std@@AEAAXAEA_K@Z @ 0x18008B89C (--$_Reallocate@$00@-$vector@KV-$allocator@K@std@@@std@@AEAAXAEA_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GameInputServerGet @ 0x1800998DC (GameInputServerGet.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B0D58 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GameInputProcessor::OnHitTest(
        GameInputProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  _QWORD *v8; // rbx
  int v9; // edi
  int v10; // eax
  int v11; // r15d
  __int64 *v12; // r15
  unsigned int *v13; // r12
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int8 (__fastcall *v19)(__int64, _QWORD); // rbp
  unsigned int v20; // esi
  __int64 v21; // rcx
  int (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // r9
  int v23; // eax
  int v24; // eax
  int v25[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v26[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( gbIsDWMNoRawGameController )
  {
    *(_DWORD *)a4 = 0;
    return 0LL;
  }
  v8 = (_QWORD *)((char *)this + 32);
  v9 = 0;
  if ( !*((_QWORD *)this + 4) )
  {
    *v8 = 0LL;
    v10 = GameInputServerGet((char *)this + 32);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x187,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib"
                      "\\gameinputprocessor.cpp",
        (const char *)(unsigned int)v10,
        v25[0]);
      goto LABEL_13;
    }
    if ( *v8 )
    {
      v12 = (__int64 *)((char *)this + 168);
      v13 = (unsigned int *)*((_QWORD *)this + 21);
      v26[0] = *((_QWORD *)this + 22);
      v14 = (_QWORD *)((char *)this + 168);
      if ( v13 != (unsigned int *)v26[0] )
      {
        do
        {
          *(_QWORD *)v25 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 *v13,
                 v25) >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v8 + 24LL))(
              *v8,
              *(_QWORD *)v25 + 76LL,
              (unsigned int)**(_DWORD **)v25);
            if ( *(_DWORD *)(*(_QWORD *)v25 + 4LL) == 4 && !*((_BYTE *)this + 192) )
            {
              v24 = NtMITSetKeyboardInputRoutingPolicy(1LL);
              if ( v24 < 0 )
                wil::details::in1diag3::_FailFast_NtStatus(
                  retaddr,
                  (void *)0x19B,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\s"
                                "ystem\\lib\\gameinputprocessor.cpp",
                  (const char *)(unsigned int)v24,
                  v25[0]);
              *((_BYTE *)this + 192) = 1;
            }
          }
          ++v13;
        }
        while ( v13 != (unsigned int *)v26[0] );
        v14 = (_QWORD *)((char *)this + 168);
      }
      v15 = *v12;
      v16 = *((_QWORD *)this + 22);
      if ( *v12 != v16 )
      {
        *((_QWORD *)this + 22) = v15;
        v16 = v15;
      }
      if ( v16 != v14[2] )
      {
        if ( *v14 == v16 )
        {
          std::vector<Windows::UI::Color>::_Tidy((__int64)v14);
        }
        else
        {
          v26[0] = (v16 - *v14) >> 2;
          std::vector<unsigned long>::_Reallocate<1>(v14, v26);
        }
      }
    }
  }
  v11 = 0;
  v8 = (_QWORD *)((char *)this + 32);
LABEL_13:
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      (const char *)(unsigned int)v11,
      v25[0]);
  if ( *(_DWORD *)a2 == 2 )
  {
    v17 = *v8;
    if ( v17 )
    {
      v19 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 72LL);
      v20 = 0;
      v25[0] = 0;
      v21 = 0LL;
      v26[0] = 0LL;
      v22 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)a3 + 2);
      if ( v22 )
      {
        if ( (**v22)(*((_QWORD *)a3 + 2), &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v26) >= 0 )
        {
          v23 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v26[0] + 32LL))(v26[0], v25);
          if ( v23 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x16C,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\syste"
                            "m\\lib\\gameinputprocessor.cpp",
              (const char *)(unsigned int)v23,
              v25[0]);
        }
        v20 = v25[0];
        v21 = v26[0];
      }
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v19(v17, v20) )
        v9 = 3;
    }
  }
  *(_DWORD *)a4 = v9;
  return 0LL;
}
