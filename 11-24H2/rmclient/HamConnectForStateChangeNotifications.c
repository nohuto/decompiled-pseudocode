/*
 * XREFs of HamConnectForStateChangeNotifications @ 0x180002E60
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180002E30 (MIDL_user_allocate.c)
 *     CempLockInitialize @ 0x180004440 (CempLockInitialize.c)
 *     HampConnectionAllocateState @ 0x180004640 (HampConnectionAllocateState.c)
 *     HampConnectionStart @ 0x180004BF0 (HampConnectionStart.c)
 *     HamIpcChannelInitialize @ 0x180004D08 (HamIpcChannelInitialize.c)
 *     HampConnectionDestroy @ 0x180004D70 (HampConnectionDestroy.c)
 *     memset_0 @ 0x18001C1CE (memset_0.c)
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

__int64 __fastcall HamConnectForStateChangeNotifications(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  char *v6; // rax
  char *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // esi
  __int128 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-30h]

  v4 = 0;
  if ( a1 )
  {
    *(_QWORD *)&v13 = a1;
    v15 = 0LL;
    v16 = 0LL;
    v14 = a3;
    *((_QWORD *)&v13 + 1) = a2;
    v6 = (char *)MIDL_user_allocate(0xA0uLL);
    v7 = v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0xA0uLL);
      CempLockInitialize(v7 + 120);
      *(_OWORD *)(v7 + 104) = v13;
      if ( &unk_18001E8A0 == &unk_18001EC50 )
      {
        v7[156] = 0;
        HamIpcChannelInitialize(v9, v8, v10, v7 + 24);
      }
      else
      {
        v7[156] = 6;
      }
      v11 = HampConnectionAllocateState(v7, &unk_18001E8A0, 0LL, &v14);
      if ( v11 < 0 || (v11 = HampConnectionStart(v7), v11 < 0) )
      {
        HampConnectionDestroy(v7);
        return (unsigned int)v11;
      }
      else
      {
        *a4 = v7;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v4;
}
