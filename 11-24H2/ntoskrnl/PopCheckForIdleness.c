/*
 * XREFs of PopCheckForIdleness @ 0x1403E5420
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     PopCheckForWork @ 0x1403E6AAC (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403E6B24 (PopGetPolicyWorker.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 PopCheckForIdleness()
{
  __int64 v0; // rcx
  signed int ActiveProcessorCount; // ebp
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rdx
  int v4; // esi
  __int64 v5; // rbx
  unsigned int v6; // r11d
  unsigned __int64 v7; // rdi
  int v8; // r8d
  int v9; // r9d
  int v10; // esi
  __int64 v11; // r10
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  signed int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  CurrentIrql = KeGetCurrentIrql();
  v3 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v0) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v0, 2LL);
  }
  v4 = qword_140F0B8C8;
  v5 = MEMORY[0xFFFFF78000000320];
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(CurrentIrql);
  if ( byte_140F0B8C0 )
  {
    v6 = v5 - v4;
    if ( (int)v5 - v4 <= 0 )
    {
      byte_140F0B8C0 = 0;
      goto LABEL_28;
    }
    v7 = KeActiveProcessors.Bitmap[0];
    v8 = 100;
    v9 = 100;
    v10 = 0;
    LOWORD(v11) = 0;
    while ( 1 )
    {
      while ( v7 )
      {
        _BitScanForward64(&v12, v7);
        v7 &= ~(1LL << v12);
        v13 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * (unsigned __int16)v11 + (unsigned __int8)v12)];
        v14 = 100 * (*(_DWORD *)(*(_QWORD *)(v13 + 24) + 652LL) - *(_DWORD *)(v13 + 35108)) / v6;
        if ( v14 < v9 )
          v9 = v14;
        v10 += v14;
      }
      v11 = (unsigned __int16)(v11 + 1);
      if ( (unsigned int)v11 >= KeActiveProcessors.Count )
        break;
      v7 = KeActiveProcessors.Bitmap[v11];
    }
    if ( v9 > 100 )
    {
      v9 = 100;
    }
    else if ( v9 < 0 )
    {
      v9 = 0;
    }
    if ( v10 / ActiveProcessorCount <= 100 )
    {
      v8 = v10 / ActiveProcessorCount;
      if ( v10 / ActiveProcessorCount < 0 )
        v8 = 0;
    }
    dword_140F0B8A4 = v9;
    PopSIdle = v8;
  }
  v15 = KeActiveProcessors.Bitmap[0];
  LOWORD(v16) = 0;
  qword_140F0B8C8 = v5;
  byte_140F0B8C0 = 1;
  while ( 1 )
  {
    while ( v15 )
    {
      _BitScanForward64(&v17, v15);
      v15 &= ~(1LL << v17);
      v18 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * (unsigned __int16)v16 + (unsigned __int8)v17)];
      *(_DWORD *)(v18 + 35108) = *(_DWORD *)(*(_QWORD *)(v18 + 24) + 652LL);
    }
    v16 = (unsigned __int16)(v16 + 1);
    if ( (unsigned int)v16 >= KeActiveProcessors.Count )
      break;
    v15 = KeActiveProcessors.Bitmap[v16];
  }
LABEL_28:
  PopGetPolicyWorker(128LL);
  return PopCheckForWork();
}
