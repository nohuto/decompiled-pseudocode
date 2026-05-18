/*
 * XREFs of sub_1800C753C @ 0x1800C753C
 * Callers:
 *     sub_1800C7C90 @ 0x1800C7C90 (sub_1800C7C90.c)
 * Callees:
 *     _o_powf @ 0x18000C488 (_o_powf.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 */

__int64 __fastcall sub_1800C753C(float a1, char a2)
{
  if ( !a2 )
    return (unsigned int)(int)a1;
  if ( dword_1801CA698 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000CA40(&dword_1801CA698);
    if ( dword_1801CA698 == -1 )
    {
      o_powf();
      dword_1801CA69C = 0x40000000;
      Init_thread_footer(&dword_1801CA698);
    }
  }
  return (unsigned int)(int)(float)(*(float *)&dword_1801CA69C * a1);
}
