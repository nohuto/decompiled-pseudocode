/*
 * XREFs of RtlStringCbCopyW @ 0x1800E1140
 * Callers:
 *     RtlCreateTagHeap @ 0x1800A5370 (RtlCreateTagHeap.c)
 *     SwitchedRtlGetVersion @ 0x1800A9C70 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800AA620 (RtlGetVersion.c)
 *     RtlInstallFunctionTableCallback @ 0x1800E0D10 (RtlInstallFunctionTableCallback.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800E1030 (RtlpGetNameFromLangInfoNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyW(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  __int64 v5; // r8
  __int16 v6; // ax
  _WORD *v7; // rax
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    v4 = 2147483646 - v3;
    v5 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v4 + v3) )
        break;
      v6 = *(_WORD *)((char *)a1 + v5);
      if ( !v6 )
        break;
      *a1++ = v6;
      --v3;
    }
    while ( v3 );
    v7 = a1 - 1;
    if ( v3 )
      v7 = a1;
    *v7 = 0;
    result = 2147483653LL;
    if ( v3 )
      return 0LL;
  }
  return result;
}
