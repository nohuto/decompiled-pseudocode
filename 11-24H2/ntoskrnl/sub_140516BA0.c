/*
 * XREFs of sub_140516BA0 @ 0x140516BA0
 * Callers:
 *     sub_140516C24 @ 0x140516C24 (sub_140516C24.c)
 *     sub_140BE196C @ 0x140BE196C (sub_140BE196C.c)
 *     sub_140BE2C70 @ 0x140BE2C70 (sub_140BE2C70.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_140516BA0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  unsigned __int8 result; // al
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  unsigned __int8 i; // cl

  v5 = a3;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 1032))(a2, a3);
  if ( a3 )
  {
    v7 = a2 + 16;
    do
    {
      v8 = (_DWORD *)v7;
      v9 = 4LL;
      do
      {
        *v8 ^= v8[4];
        ++v8;
        --v9;
      }
      while ( v9 );
      result = *(_BYTE *)(v7 + 15);
      for ( i = result; ; i ^= result )
      {
        result >>= 7;
        if ( !result )
          break;
      }
      *(_BYTE *)(v7 + 15) = i & 0x7F;
      v7 += 48LL;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
