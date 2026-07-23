/*
 * XREFs of PpmParkDistributeUtilityEx @ 0x1405E0904
 * Callers:
 *     PpmParkDistributeAllUtility @ 0x1404E5B80 (PpmParkDistributeAllUtility.c)
 *     PpmHeteroDistributeUtilityEx @ 0x1405DDDF4 (PpmHeteroDistributeUtilityEx.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeXorAffinityEx2 @ 0x1402B2C68 (KeXorAffinityEx2.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1404176C4 (PpmHeteroUtilityToNormalizedUtility.c)
 *     PpmHeteroNormalizedUtilityToUtility @ 0x140449264 (PpmHeteroNormalizedUtilityToUtility.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PpmParkDistributeUtilityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        unsigned __int16 a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int16 v6; // bx
  struct _KAFFINITY_EX *v7; // r14
  __int16 v9; // r12
  unsigned __int16 v10; // di
  __int16 v11; // r13
  __int64 Prcb; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned int v16; // r15d
  unsigned int v17; // esi
  int v18; // eax
  char v19; // r12
  __int64 v20; // rdi
  unsigned int v21; // ecx
  unsigned __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned int v25; // ecx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 result; // rax
  _DWORD *v30; // rdi
  int v31; // ebx
  __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rax
  unsigned int v35; // [rsp+20h] [rbp-E0h] BYREF
  char v36; // [rsp+24h] [rbp-DCh]
  struct _KAFFINITY_EX *v37; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v38; // [rsp+30h] [rbp-D0h]
  __int16 v39; // [rsp+38h] [rbp-C8h]
  int v40; // [rsp+3Ah] [rbp-C6h]
  __int16 v41; // [rsp+3Eh] [rbp-C2h]
  int v42; // [rsp+40h] [rbp-C0h]
  struct _KAFFINITY_EX *v43; // [rsp+48h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-B0h]
  struct _KAFFINITY_EX *v45; // [rsp+58h] [rbp-A8h]
  struct _KAFFINITY_EX v46; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v47[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v48[33]; // [rsp+178h] [rbp+78h] BYREF

  v6 = a3;
  v7 = a2;
  v43 = a2;
  v45 = a1;
  v9 = 0;
  v36 = a4;
  v42 = a3;
  v44 = a6;
  v40 = 0;
  v41 = 0;
  memset_0(v48, 0, 0x100uLL);
  v35 = 0;
  memset_0(&v46.8, 0, sizeof(v46.8));
  v47[1] = 0;
  v47[0] = 2097153;
  v10 = 0;
  v11 = 0;
  memset_0(v48, 0, 0x100uLL);
  v46.Reserved = 0;
  *(_DWORD *)&v46.Count = 2097153;
  memset_0(&v46.8, 0, sizeof(v46.8));
  KeXorAffinityEx2(a1, v7, &v46);
  v38 = v46.Bitmap[0];
  v37 = &v46;
  v39 = 0;
  if ( !(unsigned int)KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v37) )
  {
    do
    {
      Prcb = KeGetPrcb(v35);
      v14 = Prcb + 35248;
      if ( *(_BYTE *)(Prcb + 35336) )
      {
        ++v9;
        KeAddProcessorAffinityEx((unsigned __int16 *)v47, v35);
      }
      else
      {
        ++v11;
      }
      a5 += PpmHeteroUtilityToNormalizedUtility(v14, *(_DWORD *)(v14 + 40));
      ++v10;
    }
    while ( !(unsigned int)KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v37) );
    v6 = v42;
    v7 = v43;
  }
  v38 = v7->Bitmap[0];
  v39 = 0;
  v37 = v7;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v37) )
  {
    v15 = KeGetPrcb(v35);
    a5 += PpmHeteroUtilityToNormalizedUtility(v15 + 35248, *(_DWORD *)(v15 + 35288) - *(_DWORD *)(v15 + 35292));
  }
  if ( v10 <= 1u )
    v10 = 1;
  if ( v6 >= v10 )
    v6 = v10;
  if ( v6 <= 1u )
    v6 = 1;
  v16 = a5 / v10;
  v17 = a5 / v6;
  if ( v11 && v9 )
  {
    v38 = v48[0];
    v39 = 0;
    v37 = (struct _KAFFINITY_EX *)v47;
    v18 = KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v37);
    v19 = v36;
    if ( v18 )
      goto LABEL_29;
    while ( 1 )
    {
      v20 = KeGetPrcb(v35);
      KeRemoveProcessorAffinityEx(&v46.Count, v35);
      v21 = PpmHeteroNormalizedUtilityToUtility(v20 + 35248, v17);
      if ( v21 > *(_DWORD *)(v20 + 35288) )
        goto LABEL_23;
      if ( v19 )
        break;
LABEL_24:
      v22 = v6 - 1;
      if ( !v6 )
        v22 = 0;
      v6 = v22;
      if ( (unsigned int)KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v37) )
      {
        v7 = v43;
        goto LABEL_29;
      }
    }
    if ( *(_DWORD *)(v20 + 35292) > v21 )
      v21 = *(_DWORD *)(v20 + 35292);
LABEL_23:
    *(_DWORD *)(v20 + 35288) = v21;
    goto LABEL_24;
  }
  v19 = v36;
LABEL_29:
  v38 = v46.Bitmap[0];
  v37 = &v46;
  v39 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v37) )
  {
    v23 = KeGetPrcb(v35);
    v24 = v23 + 35248;
    if ( v16 <= (unsigned int)PpmHeteroUtilityToNormalizedUtility(v23 + 35248, *(_DWORD *)(v23 + 35288)) )
    {
      KeRemoveProcessorAffinityEx(&v46.Count, v35);
      v25 = PpmHeteroNormalizedUtilityToUtility(v24, v17);
      if ( v25 > *(_DWORD *)(v24 + 40) )
        goto LABEL_35;
      if ( v19 )
      {
        if ( *(_DWORD *)(v24 + 44) > v25 )
          v25 = *(_DWORD *)(v24 + 44);
LABEL_35:
        *(_DWORD *)(v24 + 40) = v25;
      }
    }
  }
  v38 = v46.Bitmap[0];
  v37 = &v46;
  v39 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v37);
    if ( (_DWORD)result )
      break;
    v26 = KeGetPrcb(v35);
    v27 = PpmHeteroNormalizedUtilityToUtility(v26 + 35248, v16);
    *(_DWORD *)(v28 + 40) = v27;
  }
  v30 = (_DWORD *)v44;
  if ( v44 )
  {
    KeXorAffinityEx2(v45, v7, &v46);
    v31 = 0;
    v38 = v46.Bitmap[0];
    v37 = &v46;
    v39 = 0;
    while ( 1 )
    {
      result = KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v37);
      if ( (_DWORD)result )
        break;
      v32 = KeGetPrcb(v35);
      v33 = *(_DWORD *)(v32 + 35288);
      if ( v33 > 0x2710 )
        v31 += PpmHeteroUtilityToNormalizedUtility(v32 + 35248, v33 - 10000);
    }
    *v30 = v31;
  }
  if ( v19 )
  {
    v38 = v7->Bitmap[0];
    v39 = 0;
    v37 = v7;
    while ( 1 )
    {
      result = KeEnumerateNextProcessor(&v35, (unsigned __int16 **)&v37);
      if ( (_DWORD)result )
        break;
      v34 = KeGetPrcb(v35);
      *(_DWORD *)(v34 + 35288) = *(_DWORD *)(v34 + 35292);
    }
  }
  return result;
}
