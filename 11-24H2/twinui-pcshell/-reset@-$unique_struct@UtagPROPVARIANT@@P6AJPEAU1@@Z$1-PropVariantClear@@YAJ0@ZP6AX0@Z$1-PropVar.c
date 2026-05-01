/*
 * XREFs of ?reset@?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAXXZ @ 0x1803C4274
 * Callers:
 *     ??$set_flag_value@J@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z @ 0x18068A734 (--$set_flag_value@J@-$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::reset(
        __int64 a1)
{
  __int64 result; // rax

  PropVariantClear((PROPVARIANT *)a1);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
