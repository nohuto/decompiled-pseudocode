/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z @ 0x1802D97A0
 * Callers:
 *     ??_G?$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802D9650 (--_G-$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_GInProcModule@Details@Platform@@UEAAPEAXI@Z @ 0x1802D96B0 (--_GInProcModule@Details@Platform@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const wchar_t *a3)
{
  char v3; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  char *v9; // r8
  int v10; // edx
  int v11; // eax
  RTL_SRWLOCK *v12; // rdi
  void **v13; // rax
  void *v14; // rbp
  PVOID v15; // rax

  v3 = (char)a3;
  v6 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 32LL))(this) + 8;
  v7 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
  if ( v6 >= v7 )
    return (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) == 0;
  while ( 1 )
  {
    if ( *(_QWORD *)v6 )
    {
      if ( !a2 )
        break;
      v8 = *(struct Microsoft::WRL::Details::ModuleBase **)(*(_QWORD *)v6 + 32LL);
      if ( v8 )
      {
        v9 = (char *)(a2 - v8);
        do
        {
          v10 = *(unsigned __int16 *)&v9[(_QWORD)v8];
          v11 = *(unsigned __int16 *)v8 - v10;
          if ( v11 )
            break;
          v8 = (struct Microsoft::WRL::Details::ModuleBase *)((char *)v8 + 2);
        }
        while ( v10 );
        if ( !v11 )
          break;
      }
    }
LABEL_18:
    v6 += 8LL;
    if ( v6 >= v7 )
      return (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) == 0;
  }
  if ( !(*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) || v3 )
  {
    if ( **(_QWORD **)(*(_QWORD *)v6 + 24LL) )
    {
      v12 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
      AcquireSRWLockExclusive(v12);
      v13 = *(void ***)(*(_QWORD *)v6 + 24LL);
      v14 = *v13;
      if ( *v13 )
      {
        *v13 = 0LL;
        if ( v12 )
          ReleaseSRWLockExclusive(v12);
        v15 = DecodePointer(v14);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v15 + 16LL))(v15);
      }
      else if ( v12 )
      {
        ReleaseSRWLockExclusive(v12);
      }
    }
    goto LABEL_18;
  }
  return 0;
}
