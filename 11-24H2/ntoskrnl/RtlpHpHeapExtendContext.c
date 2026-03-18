/*
 * XREFs of RtlpHpHeapExtendContext @ 0x1404A803C
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x1404A8020 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpAllocVA @ 0x1402E98A8 (RtlpHpAllocVA.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x1404A81CC (RtlpHpAcquireReleaseLockExclusive.c)
 *     RtlpHpMetadataCommit @ 0x140605270 (RtlpHpMetadataCommit.c)
 */

unsigned __int64 __fastcall RtlpHpHeapExtendContext(__int128 *a1, __int64 a2)
{
  int *v2; // rsi
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  char v8; // bp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int128 v12; // xmm0
  unsigned __int64 v13; // rdi
  bool v14; // zf
  int v15; // eax
  ULONG_PTR v17; // [rsp+20h] [rbp-58h]
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19[7]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF

  v2 = (int *)a1 + 58;
  RtlpHpAcquireReleaseLockExclusive((ULONG_PTR)a1 + 232);
  while ( 1 )
  {
    v6 = *((_QWORD *)a1 + 30);
    v7 = v6 + a2;
    if ( v6 + a2 < v6 )
      return 0LL;
    if ( v7 > *((_QWORD *)a1 + 31) )
    {
      v8 = RtlpHpAcquireLockExclusive(v2, *(_DWORD *)a1 & 1, v5);
      v9 = *((_QWORD *)a1 + 30);
      v10 = v9 + a2;
      if ( v9 + a2 < v9 || v10 > *((_QWORD *)a1 + 32) )
        goto LABEL_15;
      v11 = *((_QWORD *)a1 + 31);
      if ( v10 > v11 )
      {
        v12 = *a1;
        v21 = *((_QWORD *)a1 + 31);
        v13 = (v10 - v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v14 = (*((_BYTE *)a1 + 30) & 1) == 0;
        v20 = v13;
        if ( v14 )
        {
          LODWORD(v17) = 4;
          *(_OWORD *)v19 = v12;
          v15 = RtlpHpAllocVA(&v21, (__int64 *)&v20, 0LL, 4096, v17, v19);
          v13 = v20;
        }
        else
        {
          v18 = v12;
          v15 = RtlpHpMetadataCommit((_DWORD)a1, v11, v13, (unsigned int)&v18, 1);
        }
        if ( v15 < 0 )
        {
LABEL_15:
          v6 = 0LL;
          RtlpHpReleaseLockExclusive((ULONG_PTR)v2, *(_DWORD *)a1 & 1, v8);
          return v6;
        }
        *((_QWORD *)a1 + 31) += v13;
        _InterlockedAdd64((volatile signed __int64 *)a1 + 17, v13 >> 12);
      }
      RtlpHpReleaseLockExclusive((ULONG_PTR)v2, *(_DWORD *)a1 & 1, v8);
    }
    else if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 30, v7, v6) )
    {
      return v6;
    }
  }
}
