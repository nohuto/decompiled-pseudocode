/*
 * XREFs of sub_18001C420 @ 0x18001C420
 * Callers:
 *     sub_18001C7D4 @ 0x18001C7D4 (sub_18001C7D4.c)
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_180027298 @ 0x180027298 (sub_180027298.c)
 *     sub_180027DEC @ 0x180027DEC (sub_180027DEC.c)
 *     sub_18002A92C @ 0x18002A92C (sub_18002A92C.c)
 *     sub_18002BE14 @ 0x18002BE14 (sub_18002BE14.c)
 *     sub_18002D2B0 @ 0x18002D2B0 (sub_18002D2B0.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_18003E858 @ 0x18003E858 (sub_18003E858.c)
 *     sub_18003EAFC @ 0x18003EAFC (sub_18003EAFC.c)
 *     sub_18003FB38 @ 0x18003FB38 (sub_18003FB38.c)
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 *     sub_18004C7A4 @ 0x18004C7A4 (sub_18004C7A4.c)
 *     sub_18004CED8 @ 0x18004CED8 (sub_18004CED8.c)
 *     sub_18004D088 @ 0x18004D088 (sub_18004D088.c)
 *     sub_18004D354 @ 0x18004D354 (sub_18004D354.c)
 *     sub_180050BB4 @ 0x180050BB4 (sub_180050BB4.c)
 *     sub_180052654 @ 0x180052654 (sub_180052654.c)
 *     sub_180053E84 @ 0x180053E84 (sub_180053E84.c)
 *     sub_180054158 @ 0x180054158 (sub_180054158.c)
 *     sub_1800573CC @ 0x1800573CC (sub_1800573CC.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_18005B778 @ 0x18005B778 (sub_18005B778.c)
 *     sub_18005BF40 @ 0x18005BF40 (sub_18005BF40.c)
 *     sub_18005C450 @ 0x18005C450 (sub_18005C450.c)
 *     sub_18007CBE4 @ 0x18007CBE4 (sub_18007CBE4.c)
 *     sub_180096188 @ 0x180096188 (sub_180096188.c)
 *     sub_18009662C @ 0x18009662C (sub_18009662C.c)
 *     sub_1800B9D6C @ 0x1800B9D6C (sub_1800B9D6C.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800BC5AC @ 0x1800BC5AC (sub_1800BC5AC.c)
 *     sub_1800BD9EC @ 0x1800BD9EC (sub_1800BD9EC.c)
 *     sub_1800BDF0C @ 0x1800BDF0C (sub_1800BDF0C.c)
 *     sub_1800BEC68 @ 0x1800BEC68 (sub_1800BEC68.c)
 *     sub_1800CB8C0 @ 0x1800CB8C0 (sub_1800CB8C0.c)
 *     sub_1800CBA00 @ 0x1800CBA00 (sub_1800CBA00.c)
 *     sub_1800CBD20 @ 0x1800CBD20 (sub_1800CBD20.c)
 *     sub_1800D0C10 @ 0x1800D0C10 (sub_1800D0C10.c)
 *     sub_1800D0E08 @ 0x1800D0E08 (sub_1800D0E08.c)
 *     sub_1800D1BC0 @ 0x1800D1BC0 (sub_1800D1BC0.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@PEAU32@@Z @ 0x18001CCEC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@std@.c)
 */

__int64 *__fastcall sub_18001C420(__int64 *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rcx
  __int64 i; // rax

  v1 = a1;
  v2 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 16) + 25LL) )
  {
    for ( i = *(_QWORD *)(v2 + 8); !*(_BYTE *)(i + 25) && v2 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
    {
      *v1 = i;
      v2 = i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Min(
          *(_QWORD *)(v2 + 16),
          0LL,
          v1);
  }
  *v1 = i;
  return v1;
}
