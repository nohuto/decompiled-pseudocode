/*
 * XREFs of sub_1800CDB54 @ 0x1800CDB54
 * Callers:
 *     ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_2 @ 0x1800CDBF0 (--_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_2.c)
 *     sub_1800CFF94 @ 0x1800CFF94 (sub_1800CFF94.c)
 *     sub_1800E2559 @ 0x1800E2559 (sub_1800E2559.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_1800CDB54(__int64 a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rdi
  volatile signed __int32 *v4; // rcx
  _QWORD *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rcx

  *(_QWORD *)a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  v2 = *(_QWORD ***)(a1 + 48);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (volatile signed __int32 *)v3[3];
      v5 = (_QWORD *)*v3;
      if ( v4 )
        sub_180010644(v4);
      sub_180010234(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  result = sub_180010234(*(void **)(a1 + 48), 0x20uLL);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
    result = sub_18001060C(v7);
  v8 = *(volatile signed __int32 **)(a1 + 16);
  if ( v8 )
    return sub_180010644(v8);
  return result;
}
