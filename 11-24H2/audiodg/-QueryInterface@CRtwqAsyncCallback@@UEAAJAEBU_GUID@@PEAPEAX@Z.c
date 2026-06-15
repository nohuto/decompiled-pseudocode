/*
 * XREFs of ?QueryInterface@CRtwqAsyncCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006DD20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRtwqAsyncCallback::QueryInterface(CRtwqAsyncCallback *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a27003cf_2354_4f2a_8d6a_ab7cff15437e.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a27003cf_2354_4f2a_8d6a_ab7cff15437e.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a27003cf_2354_4f2a_8d6a_ab7cff15437e.Data4;
    if ( !v4 )
      goto LABEL_9;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    else
    {
LABEL_9:
      *a3 = this;
      (*(void (__fastcall **)(CRtwqAsyncCallback *))(*(_QWORD *)this + 8LL))(this);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD3,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
