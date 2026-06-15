/*
 * XREFs of ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x14003A394
 * Callers:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@@Z @ 0x14003A2A0 (-DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CPipeInstance::OnDisconnectedFromRightSubmix(CPipeInstance *this, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v7; // rax
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 3);
  while ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    if ( *(_DWORD *)(v7 + 40) == 3 )
    {
      v4 = *(_QWORD **)(v7 + 32);
      v8 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, _QWORD))*v4)(*v4, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v8) < 0 )
      {
        v6 = v8;
      }
      else
      {
        v5 = 0LL;
        v9 = 0LL;
        v6 = v8;
        if ( v8 )
        {
          (**v8)(v8, &GUID_497dee26_e484_456d_9349_60b89142d65e, &v9);
          v6 = v8;
          v5 = v9;
        }
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, a2);
          v6 = v8;
          v5 = v9;
        }
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
          v6 = v8;
        }
      }
      if ( v6 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6)[2])(v6);
    }
  }
}
