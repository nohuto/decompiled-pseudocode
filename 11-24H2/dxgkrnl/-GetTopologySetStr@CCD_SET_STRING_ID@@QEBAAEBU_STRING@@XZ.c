/*
 * XREFs of ?GetTopologySetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14033E8E4
 * Callers:
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x14033E89C (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 * Callees:
 *     <none>
 */

const struct _STRING *__fastcall CCD_SET_STRING_ID::GetTopologySetStr(CCD_SET_STRING_ID *this)
{
  char *v1; // rbx
  __int64 v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // r8

  v1 = (char *)this + 8;
  v2 = 0LL;
  v3 = *((unsigned __int16 *)this + 4);
  if ( (_WORD)v3 )
  {
    while ( (unsigned int)v2 < v3 )
    {
      v4 = *(char *)(v2 + *((_QWORD *)this + 2));
      if ( (((_BYTE)v4 - 94) & 0xDF) == 0 )
      {
        WdLogSingleEntry2(2LL, (unsigned int)v2, v4);
        WdLogGlobalForLineNumber = 1393;
        return (const struct _STRING *)v1;
      }
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return (const struct _STRING *)v1;
}
