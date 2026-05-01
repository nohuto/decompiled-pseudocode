/*
 * XREFs of ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_ENTRY@@@Z @ 0x180043B14
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x1800428C8 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001E6C0 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

void __fastcall HampHostIdStoreLeafInitialize(
        struct _HAM_HOSTID_STORE_APPLICATION_ENTRY *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        struct _HAM_HOSTID_ENTRY *a3)
{
  _OWORD *v6; // rcx
  __int64 v7; // rdx
  _OWORD *v8; // rax
  __int128 v9; // xmm1

  memset_0((char *)a3 + 88, 0, 0x218uLL);
  memset_0(a3, 0, 0x58uLL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 1) = 0LL;
  v6 = (_OWORD *)((char *)a2 + 536);
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 3) = 1LL;
  v7 = 4LL;
  *((_QWORD *)a3 + 4) = (char *)a1 + 40;
  v8 = (_OWORD *)((char *)a3 + 96);
  do
  {
    *v8 = *v6;
    v8[1] = v6[1];
    v8[2] = v6[2];
    v8[3] = v6[3];
    v8[4] = v6[4];
    v8[5] = v6[5];
    v8[6] = v6[6];
    v8 += 8;
    v9 = v6[7];
    v6 += 8;
    *(v8 - 1) = v9;
    --v7;
  }
  while ( v7 );
  *((_QWORD *)a3 + 11) = HamObjectIdGenerate(0);
}
