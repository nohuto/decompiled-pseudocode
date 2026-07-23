/*
 * XREFs of PopEtEnergyTrackerFindDxgAdapters @ 0x14075CEA8
 * Callers:
 *     PopEtEnergyTrackerInitialize @ 0x14075D06C (PopEtEnergyTrackerInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtEnergyTrackerFindDxgAdapters(__int64 a1)
{
  unsigned int v1; // esi
  char *Pool2; // rbx
  int v4; // edi
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // r14
  int *v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+3Ch] [rbp-24h]
  char *v15; // [rsp+40h] [rbp-20h]
  _DWORD v16[2]; // [rsp+48h] [rbp-18h] BYREF
  int *v17; // [rsp+50h] [rbp-10h]
  int v18; // [rsp+58h] [rbp-8h]
  int v19; // [rsp+5Ch] [rbp-4h]
  int v20; // [rsp+A8h] [rbp+48h] BYREF
  int v21; // [rsp+B0h] [rbp+50h] BYREF

  v1 = 0;
  if ( *(int *)(PopEtGlobals + 1096) < 0 )
    return;
  Pool2 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    v14 = 0;
    v12 = 1LL;
    v15 = Pool2;
    v13 = v1;
    v5 = guard_dispatch_icall_no_overrides(&v12, 0LL);
    if ( v5 < 0 )
    {
      if ( v5 != -1073741789 )
        goto LABEL_23;
      goto LABEL_14;
    }
    if ( v15 )
      break;
LABEL_14:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x54456F50u);
    Pool2 = (char *)ExAllocatePool2(0x100uLL, 20LL * v13, 0x54456F50u);
    if ( !Pool2 )
      return;
    v1 = v13;
    if ( ++v4 >= 3 )
      goto LABEL_6;
  }
  v1 = v13;
LABEL_6:
  v6 = 0LL;
  v7 = 0LL;
  if ( v1 )
  {
    v8 = (int *)Pool2;
    do
    {
      v9 = *v8;
      v20 = 0;
      v19 = 0;
      v16[0] = v9;
      v17 = &v20;
      v16[1] = 15;
      v18 = 4;
      if ( (int)guard_dispatch_icall_no_overrides(v16, 0LL) >= 0 && (v20 & 0x800) != 0 )
      {
        if ( (_DWORD)v6 != (_DWORD)v7 )
        {
          v10 = 5 * v6;
          *(_OWORD *)&Pool2[4 * v10] = *(_OWORD *)v8;
          *(_DWORD *)&Pool2[4 * v10 + 16] = v8[4];
        }
        v6 = (unsigned int)(v6 + 1);
      }
      else
      {
        v21 = *v8;
        guard_dispatch_icall_no_overrides(&v21, 0LL);
        v11 = 5 * v7;
        *(_OWORD *)&Pool2[4 * v11] = 0LL;
        *(_DWORD *)&Pool2[4 * v11 + 16] = 0;
      }
      v7 = (unsigned int)(v7 + 1);
      v8 += 5;
    }
    while ( (unsigned int)v7 < v1 );
    if ( (_DWORD)v6 )
    {
      *(_DWORD *)(a1 + 648) = v6;
      *(_QWORD *)(a1 + 656) = Pool2;
      return;
    }
  }
LABEL_23:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x54456F50u);
}
