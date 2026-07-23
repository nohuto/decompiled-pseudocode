/*
 * XREFs of HsaUpdateDeviceTableEntry @ 0x14043E974
 * Callers:
 *     HsaAttachDeviceDomainInternal @ 0x14043E2A0 (HsaAttachDeviceDomainInternal.c)
 *     HalpHsapInitializeReservedDomain @ 0x14056EC8C (HalpHsapInitializeReservedDomain.c)
 *     HsaProcessDeviceExceptions @ 0x1405708EC (HsaProcessDeviceExceptions.c)
 *     HsaSetDevicePasidTable @ 0x140570C40 (HsaSetDevicePasidTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HsaBuildDeviceTableEntry @ 0x14043EC24 (HsaBuildDeviceTableEntry.c)
 *     HsaGetBlockedDomain @ 0x1404F7D44 (HsaGetBlockedDomain.c)
 *     HsaInvalidateDTE @ 0x1405707F4 (HsaInvalidateDTE.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 *__fastcall HsaUpdateDeviceTableEntry(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rsi
  __int128 v14; // xmm1
  __int64 v15; // r14
  __int128 v16; // xmm0
  __int64 v17; // r15
  char v18; // di
  unsigned __int64 v19; // rbx
  bool v20; // r12
  char v21; // r13
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  bool v23; // zf
  __int64 v24; // rcx
  int v25; // edx
  int v26; // r14d
  __int16 BlockedDomain; // ax
  __int64 v28; // r15
  unsigned int *v29; // r11
  unsigned int v30; // r10d
  __int64 v31; // rdi
  unsigned int v32; // r14d
  __int64 v33; // r9
  __int128 v34; // rax
  __int128 v35; // rt0
  unsigned __int8 v36; // tt
  unsigned int v37; // ebx
  __int64 *result; // rax
  char v39; // [rsp+61h] [rbp-58h]
  __int64 v40; // [rsp+68h] [rbp-51h] BYREF
  __int128 v41; // [rsp+70h] [rbp-49h]
  __int64 v42; // [rsp+80h] [rbp-39h]
  __int64 v43; // [rsp+88h] [rbp-31h]
  __int64 *v44; // [rsp+90h] [rbp-29h]
  __int128 v45; // [rsp+98h] [rbp-21h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-11h] BYREF

  v11 = 1;
  v12 = a1;
  v13 = *(_QWORD *)(a1 + 24) + 32LL * *a2;
  *(_QWORD *)&v41 = a2;
  v42 = a1;
  v44 = a10;
  v14 = *(_OWORD *)v13;
  v15 = *(_QWORD *)(v13 + 8);
  v16 = *(_OWORD *)(v13 + 16);
  v39 = 0;
  v17 = *(_QWORD *)v13;
  v43 = 0x10000LL;
  v45 = v14;
  v46 = v16;
  if ( (v14 & 1) != 0 && !a7 )
  {
    v43 = (unsigned __int16)v15;
    v39 = 1;
  }
  v18 = 0;
  LODWORD(v19) = 0;
  v20 = 0;
  if ( a4 )
  {
    if ( (v17 & 0x80000000000000LL) != 0 )
    {
      v21 = 1;
      v19 = ((unsigned int)v15 & 0xFFFF0000 | ((v15 & 0xFFFFF80000FFFFFFuLL | ((unsigned __int64)v14 >> 34) & 0x7000000) >> 11)) >> 13;
    }
    else
    {
      v21 = 0;
    }
    v18 = BYTE4(v15) & 1;
  }
  else if ( a3 )
  {
    PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(a3 + 48));
    a2 = (unsigned int *)v41;
    v11 = 1;
    v12 = v42;
    v19 = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
    v20 = ((*(_DWORD *)(a3 + 36) - 1) & 0xFFFFFFFD) == 0;
    v23 = *(_DWORD *)(a3 + 40) == 1;
    v21 = 1;
    v18 = v23;
  }
  else
  {
    v21 = 0;
  }
  v24 = 0LL;
  v40 = 0LL;
  if ( !a5 )
  {
    LOWORD(v25) = v15;
    if ( (v14 & 0xE00) != 0x800 )
    {
      v26 = 0;
      goto LABEL_21;
    }
    v26 = 2;
    v24 = (__int64)((_QWORD)v14 << 12) >> 24;
    goto LABEL_20;
  }
  v26 = *(_DWORD *)(a5 + 4);
  if ( v26 == 1 )
  {
    BlockedDomain = HsaGetBlockedDomain(v12, a2, &v40);
    v24 = v40;
    LOWORD(v25) = BlockedDomain;
    goto LABEL_21;
  }
  v25 = *(_DWORD *)(a5 + 48);
  if ( v26 == 2 )
  {
    v24 = *(_QWORD *)(a5 + 40) >> 12;
LABEL_20:
    v40 = v24;
  }
LABEL_21:
  v28 = v42;
  LOBYTE(v11) = v21;
  HsaBuildDeviceTableEntry(v42, v19, v11, v20, v18, v25, v26, v24, (__int64)&v46, 0LL, (__int64)&v45);
  v29 = (unsigned int *)v41;
  v30 = 1 << *(_DWORD *)(v41 + 4);
  v31 = v30;
  v32 = 1 << (3 - *(_DWORD *)(v41 + 4));
  if ( v30 )
  {
    v33 = v30;
    do
    {
      *((_QWORD *)&v34 + 1) = *(_QWORD *)(v13 + 8);
      *(_QWORD *)&v41 = *(_QWORD *)v13;
      *(_QWORD *)&v34 = v41;
      *((_QWORD *)&v41 + 1) = *((_QWORD *)&v34 + 1);
      do
      {
        v35 = v34;
        v36 = _InterlockedCompareExchange128(
                (volatile signed __int64 *)v13,
                *((signed __int64 *)&v45 + 1),
                v45,
                (signed __int64 *)&v35);
        v34 = v35;
        v41 = v35;
      }
      while ( !v36 );
      v13 += 32LL * v32;
      --v33;
    }
    while ( v33 );
  }
  if ( v39 )
  {
    v37 = *v29;
    if ( v30 )
    {
      do
      {
        HsaInvalidateDTE(v28, v37, a6);
        v37 += v32;
        --v31;
      }
      while ( v31 );
    }
  }
  result = v44;
  if ( v44 )
    *v44 = v43;
  return result;
}
