/*
 * XREFs of PspSelectVsmEnclaveByNumber @ 0x140A0A5EC
 * Callers:
 *     PsCallEnclave @ 0x140AD0080 (PsCallEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall PspSelectVsmEnclaveByNumber(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rbx
  __int64 v8; // rdi
  char *v9; // rbp
  __int64 v10; // r11
  int v11; // r10d
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v16; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v4 = (signed __int64 *)(a1 + 1624);
  --CurrentThread->KernelApcDisable;
  v8 = 0LL;
  v9 = (char *)KeAbPreAcquire(a1 + 1624, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v9, (__int64)v4);
  if ( v9 )
    v9[10] = 1;
  v10 = *(_QWORD *)(a1 + 1608);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 4) >> 5;
    v12 = -1LL << (*(_BYTE *)(v10 + 4) & 0x1F);
    v13 = a2 & v12;
    if ( v11 )
    {
      v16 = a2 & v12;
      v14 = *(_QWORD *)(v10 + 8)
          + 8LL
          * ((37
            * (BYTE6(v16)
             + 37
             * (BYTE5(v16)
              + 37
              * (BYTE4(v16)
               + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * ((unsigned __int8)v13 + 11623883)))))))
            + HIBYTE(v16)) & (unsigned int)(v11 - 1));
      while ( 1 )
      {
        v14 = *(_QWORD *)v14;
        if ( (v14 & 1) != 0 )
          break;
        if ( v13 == (v12 & *(_QWORD *)(v14 + 8)) )
          goto LABEL_10;
      }
      v14 = 0LL;
LABEL_10:
      if ( v14 )
      {
        v8 = v14;
        if ( *(_DWORD *)(v14 + 40) )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 16)) <= 1 )
            __fastfail(0xEu);
        }
        else
        {
          v8 = 0LL;
        }
      }
    }
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
  if ( !v8 )
    return 3221225480LL;
  *a3 = v8;
  return 0LL;
}
