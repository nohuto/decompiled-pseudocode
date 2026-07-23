/*
 * XREFs of MiFreePrivateFixupEntryForSystemImage @ 0x1404A95F8
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreePrivateFixupEntryForSystemImage(ULONG_PTR BugCheckParameter2)
{
  PVOID *v2; // rdi
  KIRQL v3; // al
  __int64 *v4; // rbx
  unsigned __int8 v5; // dl
  __int64 v6; // rcx
  __int64 *v7; // rax

  v2 = 0LL;
  v3 = ExAcquireSpinLockExclusive(dword_140E2D95C);
  v4 = (__int64 *)qword_140E2D940;
  v5 = v3;
  while ( v4 != &qword_140E2D940 )
  {
    v2 = (PVOID *)v4;
    v6 = *v4;
    if ( BugCheckParameter2 == v4[2] )
    {
      if ( *(__int64 **)(v6 + 8) != v4 || (v7 = (__int64 *)v4[1], (__int64 *)*v7 != v4) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  MiReleaseSpinLockExclusive(dword_140E2D95C, v5);
  if ( v4 == &qword_140E2D940 )
    KeBugCheckEx(0x1Au, 0x1011uLL, BugCheckParameter2, 0LL, 0LL);
  ExFreePoolWithTag(v2[5], 0);
  ExFreePoolWithTag(v2, 0);
  return 0LL;
}
