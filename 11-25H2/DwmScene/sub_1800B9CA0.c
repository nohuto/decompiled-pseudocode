/*
 * XREFs of sub_1800B9CA0 @ 0x1800B9CA0
 * Callers:
 *     sub_1800B98C0 @ 0x1800B98C0 (sub_1800B98C0.c)
 * Callees:
 *     sub_1800B8E8C @ 0x1800B8E8C (sub_1800B8E8C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_1800B9CA0(__int64 a1)
{
  _UNKNOWN **v1; // rax
  int v2; // ebx
  __int64 v4; // rax
  void (__fastcall *v5)(__int64, __int128 *); // rax
  __int128 v7; // [rsp+28h] [rbp-29h] BYREF
  int v8; // [rsp+38h] [rbp-19h]
  int v9; // [rsp+3Ch] [rbp-15h]
  int v10; // [rsp+40h] [rbp-11h]
  int v11; // [rsp+44h] [rbp-Dh]
  __int128 v12; // [rsp+48h] [rbp-9h]
  __int128 v13; // [rsp+58h] [rbp+7h]
  __int128 v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+8Ch] [rbp+3Bh]
  __int64 v19; // [rsp+90h] [rbp+3Fh]
  int v20; // [rsp+98h] [rbp+47h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  v2 = *(_DWORD *)(a1 + 416);
  if ( v2 != 1 )
  {
    if ( !v2 )
    {
      v4 = *(_QWORD *)a1;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v5 = *(void (__fastcall **)(__int64, __int128 *))(v4 + 88);
      v11 = 0;
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0;
      v18 = 0;
      v19 = 0LL;
      v20 = 0;
      v7 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v5(a1, &v7);
      v2 = v20 >= 1000 ? (v20 >= 2000) + 2 : 1;
      if ( *(_DWORD *)(a1 + 308) == 1 )
        v2 = 1;
    }
    LOBYTE(v1) = sub_1800B8E8C(a1);
    if ( !(_BYTE)v1 && *(_DWORD *)(a1 + 384) == 1 )
      v2 = 1;
  }
  *(_DWORD *)(a1 + 420) = v2;
  return (char)v1;
}
