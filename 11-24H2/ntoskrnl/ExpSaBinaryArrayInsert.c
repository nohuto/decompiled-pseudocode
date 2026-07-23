/*
 * XREFs of ExpSaBinaryArrayInsert @ 0x14026E6F8
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x14026E450 (ExpSaPageGroupDescriptorAllocate.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

__int64 __fastcall ExpSaBinaryArrayInsert(__int64 a1, __int64 a2)
{
  __int64 i; // rdi
  __int64 *v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 j; // rcx
  unsigned int v9; // ebx
  __int64 Pool3; // rax

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x10 )
      return (unsigned int)-1;
    v5 = *(__int64 **)(a1 + 8 * i);
    v6 = 1 << (i + 2);
    if ( !v5 )
    {
      Pool3 = ExAllocatePool3(0x40uLL, 1);
      v5 = (__int64 *)Pool3;
      if ( !Pool3 )
        return (unsigned int)-1;
      *(_QWORD *)(a1 + 8 * i) = Pool3;
    }
    v7 = *v5;
    if ( *v5 < (unsigned __int64)v6 )
      break;
  }
  for ( j = (unsigned int)v7; v5[j + 1]; j = (v6 - 1) & ((_DWORD)j + 1) )
    ;
  v9 = j | v6;
  *v5 = v7 + 1;
  v5[j + 1] = a2;
  return v9;
}
