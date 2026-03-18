/*
 * XREFs of ?Initialize@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ @ 0x140119C08
 * Callers:
 *     ?Create@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401197F4 (-Create@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140119860 (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x140119F14 (-PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<28672,112>::Initialize(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v5; // rcx
  struct _PAGED_LOOKASIDE_LIST *Pool2; // rax

  if ( NSInstrumentation::PlatformDebugModeEnabled((NSInstrumentation *)a1) )
  {
    *(_BYTE *)(a1 + 36) = 1;
    Pool2 = (struct _PAGED_LOOKASIDE_LIST *)ExAllocatePool2(66LL, 128LL, 1869834581LL);
    *(_QWORD *)(a1 + 24) = Pool2;
    if ( !Pool2 )
      return 0;
    ExInitializePagedLookasideList(
      Pool2,
      `NSInstrumentation::CTypeIsolation<909312,3552>::Initialize'::`13'::_lambda_1_::_lambda_invoker_cdecl_<enum _POOL_TYPE,unsigned __int64,unsigned long>,
      (PFREE_FUNCTION)_lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>,
      0x220u,
      0x70uLL,
      0x6F736955u,
      0x100u);
  }
  else
  {
    v2 = (_QWORD *)ExAllocatePool2(258LL, 8LL, 1869834581LL);
    *(_QWORD *)(a1 + 16) = v2;
    if ( !v2 )
      return 0;
    *v2 = 0LL;
    v3 = NSInstrumentation::CSectionEntry<28672,112>::Create();
    if ( !v3 )
      return 0;
    v5 = *(_QWORD **)(a1 + 8);
    *(_DWORD *)(a1 + 32) = 252;
    if ( *v5 != a1 )
      __fastfail(3u);
    *v3 = a1;
    v3[1] = v5;
    *v5 = v3;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return 1;
}
