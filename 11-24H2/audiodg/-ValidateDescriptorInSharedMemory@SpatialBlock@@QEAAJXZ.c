/*
 * XREFs of ?ValidateDescriptorInSharedMemory@SpatialBlock@@QEAAJXZ @ 0x1400317A8
 * Callers:
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x14003175C (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14008E434 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialBlock::ValidateDescriptorInSharedMemory(SpatialBlock *this)
{
  _DWORD *v1; // rax
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_DWORD *)*((_QWORD *)this + 4);
  if ( *v1 == 28 )
  {
    if ( v1[2] )
    {
      if ( v1[6] == 1396785732 )
        return 0LL;
      v3 = 124LL;
    }
    else
    {
      v3 = 123LL;
    }
  }
  else
  {
    v3 = 122LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
    (const char *)0x887C0045LL);
  return 2289827909LL;
}
