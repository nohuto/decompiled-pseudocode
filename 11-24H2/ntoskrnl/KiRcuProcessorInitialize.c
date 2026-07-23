/*
 * XREFs of KiRcuProcessorInitialize @ 0x1404CED4C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuProcessorInitialize @ 0x1404F6B18 (KiSrcuProcessorInitialize.c)
 */

__int64 __fastcall KiRcuProcessorInitialize(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  int v5; // edi
  char *v6; // r14
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // r15
  KIRQL v11; // al
  __int64 *i; // rsi
  _QWORD *v13; // rbx
  KIRQL v14; // dl
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  KSPIN_LOCK *v18; // rcx
  bool v19; // zf
  KIRQL v20; // al

  v3 = *(_DWORD *)(a1 + 36) / (unsigned int)(unsigned __int8)byte_140F205A1;
  v5 = 0;
  v6 = (char *)&KiRcuData + 32 * *(unsigned int *)(a1 + 36);
  v7 = *(_DWORD *)(a1 + 36) % (unsigned int)(unsigned __int8)byte_140F205A1;
  v8 = 9 * v3;
  v9 = qword_140F205B0;
  *((_QWORD *)v6 + 2) = a1;
  v10 = (_QWORD *)(v9 + 8 * v8);
  *((_QWORD *)v6 + 1) = v10;
  *(_QWORD *)v6 = 1LL << v7;
  if ( !a2 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(v10 + 4);
    v10[2] &= ~*(_QWORD *)v6;
    KeReleaseSpinLock(v10 + 4, v11);
  }
  if ( !v10[2] )
  {
    for ( i = v10; ; i = v13 )
    {
      v13 = (_QWORD *)i[1];
      if ( !v13 )
        break;
      v14 = KeAcquireSpinLockRaiseToDpc(v13 + 4);
      v15 = *i;
      if ( a2 )
      {
        v16 = v13[2];
        if ( (v16 & v15) != 0 )
        {
          KeReleaseSpinLock(v13 + 4, v14);
          goto LABEL_14;
        }
        v13[2] = v15 | v16;
      }
      else
      {
        v17 = ~v15;
        v19 = (v17 & v13[2]) == 0;
        v13[2] &= v17;
        if ( !v19 )
        {
          v18 = v13 + 4;
          goto LABEL_15;
        }
      }
      KeReleaseSpinLock(v13 + 4, v14);
    }
  }
  v19 = a2 == 0;
  if ( a2 )
  {
LABEL_14:
    v20 = KeAcquireSpinLockRaiseToDpc(v10 + 4);
    v18 = v10 + 4;
    v10[2] |= *(_QWORD *)v6;
    v14 = v20;
LABEL_15:
    KeReleaseSpinLock(v18, v14);
    v19 = a2 == 0;
  }
  LOBYTE(v5) = !v19;
  *((_DWORD *)v6 + 6) = *((_DWORD *)v6 + 6) & 0xFFFFFFFE | v5;
  return KiSrcuProcessorInitialize(a1, a2);
}
