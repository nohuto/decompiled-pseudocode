/*
 * XREFs of PopFreeSessionState @ 0x140A228FC
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PopFreeRegistration @ 0x140745274 (PopFreeRegistration.c)
 */

void __fastcall PopFreeSessionState(int a1)
{
  unsigned int i; // esi
  WNF_STATE_NAME **v3; // rdi
  WNF_STATE_NAME *v4; // rbx
  WNF_STATE_NAME *v5; // rcx
  WNF_STATE_NAME v6; // rdx
  _DWORD *v7; // r8
  WNF_STATE_NAME **v8; // rax

  ExAcquireFastMutex(&PopSettingLock);
  for ( i = 0; i < 2; ++i )
  {
    v3 = (WNF_STATE_NAME **)((char *)&PopSessionSpecificLists + 16 * i);
    v4 = *v3;
    while ( v4 != (WNF_STATE_NAME *)v3 )
    {
      v5 = v4;
      v6 = *v4;
      if ( v4[6].Data[0] == a1 )
      {
        v7 = (_DWORD *)&v4[6] + 1;
        v4 = (WNF_STATE_NAME *)*v4;
        if ( (*v7 & 2) != 0 )
        {
          *v7 |= 4u;
        }
        else
        {
          if ( *(WNF_STATE_NAME **)(*(_QWORD *)&v6 + 8LL) != v5 || (v8 = (WNF_STATE_NAME **)v5[1], *v8 != v5) )
            __fastfail(3u);
          *v8 = (WNF_STATE_NAME *)v6;
          *(_QWORD *)(*(_QWORD *)&v6 + 8LL) = v8;
          PopFreeRegistration(v5);
        }
      }
      else
      {
        v4 = (WNF_STATE_NAME *)*v4;
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
}
