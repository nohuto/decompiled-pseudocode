/*
 * XREFs of ExGetPoolTagInfo @ 0x140A044C4
 * Callers:
 *     EtwpPoolRunDown @ 0x1407A1D70 (EtwpPoolRunDown.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetPoolTagInfo(_DWORD *a1, unsigned int a2, int *a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 Pool2; // rax
  char *v9; // rbx
  char *v10; // rdx
  char *v11; // r9
  unsigned int v12; // eax
  char *v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // r11d
  unsigned int v16; // r14d
  unsigned int v17; // r10d
  int v19; // [rsp+20h] [rbp-68h]
  unsigned int v20; // [rsp+24h] [rbp-64h]
  char *v21; // [rsp+28h] [rbp-60h]
  _DWORD *v22; // [rsp+30h] [rbp-58h]
  _QWORD v23[10]; // [rsp+38h] [rbp-50h] BYREF

  v20 = 0;
  v22 = a1 + 2;
  v19 = 8;
  *a1 = 0;
  v6 = PoolTrackTableSize;
  v7 = PoolTrackTableExpansionSize;
  if ( 80 * PoolTrackTableSize + 80 * PoolTrackTableExpansionSize < (unsigned __int64)(80 * PoolTrackTableSize) )
    return 3221225626LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v9 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v23[0] = Pool2;
  v23[1] = PoolTrackTableSize;
  v23[2] = Pool2 + 80 * PoolTrackTableSize;
  v23[3] = v7;
  KeGenericCallDpcEx((__int64)ExpGetPoolTagInfoTarget, (__int64)v23);
  v10 = v9;
  v21 = v9;
  v11 = &v9[80 * v7 + 80 * v6];
  while ( v10 < v11 )
  {
    if ( !*(_DWORD *)v10 )
      goto LABEL_9;
    ++*a1;
    v12 = v19 + 40;
    v19 = v12;
    if ( v12 < 0x28 )
    {
      v20 = -1073741675;
      break;
    }
    if ( a2 < v12 )
    {
      v20 = -1073741820;
LABEL_9:
      v13 = v21;
      goto LABEL_10;
    }
    *v22 = *(_DWORD *)v21;
    v13 = v21;
    v14 = *((_DWORD *)v21 + 10);
    v22[1] = v14;
    v15 = *((_DWORD *)v21 + 12);
    v22[2] = v15;
    *((_QWORD *)v22 + 2) = *((_QWORD *)v21 + 4);
    v16 = *((_DWORD *)v21 + 4);
    v22[6] = v16;
    v17 = *((_DWORD *)v21 + 6);
    v22[7] = v17;
    *((_QWORD *)v22 + 4) = *((_QWORD *)v21 + 1);
    if ( v14 < v15 )
      v22[1] = v15;
    if ( v16 < v17 )
      v22[6] = v17;
    v22 += 10;
LABEL_10:
    v10 = v13 + 80;
    v21 = v10;
  }
  ExFreePoolWithTag(v9, 0);
  if ( a3 )
    *a3 = v19;
  return v20;
}
