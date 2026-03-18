/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$0BAA@$0FAGHHIEE@@@SAPEAX_K@Z @ 0x14004DFFC
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1402DE034 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGQUOTAALLOCATOR<256,1348958276>::operator new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ExAllocatePool2(257LL, a1, 1348958276LL, a4);
}
