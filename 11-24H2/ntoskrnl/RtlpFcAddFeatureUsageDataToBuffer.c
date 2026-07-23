/*
 * XREFs of RtlpFcAddFeatureUsageDataToBuffer @ 0x14048C73C
 * Callers:
 *     CmFcManagerRecordFeatureUsage @ 0x14048C624 (CmFcManagerRecordFeatureUsage.c)
 * Callees:
 *     RtlBackoff @ 0x140284140 (RtlBackoff.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall RtlpFcAddFeatureUsageDataToBuffer(__int64 a1, const void *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int32 v4; // edi
  const void *v6; // r9
  unsigned __int32 v8; // esi
  unsigned __int32 v9; // edx
  unsigned __int32 v10; // ecx
  unsigned __int32 v11; // eax
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v4 = 0;
  v13 = 0;
  v6 = a2;
  while ( 1 )
  {
    _m_prefetchw((const void *)(a1 + 16));
    v8 = *(_DWORD *)(a1 + 16);
    v9 = *(_DWORD *)(a1 + 28);
    if ( v8 == v9 )
      break;
    v10 = v8 + v3;
    if ( v8 + (unsigned int)v3 < v8 || v10 < v3 || v10 > v9 )
      v10 = *(_DWORD *)(a1 + 28);
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), v10, v8);
    if ( v8 == v11 )
    {
      v4 = v10 - v11;
      memmove((void *)(a1 + 8 * (v11 + 4LL)), v6, 8LL * (v10 - v11));
      break;
    }
    RtlBackoff(&v13);
  }
  if ( v4 != v3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 20), v3 - v4);
    *a3 = v4;
  }
  return v8;
}
