/*
 * XREFs of sub_1400082E8 @ 0x1400082E8
 * Callers:
 *     sub_14000806C @ 0x14000806C (sub_14000806C.c)
 * Callees:
 *     sub_14000348C @ 0x14000348C (sub_14000348C.c)
 *     sub_14002B2A8 @ 0x14002B2A8 (sub_14002B2A8.c)
 */

__int64 __fastcall sub_1400082E8(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // esi
  char v4; // bp
  int v5; // r14d
  __int64 *v6; // rdi
  __int64 v7; // rax
  char v8; // al
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp+8h]

  v10 = 0LL;
  v11 = 0LL;
  *a2 = 1;
  v2 = sub_14002B2A8(&v10, 58222274LL, 1LL);
  v3 = ((_DWORD)v11 != 0 ? 0x400 : 0) | (HIDWORD(v11) != 0 ? 0x800 : 0);
  if ( v2 )
  {
    v4 = BYTE4(v10);
    v5 = HIDWORD(v10);
  }
  else
  {
    v4 = 0;
    v5 = 0;
  }
  v6 = (__int64 *)&off_140012508;
  if ( &off_140012508 )
  {
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      if ( *(_BYTE *)(v7 + 30) || *(_BYTE *)(v7 + 29) )
      {
        if ( !*(_BYTE *)(v7 + 31) )
          goto LABEL_9;
        ++v6;
      }
      else
      {
        v8 = sub_14000348C(*(unsigned int **)v7, *v6++);
        if ( (v8 & 1) == 0 )
          goto LABEL_9;
      }
    }
  }
  if ( v4 )
  {
    LODWORD(v12) = v3 ^ ((v4 & 0x3F) << 12);
    if ( DWORD2(v10) )
    {
      HIDWORD(v12) = v5;
      return v12;
    }
  }
  else
  {
LABEL_9:
    LODWORD(v12) = v3;
  }
  HIDWORD(v12) = 0;
  return v12;
}
