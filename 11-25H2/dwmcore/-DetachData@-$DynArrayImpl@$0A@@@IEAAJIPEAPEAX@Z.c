/*
 * XREFs of ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18020D7D8
 * Callers:
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z @ 0x1801B2B2C (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z.c)
 *     ?ReplaceWith@?$DynArray@PEAVCCompositionLight@@$0A@@@QEAAJPEAV1@@Z @ 0x18020D778 (-ReplaceWith@-$DynArray@PEAVCCompositionLight@@$0A@@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<0>::DetachData(__int64 a1, unsigned int a2, _QWORD *a3)
{
  void *v3; // rdi
  unsigned __int64 v7; // r9
  __int64 result; // rax
  int v9; // eax

  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
  {
    v7 = *(unsigned int *)(a1 + 20);
    if ( !*(_DWORD *)(a1 + 20) || !a2 || a2 >= 0xFFFFFFFFFFFFFFFFuLL / v7 )
    {
      result = 2147942487LL;
      goto LABEL_7;
    }
    v3 = MIDL_user_allocate(v7 * a2);
    if ( !v3 )
    {
      result = 2147942414LL;
LABEL_7:
      *a3 = 0LL;
      return result;
    }
    v9 = *(_DWORD *)(a1 + 24);
    if ( v9 )
      memcpy_0(v3, *(const void **)a1, a2 * v9);
  }
  *(_QWORD *)a1 = 0LL;
  result = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *a3 = v3;
  return result;
}
