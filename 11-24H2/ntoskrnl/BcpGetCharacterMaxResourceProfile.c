/*
 * XREFs of BcpGetCharacterMaxResourceProfile @ 0x14069ABF8
 * Callers:
 *     BcpGetMaxResourceProfile @ 0x14069AE80 (BcpGetMaxResourceProfile.c)
 * Callees:
 *     RaspGetXExtent @ 0x14069C374 (RaspGetXExtent.c)
 */

__int64 __fastcall BcpGetCharacterMaxResourceProfile(unsigned __int16 a1, int a2, __int128 *a3, unsigned __int64 *a4)
{
  __int128 v4; // xmm1
  unsigned __int64 *v6; // rdi
  __int64 v7; // rsi
  int *v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-40h]
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-8h]
  unsigned int v19; // [rsp+90h] [rbp+30h] BYREF

  v4 = *a3;
  v15 = 0LL;
  v6 = a4;
  v7 = 0LL;
  v8 = (int *)((char *)&unk_140E0EFA0 + 4 * a2);
  v16 = *((_QWORD *)a3 + 2);
  v15 = v4;
  do
  {
    v9 = *v8;
    v19 = 0;
    LODWORD(v16) = v9;
    v18 = 0LL;
    v17 = 0LL;
    LODWORD(a4) = RaspGetXExtent(a1, (unsigned int)&v15, (unsigned int)&v19, (_DWORD)a4, v14, (__int64)&v17);
    if ( (int)a4 < 0 )
      break;
    v10 = *v6;
    v11 = v19;
    v12 = v18;
    if ( *((_DWORD *)v6 + 2) >= v19 )
      v11 = *((_DWORD *)v6 + 2);
    *((_DWORD *)v6 + 2) = v11;
    if ( v10 >= v12 )
      v12 = v10;
    ++v7;
    v8 += 21;
    *v6 = v12;
  }
  while ( v7 < 5 );
  return (unsigned int)a4;
}
