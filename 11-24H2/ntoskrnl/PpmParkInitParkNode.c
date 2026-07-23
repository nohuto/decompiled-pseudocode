/*
 * XREFs of PpmParkInitParkNode @ 0x1405E0E1C
 * Callers:
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140407990 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D49AC (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmParkRegisterRestriction @ 0x1405D7B9C (PpmParkRegisterRestriction.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpmIdleInitializeConcurrency @ 0x140748410 (PpmIdleInitializeConcurrency.c)
 */

__int64 __fastcall PpmParkInitParkNode(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r14
  __int64 v4; // r13
  unsigned __int8 v6; // si
  unsigned __int8 v7; // bp
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int8 v10; // dl
  char v11; // al
  _WORD *v12; // rbx
  __int64 v13; // r15
  unsigned __int8 v14; // bp
  __int64 v15; // r12
  __int64 v16; // rdx
  unsigned __int8 v17; // cl
  __int64 v18; // r14
  _WORD *v19; // rax
  __int64 v20; // rcx
  unsigned __int8 v21; // cl
  unsigned __int16 v22; // bx
  unsigned __int8 v23; // dl
  __int64 v24; // rax
  _WORD *v25; // rcx
  __int64 v26; // r9
  int v27; // ebp
  unsigned __int8 v28; // si
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  unsigned __int16 *v34[2]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v35; // [rsp+30h] [rbp-48h]
  int v36; // [rsp+32h] [rbp-46h]
  __int16 v37; // [rsp+36h] [rbp-42h]
  unsigned int v38; // [rsp+80h] [rbp+8h] BYREF
  __int64 v39; // [rsp+88h] [rbp+10h]
  _DWORD *v40; // [rsp+90h] [rbp+18h]

  v40 = a3;
  v39 = a2;
  *(_QWORD *)(a1 + 312) = 2097153LL;
  v3 = a3;
  v36 = 0;
  v4 = a2;
  v37 = 0;
  v38 = 0;
  memset_0((void *)(a1 + 320), 0, 0x100uLL);
  *(_QWORD *)(a1 + 576) = 2097153LL;
  memset_0((void *)(a1 + 584), 0, 0x100uLL);
  *(_QWORD *)(a1 + 840) = 2097153LL;
  memset_0((void *)(a1 + 848), 0, 0x100uLL);
  v6 = PpmMaxCoreClasses;
  v7 = 0;
  if ( (unsigned __int8)PpmMaxCoreClasses >= 2u )
  {
    if ( !PpmMaxCoreClasses )
      goto LABEL_27;
  }
  else
  {
    v6 = 2;
  }
  v8 = 0LL;
  do
  {
    v9 = *(_QWORD *)(a1 + 1288);
    *(_QWORD *)(v8 + v9 + 40) = 2097153LL;
    memset_0((void *)(v8 + v9 + 48), 0, 0x100uLL);
    *(_QWORD *)(v8 + v9 + 304) = 2097153LL;
    memset_0((void *)(v8 + v9 + 312), 0, 0x100uLL);
    if ( !PpmHeteroIsMultiClassParkingEnabled() )
    {
      v11 = v10;
      if ( v10 )
        v11 = 1;
      v10 = v11;
    }
    v35 = 0;
    v12 = (_WORD *)(*(_QWORD *)(a1 + 1288) + 640LL * v10);
    v34[1] = *(unsigned __int16 **)(a1 + 56);
    v34[0] = (unsigned __int16 *)(a1 + 48);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v38, v34) )
    {
      if ( *(_BYTE *)(KeGetPrcb(v38) + 35336) == v7 )
      {
        ++*v12;
        KeAddProcessorAffinityEx(v12 + 20, v38);
      }
    }
    ++v7;
    v8 += 640LL;
  }
  while ( v7 < v6 );
  v4 = v39;
  if ( v6 )
  {
    v13 = 0LL;
    v14 = 1;
    v15 = v6;
    do
    {
      v16 = *(_QWORD *)(a1 + 1288);
      if ( !*(_WORD *)(v13 + v16) )
      {
        v17 = v14;
        if ( v14 < v6 )
        {
          do
          {
            v18 = v16 + 640LL * v17;
            if ( *(_WORD *)v18 )
              break;
            ++v17;
          }
          while ( v17 < v6 );
          *(_WORD *)(v13 + v16) = *(_WORD *)v18;
          KiCopyAffinityEx(
            (struct _KAFFINITY_EX *)(v13 + v16 + 40),
            *(_WORD *)(v13 + v16 + 40 + 2),
            (struct _KAFFINITY_EX *)(v18 + 40));
          *(_WORD *)v18 = 0;
          *(_QWORD *)(v18 + 40) = 2097153LL;
          memset_0((void *)(v18 + 48), 0, 0x100uLL);
        }
      }
      ++v14;
      v13 += 640LL;
      --v15;
    }
    while ( v15 );
    v19 = *(_WORD **)(a1 + 1288);
    v4 = v39;
    v20 = v6;
    do
    {
      if ( *v19 )
        ++*(_BYTE *)(a1 + 12);
      v19 += 320;
      --v20;
    }
    while ( v20 );
  }
  v3 = v40;
LABEL_27:
  if ( !*(_QWORD *)(a1 + 1280) && (PpmHeteroHgsContainmentState & 2) != 0 )
    PpmHeteroHgsRegisterContainmentGroups(a1, v4, 0LL);
  v21 = *(_BYTE *)(a1 + 12);
  *(_BYTE *)(a1 + 1185) = v21 > 1u;
  if ( v21 <= 1u )
    *(_BYTE *)(a1 + 1184) |= 4u;
  v22 = 0;
  v23 = 0;
  if ( v21 )
  {
    do
    {
      v24 = v23++;
      v25 = (_WORD *)(*(_QWORD *)(a1 + 1288) + 640 * v24);
      LOWORD(v24) = *v25;
      v22 += *v25;
      v25[3] = *v25;
      v25[4] = v24;
      v25[5] = v24;
    }
    while ( v23 < *(_BYTE *)(a1 + 12) );
  }
  *v3 += 3 * (v22 + 1);
  if ( v4 )
    v26 = *(_QWORD *)(v4 + 1104);
  else
    v26 = 0LL;
  v27 = PpmIdleInitializeConcurrency(*(unsigned __int16 *)(a1 + 6), a1 + 48, a1 + 1104, v26);
  if ( v27 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 1185) && (v28 = 0, *(_BYTE *)(a1 + 12)) )
    {
      while ( 1 )
      {
        v29 = *(_QWORD *)(a1 + 1288);
        v30 = 640LL * v28;
        v31 = *(unsigned __int16 *)(v30 + v29);
        if ( (_WORD)v31 )
        {
          *v3 += 3 * (v31 + 1);
          if ( v4 && v28 < *(_BYTE *)(v4 + 12) )
            v32 = *(_QWORD *)(*(_QWORD *)(v4 + 1288) + v30 + 568);
          else
            v32 = 0LL;
          v27 = PpmIdleInitializeConcurrency(*(unsigned __int16 *)(a1 + 6), v29 + 40 + v30, v30 + v29 + 568, v32);
          if ( v27 < 0 )
            break;
        }
        if ( ++v28 >= *(_BYTE *)(a1 + 12) )
          goto LABEL_47;
      }
    }
    else
    {
LABEL_47:
      *(_WORD *)(a1 + 10) = v22;
      *(_WORD *)(a1 + 1170) = v22;
      *(_WORD *)(a1 + 1174) = v22;
      PpmParkRegisterRestriction(a1);
    }
  }
  return (unsigned int)v27;
}
