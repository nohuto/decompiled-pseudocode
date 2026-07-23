/*
 * XREFs of MiCheckHoldFaultForHotPatch @ 0x1403D6FD8
 * Callers:
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockFaultWorkingSet @ 0x140487790 (MiUnlockFaultWorkingSet.c)
 */

__int64 __fastcall MiCheckHoldFaultForHotPatch(__int64 a1, unsigned __int64 *a2)
{
  __int64 *v2; // r14
  bool v3; // zf
  __int64 v4; // r12
  unsigned int v6; // esi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r15
  _QWORD *v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 Object; // [rsp+40h] [rbp-20h] BYREF
  char *v15; // [rsp+50h] [rbp-10h]

  v2 = (__int64 *)(a2 + 7);
  v3 = (a2[1] & 2) == 0;
  v4 = a2[7];
  v13 = 0LL;
  v15 = 0LL;
  Object = 0LL;
  if ( v3 || *a2 > 0x7FFFFFFEFFFFLL )
    return 0LL;
  v6 = 0;
  v7 = (_QWORD *)(a1 + 24);
  while ( 1 )
  {
    v8 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      break;
    v9 = *a2;
    do
    {
      v10 = v8;
      if ( v9 >= v8[2] && v9 <= v8[3] )
        break;
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != v7 );
    if ( v8 == v7 )
      break;
    v6 = 1;
    if ( (*((_BYTE *)a2 + 69) & 1) != 0 )
    {
      LOWORD(Object) = 0;
      DWORD1(Object) = 0;
      v15 = (char *)&Object + 8;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      BYTE2(Object) = 6;
      v11 = (_QWORD *)v10[5];
      if ( (_QWORD *)*v11 != v10 + 4 )
        __fastfail(3u);
      *((_QWORD *)&v13 + 1) = v10[5];
      *(_QWORD *)&v13 = v10 + 4;
      *v11 = &v13;
      v10[5] = &v13;
      MiUnlockFaultWorkingSet(v2);
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
    }
    else
    {
      MiUnlockFaultWorkingSet(v2);
    }
    MiLockWorkingSetExclusive(v4);
    *((_BYTE *)a2 + 69) |= 1u;
  }
  return v6;
}
