/*
 * XREFs of RtlpStdLogCapturedStackTrace @ 0x1800EF820
 * Callers:
 *     RtlStdLogStackTrace @ 0x18009C890 (RtlStdLogStackTrace.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x18009CAC8 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18009CAE8 (RtlpStdLockRelease.c)
 *     RtlpStdGetSpaceForTrace @ 0x1800EF974 (RtlpStdGetSpaceForTrace.c)
 *     RtlCompareMemory @ 0x180165F10 (RtlCompareMemory.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpStdLogCapturedStackTrace(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v5; // edx
  SIZE_T v6; // rbp
  unsigned int v7; // r15d
  __int64 v9; // r14
  __int64 i; // rbx
  __int64 SpaceForTrace; // rax
  __int16 v12; // cx
  __int64 v13; // rcx
  __int16 v14; // cx

  v3 = *(unsigned __int16 *)(a2 + 14);
  v5 = (unsigned int)a3 % *(_DWORD *)(a1 + 720);
  v6 = 8 * v3;
  v7 = a3;
  v9 = 16LL * v5;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  RtlpStdLockAcquire((volatile signed __int32 *)(v9 + a1 + 736), (volatile signed __int32 **)v5, a3);
  for ( i = *(_QWORD *)(v9 + a1 + 728); i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == *(_WORD *)(a2 + 14)
      && RtlCompareMemory((const void *)(i + 16), (const void *)(a2 + 16), v6) == v6 )
    {
      goto LABEL_8;
    }
  }
  SpaceForTrace = RtlpStdGetSpaceForTrace(a1, *(unsigned __int16 *)(a2 + 14));
  i = SpaceForTrace;
  if ( !SpaceForTrace )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 200), 1u);
    goto LABEL_10;
  }
  memmove((void *)(SpaceForTrace + 16), (const void *)(a2 + 16), v6);
  v12 = *(_WORD *)(a2 + 14);
  *(_WORD *)(i + 8) &= 0xF800u;
  *(_WORD *)(i + 14) = v12;
  v13 = 2LL * (v7 % *(_DWORD *)(a1 + 720));
  *(_QWORD *)i = *(_QWORD *)(a1 + 16LL * (v7 % *(_DWORD *)(a1 + 720)) + 728);
  *(_QWORD *)(a1 + 8 * v13 + 728) = i;
LABEL_8:
  v14 = *(_WORD *)(i + 8);
  if ( (v14 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v14 ^ (v14 ^ (v14 + 1)) & 0x7FF;
LABEL_10:
  RtlpStdLockRelease((volatile signed __int64 *)(v9 + a1 + 736));
  return i;
}
