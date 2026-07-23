/*
 * XREFs of SmcStoreCreate @ 0x14079D8F4
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x140799754 (SmcProcessStoreCreateRequest.c)
 * Callees:
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmStoreCreate @ 0x140798AD8 (SmStoreCreate.c)
 *     SmKmKeyGenGenerate @ 0x140799F10 (SmKmKeyGenGenerate.c)
 *     SmKmRegParamsLoad @ 0x14079A5A8 (SmKmRegParamsLoad.c)
 *     SmcCacheDereference @ 0x14079D1E8 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x14079D438 (SmcCacheReference.c)
 *     SmcStoreSlotAbort @ 0x14079E11C (SmcStoreSlotAbort.c)
 *     SmcStoreSlotCommit @ 0x14079E1E8 (SmcStoreSlotCommit.c)
 *     SmcStoreSlotReserve @ 0x14079E2B8 (SmcStoreSlotReserve.c)
 */

__int64 __fastcall SmcStoreCreate(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, unsigned int *a5)
{
  struct _PRIVILEGE_SET *v9; // r14
  __int64 v10; // rsi
  int v11; // edi
  __int64 v12; // r15
  int v13; // eax
  __int128 v14; // xmm0
  int v15; // ebx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  struct _PRIVILEGE_SET *v20; // rax
  __int64 v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // [rsp+20h] [rbp-91h] BYREF
  __int128 v25; // [rsp+28h] [rbp-89h] BYREF
  __int128 v26; // [rsp+40h] [rbp-71h] BYREF
  int v27; // [rsp+50h] [rbp-61h]
  int v28; // [rsp+58h] [rbp-59h]
  struct _PRIVILEGE_SET *v29; // [rsp+60h] [rbp-51h]
  unsigned int v30; // [rsp+68h] [rbp-49h]
  _QWORD *v31; // [rsp+70h] [rbp-41h]
  __int64 v32; // [rsp+78h] [rbp-39h]
  __int128 *v33; // [rsp+80h] [rbp-31h]
  _QWORD v34[4]; // [rsp+90h] [rbp-21h] BYREF
  __int128 v35; // [rsp+B0h] [rbp-1h]
  __int64 v36; // [rsp+C0h] [rbp+Fh]
  int v37; // [rsp+C8h] [rbp+17h]
  int v38; // [rsp+CCh] [rbp+1Bh]
  unsigned int v39; // [rsp+110h] [rbp+5Fh] BYREF
  unsigned int v40; // [rsp+128h] [rbp+77h]

  v40 = a4;
  memset_0(v34, 0, 0x40uLL);
  v24 = 0LL;
  v25 = 0LL;
  memset_0(&v26, 0, 0x48uLL);
  v9 = 0LL;
  v39 = 0;
  v10 = SmcCacheReference(a1, a4);
  if ( !v10 )
    return (unsigned int)-1073741672;
  if ( !a3[3] )
  {
    v11 = -1073741811;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(v10 + 24) != a3[2] || (unsigned __int8)*a3 != 1 )
  {
    v11 = -1073741637;
    goto LABEL_19;
  }
  v12 = SmcStoreSlotReserve(v10);
  if ( !v12 )
  {
    v11 = -1073741697;
    goto LABEL_19;
  }
  v13 = *(_DWORD *)(v10 + 8);
  v14 = *(_OWORD *)a3;
  v15 = *(_DWORD *)(v10 + 28) & 3;
  v26 = v14;
  HIDWORD(v26) = v13;
  v28 = *(_DWORD *)(v10 + 4);
  v16 = v14 & 0xFFFF9FFF | (v15 << 13);
  v17 = *(_DWORD *)(v10 + 32);
  v38 = 0;
  v27 = v17;
  v35 = 0LL;
  v34[0] = *(_QWORD *)(v10 + 40);
  v34[1] = *(_QWORD *)(v10 + 48);
  v34[2] = *(_QWORD *)(v10 + 56);
  v34[3] = *(_QWORD *)(v10 + 64);
  v36 = *(_QWORD *)(v10 + 88);
  v37 = *(_DWORD *)(v10 + 96);
  v31 = v34;
  LODWORD(v26) = v16;
  v11 = SmKmRegParamsLoad((__int64)&v24);
  if ( v11 < 0 )
    goto LABEL_18;
  if ( (*(_DWORD *)(v10 + 28) & 1) == 0 )
  {
    v18 = BYTE4(v24) & 3;
    if ( v18 == 2 || v18 == 1 && (v16 & 0x800) != 0 )
    {
      v19 = 0;
      goto LABEL_23;
    }
  }
  v19 = v24;
  v20 = (struct _PRIVILEGE_SET *)SmAllocEx((unsigned int)v24, 0x4B456D73u, -1);
  v9 = v20;
  if ( !v20 )
  {
    v11 = -1073741670;
LABEL_18:
    SmcStoreSlotAbort(v10, v12, 0LL);
    goto LABEL_19;
  }
  v11 = SmKmKeyGenGenerate((signed __int64 *)(a1 + 512), (void *)(v10 + 552), v20, v19);
  if ( v11 < 0 )
    goto LABEL_18;
LABEL_23:
  v22 = *(_QWORD *)(v12 + 8);
  LODWORD(v25) = *(_DWORD *)(v10 + 8);
  *((_QWORD *)&v25 + 1) = v22;
  v33 = &v25;
  v29 = v9;
  v32 = v10 + 104;
  v30 = v19;
  v11 = SmStoreCreate(a1 - 2288, a2, &v26, &v39);
  if ( v11 < 0 )
    goto LABEL_18;
  v23 = v39;
  SmcStoreSlotCommit(v10, v12, v39, a2);
  v11 = 0;
  *a5 = v23;
LABEL_19:
  SmcCacheDereference(a1, v40);
  if ( v9 )
    CmSiFreeMemory(v9);
  return (unsigned int)v11;
}
