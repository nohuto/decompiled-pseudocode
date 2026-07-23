/*
 * XREFs of RtlpHpHeapExtendContext @ 0x1404A2A8C
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x1404A2A70 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpAllocVA @ 0x14034AEE8 (RtlpHpAllocVA.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x1404A2C1C (RtlpHpAcquireReleaseLockExclusive.c)
 *     RtlpHpMetadataCommit @ 0x1406028B0 (RtlpHpMetadataCommit.c)
 */

unsigned __int64 __fastcall RtlpHpHeapExtendContext(__int128 *a1, __int64 a2)
{
  int *v2; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  char v7; // bp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int128 v11; // xmm0
  unsigned __int64 v12; // rdi
  bool v13; // zf
  int v14; // eax
  ULONG_PTR v16; // [rsp+20h] [rbp-58h]
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18[7]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+10h] BYREF

  v2 = (int *)a1 + 58;
  RtlpHpAcquireReleaseLockExclusive((ULONG_PTR)a1 + 232);
  while ( 1 )
  {
    v5 = *((_QWORD *)a1 + 30);
    v6 = v5 + a2;
    if ( v5 + a2 < v5 )
      return 0LL;
    if ( v6 > *((_QWORD *)a1 + 31) )
    {
      v7 = RtlpHpAcquireLockExclusive(v2, *(_DWORD *)a1 & 1);
      v8 = *((_QWORD *)a1 + 30);
      v9 = v8 + a2;
      if ( v8 + a2 < v8 || v9 > *((_QWORD *)a1 + 32) )
        goto LABEL_15;
      v10 = *((_QWORD *)a1 + 31);
      if ( v9 > v10 )
      {
        v11 = *a1;
        v20 = *((_QWORD *)a1 + 31);
        v12 = (v9 - v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v13 = (*((_BYTE *)a1 + 30) & 1) == 0;
        v19 = v12;
        if ( v13 )
        {
          LODWORD(v16) = 4;
          *(_OWORD *)v18 = v11;
          v14 = RtlpHpAllocVA(&v20, (__int64 *)&v19, 0LL, 4096, v16, v18);
          v12 = v19;
        }
        else
        {
          v17 = v11;
          v14 = RtlpHpMetadataCommit((_DWORD)a1, v10, v12, (unsigned int)&v17, 1);
        }
        if ( v14 < 0 )
        {
LABEL_15:
          v5 = 0LL;
          RtlpHpReleaseLockExclusive((ULONG_PTR)v2, *(_DWORD *)a1 & 1, v7);
          return v5;
        }
        *((_QWORD *)a1 + 31) += v12;
        _InterlockedAdd64((volatile signed __int64 *)a1 + 17, v12 >> 12);
      }
      RtlpHpReleaseLockExclusive((ULONG_PTR)v2, *(_DWORD *)a1 & 1, v7);
    }
    else if ( v5 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 30, v6, v5) )
    {
      return v5;
    }
  }
}
