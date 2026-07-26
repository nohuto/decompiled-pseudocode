/*
 * XREFs of ?ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140060CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400611D0 (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreGenStats(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  char v2; // dl
  unsigned __int8 result; // al
  __int64 v4; // r8
  int v5; // edx
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rdx

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  v4 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  if ( *(_BYTE *)(v4 + 32) < 6u )
  {
    if ( !*(_QWORD *)(v1 + 144) )
    {
      result = 1;
      *((_DWORD *)a1 + 10) = -1073741670;
      return result;
    }
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x98u )
    {
      *(_DWORD *)(v1 + 56) = 152;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      v5 = *(_DWORD *)(*(_QWORD *)(v1 + 144) + 56LL);
      if ( !v5 )
      {
        v6 = *(_QWORD *)(v1 + 40);
        v7 = ndisMaxNumberOfProcessors;
        *(_QWORD *)v6 = 9961856LL;
        v8 = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 40LL);
        *(_DWORD *)(v6 + 4) = 16;
        *(_QWORD *)(v6 + 8) = v8;
        v9 = 0LL;
        *(_QWORD *)(v6 + 16) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 24LL);
        *(_DWORD *)(v6 + 4) = 48;
        if ( (_DWORD)v7 )
        {
          v10 = (_QWORD *)(*(_QWORD *)(v4 + 3152) + 16LL);
          do
          {
            v9 += v10[1] + *v10 + *(v10 - 1);
            v10 += 14;
            --v7;
          }
          while ( v7 );
        }
        v11 = ndisMaxNumberOfProcessors;
        *(_QWORD *)(v6 + 24) = v9;
        v12 = 0LL;
        *(_DWORD *)(v6 + 4) = 56;
        if ( (_DWORD)v11 )
        {
          v13 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v12 += *(_QWORD *)(v13 + 33);
            v13 += 112LL;
            --v11;
          }
          while ( v11 );
        }
        v14 = ndisMaxNumberOfProcessors;
        *(_QWORD *)(v6 + 32) = v12;
        v15 = 0LL;
        *(_DWORD *)(v6 + 4) = 57;
        if ( (_DWORD)v14 )
        {
          v16 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v15 += *(_QWORD *)(v16 + 41);
            v16 += 112LL;
            --v14;
          }
          while ( v14 );
        }
        v17 = ndisMaxNumberOfProcessors;
        *(_QWORD *)(v6 + 40) = v15;
        v18 = 0LL;
        *(_DWORD *)(v6 + 4) = 59;
        if ( (_DWORD)v17 )
        {
          v19 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v18 += *(_QWORD *)(v19 + 49);
            v19 += 112LL;
            --v17;
          }
          while ( v17 );
        }
        v20 = ndisMaxNumberOfProcessors;
        *(_QWORD *)(v6 + 48) = v18;
        v21 = 0LL;
        *(_DWORD *)(v6 + 4) = 63;
        if ( (_DWORD)v20 )
        {
          v22 = (_QWORD *)(*(_QWORD *)(v4 + 3152) + 104LL);
          do
          {
            v21 += *(v22 - 1) + *v22 + *(v22 - 2);
            v22 += 14;
            --v20;
          }
          while ( v20 );
        }
        v23 = ndisMaxNumberOfProcessors;
        *(_QWORD *)(v6 + 56) = v21;
        v24 = 0LL;
        *(_DWORD *)(v6 + 4) = 575;
        if ( (_DWORD)v23 )
        {
          v25 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v24 += *(_QWORD *)(v25 + 65);
            v25 += 112LL;
            --v23;
          }
          while ( v23 );
        }
        v26 = ndisMaxNumberOfProcessors;
        *(_QWORD *)(v6 + 64) = v24;
        v27 = 0LL;
        *(_DWORD *)(v6 + 4) = 639;
        if ( (_DWORD)v26 )
        {
          v28 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v27 += *(_QWORD *)(v28 + 73);
            v28 += 112LL;
            --v26;
          }
          while ( v26 );
        }
        v29 = ndisMaxNumberOfProcessors;
        *(_QWORD *)(v6 + 72) = v27;
        v30 = 0LL;
        *(_DWORD *)(v6 + 4) = 767;
        if ( (_DWORD)v29 )
        {
          v31 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v30 += *(_QWORD *)(v31 + 81);
            v31 += 112LL;
            --v29;
          }
          while ( v29 );
        }
        v32 = ndisMaxNumberOfProcessors;
        *(_DWORD *)(v6 + 4) = 1023;
        *(_QWORD *)(v6 + 80) = v30;
        *(_QWORD *)(v6 + 88) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 48LL);
        v33 = 0LL;
        *(_DWORD *)(v6 + 4) = 2047;
        *(_QWORD *)(v6 + 96) = 0LL;
        if ( (_DWORD)v32 )
        {
          v34 = (_QWORD *)(*(_QWORD *)(v4 + 3152) + 8LL);
          do
          {
            v33 += *v34;
            v34 += 14;
            --v32;
          }
          while ( v32 );
        }
        v35 = ndisMaxNumberOfProcessors;
        v36 = 0LL;
        *(_QWORD *)(v6 + 104) = v33;
        *(_DWORD *)(v6 + 4) = 67583;
        if ( (_DWORD)v35 )
        {
          v37 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v36 += *(_QWORD *)(v37 + 25);
            v37 += 112LL;
            --v35;
          }
          while ( v35 );
        }
        v38 = ndisMaxNumberOfProcessors;
        *(_QWORD *)(v6 + 112) = v36;
        v39 = 0LL;
        *(_DWORD *)(v6 + 4) = 198655;
        if ( (_DWORD)v38 )
        {
          v40 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v39 += *(_QWORD *)(v40 + 17);
            v40 += 112LL;
            --v38;
          }
          while ( v38 );
        }
        v41 = ndisMaxNumberOfProcessors;
        *(_QWORD *)(v6 + 120) = v39;
        v42 = 0LL;
        *(_DWORD *)(v6 + 4) = 460799;
        if ( (_DWORD)v41 )
        {
          v43 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v42 += *(_QWORD *)(v43 + 89);
            v43 += 112LL;
            --v41;
          }
          while ( v41 );
        }
        v44 = ndisMaxNumberOfProcessors;
        *(_QWORD *)(v6 + 128) = v42;
        v45 = 0LL;
        *(_DWORD *)(v6 + 4) = 985087;
        if ( (_DWORD)v44 )
        {
          v46 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v45 += *(_QWORD *)(v46 + 97);
            v46 += 112LL;
            --v44;
          }
          while ( v44 );
        }
        *(_QWORD *)(v6 + 136) = v45;
        v47 = 0LL;
        *(_DWORD *)(v6 + 4) = 2033663;
        v48 = *(_QWORD *)(v4 + 3152);
        v49 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v50 = v48 - 1;
          do
          {
            v47 += *(_QWORD *)(v50 + 105);
            v50 += 112LL;
            --v49;
          }
          while ( v49 );
        }
        *(_QWORD *)(v6 + 144) = v47;
        *(_DWORD *)(v6 + 4) = 4130815;
        *(_DWORD *)(v1 + 52) = 152;
        *((_DWORD *)a1 + 10) = 0;
        ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
        *(_QWORD *)(v1 + 144) = 0LL;
        return 1;
      }
      *((_DWORD *)a1 + 10) = v5;
    }
    ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
    *(_QWORD *)(v1 + 144) = 0LL;
    return 1;
  }
  if ( *(_QWORD *)(v4 + 4448) )
    return ndisSSGetCachedOidValue(a1);
  return v2;
}
