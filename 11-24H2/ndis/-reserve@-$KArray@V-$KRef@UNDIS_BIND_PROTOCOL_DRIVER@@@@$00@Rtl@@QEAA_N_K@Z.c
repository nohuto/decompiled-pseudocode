/*
 * XREFs of ?reserve@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x1400030E4
 * Callers:
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x140143658 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x14005DF50 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14015E250 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

char __fastcall Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _QWORD *PoolWithTag; // r14
  unsigned int v8; // ecx
  PVOID *v9; // rdi
  __int64 i; // r8
  __int64 v11; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    v5 = 0;
    NumberOfBytes = 0LL;
    if ( (int)RtlULongLongMult(8uLL, a2, &NumberOfBytes) >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7272414Bu);
      if ( PoolWithTag )
      {
        v8 = a1[1];
        v9 = (PVOID *)(a1 + 2);
        for ( i = 0LL; (unsigned int)i < v8; v8 = a1[1] )
        {
          v6 = (unsigned int)i;
          i = (unsigned int)(i + 1);
          v11 = *((_QWORD *)*v9 + v6);
          *((_QWORD *)*v9 + v6) = 0LL;
          PoolWithTag[v6] = v11;
        }
        if ( *v9 )
        {
          if ( v8 )
          {
            do
              KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((char *)*v9 + 8 * v5++, v6, i);
            while ( v5 < a1[1] );
            v9 = (PVOID *)(a1 + 2);
          }
          ExFreePoolWithTag(*v9, 0x7272414Bu);
        }
        *a1 = v2;
        *v9 = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
