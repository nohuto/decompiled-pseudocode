/*
 * XREFs of HalpQueryProfileSourceList @ 0x140377670
 * Callers:
 *     HalpQueryProfileInformation @ 0x140AB88E0 (HalpQueryProfileInformation.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     wcscpy_s @ 0x140502060 (wcscpy_s.c)
 */

__int64 __fastcall HalpQueryProfileSourceList(unsigned int a1, __int64 a2, unsigned int *a3)
{
  int v3; // ebp
  unsigned int v5; // r13d
  _DWORD *v6; // r14
  unsigned __int8 v9; // al
  __int64 v10; // rbx
  unsigned __int8 v11; // cl
  __int64 v12; // r8
  unsigned int v13; // r8d
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // ebx
  unsigned __int8 v20; // [rsp+50h] [rbp+8h]

  v3 = HalpProfileSourceDescriptorCount;
  v5 = a1;
  *a3 = 0;
  v6 = 0LL;
  v9 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  v10 = HalpProfileSourceDescriptorListHead;
  v11 = v9;
  v20 = v9;
  if ( (__int64 *)HalpProfileSourceDescriptorListHead != &HalpProfileSourceDescriptorListHead )
  {
    do
    {
      if ( !v3 )
        break;
      if ( !(unsigned int)KeIsEmptyAffinityEx(v10 + 24) )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( *(_WORD *)(*(_QWORD *)(v10 + 288) + 2 * v12) );
        v13 = v12 + 1;
        v14 = (2 * v13 + 31) & 0xFFFFFFF8;
        if ( v14 <= v5 )
        {
          v15 = HalpProfileIntervalLimits;
          *(_DWORD *)a2 = v14;
          *(_DWORD *)(a2 + 4) = *(_DWORD *)(v10 - 8);
          v16 = *(unsigned __int8 *)(v10 + 20);
          *(_DWORD *)(a2 + 8) = *(_DWORD *)(v15 + 8 * v16 + 4);
          v17 = *(_DWORD *)(v15 + 8 * v16);
          *(_QWORD *)(a2 + 16) = 0LL;
          *(_DWORD *)(a2 + 12) = v17;
          wcscpy_s((wchar_t *)(a2 + 24), v13, *(const wchar_t **)(v10 + 288));
          v6 = (_DWORD *)a2;
          a2 += v14;
          v5 -= v14;
        }
        *a3 += v14;
        --v3;
      }
      v10 = *(_QWORD *)v10;
    }
    while ( (__int64 *)v10 != &HalpProfileSourceDescriptorListHead );
    v11 = v20;
    if ( v6 )
      *v6 = 0;
  }
  v18 = a1 < *a3 ? 0xC0000004 : 0;
  HalpReleaseHighLevelLock((__int64)&HalpProfileSourceDescriptorListLock, v11);
  return v18;
}
