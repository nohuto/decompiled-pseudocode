/*
 * XREFs of SleepstudyHelperCreateBlockerData @ 0x140AB62A0
 * Callers:
 *     PopSleepstudyInitialize @ 0x140C68FEC (PopSleepstudyInitialize.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportAllocateNonPaged @ 0x1404965F4 (SSHSupportAllocateNonPaged.c)
 *     SshpCopyDataEntry @ 0x1405E1A2C (SshpCopyDataEntry.c)
 *     SshpFreeDataEntry @ 0x1407661C4 (SshpFreeDataEntry.c)
 */

__int64 __fastcall SleepstudyHelperCreateBlockerData(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5)
{
  unsigned int i; // ecx
  __int64 v10; // rax
  unsigned int v11; // eax
  ULONG_PTR v12; // rcx
  __int64 NonPaged; // rax
  __int64 v14; // rdi
  int v15; // ebx
  __int128 v16; // xmm0
  __int64 j; // rax
  char *v18; // rax
  char *v19; // rsi
  __int64 *v20; // rcx

  if ( a1 && a3 && a4 && a5 )
  {
    for ( i = 0; i < a3; ++i )
    {
      v10 = 32LL * i;
      if ( !*(_QWORD *)(v10 + a4 + 8) || !*(_WORD *)(v10 + a4) || !*(_QWORD *)(v10 + a4 + 24) )
        return (unsigned int)-1073741811;
    }
    v11 = 32 * a3;
    if ( 32 * (unsigned __int64)a3 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    v12 = v11 + 48;
    if ( (unsigned int)v12 < v11 )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      NonPaged = SSHSupportAllocateNonPaged(v12, *(_DWORD *)(a1 + 24));
      v14 = NonPaged;
      if ( NonPaged )
      {
        v16 = *a2;
        *(_QWORD *)(NonPaged + 16) = a1;
        *(_OWORD *)(NonPaged + 24) = v16;
        *(_QWORD *)(NonPaged + 8) = NonPaged;
        *(_QWORD *)NonPaged = NonPaged;
        *(_DWORD *)(NonPaged + 40) = 0;
        for ( j = 0LL; (unsigned int)j < a3; j = *(unsigned int *)(v14 + 40) )
        {
          v15 = SshpCopyDataEntry(
                  *(_DWORD *)(a1 + 24),
                  (PCUNICODE_STRING)(32 * j + a4),
                  (PUNICODE_STRING)(32 * j + v14 + 48));
          if ( v15 < 0 )
          {
            SshpFreeDataEntry((_QWORD *)v14);
            return (unsigned int)v15;
          }
          ++*(_DWORD *)(v14 + 40);
        }
        v18 = (char *)KeAbPreAcquire(a1 + 16, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v18, a1 + 16);
        if ( v19 )
          v19[10] = 1;
        v20 = *(__int64 **)(a1 + 176);
        if ( *v20 != a1 + 168 )
          __fastfail(3u);
        *(_QWORD *)(v14 + 8) = v20;
        *(_QWORD *)v14 = a1 + 168;
        *v20 = v14;
        *(_QWORD *)(a1 + 176) = v14;
        SSHSupportReleasePushLockExclusive((volatile signed __int64 *)(a1 + 16));
        *a5 = v14;
        return 0;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
