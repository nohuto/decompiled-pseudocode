/*
 * XREFs of SleepstudyHelperCreateBlockerData @ 0x140AB6F40
 * Callers:
 *     PopSleepstudyInitialize @ 0x140C551E8 (PopSleepstudyInitialize.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     SSHSupportReleasePushLockExclusive @ 0x140489C20 (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportAllocateNonPaged @ 0x14049C718 (SSHSupportAllocateNonPaged.c)
 *     SshpCopyDataEntry @ 0x1405D8548 (SshpCopyDataEntry.c)
 *     SshpFreeDataEntry @ 0x1407567E4 (SshpFreeDataEntry.c)
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
  __int64 NonPaged; // rax
  __int64 v12; // rdi
  int v13; // ebx
  __int128 v14; // xmm0
  __int64 j; // rax
  __int64 *v16; // rax
  __int64 *v17; // rsi
  __int64 *v18; // rcx

  if ( a1 && a3 && a4 && a5 )
  {
    for ( i = 0; i < a3; ++i )
    {
      v10 = 32LL * i;
      if ( !*(_QWORD *)(v10 + a4 + 8) || !*(_WORD *)(v10 + a4) || !*(_QWORD *)(v10 + a4 + 24) )
        return (unsigned int)-1073741811;
    }
    if ( 32 * (unsigned __int64)a3 > 0xFFFFFFFF || 32 * a3 + 48 < 32 * a3 )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      NonPaged = SSHSupportAllocateNonPaged();
      v12 = NonPaged;
      if ( NonPaged )
      {
        v14 = *a2;
        *(_QWORD *)(NonPaged + 16) = a1;
        *(_OWORD *)(NonPaged + 24) = v14;
        *(_QWORD *)(NonPaged + 8) = NonPaged;
        *(_QWORD *)NonPaged = NonPaged;
        *(_DWORD *)(NonPaged + 40) = 0;
        for ( j = 0LL; (unsigned int)j < a3; j = *(unsigned int *)(v12 + 40) )
        {
          v13 = SshpCopyDataEntry(
                  *(_DWORD *)(a1 + 24),
                  (PCUNICODE_STRING)(32 * j + a4),
                  (PUNICODE_STRING)(32 * j + v12 + 48));
          if ( v13 < 0 )
          {
            SshpFreeDataEntry((_QWORD *)v12);
            return (unsigned int)v13;
          }
          ++*(_DWORD *)(v12 + 40);
        }
        v16 = KeAbPreAcquire(a1 + 16, 0LL);
        v17 = v16;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v16, a1 + 16);
        if ( v17 )
          *((_BYTE *)v17 + 10) = 1;
        v18 = *(__int64 **)(a1 + 176);
        if ( *v18 != a1 + 168 )
          __fastfail(3u);
        *(_QWORD *)(v12 + 8) = v18;
        *(_QWORD *)v12 = a1 + 168;
        *v18 = v12;
        *(_QWORD *)(a1 + 176) = v12;
        SSHSupportReleasePushLockExclusive((volatile signed __int64 *)(a1 + 16));
        *a5 = v12;
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
