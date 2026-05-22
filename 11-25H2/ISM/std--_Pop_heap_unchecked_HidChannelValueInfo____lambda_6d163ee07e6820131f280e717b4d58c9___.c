/*
 * XREFs of std::_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E7FA0
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E81C8 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E7E04 (std--_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131.c)
 */

__int64 __fastcall std::_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm1
  __int64 v4; // rdx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _OWORD v7[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]

  result = 0x8E38E38E38E38E39uLL * ((a2 - a1) >> 3);
  if ( result >= 2 )
  {
    v3 = *(_OWORD *)(a2 - 56);
    v4 = a2 - 72;
    v7[1] = v3;
    v5 = *(_OWORD *)(v4 + 48);
    v7[0] = *(_OWORD *)v4;
    v6 = *(_OWORD *)(v4 + 32);
    v7[3] = v5;
    v7[2] = v6;
    v8 = *(_QWORD *)(v4 + 64);
    *(_OWORD *)v4 = *(_OWORD *)a1;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(a1 + 48);
    *(_QWORD *)(v4 + 64) = *(_QWORD *)(a1 + 64);
    return std::_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___(
             a1,
             0LL,
             0x8E38E38E38E38E39uLL * ((v4 - a1) >> 3),
             (__int64)v7);
  }
  return result;
}
