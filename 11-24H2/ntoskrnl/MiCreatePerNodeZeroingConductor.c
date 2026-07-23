/*
 * XREFs of MiCreatePerNodeZeroingConductor @ 0x1407FF8C0
 * Callers:
 *     MiZeroPageThread @ 0x140691640 (MiZeroPageThread.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     MiGetNodeSystemInformation @ 0x14046BFBC (MiGetNodeSystemInformation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePerNodeZeroingConductor(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rsi
  __int64 NodeSystemInformation; // rax
  unsigned int v8; // edx
  ULONG_PTR v9; // r9
  __int64 v10; // r14
  __int64 PoolMm; // rax
  _BYTE *v12; // rdi
  _QWORD *v14; // rax
  __int64 v15; // r9
  void **v16; // rax
  int v17; // ebx
  __int64 v18; // [rsp+50h] [rbp-48h] BYREF
  __int128 v19; // [rsp+58h] [rbp-40h] BYREF

  v18 = 0LL;
  v6 = *(_QWORD *)(a1 + 16) + 57216LL * a2;
  NodeSystemInformation = MiGetNodeSystemInformation(a2);
  v9 = v8;
  LODWORD(v9) = v8 | 0x80000000;
  v10 = NodeSystemInformation;
  PoolMm = ExAllocatePoolMm(0x40uLL, 0x418uLL, 1666869581, v9);
  v12 = (_BYTE *)PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  *(_DWORD *)(PoolMm + 56) = a2;
  *(_QWORD *)(PoolMm + 48) = a1;
  v14 = (_QWORD *)(PoolMm + 112);
  v14[1] = v14;
  *v14 = v14;
  v12[80] = a3;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 128LL);
  v16 = &Src;
  if ( (*(_BYTE *)(v10 + 36) & 1) == 0 )
    v16 = (void **)v10;
  v19 = *(_OWORD *)*v16;
  v17 = PsCreateSystemThreadEx(&v18, 0x1FFFFFLL, 0LL, v15, 0LL, MiNodeZeroConductor, v12, &v19, 0LL);
  if ( v17 < 0 )
    ExFreePoolWithTag(v12, 0);
  else
    *(_QWORD *)(v6 + 15288) = v18;
  return (unsigned int)v17;
}
