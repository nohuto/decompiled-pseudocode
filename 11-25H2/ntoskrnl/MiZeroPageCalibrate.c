/*
 * XREFs of MiZeroPageCalibrate @ 0x140688A2C
 * Callers:
 *     MiInitializeZeroEngines @ 0x1407EF53C (MiInitializeZeroEngines.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     ExAllocatePoolMm @ 0x1402DA890 (ExAllocatePoolMm.c)
 *     MiIsCalibrationWorthwhile @ 0x1403B7024 (MiIsCalibrationWorthwhile.c)
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140418610 (MiDeleteAcceleratorDescriptor.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1406854B4 (MiAllocateAcceleratorDescriptor.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140687BD4 (MiAllocateZeroCalibrationBuffer.c)
 *     MiFreeZeroCalibrationBuffer @ 0x1406881D4 (MiFreeZeroCalibrationBuffer.c)
 *     MiMergeCalibrationResults @ 0x140688494 (MiMergeCalibrationResults.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiZeroPageCalibrate(int *a1)
{
  unsigned int *v1; // rbp
  int v3; // r15d
  unsigned int v4; // r13d
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // al
  unsigned int v13; // edx
  int AcceleratorDescriptor; // eax
  _SLIST_ENTRY *v15; // r14
  _SLIST_ENTRY *v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // esi
  int v19; // r14d
  __int64 *v20; // rdi
  __int64 v21; // rcx
  unsigned int v22; // r12d
  __int64 PoolMm; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r9
  void *v27; // rcx
  __int64 v28; // rax
  unsigned int *v29; // rdx
  unsigned int *v30; // rcx
  __int64 v31; // r8
  unsigned int *v32; // rdx
  __int64 v33; // rax
  unsigned int *v34; // rcx
  __int64 v35; // r8
  void *v36; // rcx
  PSLIST_ENTRY v37; // rax
  int v39; // [rsp+70h] [rbp+0h] BYREF

  v1 = (unsigned int *)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL);
  memset_0((void *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x140uLL);
  v3 = 1;
  v4 = 1;
  if ( !a1[42] )
    return 1LL;
  v5 = *((_QWORD *)a1 + 22);
  v6 = 0;
  v7 = *a1;
  v8 = *(_QWORD *)(v5 + 48);
  v9 = *(unsigned int *)(v5 + 56);
  *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v8;
  v10 = qword_140E2D8B8;
  *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14C) = v9;
  v11 = *(_QWORD *)(384 * v9 + v10 + 376);
  v12 = *(_BYTE *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x59);
  if ( *((_BYTE *)a1 + 36) )
    v12 = 1;
  *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v11;
  v13 = a1[43];
  *(_BYTE *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x59) = v12;
  *v1 = v13;
  while ( !(unsigned int)MiIsCalibrationWorthwhile(56 * (3 * v7 + v6) + 72 + v11, v13, v9, 0) )
  {
    v13 = *v1;
    ++v6;
    v11 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    if ( v6 >= 3 )
    {
      if ( v6 == 3 )
        return 1LL;
      break;
    }
  }
  if ( !(_DWORD)v7 )
  {
    *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    if ( (((_BYTE)v1 + 112) & 0xF) != 0 )
      RtlRaiseStatus(-2147483646);
    *(_OWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = 0LL;
    AcceleratorDescriptor = MiAllocateAcceleratorDescriptor(0LL, v9, 0, (_QWORD *)v1 + 1);
    v15 = *(_SLIST_ENTRY **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v3 = AcceleratorDescriptor;
    if ( v15 )
    {
      do
      {
        v16 = v15;
        v15 = v15->Next;
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v1 + 23, v16);
      }
      while ( v15 );
      *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    }
  }
  v17 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = a1;
  v18 = *v1;
  v19 = 0;
  v20 = (__int64 *)&MiPerProcessorZeroCalibrationBytes;
  *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = &MiPerProcessorZeroCalibrationBytes;
  do
  {
    v21 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)
        + 72LL
        + 56 * (v17 + 2LL * (int)v7 + (int)v7);
    *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v21;
    if ( (unsigned int)MiIsCalibrationWorthwhile(v21, v18, v9, 0) )
    {
      *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0LL;
      v22 = *v1;
      if ( v3 )
      {
        PoolMm = ExAllocatePoolMm(0x40uLL, 16LL * *v1, 1700424013, (unsigned int)v9);
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = PoolMm;
        v3 = PoolMm != 0 ? v3 : 0;
      }
      v24 = *v20;
      if ( v3
        && (v25 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
            v26 = v24 * v22,
            *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = v26,
            MiAllocateZeroCalibrationBuffer((__int64)(v1 + 16), v25, v9, v26, v19),
            *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150)) )
      {
        v27 = *(void **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v24;
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0;
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0;
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v22;
        memset_0(v27, 0, 16LL * v22);
        v28 = 0LL;
        v29 = v1 + 32;
        do
        {
          *((_BYTE *)v1 + v28 + 102) = 0;
          v30 = v29;
          v31 = 2LL;
          do
          {
            *v30 = 0;
            v30 += 2;
            --v31;
          }
          while ( v31 );
          ++v28;
          ++v29;
        }
        while ( v28 < 2 );
        do
        {
          *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = -1;
          *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x148) = 0;
          *(_BYTE *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0;
          *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x144) = 0;
          *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) = 0;
          KeGenericCallDpcEx((__int64)MiZeroPageCalibrateDpc, (__int64)(v1 + 16));
        }
        while ( *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x144) );
        *(_BYTE *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x65) = 1;
      }
      else
      {
        v32 = v1 + 32;
        *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 1;
        *(_WORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64) = 1;
        v33 = 0LL;
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 1LL;
        do
        {
          *((_BYTE *)v1 + v33 + 102) = 0;
          v34 = v32;
          v35 = 2LL;
          do
          {
            *v34 = 1;
            v34 += 2;
            --v35;
          }
          while ( v35 );
          ++v33;
          ++v32;
        }
        while ( v33 < 2 );
        v36 = *(void **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
        if ( v36 )
        {
          ExFreePoolWithTag(v36, 0);
          *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0LL;
        }
        v3 = 0;
        v4 = 0;
      }
      LODWORD(v7) = **(_DWORD **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      MiMergeCalibrationResults(
        (_QWORD *)v1 + 8,
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
        (__int64)(v1 + 24),
        v19);
      if ( v3 )
        MiFreeZeroCalibrationBuffer((_QWORD *)v1 + 8);
      v18 = *v1;
      v20 = *(__int64 **)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    }
    ++v20;
    v17 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 1LL;
    *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v20;
    ++v19;
    *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v17;
  }
  while ( v19 < 3 );
  if ( *(_WORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) )
  {
    while ( 1 )
    {
      v37 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v1 + 23);
      if ( !v37 )
        break;
      MiDeleteAcceleratorDescriptor((__int64)&v37[2]);
    }
  }
  return v4;
}
