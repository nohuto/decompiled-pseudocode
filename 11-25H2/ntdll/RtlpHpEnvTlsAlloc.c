/*
 * XREFs of RtlpHpEnvTlsAlloc @ 0x1800F2190
 * Callers:
 *     RtlpHpLfhContextEnable @ 0x18011E668 (RtlpHpLfhContextEnable.c)
 * Callees:
 *     RtlpFlsAlloc @ 0x1800097F8 (RtlpFlsAlloc.c)
 *     RtlTlsFree @ 0x1800B8370 (RtlTlsFree.c)
 *     RtlpFlsFree @ 0x1800B84E4 (RtlpFlsFree.c)
 *     RtlTlsAlloc @ 0x1800F2250 (RtlTlsAlloc.c)
 */

__int64 __fastcall RtlpHpEnvTlsAlloc(__int64 a1, __int64 a2)
{
  int v2; // edi
  ULONG v3; // esi
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // ebx
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = HIDWORD(a1);
  v2 = 0;
  v3 = -1;
  v10 = 0;
  v8 = -1;
  if ( a2 )
  {
    v4 = RtlpFlsAlloc(&RtlpHpEnvFlsContext, a2, (__int64)RtlpHpLfhTlsCleanup, a2, &v10);
    v2 = v10;
    if ( v4 >= 0 && v10 <= 0xFFFF )
    {
      if ( (int)RtlTlsAlloc(&v8) >= 0 )
      {
        v5 = v2 << 16;
        v2 = 0;
        v6 = (unsigned __int16)v8 | v5;
        v3 = -1;
        goto LABEL_6;
      }
      v3 = v8;
    }
  }
  v6 = 0;
LABEL_6:
  if ( v2 )
    RtlpFlsFree(&RtlpHpEnvFlsContext, v2);
  if ( v3 != -1 )
    RtlTlsFree(v3);
  return v6;
}
