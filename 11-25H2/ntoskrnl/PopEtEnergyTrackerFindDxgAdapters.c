/*
 * XREFs of PopEtEnergyTrackerFindDxgAdapters @ 0x1407514F8
 * Callers:
 *     PopEtEnergyTrackerInitialize @ 0x1407516C0 (PopEtEnergyTrackerInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtEnergyTrackerFindDxgAdapters(__int64 a1)
{
  unsigned int v1; // esi
  char *Pool2; // rbx
  int i; // edi
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // r14
  int *v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  char *v13; // [rsp+40h] [rbp-20h]
  _DWORD v14[2]; // [rsp+48h] [rbp-18h] BYREF
  int *v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+58h] [rbp-8h]
  int v17; // [rsp+5Ch] [rbp-4h]
  int v18; // [rsp+A8h] [rbp+48h] BYREF
  int v19; // [rsp+B0h] [rbp+50h] BYREF

  v1 = 0;
  v13 = 0LL;
  v12 = 0LL;
  if ( *(int *)(PopEtGlobals + 1096) >= 0 )
  {
    Pool2 = 0LL;
    for ( i = 0; i < 3; ++i )
    {
      *(_QWORD *)&v12 = 1LL;
      v13 = Pool2;
      *((_QWORD *)&v12 + 1) = v1;
      v5 = guard_dispatch_icall_no_overrides(&v12);
      if ( v5 < 0 )
      {
        if ( v5 != -1073741789 )
          goto LABEL_23;
      }
      else if ( v13 )
      {
        v1 = DWORD2(v12);
        break;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x54456F50u);
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return;
      v1 = DWORD2(v12);
    }
    v6 = 0LL;
    v7 = 0LL;
    if ( v1 )
    {
      v8 = (int *)Pool2;
      do
      {
        v9 = *v8;
        v18 = 0;
        v17 = 0;
        v14[0] = v9;
        v15 = &v18;
        v14[1] = 15;
        v16 = 4;
        if ( (int)guard_dispatch_icall_no_overrides(v14) >= 0 && (v18 & 0x800) != 0 )
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
          v19 = *v8;
          guard_dispatch_icall_no_overrides(&v19);
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
}
