/*
 * XREFs of RtlGetFeatureToggleConfiguration @ 0x180144060
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpFtQueryConfiguration @ 0x18014435C (RtlpFtQueryConfiguration.c)
 *     __ft_marker_array_find @ 0x180144608 (__ft_marker_array_find.c)
 *     __ft_marker_array_set_flags @ 0x180144784 (__ft_marker_array_set_flags.c)
 *     __ft_process_handles_array_add @ 0x180144830 (__ft_process_handles_array_add.c)
 */

unsigned __int64 __fastcall RtlGetFeatureToggleConfiguration(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  BOOL v5; // ebp
  unsigned __int64 v6; // rbx
  int v7; // r15d
  __int64 Configuration; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = HIDWORD(a2);
  v5 = (HIDWORD(a2) & 0xE000000) != 0x8000000 && (HIDWORD(a2) & 0x700000) != 0x400000;
  v6 = 0LL;
  v7 = 0;
  v11 = 0LL;
  if ( v5 )
  {
    RtlAcquireSRWLockShared(&stru_1801D2E10);
    v7 = _ft_marker_array_find(&_ft_g_api_info, a1, &v11);
    RtlReleaseSRWLockShared(&stru_1801D2E10);
    v6 = v11;
    if ( v7 )
    {
      if ( (v11 & 0x100) == 0 )
        return v11;
    }
  }
  Configuration = RtlpFtQueryConfiguration(a1, a2);
  v10 = Configuration;
  v11 = Configuration;
  if ( v7 )
  {
    v11 = __PAIR64__(HIDWORD(v6), v6 & 0xFFFFFEFF | ((((unsigned int)Configuration >> 8) & 1) << 8));
    v10 = __PAIR64__(HIDWORD(v6), v6 & 0xFFFFFEFF | ((((unsigned int)Configuration >> 8) & 1) << 8));
  }
  if ( v5 || (Configuration & 0xF) != 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_1801D2E10);
    _ft_marker_array_set_flags(&_ft_g_api_info, a1, v10);
    if ( !v7 && (v3 & 0xE000000) == 0x6000000 )
      _ft_process_handles_array_add(&unk_1801D2DF8, a1);
    RtlReleaseSRWLockExclusive(&stru_1801D2E10);
  }
  return v10;
}
