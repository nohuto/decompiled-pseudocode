/*
 * XREFs of RtlpFcDrainDelayedUsageReportBuffer @ 0x140A2B710
 * Callers:
 *     CmFcpManagerDrainUsageNotifications @ 0x140A2B5FC (CmFcpManagerDrainUsageNotifications.c)
 * Callees:
 *     RtlFindNextForwardRunSet @ 0x14042AD00 (RtlFindNextForwardRunSet.c)
 *     RtlpFcSendFeatureUsageNotifications @ 0x140A2B844 (RtlpFcSendFeatureUsageNotifications.c)
 */

_DWORD *__fastcall RtlpFcDrainDelayedUsageReportBuffer(_DWORD *a1, char a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r12
  int v6; // ebp
  unsigned int v8; // edx
  unsigned int v10; // edi
  unsigned int v11; // r15d
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  int NextForwardRunSet; // eax
  _DWORD *result; // rax
  _DWORD v18[2]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD *v19; // [rsp+28h] [rbp-40h]
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h]
  __int64 v22; // [rsp+88h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  v20 = 0;
  v5 = a1 + 2;
  v18[0] = 64;
  v6 = 0;
  v18[1] = 0;
  v8 = 0;
  v19 = a1 + 2;
  while ( 1 )
  {
    NextForwardRunSet = RtlFindNextForwardRunSet((__int64)v18, v8, &v20);
    if ( !NextForwardRunSet )
      break;
    v10 = v20;
    v11 = v20 + NextForwardRunSet;
    if ( v20 < v20 + NextForwardRunSet )
    {
      v12 = v20;
      v13 = 3LL * v20;
      do
      {
        if ( !a1[v13 + 4] || a2 )
        {
          v14 = RtlpFcSendFeatureUsageNotifications(&a1[v13 + 5], v21, v22);
          v15 = a1[v13 + 4] + 1;
          a1[v13 + 4] = v15;
          if ( v14 >= 0 || v14 == -1073741275 || v15 < 5 )
          {
            *(_QWORD *)&a1[v13 + 4] = 0LL;
            a1[v13 + 6] = 0;
            *((_BYTE *)v5 + (v12 >> 3)) &= ~(1 << (v10 & 7));
            --*a1;
          }
          else
          {
            ++v6;
          }
        }
        ++v10;
        ++v12;
        v13 += 3LL;
      }
      while ( v10 < v11 );
    }
    v8 = v11;
  }
  result = a5;
  *a5 = v6;
  return result;
}
