/*
 * XREFs of RtlGetFeatureToggleConfiguration @ 0x180145CB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpFtQueryConfiguration @ 0x180145FAC (RtlpFtQueryConfiguration.c)
 *     __ft_marker_array_find @ 0x180146258 (__ft_marker_array_find.c)
 *     __ft_marker_array_set_flags @ 0x1801463D4 (__ft_marker_array_set_flags.c)
 *     __ft_process_handles_array_add @ 0x180146480 (__ft_process_handles_array_add.c)
 */

unsigned __int64 __fastcall RtlGetFeatureToggleConfiguration(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  BOOL v5; // ebp
  unsigned __int64 v6; // rbx
  int v7; // r15d
  __int64 Configuration; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = HIDWORD(a2);
  v5 = (HIDWORD(a2) & 0xE000000) != 0x8000000 && (HIDWORD(a2) & 0x700000) != 0x400000;
  v6 = 0LL;
  v7 = 0;
  v12 = 0LL;
  if ( v5 )
  {
    RtlAcquireSRWLockShared(&qword_1801D3E10);
    v7 = _ft_marker_array_find(&_ft_g_api_info, a1, &v12);
    RtlReleaseSRWLockShared(&qword_1801D3E10);
    v6 = v12;
    if ( v7 )
    {
      if ( (v12 & 0x100) == 0 )
        return v12;
    }
  }
  Configuration = RtlpFtQueryConfiguration(a1, a2);
  v11 = Configuration;
  v12 = Configuration;
  if ( v7 )
  {
    v12 = __PAIR64__(HIDWORD(v6), v6 & 0xFFFFFEFF | ((((unsigned int)Configuration >> 8) & 1) << 8));
    v11 = __PAIR64__(HIDWORD(v6), v6 & 0xFFFFFEFF | ((((unsigned int)Configuration >> 8) & 1) << 8));
  }
  if ( v5 || (Configuration & 0xF) != 0 )
  {
    RtlAcquireSRWLockExclusive(
      (volatile signed __int32 *)&qword_1801D3E10,
      (volatile signed __int32 **)(Configuration & 0xF),
      v10);
    _ft_marker_array_set_flags(&_ft_g_api_info, a1, v11);
    if ( !v7 && (v3 & 0xE000000) == 0x6000000 )
      _ft_process_handles_array_add(&unk_1801D3DF8, a1);
    RtlReleaseSRWLockExclusive(&qword_1801D3E10);
  }
  return v11;
}
