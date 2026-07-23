/*
 * XREFs of HvlSetupLiveDumpBuffer @ 0x140589A9C
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x140587784 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HvlSetupLiveDumpBuffer(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  __int64 v17; // r13
  unsigned __int64 v18; // r12
  PHYSICAL_ADDRESS *v19; // r14
  void **v20; // r15
  unsigned __int64 v21; // rsi
  void **v22; // r13
  char *v23; // r15
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r13
  PHYSICAL_ADDRESS *v27; // r14
  unsigned __int64 v28; // rbx
  void **v29; // r12
  char *v30; // r15
  void **v31; // rdi
  PHYSICAL_ADDRESS **v32; // r12
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r15
  PHYSICAL_ADDRESS *v35; // r13
  unsigned __int64 v36; // rsi
  char **v37; // r14
  char *v38; // rbx
  unsigned __int64 v39; // [rsp+20h] [rbp-88h]
  unsigned __int64 v40; // [rsp+20h] [rbp-88h]
  unsigned __int64 v41; // [rsp+28h] [rbp-80h]
  unsigned __int64 v42; // [rsp+38h] [rbp-70h]
  void **v43; // [rsp+38h] [rbp-70h]
  PHYSICAL_ADDRESS **v44; // [rsp+40h] [rbp-68h]
  void **v45; // [rsp+48h] [rbp-60h]
  unsigned __int64 v46; // [rsp+68h] [rbp-40h]
  __int64 v47; // [rsp+70h] [rbp-38h]
  unsigned __int64 v49; // [rsp+E0h] [rbp+38h]

  v6 = a3;
  v8 = a3 * (unsigned __int64)a2;
  if ( v8 < 5 )
    return 3221225507LL;
  v10 = v8 - 2;
  v11 = v10 / 0x40201;
  if ( v10 / 0x40201 >= 0x200 )
    v11 = 512LL;
  v12 = v11 << 9;
  v39 = v11 << 9;
  v13 = v11 << 18;
  v49 = v11 << 18;
  v14 = v10 - 262657 * v11;
  if ( v14 >= 3 && v11 < 0x200 )
  {
    v15 = v14 - 1;
    ++v11;
    v12 += v15 / 0x201;
    v13 += (v15 / 0x201) << 9;
    v39 = v12;
    v49 = v13;
    v16 = v15 % 0x201;
    if ( v16 >= 2 )
    {
      ++v12;
      v13 = v16 + v13 - 1;
      v39 = v12;
      v49 = v13;
    }
  }
  *a4 = v11 + 2;
  v42 = v11 + 2;
  v46 = v11 + 2 + v12;
  *a5 = v46;
  v17 = *a1;
  *(_DWORD *)(v17 + 8) = 3;
  *(_QWORD *)v17 = v13;
  v18 = 1 % v6;
  v47 = v17;
  v19 = (PHYSICAL_ADDRESS *)(a1[1 / v6] + ((1 % v6) << 12));
  v44 = (PHYSICAL_ADDRESS **)&a1[1 / v6];
  *(_QWORD *)(v17 + 16) = (unsigned __int64)MmGetPhysicalAddress(v19).QuadPart >> 12;
  v41 = 2 % v6;
  v20 = (void **)&a1[2 / v6];
  v45 = v20;
  if ( v11 )
  {
    v21 = 0LL;
    v22 = v20;
    v23 = (char *)*v20 + 4096 * (2 % v6);
    v24 = 2 % v6;
    do
    {
      *v19 = MmGetPhysicalAddress(v23);
      v23 += 4096;
      ++v19;
      if ( (++v21 & 0x1FF) == 0 && !(++v18 % v6) )
      {
        ++v44;
        v18 = 0LL;
        v19 = *v44;
      }
      v25 = (v24 + 1) % v6;
      if ( !v25 )
        v23 = (char *)*++v22;
      v24 = (v24 + 1) & -(__int64)(v25 != 0);
    }
    while ( v21 < v11 );
    v13 = v49;
    v12 = v39;
    v20 = v45;
  }
  v26 = 0LL;
  v27 = (PHYSICAL_ADDRESS *)((char *)*v20 + 4096 * (2 % v6));
  v40 = v42 % v6;
  v28 = v42 % v6;
  v29 = (void **)&a1[v42 / v6];
  v30 = (char *)*v29 + 4096 * (v42 % v6);
  v43 = v29;
  if ( v12 )
  {
    v31 = v29;
    v32 = (PHYSICAL_ADDRESS **)v45;
    do
    {
      *v27 = MmGetPhysicalAddress(v30);
      v30 += 4096;
      ++v27;
      if ( (++v26 & 0x1FF) == 0 && !(++v41 % v6) )
      {
        ++v32;
        v41 = 0LL;
        v27 = *v32;
      }
      v33 = (v28 + 1) % v6;
      if ( !v33 )
        v30 = (char *)*++v31;
      v28 = (v28 + 1) & -(__int64)(v33 != 0);
    }
    while ( v26 < v12 );
    v13 = v49;
    v29 = v43;
  }
  v34 = 0LL;
  v35 = (PHYSICAL_ADDRESS *)((char *)*v29 + 4096 * v40);
  v36 = v46 % v6;
  v37 = (char **)&a1[v46 / v6];
  v38 = &(*v37)[4096 * (v46 % v6)];
  while ( v34 < v13 )
  {
    while ( 1 )
    {
      *v35 = MmGetPhysicalAddress(v38);
      v38 += 4096;
      ++v35;
      if ( (++v34 & 0x1FF) == 0 && !(++v40 % v6) )
      {
        ++v29;
        v40 = 0LL;
        v35 = (PHYSICAL_ADDRESS *)*v29;
      }
      if ( ++v36 % v6 )
        break;
      if ( v34 >= v13 )
        goto LABEL_35;
      ++v37;
      v36 = 0LL;
      v38 = *v37;
    }
  }
LABEL_35:
  *a6 = v47;
  return 0LL;
}
