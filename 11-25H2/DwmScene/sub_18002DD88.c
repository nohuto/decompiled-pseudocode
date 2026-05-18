/*
 * XREFs of sub_18002DD88 @ 0x18002DD88
 * Callers:
 *     sub_180035358 @ 0x180035358 (sub_180035358.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_18002E3FC @ 0x18002E3FC (sub_18002E3FC.c)
 *     sub_18002FC6C @ 0x18002FC6C (sub_18002FC6C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002DD88(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 *v5; // r14
  __int64 *v6; // rax
  __int64 *v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]
  unsigned __int64 *v15; // [rsp+80h] [rbp+20h] BYREF

  v5 = (__int64 *)*a1;
  v6 = *(__int64 **)(*a1 + 8LL);
  v14 = (unsigned __int64)v6;
  v7 = v5;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v14 = v6;
      if ( v6[4] >= v8 )
      {
        DWORD2(v14) = 1;
        v7 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        DWORD2(v14) = 0;
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( *((_BYTE *)v7 + 25) || *a3 < v7[4] )
  {
    if ( a1[1] == 0x2AAAAAAAAAAAAAALL )
      sub_18001CC04();
    v15 = a3;
    *(_QWORD *)&v13 = a1;
    v9 = sub_18001B098(96LL);
    sub_18002E3FC(v10, v9 + 32, v11, &v15);
    *(_QWORD *)v9 = v5;
    *(_QWORD *)(v9 + 8) = v5;
    *(_QWORD *)(v9 + 16) = v5;
    *(_WORD *)(v9 + 24) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    sub_18002FC6C(&v13);
    v13 = v14;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v13, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
