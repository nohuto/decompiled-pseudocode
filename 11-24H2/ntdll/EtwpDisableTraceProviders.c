/*
 * XREFs of EtwpDisableTraceProviders @ 0x18008BE84
 * Callers:
 *     EtwpStopLoggerInstance @ 0x18008DE70 (EtwpStopLoggerInstance.c)
 * Callees:
 *     EtwpUpdateEnableInfoAndCallback @ 0x18001E990 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpGetNextRegistration @ 0x18008BFF0 (EtwpGetNextRegistration.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpDisableTraceProviders(__int16 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  __int64 i; // rcx
  volatile signed __int32 **v7; // rdx
  char v8; // di
  __int64 j; // rcx
  __int128 v10; // xmm0
  _DWORD v11[10]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v12; // [rsp+48h] [rbp-60h]
  int v13; // [rsp+68h] [rbp-40h]
  __int16 v14; // [rsp+6Eh] [rbp-3Ah]
  int v15; // [rsp+90h] [rbp-18h]

  memset_thunk_772440563353939046(v11, 0, 0x78uLL);
  v11[6] = -1;
  v13 = 0;
  v15 = 0;
  v2 = 0LL;
  v11[0] = 3;
  v11[1] = 120;
  while ( 1 )
  {
    result = EtwpGetNextRegistration(v2);
    v5 = result;
    if ( !result )
      return result;
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      v7 = (volatile signed __int32 **)(3 * i);
      if ( *(_BYTE *)(result + 24 * i + 140) && *(_BYTE *)(result + 24 * i + 142) == (_BYTE)a1 )
      {
        if ( result + 8LL * ((_QWORD)v7 + 15) )
        {
          v8 = 0;
          if ( *(_DWORD *)(result + 80) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
          {
            RtlAcquireSRWLockExclusive((volatile signed __int32 *)(result + 64), v7, v4);
            v8 = 1;
            *(_DWORD *)(v5 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
          }
          for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
          {
            if ( *(_BYTE *)(v5 + 24 * j + 140) && *(_BYTE *)(v5 + 24 * j + 142) == (_BYTE)a1 )
            {
              if ( v5 + 8 * (3 * j + 15) )
              {
                v10 = *(_OWORD *)(v5 + 32);
                v13 = 0;
                v12 = v10;
                v14 = a1 | 0x8000;
                EtwpUpdateEnableInfoAndCallback(v5, (__int64)v11);
              }
              break;
            }
          }
          if ( v8 )
          {
            *(_DWORD *)(v5 + 80) = 0;
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 64));
          }
        }
        break;
      }
    }
    v2 = v5;
  }
}
