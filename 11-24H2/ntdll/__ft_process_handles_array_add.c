/*
 * XREFs of __ft_process_handles_array_add @ 0x180144830
 * Callers:
 *     RtlGetFeatureToggleConfiguration @ 0x180144060 (RtlGetFeatureToggleConfiguration.c)
 * Callees:
 *     __ft_array_insert @ 0x1801444F4 (__ft_array_insert.c)
 *     __ft_process_marker_get_handle @ 0x180144898 (__ft_process_marker_get_handle.c)
 */

__int64 __fastcall _ft_process_handles_array_add(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 handle; // rdi
  _QWORD *v5; // rax

  v3 = 0;
  handle = _ft_process_marker_get_handle(a2);
  if ( handle )
  {
    v5 = _ft_array_insert((const void **)a1, (__int64 *)(a1 + 8), (__int64 *)(a1 + 16), 8LL, *(_QWORD *)(a1 + 8));
    if ( v5 )
      *v5 = handle;
    return 1;
  }
  return v3;
}
