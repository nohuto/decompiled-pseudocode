/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x14031F120
 * Callers:
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x14031EA60 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  void *v7; // rcx

  if ( a2 <= 8 )
  {
    v7 = a1 + 1;
    *a1 = (__int64)v7;
    if ( a2 )
      memset(v7, 0, 20LL * a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 0x14 )
  {
    *a1 = ExAllocatePool2(256LL, 20LL * a2, 1265072196LL, a4);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 42) = a2;
    return result;
  }
  return 0LL;
}
