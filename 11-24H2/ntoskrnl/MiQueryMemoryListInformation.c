/*
 * XREFs of MiQueryMemoryListInformation @ 0x140262630
 * Callers:
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     MmManagePartitionMemoryInformation @ 0x1408F7014 (MmManagePartitionMemoryInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiQueryMemoryListInformation(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned int *v2; // r10
  unsigned __int64 v3; // r8
  _QWORD *v4; // r9
  __int64 v5; // r11
  unsigned __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 *v22; // rdx
  unsigned __int64 result; // rax

  v2 = (unsigned int *)(a1 + 900);
  v3 = a1[2314];
  v4 = a2 + 13;
  *a2 = a1[360];
  v5 = 8LL;
  a2[1] = a1[376];
  a2[2] = a1[2424];
  a2[3] = a1[2440];
  a2[4] = a1[880];
  v6 = a1[2452];
  v7 = a1 + 408;
  a2[21] = v6;
  do
  {
    v8 = *v7;
    v7 += 11;
    *(v4 - 8) = v8;
    v9 = *v2++;
    *v4++ = v9;
    --v5;
  }
  while ( v5 );
  v10 = a2[4];
  if ( *a2 > v3 )
  {
    *a2 = v3;
    v11 = 0LL;
  }
  else
  {
    v11 = v3 - *a2;
  }
  v12 = a2[1];
  if ( v12 > v11 )
  {
    a2[1] = v11;
    v13 = 0LL;
  }
  else
  {
    v13 = v11 - v12;
  }
  v14 = a2[2];
  v15 = v13;
  if ( v14 > v13 )
  {
    a2[2] = v13;
    v16 = 0LL;
  }
  else
  {
    v16 = v13 - v14;
    v15 = a2[2];
  }
  v17 = a2[3];
  if ( v17 > v16 )
  {
    a2[3] = v16;
    v18 = 0LL;
  }
  else
  {
    v18 = v16 - v17;
  }
  if ( v10 > v18 )
  {
    a2[4] = v18;
    v19 = 0LL;
  }
  else
  {
    v19 = v18 - v10;
  }
  v20 = a2[21];
  if ( v20 >= v15 )
    v20 = v15;
  v21 = 8LL;
  a2[21] = v20;
  v22 = a2 + 5;
  do
  {
    result = *v22;
    if ( *v22 > v19 )
    {
      *v22 = v19;
      v19 = 0LL;
    }
    else
    {
      v19 -= result;
    }
    ++v22;
    --v21;
  }
  while ( v21 );
  return result;
}
