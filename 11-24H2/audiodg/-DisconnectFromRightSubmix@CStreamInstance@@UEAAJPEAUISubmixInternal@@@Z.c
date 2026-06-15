/*
 * XREFs of ?DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@@Z @ 0x140039FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x14003A094 (-OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::DisconnectFromRightSubmix(CStreamInstance *this, struct ISubmixInternal *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  CPipeInstance *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a2;
  v5 = *((_QWORD *)this + 10);
  if ( (unsigned int)(*((_DWORD *)this + 28) - 2) > 1 )
    v6 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, __int64))(v4 + 160))(a2, v5);
  else
    v6 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, __int64))(v4 + 168))(a2, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB2,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    v8 = (CPipeInstance *)*((_QWORD *)this + 10);
    v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 56LL))(a2);
    CPipeInstance::OnDisconnectedFromRightSubmix(v8, v9);
    v10 = *(_QWORD *)a2;
    v14 = 0LL;
    (*(void (__fastcall **)(struct ISubmixInternal *, __int64 *))(v10 + 112))(a2, &v14);
    v11 = v14;
    if ( v14 )
    {
      (*(void (__fastcall **)(CStreamInstance *, __int64))(*(_QWORD *)this + 104LL))(this, v14);
      v11 = v14;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    return 0LL;
  }
}
