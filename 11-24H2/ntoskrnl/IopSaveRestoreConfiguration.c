/*
 * XREFs of IopSaveRestoreConfiguration @ 0x14071F65C
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x14071FD98 (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IopSaveRestoreConfiguration(__int64 a1, unsigned int a2, _QWORD **a3, char a4)
{
  __int64 *v5; // r10
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rcx
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  _QWORD *result; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm1

  if ( a2 )
  {
    v5 = (__int64 *)(a1 + 32);
    v6 = a2;
    do
    {
      v7 = *v5;
      if ( a4 )
      {
        v8 = *(__int64 **)(v7 + 16);
        *(_QWORD *)(v7 + 24) = v8;
      }
      else
      {
        v8 = *(__int64 **)(v7 + 24);
        *(_QWORD *)(v7 + 16) = v8;
      }
      v9 = *v8;
      v10 = v9 + 24;
      v11 = v9 + 8 * (*(unsigned int *)(v9 + 20) + 3LL);
      if ( v9 + 24 < v11 )
      {
        if ( a4 )
        {
          do
          {
            if ( *(_BYTE *)(*(_QWORD *)v10 + 8LL) )
            {
              v12 = *(_QWORD *)(*(_QWORD *)v10 + 32LL);
              v13 = *(_DWORD *)(v12 + 152);
              v14 = *(_OWORD *)(v12 + 56);
              *(_OWORD *)(v12 + 160) = *(_OWORD *)(v12 + 40);
              v15 = *(_OWORD *)(v12 + 72);
              *(_OWORD *)(v12 + 176) = v14;
              v16 = *(_OWORD *)(v12 + 88);
              *(_OWORD *)(v12 + 192) = v15;
              v17 = *(_OWORD *)(v12 + 104);
              *(_OWORD *)(v12 + 208) = v16;
              v18 = *(_OWORD *)(v12 + 120);
              *(_OWORD *)(v12 + 224) = v17;
              v19 = *(_OWORD *)(v12 + 136);
              *(_OWORD *)(v12 + 240) = v18;
              *(_OWORD *)(v12 + 256) = v19;
              *(_DWORD *)(v12 + 272) = v13;
            }
            v10 += 8LL;
          }
          while ( v10 < v11 );
        }
        else
        {
          do
          {
            if ( *(_BYTE *)(*(_QWORD *)v10 + 8LL) )
            {
              v20 = *(_QWORD *)(*(_QWORD *)v10 + 32LL);
              v21 = *(_DWORD *)(v20 + 272);
              v22 = *(_OWORD *)(v20 + 176);
              *(_OWORD *)(v20 + 40) = *(_OWORD *)(v20 + 160);
              v23 = *(_OWORD *)(v20 + 192);
              *(_OWORD *)(v20 + 56) = v22;
              v24 = *(_OWORD *)(v20 + 208);
              *(_OWORD *)(v20 + 72) = v23;
              v25 = *(_OWORD *)(v20 + 224);
              *(_OWORD *)(v20 + 88) = v24;
              v26 = *(_OWORD *)(v20 + 240);
              *(_OWORD *)(v20 + 104) = v25;
              v27 = *(_OWORD *)(v20 + 256);
              *(_OWORD *)(v20 + 120) = v26;
              *(_OWORD *)(v20 + 136) = v27;
              *(_DWORD *)(v20 + 152) = v21;
            }
            v10 += 8LL;
          }
          while ( v10 < v11 );
        }
      }
      v5 += 8;
      --v6;
    }
    while ( v6 );
  }
  for ( result = *a3; result != a3; result = (_QWORD *)*result )
  {
    if ( a4 )
    {
      v29 = *(_OWORD *)result;
      *((_OWORD *)result - 2) = *((_OWORD *)result - 3);
      *((_OWORD *)result - 1) = v29;
    }
    else
    {
      v30 = *((_OWORD *)result - 1);
      *((_OWORD *)result - 3) = *((_OWORD *)result - 2);
      *(_OWORD *)result = v30;
    }
  }
  return result;
}
