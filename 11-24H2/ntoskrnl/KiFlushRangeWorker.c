/*
 * XREFs of KiFlushRangeWorker @ 0x1402A2370
 * Callers:
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeWorker(__int64 a1)
{
  void **v1; // rbx
  unsigned __int64 v3; // r15
  int v4; // esi
  unsigned __int64 v5; // rdi
  __int64 v8; // r12
  unsigned __int64 v9; // rbp
  unsigned int v10; // esi
  __int128 v12; // [rsp+20h] [rbp-58h]
  __int128 v13; // [rsp+30h] [rbp-48h]

  v1 = *(void ***)a1;
  v3 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
  do
  {
    v4 = *(_DWORD *)(a1 + 12);
    v5 = (unsigned __int64)*v1;
    if ( KiFlushPcid && (unsigned int)(v4 - 1) <= 1 && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
    {
      if ( (KiFlushPcid & 2) != 0 )
      {
        *(_QWORD *)&v12 = 1LL;
        *((_QWORD *)&v12 + 1) = *v1;
        _EAX = 0;
        __asm { invpcid eax, [rsp+78h+var_58] }
      }
      else
      {
        KiSetUserTbFlushPending();
      }
    }
    __invlpg((void *)v5);
    LOBYTE(_RAX) = 8 * ((v5 >> 10) & 3);
    v8 = 4096LL << (9 * ((unsigned __int8)(v5 >> 10) & 3u));
    v9 = v5 & 0x3FF;
    if ( (v5 & 0x3FF) != 0 )
    {
      v10 = v4 - 1;
      do
      {
        v5 += v8;
        if ( KiFlushPcid )
        {
          if ( v10 <= 1 )
          {
            _RAX = KeGetCurrentThread();
            if ( !_RAX->ApcState.Process->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v13 = 1LL;
                *((_QWORD *)&v13 + 1) = v5;
                LODWORD(_RAX) = 0;
                __asm { invpcid eax, [rsp+78h+var_48] }
              }
              else
              {
                LOBYTE(_RAX) = KiSetUserTbFlushPending();
              }
            }
          }
        }
        __invlpg((void *)v5);
        --v9;
      }
      while ( v9 );
    }
    ++v1;
  }
  while ( (unsigned __int64)v1 < v3 );
  return (char)_RAX;
}
