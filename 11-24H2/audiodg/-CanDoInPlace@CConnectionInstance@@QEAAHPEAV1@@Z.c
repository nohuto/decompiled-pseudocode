/*
 * XREFs of ?CanDoInPlace@CConnectionInstance@@QEAAHPEAV1@@Z @ 0x14002ECF4
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14002EB28 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
_BOOL8 __fastcall CConnectionInstance::CanDoInPlace(CConnectionInstance *this, struct CConnectionInstance *a2)
{
  BOOL v3; // r15d
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF
  __int64 v14; // [rsp+60h] [rbp+40h] BYREF

  v3 = 0;
  v14 = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 4);
    if ( v6 )
    {
      if ( a2 && *(_DWORD *)(v5 + 40) == 2 && *(_DWORD *)(v6 + 40) == 2 )
      {
        if ( *((_DWORD *)this + 4) )
        {
          if ( (*(_BYTE *)(v5 + 48) & 1) != 0 )
          {
            v11 = *((_QWORD *)a2 + 3);
            if ( v11 )
            {
              if ( *(_DWORD *)(v11 + 40) == 2 )
              {
                (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 8LL))(v5, &v14);
                v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
                (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, &v13);
                v3 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13) + 8) >= *(_DWORD *)(v12 + 8);
                v4 = v13;
              }
            }
          }
        }
        else if ( (*(_BYTE *)(v6 + 48) & 1) != 0 )
        {
          v7 = *((_QWORD *)a2 + 4);
          if ( v7 )
          {
            if ( *(_DWORD *)(v7 + 40) == 2 )
            {
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 8LL))(v6, &v14);
              v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL))(v6, &v13);
              v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
              v4 = v13;
              v3 = *(_DWORD *)(v8 + 8) >= *(_DWORD *)(v9 + 8);
            }
          }
        }
      }
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64, struct CConnectionInstance *))(*(_QWORD *)v4 + 16LL))(v4, a2);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v3;
}
