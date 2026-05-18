/*
 * XREFs of sub_1800CF594 @ 0x1800CF594
 * Callers:
 *     sub_1800D01A0 @ 0x1800D01A0 (sub_1800D01A0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_18004F338 @ 0x18004F338 (sub_18004F338.c)
 *     sub_1800CF9D0 @ 0x1800CF9D0 (sub_1800CF9D0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CF594(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 *v5; // r14
  __int64 *v6; // rax
  __int64 *v7; // rdx
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h]
  _DWORD *v16; // [rsp+80h] [rbp+20h] BYREF

  v5 = (__int64 *)*a1;
  v6 = *(__int64 **)(*a1 + 8LL);
  v15 = (unsigned __int64)v6;
  v7 = v5;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v15 = v6;
      if ( *((_DWORD *)v6 + 8) >= v8 )
      {
        DWORD2(v15) = 1;
        v7 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        DWORD2(v15) = 0;
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( *((_BYTE *)v7 + 25) || *a3 < *((_DWORD *)v7 + 8) )
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001CD64();
    v16 = a3;
    *(_QWORD *)&v14 = a1;
    v9 = sub_18001B1F8(104LL);
    sub_1800CF9D0(v10, v9 + 32, v11, &v16);
    *(_QWORD *)v9 = v5;
    *(_QWORD *)(v9 + 8) = v5;
    *(_QWORD *)(v9 + 16) = v5;
    *(_WORD *)(v9 + 24) = 0;
    *((_QWORD *)&v14 + 1) = 0LL;
    sub_18004F338((__int64)&v14, v12);
    v14 = v15;
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v14, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
