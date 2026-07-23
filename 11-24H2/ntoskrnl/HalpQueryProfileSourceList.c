/*
 * XREFs of HalpQueryProfileSourceList @ 0x140371748
 * Callers:
 *     HalpQueryProfileInformation @ 0x140AB79E4 (HalpQueryProfileInformation.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 */

__int64 __fastcall HalpQueryProfileSourceList(unsigned int a1, __int64 a2, unsigned int *a3)
{
  int v3; // ebp
  unsigned int v5; // r13d
  _DWORD *v6; // r14
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rbx
  char v12; // cl
  __int64 v13; // r8
  unsigned int v14; // r8d
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  char v21; // [rsp+50h] [rbp+8h]

  v3 = HalpProfileSourceDescriptorCount;
  v5 = a1;
  *a3 = 0;
  v6 = 0LL;
  v9 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  v11 = HalpProfileSourceDescriptorListHead;
  v12 = v9;
  v21 = v9;
  if ( (__int64 *)HalpProfileSourceDescriptorListHead != &HalpProfileSourceDescriptorListHead )
  {
    do
    {
      if ( !v3 )
        break;
      if ( !(unsigned int)KeIsEmptyAffinityEx(v11 + 24) )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( *(_WORD *)(*(_QWORD *)(v11 + 288) + 2 * v13) );
        v14 = v13 + 1;
        v15 = (2 * v14 + 31) & 0xFFFFFFF8;
        if ( v15 <= v5 )
        {
          v16 = HalpProfileIntervalLimits;
          *(_DWORD *)a2 = v15;
          *(_DWORD *)(a2 + 4) = *(_DWORD *)(v11 - 8);
          v17 = *(unsigned __int8 *)(v11 + 20);
          *(_DWORD *)(a2 + 8) = *(_DWORD *)(v16 + 8 * v17 + 4);
          v18 = *(_DWORD *)(v16 + 8 * v17);
          *(_QWORD *)(a2 + 16) = 0LL;
          *(_DWORD *)(a2 + 12) = v18;
          wcscpy_s((wchar_t *)(a2 + 24), v14, *(const wchar_t **)(v11 + 288));
          v6 = (_DWORD *)a2;
          a2 += v15;
          v5 -= v15;
        }
        *a3 += v15;
        --v3;
      }
      v11 = *(_QWORD *)v11;
    }
    while ( (__int64 *)v11 != &HalpProfileSourceDescriptorListHead );
    v12 = v21;
    if ( v6 )
      *v6 = 0;
  }
  LOBYTE(v10) = v12;
  v19 = a1 < *a3 ? 0xC0000004 : 0;
  HalpReleaseHighLevelLock(&HalpProfileSourceDescriptorListLock, v10);
  return v19;
}
