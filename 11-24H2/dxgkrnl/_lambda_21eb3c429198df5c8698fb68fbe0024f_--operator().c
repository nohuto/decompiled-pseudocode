/*
 * XREFs of _lambda_21eb3c429198df5c8698fb68fbe0024f_::operator() @ 0x1402E05D0
 * Callers:
 *     _DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140041650 (_DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

void __fastcall lambda_21eb3c429198df5c8698fb68fbe0024f_::operator()(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  ReferenceCounted *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  void *v8; // [rsp+20h] [rbp-18h] BYREF
  ReferenceCounted *v9; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (ReferenceCounted *)*a1[1];
  v5 = **a1;
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 1896LL);
  v7 = WdLogNewEntry5_WdTrace(v5, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v4;
  *(_QWORD *)(v7 + 32) = v6;
  WdLogGlobalForLineNumber = 2425;
  if ( v6 && v4 )
  {
    if ( !*(_QWORD *)(v6 + 3120) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2443;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 3120) + 112LL) )
    {
      v9 = 0LL;
      v8 = retaddr;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v8);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v8);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v8);
      v9 = v4;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v8);
      ReferenceCounted::Release(v4);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v8);
    }
    else
    {
      WdLogSingleEntry1(2LL, v6);
      WdLogGlobalForLineNumber = 2453;
    }
  }
}
