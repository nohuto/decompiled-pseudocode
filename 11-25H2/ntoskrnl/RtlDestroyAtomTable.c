/*
 * XREFs of RtlDestroyAtomTable @ 0x14091D100
 * Callers:
 *     RtlDereferenceAtomTable @ 0x1405DCBD0 (RtlDereferenceAtomTable.c)
 * Callees:
 *     RtlpFreeAtom @ 0x14091BC00 (RtlpFreeAtom.c)
 *     RtlpLockAtomTable @ 0x14091EAC0 (RtlpLockAtomTable.c)
 *     RtlpUnlockAtomTable @ 0x14091EB3C (RtlpUnlockAtomTable.c)
 *     ExDestroyHandleTable @ 0x140972988 (ExDestroyHandleTable.c)
 */

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebp
  _QWORD **i; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD **v13; // r15
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) != 1 )
    return 0;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    v6 = 0;
    for ( i = (_QWORD **)((char *)AtomTableHandle + 32); v6 < *((_DWORD *)AtomTableHandle + 7); ++v6 )
    {
      v8 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v9 = v8;
        if ( !v8 )
          break;
        v8 = (_QWORD *)*v8;
        v13 = (_QWORD **)(v9 + 2);
        *v9 = 0LL;
        while ( 1 )
        {
          v14 = *v13;
          if ( *v13 == v13 )
            break;
          if ( (_QWORD **)v14[1] != v13 || (v15 = (_QWORD *)*v14, *(_QWORD **)(*v14 + 8LL) != v14) )
            __fastfail(3u);
          *v13 = v15;
          v15[1] = v13;
          RtlpFreeAtom((__int64)v14, v3, v4, v5);
        }
        RtlpFreeAtom((__int64)v9, v3, v4, v5);
      }
    }
    *(_DWORD *)AtomTableHandle = 0;
    RtlpUnlockAtomTable(AtomTableHandle);
    ExDestroyHandleTable(*((PVOID *)AtomTableHandle + 2));
    *(_OWORD *)AtomTableHandle = 0LL;
    *((_OWORD *)AtomTableHandle + 1) = 0LL;
    *((_QWORD *)AtomTableHandle + 4) = 0LL;
    RtlpFreeAtom((__int64)AtomTableHandle, v10, v11, v12);
    return 0;
  }
  return -1073741811;
}
