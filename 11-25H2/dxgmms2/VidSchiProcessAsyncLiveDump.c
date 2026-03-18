/*
 * XREFs of VidSchiProcessAsyncLiveDump @ 0x14004FE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x140033860 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 */

void __fastcall VidSchiProcessAsyncLiveDump(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned int *Pool2; // rbx
  unsigned int *v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // r14
  _QWORD *v7; // rcx
  _OWORD *v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // rcx
  int v12; // [rsp+28h] [rbp-A1h]
  _BYTE v13[48]; // [rsp+30h] [rbp-99h] BYREF
  PVOID P; // [rsp+60h] [rbp-69h]
  _BYTE v15[120]; // [rsp+68h] [rbp-61h] BYREF
  int v16; // [rsp+E0h] [rbp+17h]

  P = 0LL;
  v16 = 0;
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v13, (unsigned __int64 *)(a1 + 6864), 1, 0);
  AcquireSpinLock::Release((AcquireSpinLock *)v13);
  v2 = *(unsigned int *)(a1 + 6920);
  if ( (unsigned int)v2 <= 3 )
  {
    Pool2 = (unsigned int *)v15;
    P = v15;
    if ( (_DWORD)v2 )
    {
      memset(v15, 0, 40 * v2);
      Pool2 = (unsigned int *)P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v2 < 0x28 )
    {
      Pool2 = 0LL;
      goto LABEL_4;
    }
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 40 * v2, 895641942LL);
    P = Pool2;
  }
  v16 = v2;
  if ( Pool2 )
  {
    v5 = 0LL;
    v6 = *(_QWORD **)(a1 + 6904);
    while ( v6 != (_QWORD *)(a1 + 6904) )
    {
      v7 = (_QWORD *)*v6;
      v8 = v6 - 1;
      v9 = v6;
      v6 = v7;
      if ( (_QWORD *)v7[1] != v9 || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9) )
        __fastfail(3u);
      *v10 = v7;
      v7[1] = v10;
      v11 = 5 * v5;
      *(_OWORD *)&Pool2[2 * v11] = *v8;
      *(_OWORD *)&Pool2[2 * v11 + 4] = v8[1];
      *(_QWORD *)&Pool2[2 * v11 + 8] = *((_QWORD *)v8 + 4);
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(a1 + 6928), v8);
      v5 = (unsigned int)(v5 + 1);
    }
  }
LABEL_4:
  *(_DWORD *)(a1 + 6920) = 0;
  KeSetEvent((PRKEVENT)(a1 + 7024), 0, 0);
  if ( Pool2 && (_DWORD)v2 )
  {
    v4 = Pool2 + 7;
    do
    {
      if ( *(v4 - 7) )
      {
        WdLogSingleEntry1(3LL, (int)*(v4 - 7));
        WdLogGlobalForLineNumber = 31491;
      }
      else
      {
        LOBYTE(v12) = 1;
        DxgCreateLiveDumpWithWdLogs(403LL, 2079LL, *(v4 - 1), *v4, v4[1], v12);
      }
      v4 += 10;
      --v2;
    }
    while ( v2 );
  }
  if ( P != v15 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
