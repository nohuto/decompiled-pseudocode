/*
 * XREFs of sub_1800C73DC @ 0x1800C73DC
 * Callers:
 *     sub_1800C7B30 @ 0x1800C7B30 (sub_1800C7B30.c)
 * Callees:
 *     _o_powf @ 0x18000C028 (_o_powf.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 */

__int64 __fastcall sub_1800C73DC(float a1, char a2)
{
  if ( !a2 )
    return (unsigned int)(int)a1;
  if ( dword_1801C9688 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C8D0(&dword_1801C9688);
    if ( dword_1801C9688 == -1 )
    {
      o_powf();
      dword_1801C968C = 0x40000000;
      Init_thread_footer(&dword_1801C9688);
    }
  }
  return (unsigned int)(int)(float)(*(float *)&dword_1801C968C * a1);
}
