/*
 * XREFs of MiInitializeLoaderDescriptors @ 0x140C40604
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140C40FC8 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxWalkFreeNodeDescriptors @ 0x140C42208 (MxWalkFreeNodeDescriptors.c)
 */

__int64 *__fastcall MiInitializeLoaderDescriptors(__int64 a1)
{
  unsigned int v2; // edx
  _QWORD *v3; // r8
  __int64 **v4; // r9
  __int64 *result; // rax
  __int64 v6; // rdx
  _BYTE v7[512]; // [rsp+20h] [rbp-218h] BYREF

  MxComputeFreeNodeDescriptorRequirements(a1, v7);
  MxWalkFreeNodeDescriptors(a1, v7);
  v2 = 0;
  v3 = v7;
  v4 = (__int64 **)qword_1410083D8;
  while ( 1 )
  {
    result = *v4;
    if ( *v3 > (unsigned __int64)*v4 )
      break;
    ++v2;
    v4 += 7;
    ++v3;
    if ( v2 >= 0x40 )
    {
      if ( v2 == 64 )
        goto LABEL_6;
      break;
    }
  }
  memset_0(MxBootFreeDescriptor, 0, 0xE00uLL);
  result = (__int64 *)MxWalkFreeNodeDescriptors(a1, 0LL);
LABEL_6:
  if ( KeNumberNodes )
  {
    result = qword_1410083F8;
    v6 = (unsigned __int16)KeNumberNodes;
    do
    {
      if ( *result )
        *(_DWORD *)(*result + 24) |= 0x40000000u;
      result += 7;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
