/*
 * XREFs of IommuMapReservedLogicalRange @ 0x140564820
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainMapLogical @ 0x14039C6CC (HalpIommuDomainMapLogical.c)
 *     IommupProcessPhysicalAddress @ 0x140470534 (IommupProcessPhysicalAddress.c)
 *     HalpIommuDomainMapLogicalRange @ 0x140551564 (HalpIommuDomainMapLogicalRange.c)
 */

__int64 __fastcall IommuMapReservedLogicalRange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  unsigned int v8; // ecx
  __int64 v9; // rsi
  ULONG_PTR v10; // rcx
  int v11; // eax
  _QWORD *v12; // rax
  ULONG_PTR v14; // [rsp+20h] [rbp-30h]
  int v15[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  int v17[2]; // [rsp+40h] [rbp-10h] BYREF
  char v18; // [rsp+70h] [rbp+20h] BYREF

  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)v15 = 0LL;
  v16 = 0LL;
  v18 = 0;
  if ( _InterlockedAdd((volatile signed __int32 *)(a1 + 24), 1u) > 0 )
  {
    if ( (a2 & 0xFFF) != 0 )
    {
      v8 = -1073741584;
    }
    else if ( (int)IommupProcessPhysicalAddress(a4, v15, &v18, &v16, v17) < 0
           || (v9 = *(_QWORD *)v15, (unsigned __int64)(*(_QWORD *)v15 + a2) > *(_QWORD *)a1 + *(_QWORD *)(a1 + 8)) )
    {
      v8 = -1073741582;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 16);
      v14 = a2 + *(_QWORD *)a1;
      if ( v18 )
        v11 = HalpIommuDomainMapLogicalRange(v10, a3, *(unsigned __int64 *)v17, *(__int64 *)v15, v14);
      else
        v11 = HalpIommuDomainMapLogical(v10, a3, v16, *(_QWORD *)v15 >> 12, v14);
      v8 = v11;
      if ( v11 >= 0 )
      {
        v12 = a5;
        *a5 = a1;
        v12[1] = a2;
        v12[2] = v9;
        return v8;
      }
      v8 = -1073740024;
    }
  }
  else
  {
    v8 = -1073741823;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  return v8;
}
