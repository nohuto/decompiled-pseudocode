/*
 * XREFs of KiFlushRangeTb @ 0x1403FC780
 * Callers:
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeTb(unsigned __int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned int v8; // edi
  __int128 v10; // [rsp+20h] [rbp-48h]
  __int128 v11; // [rsp+30h] [rbp-38h]

  v3 = a1;
  if ( KiFlushPcid && (unsigned int)(a2 - 1) <= 1 && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
  {
    if ( (KiFlushPcid & 2) != 0 )
    {
      *(_QWORD *)&v10 = 1LL;
      *((_QWORD *)&v10 + 1) = a1;
      _EAX = 0;
      __asm { invpcid eax, [rsp+68h+var_48] }
    }
    else
    {
      KiSetUserTbFlushPending();
    }
  }
  __invlpg((void *)v3);
  LOBYTE(_RAX) = 8 * ((v3 >> 10) & 3);
  v6 = 4096LL << (9 * ((unsigned __int8)(v3 >> 10) & 3u));
  v7 = v3 & 0x3FF;
  if ( (v3 & 0x3FF) != 0 )
  {
    v8 = a2 - 1;
    do
    {
      v3 += v6;
      if ( KiFlushPcid )
      {
        if ( v8 <= 1 )
        {
          _RAX = KeGetCurrentThread();
          if ( !_RAX->ApcState.Process->AddressPolicy )
          {
            if ( (KiFlushPcid & 2) != 0 )
            {
              *(_QWORD *)&v11 = 1LL;
              *((_QWORD *)&v11 + 1) = v3;
              LODWORD(_RAX) = 0;
              __asm { invpcid eax, [rsp+68h+var_38] }
            }
            else
            {
              LOBYTE(_RAX) = KiSetUserTbFlushPending();
            }
          }
        }
      }
      __invlpg((void *)v3);
      --v7;
    }
    while ( v7 );
  }
  return (char)_RAX;
}
