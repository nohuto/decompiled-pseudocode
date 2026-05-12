/*
 * XREFs of NvmeDumpPopulateMiniportDumpInfo @ 0x14019FB64
 * Callers:
 *     NvmeDumpStorageDumpControl @ 0x14019FD40 (NvmeDumpStorageDumpControl.c)
 * Callees:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeDumpPopulateMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int v4; // ebx
  unsigned int v5; // r9d
  __int64 v8; // rdi
  _QWORD *v9; // r8
  _QWORD *v10; // rdx
  bool v11; // zf
  unsigned int v12; // ecx
  char *v13; // rcx
  __int64 v14; // rdx
  void *v15; // r8
  void *v17; // [rsp+50h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v4 = 0;
  v17 = 0LL;
  v5 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
  if ( !*(_QWORD *)(v3 + 64) )
  {
    v9 = (_QWORD *)(a3 + 24);
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 == v9 )
      goto LABEL_8;
    do
    {
      v11 = v10[6] == a2;
      v12 = v5 + 1;
      v10 = (_QWORD *)*v10;
      if ( !v11 )
        v12 = v5;
      v5 = v12;
    }
    while ( v10 != v9 );
    if ( v12 <= 4 )
    {
LABEL_8:
      *(_DWORD *)(a2 + 72) = v5 << 16;
      v4 = StorPortExtendedFunction(0, v8, 152LL, 1145987410LL, &v17);
      if ( v4 < 0 )
      {
        v15 = v17;
      }
      else
      {
        memset_0(v17, 0, 0x98uLL);
        *(_WORD *)v17 = *(_WORD *)(*(_QWORD *)(v8 + 576) + 8LL);
        *((_WORD *)v17 + 1) = *(_WORD *)(*(_QWORD *)(v8 + 576) + 10LL);
        *((_BYTE *)v17 + 4) = *(_BYTE *)(*(_QWORD *)(v8 + 576) + 16LL);
        v13 = (char *)v17 + 16;
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1048LL);
        *((_OWORD *)v17 + 1) = *(_OWORD *)v14;
        *((_OWORD *)v13 + 1) = *(_OWORD *)(v14 + 16);
        *((_OWORD *)v13 + 2) = *(_OWORD *)(v14 + 32);
        *((_OWORD *)v13 + 3) = *(_OWORD *)(v14 + 48);
        *((_OWORD *)v13 + 4) = *(_OWORD *)(v14 + 64);
        *((_OWORD *)v13 + 5) = *(_OWORD *)(v14 + 80);
        *((_OWORD *)v13 + 6) = *(_OWORD *)(v14 + 96);
        v13 += 128;
        *((_OWORD *)v13 - 1) = *(_OWORD *)(v14 + 112);
        *(_DWORD *)v13 = *(_DWORD *)(v14 + 128);
        *((_DWORD *)v17 + 37) = *(_DWORD *)(a1 + 56);
        *((_DWORD *)v17 + 10) &= ~8u;
        *((_QWORD *)v17 + 1) = *(_DWORD *)(*(_QWORD *)(v8 + 576) + 24LL) & 0xFFFFC000;
        *((_QWORD *)v17 + 1) |= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v8 + 576) + 28LL) << 32;
        v15 = 0LL;
        *(_QWORD *)(v3 + 64) = v17;
        *(_QWORD *)(v3 + 136) = v17;
        v17 = 0LL;
      }
      if ( v15 )
        StorPortExtendedFunction(1u, v8);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v4;
}
