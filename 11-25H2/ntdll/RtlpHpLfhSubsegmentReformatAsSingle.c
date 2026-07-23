/*
 * XREFs of RtlpHpLfhSubsegmentReformatAsSingle @ 0x1800333AC
 * Callers:
 *     RtlpHpLfhBucketGetSubsegment @ 0x180032EB0 (RtlpHpLfhBucketGetSubsegment.c)
 * Callees:
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x180009C40 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpSegLfhVsCommit @ 0x180009F80 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180011E60 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentReformatAsSingle(__int64 a1, unsigned __int8 *a2)
{
  unsigned int v4; // eax
  __int64 result; // rax
  unsigned __int8 v6; // cl
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(int, __int64, __int64, _DWORD *); // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // [rsp+50h] [rbp+18h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  v12 = 0;
  if ( !(unsigned int)RtlpHpLfhSubsegmentReformatCheck(a1, (__int64)a2, &v11, &v12) )
    return 3221226614LL;
  if ( a2[39] == 1 )
    return 0LL;
  if ( !v11
    || ((v6 = a2[38],
         v7 = (__int64)&a2[v11 << 12 << v6],
         v8 = (__int64 (__fastcall *)(int, __int64, __int64, _DWORD *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)),
         v9 = ((unsigned int)a2[39] - v11) << 12 << v6,
         v10 = *(_QWORD *)a1,
         v8 != RtlpHpSegLfhVsCommit)
      ? (result = v8(v10, v7, v9, 0LL))
      : (result = RtlpHpSegLfhVsCommit(v10, v7, v9, 0LL)),
        (int)result >= 0) )
  {
    if ( v12 )
      RtlpHpLfhContextUpdateFreeCommitCount(a1, (__int64)a2, ((-4096 * v12) << a2[38]) / 4096);
    _BitScanForward(&v4, (unsigned int)(HIBYTE(*((unsigned __int16 *)a2 + 19)) << 12 << *((_WORD *)a2 + 19)) >> 12);
    HIWORD(v11) = HIWORD(v4);
    LOBYTE(v11) = v4;
    BYTE1(v11) = 1;
    *((_WORD *)a2 + 19) = v11;
    *(_WORD *)&a2[8 * a2[24]] = 1;
    return 0LL;
  }
  return result;
}
