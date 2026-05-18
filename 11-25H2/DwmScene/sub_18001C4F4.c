/*
 * XREFs of sub_18001C4F4 @ 0x18001C4F4
 * Callers:
 *     sub_18001C580 @ 0x18001C580 (sub_18001C580.c)
 * Callees:
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_18001BD84 @ 0x18001BD84 (sub_18001BD84.c)
 */

__int64 sub_18001C4F4()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  sub_180011B8C(&v2);
  v0 = v2;
  if ( dword_1801C3E5C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C3E5C);
    if ( dword_1801C3E5C == -1 )
    {
      qword_1801C3E60 = v0;
      Init_thread_footer(&dword_1801C3E5C);
    }
  }
  v2 = v0 - qword_1801C3E60;
  return *sub_18001BD84(&v3, &v2);
}
