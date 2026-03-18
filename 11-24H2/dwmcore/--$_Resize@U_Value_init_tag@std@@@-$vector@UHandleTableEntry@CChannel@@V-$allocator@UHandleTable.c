/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801CFAC4
 * Callers:
 *     ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@_NPEAI@Z @ 0x1801CF740 (-DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@_NPEAI@Z.c)
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x1801CF910 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801CF5F0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UHandleTableEntry@CChannel@@V-$allocator@U.c)
 *     ??$_Destroy_range@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@CChannel@@QEAU12@AEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x1801CFC74 (--$_Destroy_range@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@C.c)
 */

void __fastcall std::vector<CChannel::HandleTableEntry>::_Resize<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx

  v2 = (_QWORD *)a1[1];
  v4 = ((__int64)v2 - *a1) >> 4;
  if ( a2 < v4 )
  {
    v6 = *a1 + 16 * a2;
    std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v6, v2);
    a1[1] = v6;
  }
  else if ( a2 > v4 )
  {
    if ( a2 > (a1[2] - *a1) >> 4 )
    {
      std::vector<CChannel::HandleTableEntry>::_Resize_reallocate<std::_Value_init_tag>(a1, a2);
    }
    else
    {
      v5 = a2 - v4;
      if ( a2 != v4 )
      {
        do
        {
          *v2 = 0LL;
          v2[1] = 0LL;
          v2 += 2;
          --v5;
        }
        while ( v5 );
      }
      std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v2, v2);
      a1[1] = (__int64)v2;
    }
  }
}
