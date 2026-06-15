/*
 * XREFs of _lambda_2d57628cd8490ef0d12835f9ba011710_::operator() @ 0x18007CA5C
 * Callers:
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___ @ 0x18007C818 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011.c)
 * Callees:
 *     _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x1800317DC (_lambda_53e50f4d36d820af02fa3fa8c2905d02_--operator().c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_2d57628cd8490ef0d12835f9ba011710_::operator()(
        __int64 a1,
        const struct tWAVEFORMATEX *a2,
        bool *a3)
{
  _QWORD *v4; // rax
  int v7; // ebx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  v4 = *(_QWORD **)a1;
  *a3 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*v4 + 24LL))(
         *v4,
         **(_QWORD **)(a1 + 8),
         ***(unsigned int ***)(a1 + 8),
         &v9);
  if ( v7 >= 0 && v9 && lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()(*(__int64 **)(a1 + 16), a2) )
  {
    v7 = CloneWaveFormat(a2, **(struct tWAVEFORMATEX ****)(a1 + 24));
    *a3 = v7 >= 0;
  }
  return (unsigned int)v7;
}
