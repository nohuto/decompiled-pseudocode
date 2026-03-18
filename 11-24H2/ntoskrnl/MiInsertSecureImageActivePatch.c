/*
 * XREFs of MiInsertSecureImageActivePatch @ 0x1407F35F8
 * Callers:
 *     MmInsertSecureImageActivePatch @ 0x1407F6080 (MmInsertSecureImageActivePatch.c)
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140C56C7C (MmRegisterHotPatches.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiCompareHotPatchNodes @ 0x1407F2484 (MiCompareHotPatchNodes.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiInsertSecureImageActivePatch(_QWORD *a1)
{
  void *v1; // rdi
  bool v3; // si
  _QWORD *v4; // rbx
  int v5; // eax
  _QWORD *v6; // rax

  v1 = 0LL;
  v3 = 0;
LABEL_2:
  v4 = (_QWORD *)qword_140E37488;
  if ( qword_140E37488 )
  {
    while ( 1 )
    {
      v5 = MiCompareHotPatchNodes((__int64)a1, (__int64)v4);
      if ( v5 <= 0 )
      {
        if ( v5 >= 0 )
        {
          v1 = v4;
          RtlAvlRemoveNode((unsigned __int64 *)&qword_140E37488, (__int64)v4);
          goto LABEL_2;
        }
        v6 = (_QWORD *)*v4;
        if ( !*v4 )
          break;
      }
      else
      {
        v6 = (_QWORD *)v4[1];
        if ( !v6 )
        {
          v3 = 1;
          break;
        }
      }
      v4 = v6;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E37488, (unsigned __int64)v4, v3, a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
