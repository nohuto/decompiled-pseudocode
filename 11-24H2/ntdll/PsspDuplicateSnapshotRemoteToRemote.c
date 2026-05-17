/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x18011A7DC
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800C4570 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeRemoteSnapshot @ 0x1801126D0 (PssNtFreeRemoteSnapshot.c)
 *     Feature_3078821176__private_IsEnabledDeviceUsageNoInline @ 0x18015CF44 (Feature_3078821176__private_IsEnabledDeviceUsageNoInline.c)
 *     PssValidateSnapshotDescriptor @ 0x18015CF88 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1801623D0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180162470 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int v9; // r14d
  int v10; // ebx
  unsigned __int64 v11; // r15
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
  int v31; // eax
  unsigned __int64 v32; // rsi
  unsigned __int64 i; // r12
  unsigned __int64 v34; // r15
  __int64 v36; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h]
  _BYTE v44[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v45; // [rsp+84h] [rbp-7Ch]
  __int16 v46; // [rsp+198h] [rbp+98h]
  __int64 v47; // [rsp+1A0h] [rbp+A0h]
  _QWORD v48[3]; // [rsp+3E8h] [rbp+2E8h] BYREF
  __int64 v49; // [rsp+400h] [rbp+300h] BYREF
  __int64 v50; // [rsp+408h] [rbp+308h]
  _QWORD v51[3]; // [rsp+418h] [rbp+318h] BYREF
  _QWORD v52[4]; // [rsp+430h] [rbp+330h] BYREF
  _QWORD v53[4]; // [rsp+450h] [rbp+350h] BYREF
  _QWORD v54[15]; // [rsp+470h] [rbp+370h] BYREF
  _QWORD v55[3]; // [rsp+4E8h] [rbp+3E8h] BYREF
  _DWORD v56[218]; // [rsp+500h] [rbp+400h] BYREF
  __int64 v57; // [rsp+868h] [rbp+768h]
  unsigned int v58; // [rsp+878h] [rbp+778h]
  __int64 v59; // [rsp+880h] [rbp+780h]
  __int64 v60; // [rsp+888h] [rbp+788h]
  __int64 v61; // [rsp+898h] [rbp+798h]
  __int64 v62; // [rsp+8B0h] [rbp+7B0h]
  __int64 v63; // [rsp+8D0h] [rbp+7D0h]
  __int64 v64; // [rsp+8F0h] [rbp+7F0h]
  __int64 v65; // [rsp+968h] [rbp+868h]

  v43 = a2;
  v42 = a4;
  v38 = 0LL;
  memset_thunk_772440563353939046(v56, 0, 0x478uLL);
  v40 = 0LL;
  v41 = 0LL;
  v37 = 0LL;
  v9 = 0;
  v39 = 0LL;
  *a4 = 0LL;
  memset_thunk_772440563353939046(v44, 0, 0x478uLL);
  v10 = ZwReadVirtualMemory(a1, a2, v56, 1144LL, &v40);
  if ( v10 < 0 )
    goto LABEL_47;
  if ( v40 == 1144 )
  {
    if ( v56[0] == 1146311504 )
    {
      v10 = PssValidateSnapshotDescriptor(v56);
      if ( v10 >= 0 )
      {
        v11 = (unsigned __int64)v58 << 6;
        if ( v11 <= 0xFFFFFFFF )
        {
          v12 = v11 + 1144;
          if ( (unsigned int)v11 < 0xFFFFFB88 )
          {
            v13 = 8LL;
            v14 = v44;
            v15 = v56;
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
            v23 = v57;
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
            v48[0] = 0LL;
            v49 = 0LL;
            v51[0] = 0LL;
            v52[0] = 0LL;
            v53[0] = 0LL;
            v54[0] = 0LL;
            v55[0] = 0LL;
            if ( v23 )
            {
              v10 = ZwDuplicateObject(a1, v23, a3, v48, 0, 0, 2);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v59 )
            {
              LODWORD(v36) = 2;
              v10 = ZwDuplicateObject(a1, v59, a3, &v49, 0, 0, v36);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v61 )
            {
              LODWORD(v36) = 2;
              v10 = ZwDuplicateObject(a1, v61, a3, v51, 0, 0, v36);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v62 )
            {
              LODWORD(v36) = 2;
              v10 = ZwDuplicateObject(a1, v62, a3, v52, 0, 0, v36);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v63 )
            {
              LODWORD(v36) = 2;
              v10 = ZwDuplicateObject(a1, v63, a3, v53, 0, 0, v36);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v64 )
            {
              LODWORD(v36) = 2;
              v10 = ZwDuplicateObject(a1, v64, a3, v54, 0, 0, v36);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v65 )
            {
              LODWORD(v36) = 2;
              v10 = ZwDuplicateObject(a1, v65, a3, v55, 0, 0, v36);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            v38 = 0LL;
            v37 = v12;
            v10 = ZwAllocateVirtualMemory(a3, &v38, 0LL, &v37, 4096, 4);
            v9 = v11 + 1144;
            if ( v10 < 0 )
              goto LABEL_47;
            v45 = v45 & 0xFFFFFFF8 | 1;
            if ( v50 )
              v50 = v38 + 1144;
            if ( v46 )
              v47 = v38 + 296;
            v31 = (unsigned int)Feature_3078821176__private_IsEnabledDeviceUsageNoInline(v38)
                ? NtWriteVirtualMemory(a3, v38, v44, 1144LL, 0LL)
                : NtWriteVirtualMemory(a3, v38, v44, v12, 0LL);
            v10 = v31;
            if ( v31 < 0 )
              goto LABEL_47;
            if ( v60 )
            {
              v39 = 0LL;
              v37 = 1LL;
              v10 = ZwAllocateVirtualMemory(-1LL, &v39, 0LL, &v37, 4096, 4);
              if ( v10 < 0 )
                goto LABEL_47;
              v32 = 0LL;
              for ( i = (unsigned int)v11; v32 < i; v32 += v41 )
              {
                v34 = i - v32;
                if ( v37 <= i - v32 )
                  v34 = v37;
                v10 = ZwReadVirtualMemory(a1, v32 + v60, v39, v34, &v40);
                if ( v10 < 0 )
                  goto LABEL_47;
                if ( v40 != v34 )
                  goto LABEL_46;
                v10 = NtWriteVirtualMemory(a3, v32 + v38 + 1144, v39, v40, &v41);
                if ( v10 < 0 )
                  goto LABEL_47;
                if ( v41 != v40 )
                {
LABEL_46:
                  v10 = -2147483635;
                  goto LABEL_47;
                }
              }
              ZwFreeVirtualMemory(-1LL, &v39, &v37, 0x8000LL);
              v39 = 0LL;
            }
            v10 = 0;
            *v42 = v38;
            goto LABEL_65;
          }
          v9 = -1;
        }
        v10 = -1073741675;
      }
    }
    else
    {
      v10 = -1073741816;
    }
  }
  else
  {
    v10 = -2147483635;
  }
LABEL_47:
  if ( v39 )
  {
    v37 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v39, &v37, 0x8000LL);
  }
  if ( v38 )
  {
    v37 = v9;
    ZwFreeVirtualMemory(-1LL, &v38, &v37, 0x8000LL);
  }
  if ( v54[0] )
  {
    LODWORD(v36) = 1;
    ZwDuplicateObject(a3, v54[0], 0LL, 0LL, 0, 0, v36);
  }
  if ( v53[0] )
  {
    LODWORD(v36) = 1;
    ZwDuplicateObject(a3, v53[0], 0LL, 0LL, 0, 0, v36);
  }
  if ( v51[0] )
  {
    LODWORD(v36) = 1;
    ZwDuplicateObject(a3, v51[0], 0LL, 0LL, 0, 0, v36);
  }
  if ( v52[0] )
  {
    LODWORD(v36) = 1;
    ZwDuplicateObject(a3, v52[0], 0LL, 0LL, 0, 0, v36);
  }
  if ( v49 )
  {
    LODWORD(v36) = 1;
    ZwDuplicateObject(a3, v49, 0LL, 0LL, 0, 0, v36);
  }
  if ( v48[0] )
  {
    LODWORD(v36) = 1;
    ZwDuplicateObject(a3, v48[0], 0LL, 0LL, 0, 0, v36);
  }
  if ( v55[0] )
  {
    LODWORD(v36) = 1;
    ZwDuplicateObject(a3, v55[0], 0LL, 0LL, 0, 0, v36);
  }
LABEL_65:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(a1, v43);
  return (unsigned int)v10;
}
