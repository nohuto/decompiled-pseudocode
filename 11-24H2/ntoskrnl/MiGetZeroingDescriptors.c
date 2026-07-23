/*
 * XREFs of MiGetZeroingDescriptors @ 0x140686B54
 * Callers:
 *     MiInitializeZeroGroup @ 0x1402714C4 (MiInitializeZeroGroup.c)
 * Callees:
 *     MiAllocateAcceleratorDescriptor @ 0x1406919E4 (MiAllocateAcceleratorDescriptor.c)
 */

__int64 __fastcall MiGetZeroingDescriptors(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 *v5; // r9
  int i; // r8d
  __int64 *v7; // rcx
  _DWORD *v8; // rcx
  __int64 j; // rdx
  __int64 *v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 96);
  v2 = *(unsigned int *)(a1 + 88);
  v10 = 0LL;
  result = MiAllocateAcceleratorDescriptor(0LL, v2, v1, &v10);
  if ( (_DWORD)result )
  {
    v5 = v10;
    for ( i = 0; v5; *(_QWORD *)(a1 + 80) = v7 )
    {
      v7 = v5;
      result = *(_QWORD *)(a1 + 80);
      ++i;
      v5 = (__int64 *)*v5;
      *v7 = result;
    }
  }
  else
  {
    result = 1LL;
    v8 = (_DWORD *)(a1 + 100);
    for ( j = 1LL; j < 3; ++j )
    {
      if ( *v8 )
        break;
      result = (unsigned int)(result + 1);
      ++v8;
    }
    if ( (_DWORD)result == 3 )
      *(_DWORD *)(a1 + 16) |= 0x10u;
    i = 0;
  }
  *(_DWORD *)(a1 + 96) = i;
  return result;
}
