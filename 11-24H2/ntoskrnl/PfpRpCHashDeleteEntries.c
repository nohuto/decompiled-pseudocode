/*
 * XREFs of PfpRpCHashDeleteEntries @ 0x140A1D3B8
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x140A5EDA0 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14040880C (ExfAcquireReleasePushLockExclusive.c)
 *     PfLockSharedAcquire @ 0x14047A884 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x14047DE88 (PfLockSharedRelease.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashDeleteEntries(
        __int64 a1,
        __int64 a2,
        volatile signed __int64 *a3,
        unsigned int a4,
        _QWORD *a5)
{
  volatile signed __int64 *v5; // r13
  __int64 v6; // r15
  unsigned int v7; // ebx
  unsigned int v8; // edi
  char v9; // dl
  __int64 v10; // xmm0_8
  unsigned int v11; // esi
  char v12; // cl
  unsigned int v13; // eax
  char v14; // r12
  unsigned int v15; // edi
  char *v16; // r14
  char *v17; // rbp
  size_t v18; // r15
  int v19; // r13d
  char *v20; // rsi
  __int64 v21; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v24; // eax
  char *v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 i; // rax
  __int64 v29; // r9
  _QWORD *v30; // rcx
  signed __int32 v31[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v32; // [rsp+20h] [rbp-88h]
  char *Pool2; // [rsp+28h] [rbp-80h]
  PVOID P; // [rsp+30h] [rbp-78h]
  ULONG_PTR v35; // [rsp+38h] [rbp-70h]
  void *Src[2]; // [rsp+40h] [rbp-68h]
  __int64 v37; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp+8h]
  __int64 v39; // [rsp+B0h] [rbp+8h]

  v5 = a3;
  v35 = a1 + 128;
  v6 = a2;
  FsRtlAcquirePushLockExclusive((unsigned __int64 *)(a1 + 128));
  v7 = 0;
  v8 = *(_DWORD *)(v6 + 12) << *(_DWORD *)(v6 + 8);
  if ( v8 )
  {
    Pool2 = (char *)ExAllocatePool2(0x100uLL, v8, 0x48436650u);
    if ( Pool2 )
    {
      PfLockSharedAcquire(v5);
      v9 = -1;
      v10 = *(_QWORD *)(v6 + 16);
      *(_OWORD *)Src = *(_OWORD *)v6;
      v37 = v10;
      v32 = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)(v6 + 8)));
      v11 = 1 << v32;
      v12 = -1;
      v13 = 1 << v32;
      if ( 1 << v32 )
      {
        do
        {
          ++v12;
          v13 >>= 1;
        }
        while ( v13 );
      }
      v14 = v12 + 1;
      if ( ((v11 - 1) & v11) == 0 )
        v14 = v12;
      v15 = v8 >> v14;
      if ( ((v15 - 1) & v15) != 0 )
      {
        for ( ; v15; v15 >>= 1 )
          ++v9;
        v15 = 1 << v9;
      }
      v38 = 0;
      memset_0(Pool2, 0, (unsigned __int64)v15 << v14);
      v16 = (char *)Src[0];
      v17 = (char *)Src[0] + ((unsigned __int64)HIDWORD(Src[1]) << v32);
      P = Src[0];
      if ( Src[0] >= v17 )
      {
        v20 = Pool2;
      }
      else
      {
        v18 = v11;
        v19 = 0;
        v20 = Pool2;
        do
        {
          v21 = *(_QWORD *)v16;
          if ( *(_QWORD *)v16 )
          {
            if ( !a5 )
              goto LABEL_22;
            v24 = 0;
            if ( !a4 )
              goto LABEL_22;
            v30 = a5;
            do
            {
              if ( *v30 == v21 )
                break;
              ++v24;
              ++v30;
            }
            while ( v24 < a4 );
            if ( v24 >= a4 )
            {
LABEL_22:
              if ( v15 )
              {
                v26 = v15 - 1;
                v27 = 0LL;
                v39 = *(_QWORD *)v16;
                for ( i = 37
                        * (BYTE6(v39)
                         + 37
                         * (BYTE5(v39)
                          + 37
                          * (BYTE4(v39)
                           + 37
                           * (BYTE3(v39) + 37
                                         * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v21 + 11623883)))))))
                        + (unsigned int)HIBYTE(v39); ; i = v15 - 1 )
                {
                  v29 = i & v26;
                  v25 = &Pool2[v29 << v14];
                  if ( !*(_QWORD *)v25 || *(_QWORD *)v25 == v21 )
                    break;
                  if ( !v27 )
                  {
                    v27 = 2654435761LL * v21 + 1;
                    if ( ((-79 * (_BYTE)v21) & 1) != 0 )
                      v27 = 2654435761LL * v21;
                  }
                  v26 = v27 + v29;
                }
              }
              else
              {
                v25 = 0LL;
              }
              memmove(v25, v16, v18);
              ++v19;
            }
          }
          v16 += v18;
        }
        while ( v16 < v17 );
        v6 = a2;
        v38 = v19;
        v5 = a3;
      }
      *(_DWORD *)(v6 + 16) = v38;
      *(_QWORD *)v6 = v20;
      PfLockSharedRelease((signed __int64 *)v5);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      _InterlockedOr(v31, 0);
      if ( (*v5 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)v5);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  VmpReleasePushLockExclusive((volatile signed __int64 *)v35);
  return v7;
}
