/*
 * XREFs of ?ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140047770
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140047C50 (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreGenStats(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  char v2; // dl
  unsigned __int8 result; // al
  __int64 v4; // r8
  int v5; // edx
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r9
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r9
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r9
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
        *(_QWORD *)v6 = 9961856LL;
        v7 = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 40LL);
        *(_DWORD *)(v6 + 4) = 16;
        *(_QWORD *)(v6 + 8) = v7;
        v8 = 0LL;
        *(_QWORD *)(v6 + 16) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 24LL);
        *(_DWORD *)(v6 + 4) = 48;
        v9 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v10 = (_QWORD *)(*(_QWORD *)(v4 + 3152) + 16LL);
          do
          {
            v8 += v10[1] + *v10 + *(v10 - 1);
            v10 += 14;
            --v9;
          }
          while ( v9 );
        }
        *(_QWORD *)(v6 + 24) = v8;
        v11 = 0LL;
        *(_DWORD *)(v6 + 4) = 56;
        v12 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v13 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v11 += *(_QWORD *)(v13 + 33);
            v13 += 112LL;
            --v12;
          }
          while ( v12 );
        }
        *(_QWORD *)(v6 + 32) = v11;
        v14 = 0LL;
        *(_DWORD *)(v6 + 4) = 57;
        v15 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v16 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v14 += *(_QWORD *)(v16 + 41);
            v16 += 112LL;
            --v15;
          }
          while ( v15 );
        }
        *(_QWORD *)(v6 + 40) = v14;
        v17 = 0LL;
        *(_DWORD *)(v6 + 4) = 59;
        v18 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v19 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v17 += *(_QWORD *)(v19 + 49);
            v19 += 112LL;
            --v18;
          }
          while ( v18 );
        }
        *(_QWORD *)(v6 + 48) = v17;
        v20 = 0LL;
        *(_DWORD *)(v6 + 4) = 63;
        v21 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v22 = (_QWORD *)(*(_QWORD *)(v4 + 3152) + 104LL);
          do
          {
            v20 += *(v22 - 1) + *v22 + *(v22 - 2);
            v22 += 14;
            --v21;
          }
          while ( v21 );
        }
        *(_QWORD *)(v6 + 56) = v20;
        v23 = 0LL;
        *(_DWORD *)(v6 + 4) = 575;
        v24 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v25 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v23 += *(_QWORD *)(v25 + 65);
            v25 += 112LL;
            --v24;
          }
          while ( v24 );
        }
        *(_QWORD *)(v6 + 64) = v23;
        v26 = 0LL;
        *(_DWORD *)(v6 + 4) = 639;
        v27 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v28 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v26 += *(_QWORD *)(v28 + 73);
            v28 += 112LL;
            --v27;
          }
          while ( v27 );
        }
        *(_QWORD *)(v6 + 72) = v26;
        v29 = 0LL;
        *(_DWORD *)(v6 + 4) = 767;
        v30 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v31 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v29 += *(_QWORD *)(v31 + 81);
            v31 += 112LL;
            --v30;
          }
          while ( v30 );
        }
        *(_DWORD *)(v6 + 4) = 1023;
        *(_QWORD *)(v6 + 80) = v29;
        *(_QWORD *)(v6 + 88) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 48LL);
        v32 = 0LL;
        *(_DWORD *)(v6 + 4) = 2047;
        *(_QWORD *)(v6 + 96) = 0LL;
        v33 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v34 = (_QWORD *)(*(_QWORD *)(v4 + 3152) + 8LL);
          do
          {
            v32 += *v34;
            v34 += 14;
            --v33;
          }
          while ( v33 );
        }
        *(_QWORD *)(v6 + 104) = v32;
        v35 = 0LL;
        *(_DWORD *)(v6 + 4) = 67583;
        v36 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v37 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v35 += *(_QWORD *)(v37 + 25);
            v37 += 112LL;
            --v36;
          }
          while ( v36 );
        }
        *(_QWORD *)(v6 + 112) = v35;
        v38 = 0LL;
        *(_DWORD *)(v6 + 4) = 198655;
        v39 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v40 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v38 += *(_QWORD *)(v40 + 17);
            v40 += 112LL;
            --v39;
          }
          while ( v39 );
        }
        *(_QWORD *)(v6 + 120) = v38;
        v41 = 0LL;
        *(_DWORD *)(v6 + 4) = 460799;
        v42 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v43 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v41 += *(_QWORD *)(v43 + 89);
            v43 += 112LL;
            --v42;
          }
          while ( v42 );
        }
        *(_QWORD *)(v6 + 128) = v41;
        v44 = 0LL;
        *(_DWORD *)(v6 + 4) = 985087;
        v45 = ndisMaxNumberOfProcessors;
        if ( ndisMaxNumberOfProcessors )
        {
          v46 = *(_QWORD *)(v4 + 3152) - 1LL;
          do
          {
            v44 += *(_QWORD *)(v46 + 97);
            v46 += 112LL;
            --v45;
          }
          while ( v45 );
        }
        *(_QWORD *)(v6 + 136) = v44;
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
