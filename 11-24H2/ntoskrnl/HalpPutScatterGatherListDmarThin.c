/*
 * XREFs of HalpPutScatterGatherListDmarThin @ 0x1403AD3B4
 * Callers:
 *     HalPutScatterGatherListDmarThin @ 0x1403AD350 (HalPutScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x14045EE40 (HalpConstructScatterGatherListDmarThin.c)
 * Callees:
 *     IommuUnmapLogicalRange @ 0x1403AD4C0 (IommuUnmapLogicalRange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpPutScatterGatherListDmarThin(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v5; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  _QWORD *v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 i; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]
  unsigned __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v4 = 0;
  v16 = 0LL;
  v5 = 0LL;
  for ( i = *(_QWORD *)(a1 + 560); (unsigned int)v5 < *a2; v5 = (unsigned int)(v5 + 1) )
  {
    v8 = *(_QWORD *)&a2[6 * v5 + 4] & 0xFFFFFFFFFFFFF000uLL;
    v9 = (a2[6 * v5 + 6] + (a2[6 * v5 + 4] & 0xFFFu) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( (_DWORD)v5 || v8 != **(_QWORD **)(a1 + 560) )
    {
      if ( !v4 )
      {
        v11 = v9 >> 12;
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL);
        if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(HalpDmaIommuInterfaceFcnTable + 64) == IommuUnmapLogicalRange )
          IommuUnmapLogicalRange(v12, v8, v11);
        else
          guard_dispatch_icall_no_overrides(v12, v8, v11, IommuUnmapLogicalRange);
        continue;
      }
    }
    else
    {
      v4 = 1;
    }
    v10 = *(_QWORD **)(a1 + 560);
    v16 = (a2[6 * v5 + 6] + (a2[6 * v5 + 4] & 0xFFFu) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    v15 = v8 - *v10;
    guard_dispatch_icall_no_overrides(&i, v15, v9, a4);
  }
  return v4;
}
