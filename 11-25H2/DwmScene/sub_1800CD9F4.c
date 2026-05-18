/*
 * XREFs of sub_1800CD9F4 @ 0x1800CD9F4
 * Callers:
 *     ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_2 @ 0x1800CDA90 (--_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_2.c)
 *     sub_1800CFE34 @ 0x1800CFE34 (sub_1800CFE34.c)
 *     sub_1800E23F9 @ 0x1800E23F9 (sub_1800E23F9.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_1800CD9F4(__int64 a1)
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
        sub_180010544(v4);
      sub_180010134(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  result = sub_180010134(*(void **)(a1 + 48), 0x20uLL);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
    result = sub_18001050C(v7);
  v8 = *(volatile signed __int32 **)(a1 + 16);
  if ( v8 )
    return sub_180010544(v8);
  return result;
}
