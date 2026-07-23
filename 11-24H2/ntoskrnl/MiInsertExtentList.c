/*
 * XREFs of MiInsertExtentList @ 0x14067C57C
 * Callers:
 *     MiInsertCopyExtents @ 0x14067C4D0 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14067C8D4 (MiMergeCopyExtents.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiInsertExtentList(unsigned int *a1)
{
  __int64 v1; // rax
  unsigned int v3; // edi
  unsigned __int64 *v4; // r14
  _QWORD *v5; // rbx
  unsigned __int64 v6; // r10
  _QWORD *BugCheckParameter4; // rdx
  bool v8; // r8
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax

  v1 = (int)a1[1];
  v3 = 0;
  v4 = (unsigned __int64 *)((char *)&unk_140E2D8C8 + 8 * v1);
  v5 = a1 + 2;
  while ( v3 < *a1 )
  {
    v6 = v5[4];
    LOBYTE(v1) = 0;
    if ( v6 == 0x8000000000000000uLL )
      goto LABEL_13;
    BugCheckParameter4 = (_QWORD *)*v4;
    v8 = 0;
    if ( !*v4 )
      goto LABEL_12;
    while ( 1 )
    {
      v9 = BugCheckParameter4[4];
      if ( v6 + v5[5] > v9 )
        break;
      v10 = (_QWORD *)*BugCheckParameter4;
      if ( !*BugCheckParameter4 )
      {
        v8 = 0;
        goto LABEL_12;
      }
LABEL_10:
      BugCheckParameter4 = v10;
    }
    if ( v6 < BugCheckParameter4[5] + v9 )
      KeBugCheckEx(0x1Au, 0x1483uLL, v5[4], v5[5], (ULONG_PTR)BugCheckParameter4);
    v10 = (_QWORD *)BugCheckParameter4[1];
    if ( v10 )
      goto LABEL_10;
    v8 = 1;
LABEL_12:
    LOBYTE(v1) = RtlAvlInsertNodeEx(v4, (unsigned __int64)BugCheckParameter4, v8, v5);
LABEL_13:
    ++v3;
    v5 += 6;
  }
  return v1;
}
