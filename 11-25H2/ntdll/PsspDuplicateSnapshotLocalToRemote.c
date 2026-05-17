/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x1800C8DE0
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800C8D60 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x1800C93A0 (PssNtFreeSnapshot.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x180163960 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  unsigned __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _BYTE *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  int v33; // ebx
  __int64 v35; // r8
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+50h] [rbp-B0h]
  _BYTE v39[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v40; // [rsp+64h] [rbp-9Ch]
  __int64 v41; // [rsp+180h] [rbp+80h]
  _QWORD v42[3]; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int64 v43; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v44; // [rsp+3E8h] [rbp+2E8h]
  _QWORD v45[3]; // [rsp+3F8h] [rbp+2F8h] BYREF
  _QWORD v46[4]; // [rsp+410h] [rbp+310h] BYREF
  _QWORD v47[4]; // [rsp+430h] [rbp+330h] BYREF
  _QWORD v48[15]; // [rsp+450h] [rbp+350h] BYREF
  _QWORD v49[3]; // [rsp+4C8h] [rbp+3C8h] BYREF

  v38 = a4;
  v36 = 0LL;
  v37 = 0LL;
  memset_thunk_772440563353939046(v39, 0, 0x478uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v7 > 0xFFFFFFFF )
  {
    v33 = -1073741675;
  }
  else
  {
    v8 = v7 + 1144;
    if ( (unsigned int)(v7 + 1144) < 0x478 )
    {
      v33 = -1073741675;
    }
    else
    {
      v9 = 8LL;
      v10 = (_OWORD *)a1;
      v11 = v39;
      do
      {
        v12 = v10[1];
        *(_OWORD *)v11 = *v10;
        v13 = v10[2];
        *((_OWORD *)v11 + 1) = v12;
        v14 = v10[3];
        *((_OWORD *)v11 + 2) = v13;
        v15 = v10[4];
        *((_OWORD *)v11 + 3) = v14;
        v16 = v10[5];
        *((_OWORD *)v11 + 4) = v15;
        v17 = v10[6];
        *((_OWORD *)v11 + 5) = v16;
        v18 = v10[7];
        v10 += 8;
        *((_OWORD *)v11 + 6) = v17;
        v11 += 128;
        *((_OWORD *)v11 - 1) = v18;
        --v9;
      }
      while ( v9 );
      v19 = *(_QWORD *)(a1 + 872);
      v20 = v10[1];
      *(_OWORD *)v11 = *v10;
      v21 = v10[2];
      *((_OWORD *)v11 + 1) = v20;
      v22 = v10[3];
      *((_OWORD *)v11 + 2) = v21;
      v23 = v10[4];
      *((_OWORD *)v11 + 3) = v22;
      v24 = v10[5];
      *((_OWORD *)v11 + 4) = v23;
      v25 = v10[6];
      v26 = *((_QWORD *)v10 + 14);
      *((_OWORD *)v11 + 5) = v24;
      *((_OWORD *)v11 + 6) = v25;
      *((_QWORD *)v11 + 14) = v26;
      v42[0] = 0LL;
      v43 = 0LL;
      v45[0] = 0LL;
      v46[0] = 0LL;
      v47[0] = 0LL;
      v48[0] = 0LL;
      v49[0] = 0LL;
      if ( !v19 || (v33 = ZwDuplicateObject(-1LL, v19, a2, v42, 0, 0, 2), v33 >= 0) )
      {
        v27 = *(_QWORD *)(a1 + 896);
        if ( !v27 || (v33 = ZwDuplicateObject(-1LL, v27, a2, &v43, 0, 0, 2), v33 >= 0) )
        {
          v28 = *(_QWORD *)(a1 + 920);
          if ( !v28 || (v33 = ZwDuplicateObject(-1LL, v28, a2, v45, 0, 0, 2), v33 >= 0) )
          {
            v29 = *(_QWORD *)(a1 + 944);
            if ( !v29 || (v33 = ZwDuplicateObject(-1LL, v29, a2, v46, 0, 0, 2), v33 >= 0) )
            {
              v30 = *(_QWORD *)(a1 + 976);
              if ( !v30 || (v33 = ZwDuplicateObject(-1LL, v30, a2, v47, 0, 0, 2), v33 >= 0) )
              {
                v31 = *(_QWORD *)(a1 + 1008);
                if ( !v31 || (v33 = ZwDuplicateObject(-1LL, v31, a2, v48, 0, 0, 2), v33 >= 0) )
                {
                  v32 = *(_QWORD *)(a1 + 1128);
                  if ( !v32 || (v33 = ZwDuplicateObject(-1LL, v32, a2, v49, 0, 0, 2), v33 >= 0) )
                  {
                    v36 = 0LL;
                    v37 = v8;
                    v33 = ZwAllocateVirtualMemory(a2, &v36, 0LL, &v37, 4096, 4);
                    if ( v33 >= 0 )
                    {
                      v40 = v40 & 0xFFFFFFF8 | 1;
                      if ( *(_QWORD *)(a1 + 904) )
                        v44 = v36 + 1144;
                      if ( *(_WORD *)(a1 + 280) )
                        v41 = v36 + 296;
                      v33 = NtWriteVirtualMemory(a2, v36, v39, v8, 0LL);
                      if ( v33 >= 0 )
                      {
                        v35 = *(_QWORD *)(a1 + 904);
                        if ( !v35 || (v33 = NtWriteVirtualMemory(a2, v44, v35, (unsigned int)v7, 0LL), v33 >= 0) )
                        {
                          v33 = 0;
                          *a3 = v36;
                          goto LABEL_32;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( v36 )
      {
        v37 = v8;
        ZwFreeVirtualMemory(-1LL, &v36, &v37, 0x8000LL);
      }
    }
  }
  if ( v48[0] )
    ZwDuplicateObject(a2, v48[0], 0LL, 0LL, 0, 0, 1);
  if ( v47[0] )
    ZwDuplicateObject(a2, v47[0], 0LL, 0LL, 0, 0, 1);
  if ( v45[0] )
    ZwDuplicateObject(a2, v45[0], 0LL, 0LL, 0, 0, 1);
  if ( v46[0] )
    ZwDuplicateObject(a2, v46[0], 0LL, 0LL, 0, 0, 1);
  if ( v43 )
    ZwDuplicateObject(a2, v43, 0LL, 0LL, 0, 0, 1);
  if ( v42[0] )
    ZwDuplicateObject(a2, v42[0], 0LL, 0LL, 0, 0, 1);
  if ( v49[0] )
    ZwDuplicateObject(a2, v49[0], 0LL, 0LL, 0, 0, 1);
LABEL_32:
  if ( (v38 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v33;
}
