/*
 * XREFs of HalpPutScatterGatherListDmarThin @ 0x14039BBC4
 * Callers:
 *     HalPutScatterGatherListDmarThin @ 0x14039BB60 (HalPutScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140453D00 (HalpConstructScatterGatherListDmarThin.c)
 * Callees:
 *     IommuUnmapLogicalRange @ 0x14039BCD0 (IommuUnmapLogicalRange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpPutScatterGatherListDmarThin(__int64 a1, _DWORD *a2)
{
  char v2; // di
  __int64 v3; // rbx
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 i; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]
  unsigned __int64 v12; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v2 = 0;
  v12 = 0LL;
  v3 = 0LL;
  for ( i = *(_QWORD *)(a1 + 560); (unsigned int)v3 < *a2; v3 = (unsigned int)(v3 + 1) )
  {
    v6 = *(_QWORD *)&a2[6 * v3 + 4] & 0xFFFFFFFFFFFFF000uLL;
    if ( (_DWORD)v3 || v6 != **(_QWORD **)(a1 + 560) )
    {
      if ( !v2 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL);
        if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(HalpDmaIommuInterfaceFcnTable + 64) == IommuUnmapLogicalRange )
          IommuUnmapLogicalRange(
            v8,
            v6,
            ((a2[6 * v3 + 6] + (a2[6 * v3 + 4] & 0xFFFu) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) >> 12);
        else
          guard_dispatch_icall_no_overrides(v8, v6);
        continue;
      }
    }
    else
    {
      v2 = 1;
    }
    v7 = *(_QWORD **)(a1 + 560);
    v12 = (a2[6 * v3 + 6] + (a2[6 * v3 + 4] & 0xFFFu) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    v11 = v6 - *v7;
    guard_dispatch_icall_no_overrides(&i, v11);
  }
  return v2;
}
