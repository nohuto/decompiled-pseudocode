/*
 * XREFs of KiRcuSystemInitialize @ 0x140C688E0
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuProcessorInitialize @ 0x1404F6B18 (KiSrcuProcessorInitialize.c)
 */

void __fastcall KiRcuSystemInitialize(__int64 a1)
{
  unsigned int v1; // r9d
  _QWORD *v2; // r10
  _BYTE *v4; // rbx
  _QWORD *v5; // rdi
  unsigned int v6; // r11d
  unsigned int v7; // esi
  __int64 v8; // rbp
  unsigned int v9; // r8d
  char *v10; // r14
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rdi
  _QWORD *i; // rsi
  _QWORD *v15; // rbx
  KIRQL v16; // al
  __int64 v17; // rdx
  KIRQL v18; // al

  KiRcuState = 536952864;
  v1 = 0;
  v2 = &KiRcuNode;
  v4 = &unk_140F205A2;
  v5 = &unk_140F205A8;
  do
  {
    *v5 = v2;
    v6 = 0;
    v7 = (unsigned __int8)*v4;
    if ( *v4 )
    {
      v8 = v1 - 1;
      do
      {
        if ( v1 )
        {
          v9 = v6 % *((unsigned __int8 *)&KiRcuState + v8);
          v2[1] = *((_QWORD *)&KiRcuState + v8 + 1) + 72LL * (v6 / *((unsigned __int8 *)&KiRcuState + v8));
          *v2 = 1LL << v9;
        }
        v2 += 9;
        ++v6;
      }
      while ( v6 < v7 );
    }
    ++v1;
    ++v5;
    ++v4;
  }
  while ( v1 < 2 );
  stru_140F20620.Parameter = 0LL;
  qword_140F205D8 = (__int64)&qword_140F205D0;
  qword_140F205D0 = (__int64)&qword_140F205D0;
  stru_140F20620.List.Flink = 0LL;
  stru_140F20620.WorkerRoutine = (void (__fastcall *)(void *))KiRcuFlushCompletedWorkerRoutine;
  stru_140F205E0.DeferredRoutine = (PKDEFERRED_ROUTINE)KiRcuFlushCompletedDpcRoutine;
  stru_140F205E0.TargetInfoAsUlong = 282;
  stru_140F205E0.DeferredContext = 0LL;
  stru_140F205E0.DpcData = 0LL;
  stru_140F205E0.ProcessorHistory = 0LL;
  v10 = (char *)&KiRcuData + 32 * *(unsigned int *)(a1 + 36);
  v12 = *(_DWORD *)(a1 + 36) % (unsigned int)(unsigned __int8)byte_140F205A1;
  v11 = *(_DWORD *)(a1 + 36) / (unsigned int)(unsigned __int8)byte_140F205A1;
  *((_QWORD *)v10 + 2) = a1;
  v13 = qword_140F205B0 + 72 * v11;
  *(_QWORD *)v10 = 1LL << v12;
  *((_QWORD *)v10 + 1) = v13;
  if ( !*(_QWORD *)(v13 + 16) )
  {
    for ( i = (_QWORD *)v13; ; i = v15 )
    {
      v15 = (_QWORD *)i[1];
      if ( !v15 )
        break;
      v16 = KeAcquireSpinLockRaiseToDpc(v15 + 4);
      v17 = v15[2];
      if ( (v17 & *i) != 0 )
      {
        KeReleaseSpinLock(v15 + 4, v16);
        break;
      }
      v15[2] = *i | v17;
      KeReleaseSpinLock(v15 + 4, v16);
    }
  }
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 32));
  *(_QWORD *)(v13 + 16) |= *(_QWORD *)v10;
  KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 32), v18);
  *((_DWORD *)v10 + 6) |= 1u;
  KiSrcuProcessorInitialize(a1, 1u);
}
