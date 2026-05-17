/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x18010EEFC
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800C8D60 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeRemoteSnapshot @ 0x18010F670 (PssNtFreeRemoteSnapshot.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x180163960 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int v9; // r14d
  int v10; // ebx
  unsigned __int64 v11; // r13
  unsigned int v12; // esi
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rdx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rax
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rsi
  unsigned __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  _BYTE v41[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v42; // [rsp+84h] [rbp-7Ch]
  __int16 v43; // [rsp+198h] [rbp+98h]
  __int64 v44; // [rsp+1A0h] [rbp+A0h]
  _QWORD v45[3]; // [rsp+3E8h] [rbp+2E8h] BYREF
  __int64 v46; // [rsp+400h] [rbp+300h] BYREF
  __int64 v47; // [rsp+408h] [rbp+308h]
  _QWORD v48[3]; // [rsp+418h] [rbp+318h] BYREF
  _QWORD v49[4]; // [rsp+430h] [rbp+330h] BYREF
  _QWORD v50[4]; // [rsp+450h] [rbp+350h] BYREF
  _QWORD v51[15]; // [rsp+470h] [rbp+370h] BYREF
  _QWORD v52[3]; // [rsp+4E8h] [rbp+3E8h] BYREF
  _DWORD v53[218]; // [rsp+500h] [rbp+400h] BYREF
  __int64 v54; // [rsp+868h] [rbp+768h]
  unsigned int v55; // [rsp+878h] [rbp+778h]
  __int64 v56; // [rsp+880h] [rbp+780h]
  __int64 v57; // [rsp+888h] [rbp+788h]
  __int64 v58; // [rsp+898h] [rbp+798h]
  __int64 v59; // [rsp+8B0h] [rbp+7B0h]
  __int64 v60; // [rsp+8D0h] [rbp+7D0h]
  __int64 v61; // [rsp+8F0h] [rbp+7F0h]
  __int64 v62; // [rsp+968h] [rbp+868h]

  v40 = a2;
  v39 = a4;
  v36 = 0LL;
  memset_thunk_772440563353939046(v53, 0, 0x478uLL);
  v37 = 0LL;
  v38 = 0LL;
  v34 = 0LL;
  v9 = 0;
  v35 = 0LL;
  *a4 = 0LL;
  memset_thunk_772440563353939046(v41, 0, 0x478uLL);
  v10 = ZwReadVirtualMemory(a1, a2, v53, 1144LL, &v37);
  if ( v10 < 0 )
    goto LABEL_19;
  if ( v37 != 1144 )
  {
    v10 = -2147483635;
    goto LABEL_19;
  }
  if ( v53[0] != 1146311504 )
  {
    v10 = -1073741816;
    goto LABEL_19;
  }
  v11 = (unsigned __int64)v55 << 6;
  if ( v11 > 0xFFFFFFFF )
    goto LABEL_18;
  v12 = v11 + 1144;
  if ( (unsigned int)v11 >= 0xFFFFFB88 )
  {
    v9 = -1;
LABEL_18:
    v10 = -1073741675;
    goto LABEL_19;
  }
  v13 = 8LL;
  v14 = v41;
  v15 = v53;
  do
  {
    v16 = v15[1];
    *(_OWORD *)v14 = *v15;
    v17 = v15[2];
    *((_OWORD *)v14 + 1) = v16;
    v18 = v15[3];
    *((_OWORD *)v14 + 2) = v17;
    v19 = v15[4];
    *((_OWORD *)v14 + 3) = v18;
    v20 = v15[5];
    *((_OWORD *)v14 + 4) = v19;
    v21 = v15[6];
    *((_OWORD *)v14 + 5) = v20;
    v22 = v15[7];
    v15 += 8;
    *((_OWORD *)v14 + 6) = v21;
    v14 += 128;
    *((_OWORD *)v14 - 1) = v22;
    --v13;
  }
  while ( v13 );
  v23 = v54;
  v24 = v15[1];
  *(_OWORD *)v14 = *v15;
  v25 = v15[2];
  *((_OWORD *)v14 + 1) = v24;
  v26 = v15[3];
  *((_OWORD *)v14 + 2) = v25;
  v27 = v15[4];
  *((_OWORD *)v14 + 3) = v26;
  v28 = v15[5];
  *((_OWORD *)v14 + 4) = v27;
  v29 = v15[6];
  v30 = *((_QWORD *)v15 + 14);
  *((_OWORD *)v14 + 5) = v28;
  *((_OWORD *)v14 + 6) = v29;
  *((_QWORD *)v14 + 14) = v30;
  v45[0] = 0LL;
  v46 = 0LL;
  v48[0] = 0LL;
  v49[0] = 0LL;
  v50[0] = 0LL;
  v51[0] = 0LL;
  v52[0] = 0LL;
  if ( !v23 || (v10 = ZwDuplicateObject(a1, v23, a3, v45, 0, 0, 2), v9 = v11 + 1144, v10 >= 0) )
  {
    if ( !v56 || (v10 = ZwDuplicateObject(a1, v56, a3, &v46, 0, 0, 2), v9 = v11 + 1144, v10 >= 0) )
    {
      if ( !v58 || (v10 = ZwDuplicateObject(a1, v58, a3, v48, 0, 0, 2), v9 = v11 + 1144, v10 >= 0) )
      {
        if ( !v59 || (v10 = ZwDuplicateObject(a1, v59, a3, v49, 0, 0, 2), v9 = v11 + 1144, v10 >= 0) )
        {
          if ( !v60 || (v10 = ZwDuplicateObject(a1, v60, a3, v50, 0, 0, 2), v9 = v11 + 1144, v10 >= 0) )
          {
            if ( !v61 || (v10 = ZwDuplicateObject(a1, v61, a3, v51, 0, 0, 2), v9 = v11 + 1144, v10 >= 0) )
            {
              if ( !v62 || (v10 = ZwDuplicateObject(a1, v62, a3, v52, 0, 0, 2), v9 = v11 + 1144, v10 >= 0) )
              {
                v36 = 0LL;
                v34 = v12;
                v10 = ZwAllocateVirtualMemory(a3, &v36, 0LL, &v34, 4096, 4);
                v9 = v11 + 1144;
                if ( v10 >= 0 )
                {
                  v42 = v42 & 0xFFFFFFF8 | 1;
                  if ( v47 )
                    v47 = v36 + 1144;
                  if ( v43 )
                    v44 = v36 + 296;
                  v31 = 0LL;
                  v10 = NtWriteVirtualMemory(a3, v36, v41, v12, 0LL);
                  if ( v10 >= 0 )
                  {
                    if ( !v57 )
                    {
LABEL_61:
                      v10 = 0;
                      *v39 = v36;
                      goto LABEL_62;
                    }
                    v35 = 0LL;
                    v34 = 1LL;
                    v10 = ZwAllocateVirtualMemory(-1LL, &v35, 0LL, &v34, 4096, 4);
                    if ( v10 >= 0 )
                    {
                      while ( 1 )
                      {
                        if ( v31 >= (unsigned int)v11 )
                        {
                          ZwFreeVirtualMemory(-1LL, &v35, &v34, 0x8000LL);
                          v35 = 0LL;
                          goto LABEL_61;
                        }
                        v32 = (unsigned int)v11 - v31;
                        if ( v34 <= v32 )
                          v32 = v34;
                        v10 = ZwReadVirtualMemory(a1, v31 + v57, v35, v32, &v37);
                        if ( v10 < 0 )
                          goto LABEL_19;
                        if ( v37 != v32 )
                          break;
                        v10 = NtWriteVirtualMemory(a3, v31 + v36 + 1144, v35, v37, &v38);
                        if ( v10 < 0 )
                          goto LABEL_19;
                        if ( v38 != v37 )
                          break;
                        v31 += v38;
                      }
                      v10 = -2147483635;
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
LABEL_19:
  if ( v35 )
  {
    v34 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v35, &v34, 0x8000LL);
  }
  if ( v36 )
  {
    v34 = v9;
    ZwFreeVirtualMemory(-1LL, &v36, &v34, 0x8000LL);
  }
  if ( v51[0] )
    ZwDuplicateObject(a3, v51[0], 0LL, 0LL, 0, 0, 1);
  if ( v50[0] )
    ZwDuplicateObject(a3, v50[0], 0LL, 0LL, 0, 0, 1);
  if ( v48[0] )
    ZwDuplicateObject(a3, v48[0], 0LL, 0LL, 0, 0, 1);
  if ( v49[0] )
    ZwDuplicateObject(a3, v49[0], 0LL, 0LL, 0, 0, 1);
  if ( v46 )
    ZwDuplicateObject(a3, v46, 0LL, 0LL, 0, 0, 1);
  if ( v45[0] )
    ZwDuplicateObject(a3, v45[0], 0LL, 0LL, 0, 0, 1);
  if ( v52[0] )
    ZwDuplicateObject(a3, v52[0], 0LL, 0LL, 0, 0, 1);
LABEL_62:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(a1, v40);
  return (unsigned int)v10;
}
