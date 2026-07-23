/*
 * XREFs of __ft_process_marker_get_handle @ 0x180144898
 * Callers:
 *     __ft_process_handles_array_add @ 0x180144830 (__ft_process_handles_array_add.c)
 * Callees:
 *     sprintf_s @ 0x18012BA90 (sprintf_s.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall _ft_process_marker_get_handle(int a1)
{
  char Buffer[64]; // [rsp+20h] [rbp-58h] BYREF

  memset_thunk_772440563353939046(Buffer, 0, 0x40uLL);
  sprintf_s(Buffer, 0x40uLL, "Local\\FT:lock:%d", a1);
  return 0LL;
}
