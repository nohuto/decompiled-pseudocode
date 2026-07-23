/*
 * XREFs of PpmHeteroRestrictToFavoredClassEx @ 0x1405DE400
 * Callers:
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall PpmHeteroRestrictToFavoredClassEx(
        struct _KAFFINITY_EX *a1,
        unsigned __int8 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  int v7; // edi
  int v10; // ebx
  int v11; // r15d
  bool v12; // cl
  char v13; // si
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // di
  unsigned int v16; // ebx
  __int64 Prcb; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int8 v20; // al
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  char v25; // al
  unsigned int v26; // [rsp+20h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX *v27; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-D0h]
  __int16 v29; // [rsp+38h] [rbp-C8h]
  int v30; // [rsp+3Ah] [rbp-C6h]
  __int16 v31; // [rsp+3Eh] [rbp-C2h]
  struct _KAFFINITY_EX v32; // [rsp+40h] [rbp-C0h] BYREF

  v7 = a3;
  v10 = a4;
  memset_0(&v32.8, 0, sizeof(v32.8));
  v26 = 0;
  v11 = 0;
  v30 = 0;
  v31 = 0;
  if ( PopHeteroSystem == 3 )
  {
    v12 = 1;
  }
  else if ( PopHeteroSystem == 6 )
  {
    v12 = a7 != 0;
  }
  else
  {
    v12 = a6 < a5;
  }
  v13 = v12;
  if ( !PpmHeteroPolicy )
    v13 = 1;
  if ( PpmHeteroHgsParkingEnabled )
  {
    v11 = v7;
    if ( !v13 )
      v11 = v10;
  }
  v14 = 0;
  v28 = a1->Bitmap[0];
  v29 = 0;
  v27 = a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v26, (unsigned __int16 **)&v27) )
  {
    v15 = v14;
    v16 = v26;
    Prcb = KeGetPrcb(v26);
    if ( PpmHeteroHgsParkingEnabled )
    {
      v18 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      v19 = v11 + PpmHeteroWorkloadClasses * v16;
      if ( v13 )
        v20 = *(_BYTE *)(v18 + 4 * v19 + 25);
      else
        v20 = *(_BYTE *)(v18 + 4 * v19 + 24);
    }
    else if ( v13 )
    {
      v20 = *(_BYTE *)(Prcb + 35337);
    }
    else
    {
      v20 = *(_BYTE *)(Prcb + 35338);
    }
    v14 = v20;
    if ( v15 > v20 )
      v14 = v15;
  }
  *(_QWORD *)&v32.Count = 2097153LL;
  memset_0(&v32.8, 0, sizeof(v32.8));
  v28 = a1->Bitmap[0];
  v29 = 0;
  v27 = a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v26, (unsigned __int16 **)&v27) )
  {
    v21 = v26;
    v22 = KeGetPrcb(v26);
    if ( PpmHeteroHgsParkingEnabled )
    {
      v23 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
      v24 = v11 + PpmHeteroWorkloadClasses * v21;
      if ( v13 )
        v25 = *(_BYTE *)(v23 + 4 * v24 + 25);
      else
        v25 = *(_BYTE *)(v23 + 4 * v24 + 24);
    }
    else
    {
      if ( v13 )
        v25 = *(_BYTE *)(v22 + 35337);
      else
        v25 = *(_BYTE *)(v22 + 35338);
      v21 = v26;
    }
    if ( v25 == v14 )
      KeAddProcessorAffinityEx(&v32.Count, v21);
  }
  KiCopyAffinityEx(a1, a1->Size, &v32);
  *a2 = v14;
}
