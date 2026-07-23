/*
 * XREFs of RtlpFcAddDelayedUsageReportToBuffer @ 0x14021E33C
 * Callers:
 *     CmFcManagerNotifyFeatureUsage @ 0x14021E1F8 (CmFcManagerNotifyFeatureUsage.c)
 * Callees:
 *     RtlInterlockedSetClearRun @ 0x14021DDF0 (RtlInterlockedSetClearRun.c)
 *     RtlBackoff @ 0x140284140 (RtlBackoff.c)
 */

__int64 __fastcall RtlpFcAddDelayedUsageReportToBuffer(volatile signed __int32 *a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned __int32 v5; // ebp
  int v6; // r14d
  char *v7; // r15
  unsigned __int32 v8; // edx
  unsigned __int32 i; // eax
  unsigned int v10; // r9d
  unsigned __int32 v11; // ecx
  __int64 *v12; // rbx
  __int64 j; // rax
  unsigned int v14; // ebx
  unsigned __int32 v16; // eax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  v17 = 64LL;
  v19 = 0;
  v18 = a1 + 2;
  while ( 1 )
  {
    _m_prefetchw((const void *)a1);
    v5 = *a1;
    if ( *a1 == 64 )
    {
      v2 = -1073741670;
      _InterlockedIncrement(a1 + 1);
      return v2;
    }
    if ( v5 == _InterlockedCompareExchange(a1, v5 + 1, v5) )
      break;
    RtlBackoff(&v19);
  }
  v6 = ((unsigned __int8)v18 & 4) != 0LL ? 0x20 : 0;
  v7 = (char *)v18 - (((unsigned __int8)v18 & 4) != 0LL ? 4 : 0);
  do
  {
    v8 = v5 < (unsigned int)v17 ? v5 : 0;
    for ( i = v17 - 1; ; i = v16 - 1 )
    {
      v10 = v6 + i;
      v11 = v6 + v8;
      if ( i - v8 != -1 )
      {
        v12 = (__int64 *)&v7[8 * ((unsigned __int64)v11 >> 6)];
        for ( j = *v12 | ((1LL << (v11 & 0x3F)) - 1); j == -1; j = *v12 )
        {
          if ( ++v12 > (__int64 *)&v7[8 * ((unsigned __int64)v10 >> 6)] )
            goto LABEL_19;
        }
        _BitScanForward64((unsigned __int64 *)&j, ~j);
        v14 = j + ((unsigned int)(((char *)v12 - v7) >> 3) << 6);
        if ( v14 <= v10 )
          break;
      }
LABEL_19:
      v14 = -1;
LABEL_20:
      if ( !v8 )
        goto LABEL_14;
      v16 = v5 + 1;
      v8 = 0;
      if ( v5 + 1 > (unsigned int)v17 )
        v16 = v17;
    }
    if ( v14 == -1 )
      goto LABEL_20;
    v14 -= v6;
LABEL_14:
    ;
  }
  while ( !(unsigned int)RtlInterlockedSetClearRun((__int64)&v17, v14, 1u) );
  *(_QWORD *)&a1[3 * v14 + 5] = *a2;
  return v2;
}
