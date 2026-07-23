/*
 * XREFs of MiPageHashBugCheck @ 0x140692388
 * Callers:
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileBlockOwner @ 0x140269EDC (MiUpdatePageFileBlockOwner.c)
 *     MiArePagefileContentsCorrupted @ 0x140341C34 (MiArePagefileContentsCorrupted.c)
 *     MiWritePageFileHash @ 0x140426540 (MiWritePageFileHash.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiPageHashBugCheck(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        unsigned int *a3,
        unsigned int *a4,
        int a5)
{
  unsigned int v5; // r11d
  ULONG_PTR v6; // rax
  ULONG_PTR v8; // rcx
  ULONG_PTR v9; // r9
  ULONG_PTR BugCheckParameter4; // rax

  v5 = BugCheckParameter1 + 16;
  v6 = *a3;
  if ( a5 )
    v5 = BugCheckParameter1;
  v8 = *a4;
  if ( (_DWORD)v6 == (_DWORD)v8 && (v6 = a3[1], v8 = a4[1], (_DWORD)v6 == (_DWORD)v8) )
  {
    v9 = *((_QWORD *)a3 + 1);
    BugCheckParameter4 = *((_QWORD *)a4 + 1);
  }
  else
  {
    v9 = v6;
    BugCheckParameter4 = v8;
  }
  KeBugCheckEx(0x1Au, v5, (unsigned int)BugCheckParameter2, v9, BugCheckParameter4);
}
