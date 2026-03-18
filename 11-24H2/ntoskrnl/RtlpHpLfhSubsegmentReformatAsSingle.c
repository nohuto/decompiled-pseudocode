/*
 * XREFs of RtlpHpLfhSubsegmentReformatAsSingle @ 0x140459378
 * Callers:
 *     RtlpHpLfhBucketGetSubsegment @ 0x1402B55B8 (RtlpHpLfhBucketGetSubsegment.c)
 * Callees:
 *     RtlpHpSegLfhVsCommit @ 0x1402B92D0 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x1402B93D8 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x140459494 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentReformatAsSingle(__int64 *a1, unsigned __int8 *a2)
{
  int v4; // edx
  unsigned int v5; // eax
  __int64 result; // rax
  unsigned __int8 v7; // cl
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // rcx
  int v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v13 = 0;
  if ( !(unsigned int)RtlpHpLfhSubsegmentReformatCheck(a1, a2, &v12, &v13) )
    return 3221226614LL;
  v4 = a2[39];
  if ( (_BYTE)v4 == 1 )
    return 0LL;
  if ( !v12
    || ((v7 = a2[38],
         v8 = v4 - v12,
         v9 = (__int64)&a2[v12 << 12 << v7],
         v10 = (unsigned int)(v8 << 12 << v7),
         v11 = (__int64 *)*a1,
         (__int64 (__fastcall *)(__int64 *, __int64, unsigned int, _DWORD *))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[3]) != RtlpHpSegLfhVsCommit)
      ? (result = guard_dispatch_icall_no_overrides(v11, v9, v10, 0LL))
      : (result = RtlpHpSegLfhVsCommit(v11, v9, v10, 0LL)),
        (int)result >= 0) )
  {
    if ( v13 )
      RtlpHpLfhContextUpdateFreeCommitCount(a1, (__int64)a2, ((-4096 * v13) << a2[38]) / 4096);
    _BitScanForward(&v5, (unsigned int)(HIBYTE(*((unsigned __int16 *)a2 + 19)) << 12 << *((_WORD *)a2 + 19)) >> 12);
    HIWORD(v12) = HIWORD(v5);
    LOBYTE(v12) = v5;
    BYTE1(v12) = 1;
    *((_WORD *)a2 + 19) = v12;
    *(_WORD *)&a2[8 * a2[24]] = 1;
    return 0LL;
  }
  return result;
}
