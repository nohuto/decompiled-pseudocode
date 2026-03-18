/*
 * XREFs of _anonymous_namespace_::ConvertVectorArrayToMatrix @ 0x18017B88C
 * Callers:
 *     _anonymous_namespace_::ReverseAndLeftShift @ 0x18017B76C (_anonymous_namespace_--ReverseAndLeftShift.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x18017DDA0 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UAxisWi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::ConvertVectorArrayToMatrix(__int64 a1, int *a2)
{
  int v2; // eax

  v2 = *a2;
  *(_OWORD *)a1 = xmmword_1803D3A10;
  *(_OWORD *)(a1 + 16) = xmmword_1803D3A20;
  *(_OWORD *)(a1 + 32) = xmmword_1803D3A30;
  *(_OWORD *)(a1 + 48) = xmmword_1803D3A40;
  *(_DWORD *)a1 = v2;
  *(_DWORD *)(a1 + 16) = a2[1];
  *(_DWORD *)(a1 + 32) = a2[2];
  *(_DWORD *)(a1 + 4) = a2[3];
  *(_DWORD *)(a1 + 20) = a2[4];
  *(_DWORD *)(a1 + 36) = a2[5];
  *(_DWORD *)(a1 + 8) = a2[6];
  *(_DWORD *)(a1 + 24) = a2[7];
  *(_DWORD *)(a1 + 40) = a2[8];
  return a1;
}
