/*
 * XREFs of CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___::Invoke @ 0x180030DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180030FA4 (-Stop@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031110 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x18013B008 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8224 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___::Invoke(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r8
  unsigned int i; // edi
  __int64 v5; // rcx
  __int128 **v6; // rcx
  __int128 *v7; // rax
  void *v9; // rbx
  HANDLE ProcessHeap; // rax
  int v11; // [rsp+20h] [rbp-60h]
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  LPVOID lpMem[2]; // [rsp+40h] [rbp-40h]
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int128 *v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  __int128 *v17; // [rsp+70h] [rbp-10h]
  char v18; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v20; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+30h] BYREF

  v2 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 352);
  if ( *(_DWORD *)v3 == 1 )
  {
    LOBYTE(lpMem[1]) = 0;
    LODWORD(v12) = *(_DWORD *)(v3 + 40);
    *((_QWORD *)&v12 + 1) = *(_QWORD *)(v3 + 48);
    if ( *(_BYTE *)(v3 + 64) )
      wil::details::StoredCallContextInfo::AssignMessage(
        (wil::details::StoredCallContextInfo *)&v12,
        *(const unsigned __int16 **)(v3 + 56));
    else
      lpMem[0] = *(LPVOID *)(v3 + 56);
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = v2;
    v15 = 0LL;
    v16 = 0;
    v17 = &v12;
    v18 = 0;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)&v14);
  }
  else
  {
    v12 = 0LL;
    *(_OWORD *)lpMem = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0;
    v17 = 0LL;
    v18 = 0;
  }
  v20 = 0;
  if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), &v20) >= 0 )
  {
    for ( i = 0; i < v20; ++i )
    {
      v21 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 72) + 32LL))(
             *(_QWORD *)(a1 + 72),
             i,
             &GUID_727f9e97_76ee_497b_a942_b6371328485c,
             &v21) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(
          v21,
          *(_QWORD *)(a1 + 48),
          *(unsigned int *)(a1 + 56),
          *(_QWORD *)(a1 + 64));
      v5 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  if ( v16 )
  {
    if ( v16 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3BE,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        v11);
    v16 = 0;
    v6 = (__int128 **)v14;
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      if ( v7 == &v14 )
      {
        *v6 = v15;
        break;
      }
      v6 = (__int128 **)(v7 + 1);
      *(_QWORD *)&v14 = v7 + 1;
    }
    *(_QWORD *)&v14 = 0LL;
  }
  if ( LOBYTE(lpMem[1]) )
  {
    v9 = lpMem[0];
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v9);
  }
  return 0LL;
}
