/*
 * XREFs of PpmUpdatePerfStates @ 0x14074EF60
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC53D4 (PpmReinitializeHeteroEngine.c)
 */

int __fastcall PpmUpdatePerfStates(unsigned int *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v5; // r10
  char v6; // cl
  unsigned int v7; // r11d
  unsigned int v8; // r8d
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  if ( a1[2] )
  {
    v4 = PpmPerfDomainHead;
    v5 = 0LL;
    v6 = 0;
    while ( (__int64 *)v4 != &PpmPerfDomainHead )
    {
      v7 = *(_DWORD *)(v4 + 296);
      v8 = 0;
      v5 = v4;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v4 + 312);
        while ( 1 )
        {
          v10 = 1192LL * v8;
          if ( *(_DWORD *)(v10 + v9 + 16) )
          {
            if ( *(_DWORD *)(v10 + v9 + 20) == a1[1] )
              break;
          }
          if ( ++v8 >= v7 )
            goto LABEL_8;
        }
        v6 = 1;
        break;
      }
LABEL_8:
      v4 = *(_QWORD *)v4;
    }
    v11 = v5 & -(__int64)(v6 != 0);
  }
  else
  {
    v11 = *(_QWORD *)(KeGetPrcb(a1[1]) + 35248);
  }
  if ( v11 )
  {
    v12 = *a1;
    if ( *(_DWORD *)(v11 + 452) == (_DWORD)v12 )
    {
      LODWORD(v11) = PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      *(_DWORD *)(v11 + 452) = v12;
      LOBYTE(v12) = 1;
      LODWORD(v11) = PpmPerfUpdateDomainPolicy(v12);
    }
    if ( (unsigned int)PpmPerfDomainCount > 1 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v13, v14);
      LOBYTE(v15) = 1;
      LODWORD(v11) = PpmReinitializeHeteroEngine(v15, v16, 0LL);
    }
  }
  return v11;
}
