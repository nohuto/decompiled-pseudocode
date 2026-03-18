/*
 * XREFs of PspGetMemoryPartitionImplicit @ 0x1408E7494
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x1408E7414 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PsGetEffectiveServerSilo @ 0x140349B30 (PsGetEffectiveServerSilo.c)
 *     PspLockJobChain @ 0x1408E76DC (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x1408E7884 (PspUnlockJobChain.c)
 */

__int64 __fastcall PspGetMemoryPartitionImplicit(__int64 a1, __int16 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // r15
  __int64 EffectiveServerSilo; // rbx
  int v9; // eax
  void *v11; // rcx

  v5 = 0;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(a1, CurrentThread, 0LL);
  if ( (a2 & 0x400) != 0 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
  }
  else
  {
    EffectiveServerSilo = a1;
    if ( a1 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(EffectiveServerSilo + 256);
        if ( (v9 & 0x1000) == 0 )
        {
          if ( (a2 & 1) == 0 )
            goto LABEL_6;
          if ( (v9 & 0x800) == 0 )
            break;
        }
        EffectiveServerSilo = *(_QWORD *)(EffectiveServerSilo + 1304);
        if ( !EffectiveServerSilo )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      if ( (a2 & 1) == 0 )
        goto LABEL_6;
    }
    if ( EffectiveServerSilo == a1 && (*(_DWORD *)(EffectiveServerSilo + 1552) & 0x40000000) == 0 )
    {
      v5 = -1073741790;
      goto LABEL_7;
    }
  }
LABEL_6:
  if ( EffectiveServerSilo )
  {
    v11 = *(void **)(EffectiveServerSilo + 1792);
    if ( v11 == (void *)-1LL )
    {
      v5 = -1073740682;
    }
    else
    {
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x624A7350u);
      *a3 = *(_QWORD *)(EffectiveServerSilo + 1792);
    }
  }
LABEL_7:
  PspUnlockJobChain(a1, CurrentThread, 0LL);
  return v5;
}
