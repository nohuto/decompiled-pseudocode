/*
 * XREFs of PctDiscoverPlatformCtrs @ 0x14002B840
 * Callers:
 *     <none>
 * Callees:
 *     PctPlatformCounterState @ 0x140003460 (PctPlatformCounterState.c)
 *     PctProbePlatformCtr @ 0x140027E68 (PctProbePlatformCtr.c)
 *     ConfigureIntelEmu @ 0x14002B7E0 (ConfigureIntelEmu.c)
 */

unsigned __int64 __fastcall PctDiscoverPlatformCtrs(__int64 a1)
{
  __int64 v2; // rbx
  void *Pool2; // rax
  unsigned int v4; // esi
  _QWORD *v5; // rdi
  _BYTE *v6; // r14
  bool v7; // al
  __int64 v8; // rdi
  bool v9; // al
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v2 = 0LL;
  if ( !PctPlatformCounterState(a1, 0) )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 200LL, 1919119952LL);
    if ( Pool2 )
    {
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)(*(_QWORD *)(a1 + 1080) + 312LL),
             (signed __int64)Pool2,
             0LL) )
      {
        ExFreePoolWithTag(Pool2, (ULONG)0);
      }
      else
      {
        v4 = 0;
        v5 = &unk_140012008;
        do
        {
          v6 = (_BYTE *)PctPlatformCounterState(a1, v4);
          if ( *v5 )
          {
            v7 = PctProbePlatformCtr(a1, (__int64)(v5 + 1), &v11);
            *v6 = v7;
            if ( v7 )
              v2 |= *v5;
          }
          ++v4;
          v5 += 6;
        }
        while ( v4 < 5 );
        if ( (v2 & 0x800000000000LL) != 0 )
        {
          v8 = PctPlatformCounterState(a1, 0);
          v9 = PctProbePlatformCtr(a1, (__int64)&unk_140012010, &v11);
          *(_BYTE *)v8 = v9;
          if ( v9 )
          {
            *(_QWORD *)(v8 + 8) = KeQueryInterruptTimePrecise(&v12);
            *(_QWORD *)(v8 + 24) = v11;
            ConfigureIntelEmu(a1, 0, v11);
            *(_BYTE *)v8 = 1;
          }
          else
          {
            return v2 & 0xFFFF7FFFFFFFFFFFuLL;
          }
        }
      }
    }
  }
  return v2;
}
