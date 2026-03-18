/*
 * XREFs of ?AllowEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x140036700
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

char __fastcall CFlipToken::AllowEarlyTokenSync(CFlipToken *this)
{
  char v1; // bl
  __int64 v2; // rsi
  bool v3; // bp
  __int64 *v4; // r14
  __int64 v5; // rdi
  __int64 **v6; // rsi
  __int64 **i; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD v16[9]; // [rsp+20h] [rbp-98h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 32) && (!*((_BYTE *)this + 579) || *((_BYTE *)this + 583)) )
  {
    v2 = *((_QWORD *)this + 6);
    v3 = 0;
    v4 = (__int64 *)*((_QWORD *)this + 7);
    KeEnterCriticalRegion();
    v5 = v2 + 48;
    ExAcquirePushLockSharedEx(v2 + 48, 0LL);
    if ( *(_DWORD *)(v2 + 176) )
    {
      v6 = (__int64 **)(v2 + 160);
      for ( i = (__int64 **)*v6; i != v6; i = (__int64 **)*i )
      {
        if ( *(i - 1) == v4 )
        {
          v8 = *(_OWORD *)(i + 5);
          v16[0] = *(_OWORD *)(i + 3);
          v9 = *(_OWORD *)(i + 7);
          v16[1] = v8;
          v10 = *(_OWORD *)(i + 9);
          v16[2] = v9;
          v11 = *(_OWORD *)(i + 11);
          v16[3] = v10;
          v12 = *(_OWORD *)(i + 13);
          v16[4] = v11;
          v13 = *(_OWORD *)(i + 15);
          v16[5] = v12;
          v14 = *(_OWORD *)(i + 19);
          v16[6] = v13;
          v16[7] = *(_OWORD *)(i + 17);
          v16[8] = v14;
          v3 = (WORD4(v14) & 0x200) != 0;
          goto LABEL_8;
        }
      }
    }
    memset(v16, 0, sizeof(v16));
LABEL_8:
    if ( PsGetCurrentThreadId() == *(HANDLE *)(v5 + 8) )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v5, 0LL);
    }
    KeLeaveCriticalRegion();
    return v3;
  }
  return v1;
}
