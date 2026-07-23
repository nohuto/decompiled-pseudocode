/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x140215358
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 */

__int64 __fastcall MiPickClusterForMappedFileFault(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  _DWORD *v7; // rdi
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned int v13; // r15d
  __int64 v15; // r13
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 result; // rax
  unsigned int v20; // edx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  struct _KTHREAD *v24; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+88h] [rbp+10h]

  v7 = *(_DWORD **)(a2 + 208);
  v9 = *(_QWORD *)(a2 + 168);
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = *(_QWORD *)(a2 + 232);
  v13 = 1;
  v26 = *(_QWORD *)v7;
  v15 = 1LL;
  v24 = CurrentThread;
  if ( (v9 & 0x400) == 0
    || BYTE5(CurrentThread[1].Queue)
    || (*(_DWORD *)(*(_QWORD *)v7 + 56LL) & 8) != 0 && (!a3 || *a3 != 2)
    || *(__int64 *)(a1 + 18752) < 160 )
  {
    goto LABEL_5;
  }
  if ( dword_140E373D8 )
  {
    --dword_140E373D8;
LABEL_5:
    v16 = v12;
LABEL_6:
    v17 = v12;
    goto LABEL_7;
  }
  if ( !(unsigned int)MiSufficientAvailablePages(a1, 320LL) )
    goto LABEL_5;
  v20 = *(_DWORD *)(a2 + 184);
  if ( v20 == 1 )
    goto LABEL_5;
  if ( !a3 )
  {
    if ( (*(_DWORD *)(v26 + 56) & 0x20) != 0 )
    {
      v20 = 4;
      if ( (v7[8] & 4) != 0 )
        v20 = 8;
    }
    else if ( !v20 )
    {
      v20 = LODWORD(v24[1].WaitListEntry.Flink) + 1;
    }
  }
  v21 = 8LL * v20;
  v16 = v21 + v12 - 8;
  if ( a4 - 8 + 8 * ((unsigned int)v7[11] - (unsigned __int64)(v7[13] & 0x3FFFFFFF)) <= v16 )
    v16 = a4 - 8 + 8 * ((unsigned int)v7[11] - (unsigned __int64)(v7[13] & 0x3FFFFFFF));
  if ( v16 > (v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v16 = v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v22 = (_QWORD *)v16;
  if ( v16 > v12 )
  {
    do
    {
      if ( *v22 == v9 )
      {
        ++v15;
      }
      else if ( v22 == (_QWORD *)v16 )
      {
        v16 -= 8LL;
      }
      --v22;
    }
    while ( (unsigned __int64)v22 > v12 );
  }
  v17 = v16 - v21 + 8;
  if ( v17 < a4 )
    v17 = a4;
  if ( v17 < (v12 & 0xFFFFFFFFFFFFF000uLL) )
    v17 = v12 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 || (*(_DWORD *)(a2 + 192) & 0x100) != 0 )
    goto LABEL_6;
  if ( v17 < v12 )
  {
    v23 = (_QWORD *)v17;
    do
    {
      if ( *v23 == v9 )
      {
        ++v15;
      }
      else if ( v23 == (_QWORD *)v17 )
      {
        v17 += 8LL;
      }
      ++v23;
    }
    while ( (unsigned __int64)v23 < v12 );
  }
LABEL_7:
  v18 = v15 - 1;
  if ( a5 == -1 )
    v18 = v15;
  if ( v18 )
  {
    if ( a5 == -1 )
      v13 = 3;
    v11 = MiObtainFaultCharges(a1, v18, v13);
  }
  result = v11 + 1;
  if ( a5 == -1 )
    result = v11;
  *a6 = v17;
  *a7 = v16;
  return result;
}
