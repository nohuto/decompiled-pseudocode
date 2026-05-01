/*
 * XREFs of ?IsPrimaryViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x180147070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewShown(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned __int8 *a2)
{
  int v2; // ebp
  RTL_SRWLOCK *v3; // rbx
  unsigned __int8 v6; // di
  __int64 v7; // r8
  unsigned __int64 i; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 result; // rax
  unsigned __int8 v17; // si
  int v18; // [rsp+40h] [rbp+8h]

  v2 = *((_DWORD *)this + 226);
  v3 = (RTL_SRWLOCK *)((char *)this + 784);
  v18 = v2;
  AcquireSRWLockShared((PSRWLOCK)this + 98);
  v6 = 0;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v9 = *((unsigned __int8 *)&v18 + i);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  v10 = *((_QWORD *)this + 93);
  v11 = v7 & *((_QWORD *)this + 96);
  v12 = *((_QWORD *)this + 91);
  v13 = 2 * v11;
  v14 = *(_QWORD *)(v10 + 8 * v13 + 8);
  if ( v14 == v12 )
  {
LABEL_8:
    v14 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v10 + 8 * v13);
    while ( v2 != *(_DWORD *)(v14 + 16) )
    {
      if ( v14 == v15 )
        goto LABEL_8;
      v14 = *(_QWORD *)(v14 + 8);
    }
  }
  if ( !v14 )
    v14 = *((_QWORD *)this + 91);
  if ( v14 == v12 )
  {
    if ( v3 )
      ReleaseSRWLockShared(v3);
  }
  else
  {
    v17 = *(_BYTE *)(v14 + 20);
    if ( v3 )
      ReleaseSRWLockShared(v3);
    v6 = v17;
  }
  result = 0LL;
  *a2 = v6;
  return result;
}
