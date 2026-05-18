/*
 * XREFs of sub_18001C654 @ 0x18001C654
 * Callers:
 *     sub_18001C6E0 @ 0x18001C6E0 (sub_18001C6E0.c)
 * Callees:
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_18001BEE4 @ 0x18001BEE4 (sub_18001BEE4.c)
 */

__int64 sub_18001C654()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  sub_180011C8C(&v2);
  v0 = v2;
  if ( dword_1801C4E6C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801C4E6C);
    if ( dword_1801C4E6C == -1 )
    {
      qword_1801C4E70 = v0;
      Init_thread_footer(&dword_1801C4E6C);
    }
  }
  v2 = v0 - qword_1801C4E70;
  return *sub_18001BEE4(&v3, &v2);
}
