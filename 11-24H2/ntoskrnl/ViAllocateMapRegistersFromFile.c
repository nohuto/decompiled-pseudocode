/*
 * XREFs of ViAllocateMapRegistersFromFile @ 0x140B8A0B8
 * Callers:
 *     ViMapDoubleBuffer @ 0x140B8B650 (ViMapDoubleBuffer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
 *     ViTagBuffer @ 0x140B8BF14 (ViTagBuffer.c)
 */

__int64 __fastcall ViAllocateMapRegistersFromFile(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4, _DWORD *a5)
{
  __int64 v5; // r14
  ULONG_PTR *v6; // r15
  __int64 v7; // rbp
  unsigned int v8; // esi
  ULONG_PTR v9; // rbx
  int v10; // r12d
  unsigned int v11; // r13d
  unsigned __int64 v12; // rdi
  const void *v13; // rax
  ULONG_PTR *v14; // r14
  ULONG_PTR *v15; // rbp
  const void *v16; // rdi
  ULONG_PTR v17; // rax
  unsigned int v18; // r11d
  ULONG_PTR v19; // rcx
  unsigned int v20; // eax
  ULONG_PTR *v21; // r15
  unsigned int *v22; // r9
  unsigned int v23; // r10d
  unsigned int v24; // ecx
  _DWORD *v25; // r9
  int v26; // r10d
  unsigned int v27; // ecx
  _DWORD *v28; // r9
  int v29; // r10d
  int v31; // [rsp+40h] [rbp-58h]
  KSPIN_LOCK *SpinLock; // [rsp+48h] [rbp-50h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+10h]

  v5 = a3;
  v6 = (ULONG_PTR *)(a1 + 88);
  v7 = a1;
  v8 = 0;
  v9 = a2;
  v10 = 0;
  v11 = 0;
  v12 = ((a2 & 0xFFF) + a3 + 4095LL) >> 12;
  v31 = v12;
  SpinLock = (KSPIN_LOCK *)(a1 + 80);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( *(_DWORD *)(v7 + 32) )
  {
    v13 = (const void *)(v5 + v9);
    v14 = v6;
    v15 = &v6[4 * *(unsigned int *)(v7 + 28)];
    if ( v6 < v15 )
    {
      v16 = v13;
      do
      {
        v17 = *v14;
        if ( *v14 && v17 >= v9 && v17 < (unsigned __int64)v16 )
        {
          ViHalPreprocessOptions(
            byte_140E0EA3C,
            "Driver is trying to map an address range(%p-%p) that is already mapped    at %p",
            (const void *)0x1D,
            (const void *)v9,
            v16);
          VfReportIssueWithOptions(0xE6u, 0x1DuLL, v9, (ULONG_PTR)v16, *v14, byte_140E0EA3C);
        }
        v14 += 4;
      }
      while ( v14 < v15 );
      LODWORD(v12) = v31;
      v10 = 0;
    }
    v7 = a1;
  }
  v18 = 1;
  while ( v11 < (unsigned int)v12 )
  {
    if ( v10 == *(_DWORD *)(v7 + 28) )
    {
      ViHalPreprocessOptions(byte_140E0EA40, "Map registers needed: %x available: %x", 0x10000000, 2);
      VfReportIssueWithOptions(0xE6u, 0LL, 2uLL, (unsigned int)v12, v11, byte_140E0EA40);
      goto LABEL_28;
    }
    v19 = *v6;
    v20 = v11 + 1;
    v6 += 4;
    ++v10;
    v11 = 0;
    if ( !v19 )
      v11 = v20;
  }
  v21 = &v6[-4 * (unsigned int)v12];
  *a5 = v10 - v12;
  if ( (_DWORD)v12 )
  {
    v22 = (unsigned int *)(v21 + 1);
    v23 = a3;
    if ( a4 )
    {
      do
      {
        *((_QWORD *)v22 - 1) = v9;
        *((_QWORD *)v22 + 2) = v9;
        v22[1] = v18;
        v24 = 4096 - (v9 & 0xFFF);
        if ( v24 >= v23 )
          v24 = v23;
        *v22 = v24;
        _InterlockedAdd((volatile signed __int32 *)(v7 + 32), v18);
        ViTagBuffer((v9 & 0xFFF) + *((_QWORD *)v22 + 1) + 4096LL, *v22, 3LL);
        v23 = v26 - *v25;
        v9 = (v9 + 4096) & 0xFFFFFFFFFFFFF000uLL;
        v22 = v25 + 8;
        LODWORD(v12) = v12 - 1;
      }
      while ( (_DWORD)v12 );
    }
    else
    {
      do
      {
        *((_QWORD *)v22 - 1) = v9;
        *((_QWORD *)v22 + 2) = v9;
        v22[1] = 2;
        v27 = 4096 - (v9 & 0xFFF);
        if ( v27 >= v23 )
          v27 = v23;
        *v22 = v27;
        _InterlockedAdd((volatile signed __int32 *)(v7 + 32), v18);
        ViTagBuffer((v9 & 0xFFF) + *((_QWORD *)v22 + 1) + 4096LL, *v22, 3LL);
        v23 = v29 - *v28;
        v9 = (v9 + 4096) & 0xFFFFFFFFFFFFF000uLL;
        v22 = v28 + 8;
        LODWORD(v12) = v12 - 1;
      }
      while ( (_DWORD)v12 );
    }
  }
  v8 = v18;
LABEL_28:
  KeReleaseSpinLock(SpinLock, NewIrql);
  return v8;
}
