/*
 * XREFs of ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14008E434
 * Callers:
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14008EBB8 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateDescriptorInSharedMemory@SpatialBlock@@QEAAJXZ @ 0x1400317A8 (-ValidateDescriptorInSharedMemory@SpatialBlock@@QEAAJXZ.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x14008E18C (-GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z.c)
 *     ?SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z @ 0x14008EF84 (-SetPointersFromDescriptor@SpatialBlock@@AEAAJPEAUDescriptor@1@@Z.c)
 */

__int64 __fastcall SpatialBlock::Initialize(SpatialBlock *this, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int MemoryRequirement; // eax
  unsigned int v13; // esi
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v18; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v6 = -2147467261;
    v7 = 94LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)v6);
    return v6;
  }
  *((_QWORD *)this + 4) = a2;
  if ( a3 <= 0x1C )
  {
    v6 = -2005139387;
    v7 = 97LL;
    goto LABEL_3;
  }
  v9 = *((_DWORD *)a2 + 2);
  v10 = *((_DWORD *)a2 + 4);
  v11 = *((_DWORD *)a2 + 3);
  v18 = 0;
  MemoryRequirement = SpatialBlock::GetMemoryRequirement(*((_DWORD *)a2 + 5), v11, v10, v9, &v18);
  v13 = MemoryRequirement;
  if ( MemoryRequirement < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)(unsigned int)MemoryRequirement);
    return v13;
  }
  if ( a3 != v18 )
  {
    v6 = -2005139387;
    v7 = 105LL;
    goto LABEL_3;
  }
  v14 = SpatialBlock::ValidateDescriptorInSharedMemory(this);
  if ( v14 < 0 )
  {
    v15 = 108LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      (const char *)(unsigned int)v14);
    return (unsigned int)v14;
  }
  v14 = SpatialBlock::SetPointersFromDescriptor(this, *((struct SpatialBlock::Descriptor **)this + 4));
  if ( v14 < 0 )
  {
    v15 = 110LL;
    goto LABEL_12;
  }
  v16 = *((_QWORD *)this + 4);
  *(_OWORD *)this = *(_OWORD *)v16;
  *((_QWORD *)this + 2) = *(_QWORD *)(v16 + 16);
  *((_DWORD *)this + 6) = *(_DWORD *)(v16 + 24);
  return 0LL;
}
