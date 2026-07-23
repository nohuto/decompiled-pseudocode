/*
 * XREFs of CmpBounceContextStart @ 0x140962A30
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1409618D0 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x140AE5580 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     ExAllocateFromLookasideListEx @ 0x1403C9D30 (ExAllocateFromLookasideListEx.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14044E170 (CmpAllocateTransientPoolWithQuota.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall CmpBounceContextStart(__int64 a1, unsigned __int64 a2, size_t a3, int a4, char a5)
{
  PVOID v7; // rdi
  PVOID v9; // rax
  unsigned int v11; // edx
  char v12; // cl
  __int64 TransientPoolWithQuota; // rax
  char v14; // [rsp+30h] [rbp-98h] BYREF
  __int64 v15; // [rsp+38h] [rbp-90h] BYREF
  __int64 v16; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v18; // [rsp+70h] [rbp-58h]
  __int64 v19; // [rsp+78h] [rbp-50h]
  char *v20; // [rsp+80h] [rbp-48h]
  __int64 v21; // [rsp+88h] [rbp-40h]
  __int64 *v22; // [rsp+90h] [rbp-38h]
  __int64 v23; // [rsp+98h] [rbp-30h]

  *(_QWORD *)a1 = a2;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  if ( !*((_QWORD *)&CmpRegistryProcess + 1) || !a4 && a2 > 0x7FFFFFFEFFFFLL )
  {
    *(_QWORD *)(a1 + 8) = a2;
    return 0LL;
  }
  if ( (unsigned int)dword_140E09F58 > 5 && (qword_140E09F68 & 4) != 0 && (qword_140E09F70 & 4) == qword_140E09F70 )
  {
    v15 = 1LL;
    v18 = &v15;
    v11 = a3;
    v14 = a5;
    v20 = &v14;
    v19 = 8LL;
    v21 = 1LL;
    if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
    {
      v12 = -1;
      if ( (_DWORD)a3 )
      {
        do
        {
          ++v12;
          v11 >>= 1;
        }
        while ( v11 );
      }
      v11 = 1 << (v12 + 1);
    }
    v16 = v11;
    v23 = 8LL;
    v22 = &v16;
    tlgWriteAgg((__int64)&dword_140E09F58, (unsigned __int8 *)&dword_1400552D4, a3, 5u, (__int64)v17);
  }
  if ( a3 <= 0x40 )
  {
    v7 = (PVOID)(a1 + 17);
    memset_0((void *)(a1 + 17), 0, a3);
LABEL_7:
    *(_QWORD *)(a1 + 8) = v7;
    return 0LL;
  }
  if ( a3 <= 0x1000 )
  {
    v9 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
    v7 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, a3);
      *(_BYTE *)(a1 + 16) |= 1u;
      goto LABEL_7;
    }
  }
  TransientPoolWithQuota = CmpAllocateTransientPoolWithQuota(a1, a3, 0x42424D43u);
  if ( !TransientPoolWithQuota )
    return 3221225626LL;
  *(_QWORD *)(a1 + 8) = TransientPoolWithQuota;
  return 0LL;
}
