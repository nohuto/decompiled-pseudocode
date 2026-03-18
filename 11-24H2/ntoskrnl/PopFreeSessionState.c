/*
 * XREFs of PopFreeSessionState @ 0x1409BA710
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PopFreeRegistration @ 0x140751344 (PopFreeRegistration.c)
 */

void __fastcall PopFreeSessionState(int a1)
{
  unsigned int i; // esi
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _DWORD *v7; // r8
  __int64 *v8; // rax

  ExAcquireFastMutex(&PopSettingLock);
  for ( i = 0; i < 2; ++i )
  {
    v3 = (__int64 *)((char *)&PopSessionSpecificLists + 16 * i);
    v4 = *v3;
    while ( (__int64 *)v4 != v3 )
    {
      v5 = v4;
      v6 = *(_QWORD *)v4;
      if ( *(_DWORD *)(v4 + 48) == a1 )
      {
        v7 = (_DWORD *)(v4 + 52);
        v4 = *(_QWORD *)v4;
        if ( (*v7 & 2) != 0 )
        {
          *v7 |= 4u;
        }
        else
        {
          if ( *(_QWORD *)(v6 + 8) != v5 || (v8 = *(__int64 **)(v5 + 8), *v8 != v5) )
            __fastfail(3u);
          *v8 = v6;
          *(_QWORD *)(v6 + 8) = v8;
          PopFreeRegistration((_DWORD *)v5, v6);
        }
      }
      else
      {
        v4 = *(_QWORD *)v4;
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
}
