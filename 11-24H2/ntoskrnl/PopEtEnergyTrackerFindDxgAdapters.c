/*
 * XREFs of PopEtEnergyTrackerFindDxgAdapters @ 0x14075DF08
 * Callers:
 *     PopEtEnergyTrackerInitialize @ 0x14075E0CC (PopEtEnergyTrackerInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtEnergyTrackerFindDxgAdapters(__int64 a1)
{
  unsigned int v1; // esi
  char *Pool2; // rbx
  int v4; // edi
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // r14
  int *v9; // r15
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+3Ch] [rbp-24h]
  char *v17; // [rsp+40h] [rbp-20h]
  _DWORD v18[2]; // [rsp+48h] [rbp-18h] BYREF
  int *v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+58h] [rbp-8h]
  int v21; // [rsp+5Ch] [rbp-4h]
  int v22; // [rsp+A8h] [rbp+48h] BYREF
  int v23; // [rsp+B0h] [rbp+50h] BYREF

  v1 = 0;
  if ( *(int *)(PopEtGlobals + 1096) < 0 )
    return;
  Pool2 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    v16 = 0;
    v14 = 1LL;
    v17 = Pool2;
    v15 = v1;
    v5 = guard_dispatch_icall_no_overrides(&v14, 0LL, 0LL, 0LL);
    if ( v5 < 0 )
    {
      if ( v5 != -1073741789 )
        goto LABEL_23;
      goto LABEL_14;
    }
    if ( v17 )
      break;
LABEL_14:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x54456F50u);
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return;
    v1 = v15;
    if ( ++v4 >= 3 )
      goto LABEL_6;
  }
  v1 = v15;
LABEL_6:
  v7 = 0LL;
  v8 = 0LL;
  if ( v1 )
  {
    v9 = (int *)Pool2;
    do
    {
      v10 = *v9;
      v22 = 0;
      v21 = 0;
      v18[0] = v10;
      v19 = &v22;
      v18[1] = 15;
      v20 = 4;
      if ( (int)guard_dispatch_icall_no_overrides(v18, 0LL, 0LL, v6) >= 0 && (v22 & 0x800) != 0 )
      {
        if ( (_DWORD)v7 != (_DWORD)v8 )
        {
          v12 = 5 * v7;
          *(_OWORD *)&Pool2[4 * v12] = *(_OWORD *)v9;
          *(_DWORD *)&Pool2[4 * v12 + 16] = v9[4];
        }
        v7 = (unsigned int)(v7 + 1);
      }
      else
      {
        v23 = *v9;
        guard_dispatch_icall_no_overrides(&v23, 0LL, v11, v6);
        v13 = 5 * v8;
        *(_OWORD *)&Pool2[4 * v13] = 0LL;
        *(_DWORD *)&Pool2[4 * v13 + 16] = 0;
      }
      v8 = (unsigned int)(v8 + 1);
      v9 += 5;
    }
    while ( (unsigned int)v8 < v1 );
    if ( (_DWORD)v7 )
    {
      *(_DWORD *)(a1 + 648) = v7;
      *(_QWORD *)(a1 + 656) = Pool2;
      return;
    }
  }
LABEL_23:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x54456F50u);
}
