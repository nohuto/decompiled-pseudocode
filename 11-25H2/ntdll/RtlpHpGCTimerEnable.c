/*
 * XREFs of RtlpHpGCTimerEnable @ 0x180143E10
 * Callers:
 *     RtlEnableHeapGC @ 0x180143010 (RtlEnableHeapGC.c)
 * Callees:
 *     TpReleaseTimer @ 0x18003F060 (TpReleaseTimer.c)
 *     TpAllocTimer @ 0x1800461E0 (TpAllocTimer.c)
 */

__int64 __fastcall RtlpHpGCTimerEnable(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  _DWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]
  int v14; // [rsp+60h] [rbp-10h]
  __int64 v15; // [rsp+80h] [rbp+10h] BYREF

  v15 = 0LL;
  v6[1] = 0;
  if ( qword_1801D0268 )
  {
    return 255;
  }
  else
  {
    v8 = 0LL;
    v9 = 0LL;
    v11 = 0LL;
    v12 = 0;
    v7 = a2;
    v10 = 0LL;
    v6[0] = 3;
    v14 = 72;
    v13 = 2;
    v3 = TpAllocTimer(&v15, (__int64)RtlpHpGCTimerCallback, (int)&qword_1801D0268, (__int64)v6);
    v4 = v15;
    v2 = v3;
    if ( v3 >= 0 )
    {
      if ( _InterlockedCompareExchange64(&qword_1801D0268, v15, 0LL) )
      {
        v4 = v15;
        v2 = 255;
      }
      else
      {
        v4 = 0LL;
        v2 = 0;
      }
    }
    if ( v4 )
      TpReleaseTimer(v4);
  }
  return v2;
}
