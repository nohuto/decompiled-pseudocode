/*
 * XREFs of TopologyProcessMixerUnit @ 0x140041530
 * Callers:
 *     TopologyBuildFilterTopology @ 0x140041E6C (TopologyBuildFilterTopology.c)
 * Callees:
 *     PropertyInitializeMixerControlRange @ 0x14002E080 (PropertyInitializeMixerControlRange.c)
 */

__int64 __fastcall TopologyProcessMixerUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        _DWORD *a6)
{
  _DWORD *v6; // rsi
  __int64 v7; // r13
  __int64 v9; // rbp
  unsigned int v10; // r8d
  _DWORD *v11; // r14
  int v12; // ecx
  int v13; // r10d
  __int64 v14; // r9
  _DWORD *v15; // rdx
  int v16; // eax
  char *v17; // r15
  NTSTATUS v18; // ebx
  unsigned int v19; // r12d
  int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // r10
  char *v23; // rdx
  __int64 v24; // r15
  unsigned int v25; // esi
  int v26; // ebp
  unsigned int v27; // ecx
  NTSTATUS v28; // eax
  int v29; // ecx
  bool v30; // zf
  unsigned int v31; // edx
  __int64 v32; // rcx
  _DWORD *v33; // rcx
  unsigned int v34; // eax
  unsigned int v36; // [rsp+20h] [rbp-88h]
  __int64 i; // [rsp+28h] [rbp-80h]
  unsigned int v38; // [rsp+28h] [rbp-80h]
  __int64 Pool2; // [rsp+30h] [rbp-78h]
  __int64 v40; // [rsp+38h] [rbp-70h]
  __int64 v41; // [rsp+40h] [rbp-68h]
  __int64 v42; // [rsp+50h] [rbp-58h]
  int v44; // [rsp+B8h] [rbp+10h]
  int v45; // [rsp+C0h] [rbp+18h]
  int v46; // [rsp+C8h] [rbp+20h]

  v6 = a5;
  v7 = 0LL;
  v44 = 7;
  v9 = a3 + 168LL * *a5;
  v10 = *(_DWORD *)(a2 + 32);
  v42 = v9;
  v11 = (_DWORD *)(a4 + 16LL * (unsigned int)*a6);
  v41 = *(_QWORD *)(a2 + 72);
  if ( !v10 )
    return (unsigned int)-1073741438;
  v12 = 0;
  v13 = *(_DWORD *)(a2 + 24);
  v14 = v10;
  v15 = (_DWORD *)(*(_QWORD *)(a2 + 56) + 4LL);
  do
  {
    v16 = *v15 * v13;
    v15 += 3;
    v12 += v16;
    --v14;
  }
  while ( v14 );
  if ( v12 )
  {
    Pool2 = ExAllocatePool2(256LL, 32 * v12 + 24 * v10, 1096972357LL);
    v17 = (char *)Pool2;
    if ( Pool2 )
    {
      v18 = 0;
      v19 = 0;
      v46 = 0;
      v20 = 0;
      v45 = 0;
      v21 = Pool2 + 24LL * *(unsigned int *)(a2 + 32);
      *(_DWORD *)(v9 + 88) = *(_DWORD *)(a2 + 28);
      for ( i = v21; v19 < *(_DWORD *)(a2 + 32); v46 = ++v19 )
      {
        if ( v18 < 0 )
          break;
        v22 = 3LL * v19;
        *v11 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v19);
        v11[1] = 0;
        v11[2] = *v6;
        v11[3] = 1;
        v11 += 4;
        ++*v6;
        ++*a6;
        v40 = v9 + 168LL * v19;
        *(_DWORD *)(v40 + 76) = 4;
        *(_DWORD *)(v40 + 80) = *(_DWORD *)(a2 + 16);
        *(_QWORD *)(v40 + 8) = &KSNODETYPE_SUPERMIX;
        *(_QWORD *)(v40 + 16) = &KSNODETYPE_SUPERMIX;
        *(_QWORD *)(v40 + 136) = USBCntrlGetSetMixerLevels;
        v23 = &v17[24 * v19];
        *(_QWORD *)(v40 + 128) = v23;
        *(_DWORD *)v23 = v19;
        *((_DWORD *)v23 + 1) = v20;
        *((_DWORD *)v23 + 2) = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v19 + 4);
        *((_DWORD *)v23 + 3) = *(_DWORD *)(a2 + 24);
        *((_QWORD *)v23 + 2) = v21;
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v19 + 4) )
        {
          v24 = i;
          v25 = 0;
          v26 = v44;
          do
          {
            if ( v18 < 0 )
              break;
            v27 = 0;
            if ( *(_DWORD *)(a2 + 24) )
            {
              do
              {
                v36 = v7;
                if ( v18 < 0 )
                  break;
                *(_DWORD *)(v24 + 4) = v25 + 1;
                *(_DWORD *)(v24 + 8) = v27 + 1;
                v38 = v27 + 1;
                *(_BYTE *)(v24 + 1) = (*(_BYTE *)(v7 + v41) & (unsigned __int8)(1 << v26)) != 0;
                v28 = PropertyInitializeMixerControlRange(a1, v40, v24);
                v29 = v26--;
                v18 = v28;
                if ( !v29 )
                  v26 = 7;
                v7 = (unsigned int)(v7 + 1);
                v30 = v29 == 0;
                v27 = v38;
                if ( !v30 )
                  v7 = v36;
                v24 += 32LL;
              }
              while ( v38 < *(_DWORD *)(a2 + 24) );
              v20 = v45;
              v22 = 3LL * v19;
              v44 = v26;
              i = v24;
            }
            ++v20;
            ++v25;
            v45 = v20;
          }
          while ( v25 < *(_DWORD *)(*(_QWORD *)(a2 + 56) + 4 * v22 + 4) );
          v6 = a5;
          v9 = v42;
          v17 = (char *)Pool2;
          v19 = v46;
          v21 = i;
        }
      }
      v31 = 0;
      v32 = 168LL * v19;
      *(_DWORD *)(v32 + v9 + 76) = 6;
      *(_DWORD *)(v32 + v9 + 80) = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(v32 + v9 + 8) = &KSNODETYPE_SUM;
      if ( *(_DWORD *)(a2 + 32) )
      {
        v33 = v11 + 2;
        do
        {
          v34 = *v6 - v31;
          *(v33 - 1) = 0;
          *(v33 - 2) = (v34 - 1) | 0x80000000;
          ++v31;
          *v33 = *v6;
          v33[1] = v31;
          v33 += 4;
          ++*a6;
        }
        while ( v31 < *(_DWORD *)(a2 + 32) );
        v17 = (char *)Pool2;
      }
      ++*v6;
      if ( v18 < 0 || (v18 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v17, ExFreePool), v18 < 0) )
        ExFreePool(v17);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v18;
}
