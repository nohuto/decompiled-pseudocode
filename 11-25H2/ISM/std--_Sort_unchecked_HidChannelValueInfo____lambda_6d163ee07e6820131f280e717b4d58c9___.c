/*
 * XREFs of std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E81C8
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18006FE50 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E81C8 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E7468 (std--_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     std::_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E7598 (std--_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E7964 (std--_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e71.c)
 *     std::_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E7FA0 (std--_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E81C8 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

__m128i *__fastcall std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        char a4)
{
  __int64 v8; // r9
  __m128i *result; // rax
  __m128i *v10; // [rsp+20h] [rbp-18h] BYREF
  __m128i *v11; // [rsp+28h] [rbp-10h]

  while ( 1 )
  {
    if ( (char *)a2 - (char *)a1 < 2376 )
      return std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(a1, a2);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
      (unsigned int **)&v10,
      (unsigned int *)a1,
      (unsigned __int64)a2);
    LOBYTE(v8) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(0x8E38E38E38E38E39uLL * (((char *)v10 - (char *)a1) >> 3)) >= (__int64)(0x8E38E38E38E38E39uLL
                                                                                         * (((char *)a2 - (char *)v11) >> 3)) )
    {
      std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(v11, a2, a3, v8);
      a2 = v10;
    }
    else
    {
      std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(a1, v10, a3, v8);
      a1 = v11;
    }
  }
  std::_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
    (__int64)a1,
    (__int64)a2,
    a4);
  do
  {
    std::_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___((__int64)a1, (__int64)a2);
    a2 = (__m128i *)((char *)a2 - 72);
    result = (__m128i *)((char *)a2 - (char *)a1);
  }
  while ( (char *)a2 - (char *)a1 >= 144 );
  return result;
}
