/*
 * XREFs of DpiFdoValidateDxgkColorimetry @ 0x1403C18B4
 * Callers:
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x140241DB4 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiGetMonitorColorimetryOverride @ 0x14024DD24 (DpiGetMonitorColorimetryOverride.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoValidateDxgkColorimetry(unsigned int *a1, unsigned int a2)
{
  _BYTE *i; // rax
  __int64 v3; // rax
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // eax

  for ( i = a1; i < (_BYTE *)a1 + 52; ++i )
  {
    if ( *i )
      goto LABEL_4;
  }
  if ( i )
    return 279LL;
LABEL_4:
  v3 = *((_QWORD *)a1 + 3);
  if ( !(_DWORD)v3 || !HIDWORD(v3) || (unsigned int)v3 > 0x3FF || HIDWORD(v3) > 0x3FF )
  {
    WdLogSingleEntry4(2LL, a1[6], a1[7], a2, 1LL);
    WdLogGlobalForLineNumber = 599;
    return 3221225485LL;
  }
  v5 = a1[9];
  if ( !v5 || (v6 = a1[10]) == 0 || v6 > v5 || (v7 = a1[8], v7 >= v5) || v7 >= v6 )
  {
    WdLogSingleEntry2(2LL, a2, 2LL);
    WdLogGlobalForLineNumber = 610;
    return 3221225485LL;
  }
  v8 = a1[11];
  v9 = (int)(v8 << 30) >> 30;
  if ( v9 )
  {
    WdLogSingleEntry3(2LL, v9, a2, 3LL);
    WdLogGlobalForLineNumber = 618;
    return 3221225485LL;
  }
  if ( !v8 )
  {
    WdLogSingleEntry2(2LL, a2, 4LL);
    WdLogGlobalForLineNumber = 625;
    return 3221225485LL;
  }
  if ( (((unsigned __int8)v8 | (unsigned __int8)((v8 | (v8 >> 6)) >> 6)) & 0xFCu) >= 4 || (v8 & 0x3F00000) != 0 )
  {
    v10 = *(_QWORD *)a1;
    if ( !(unsigned int)*(_QWORD *)a1 || !HIDWORD(v10) || (unsigned int)v10 > 0x3FF || HIDWORD(v10) > 0x3FF )
    {
      WdLogSingleEntry4(2LL, *a1, a1[1], a2, 6LL);
      WdLogGlobalForLineNumber = 641;
      return 3221225485LL;
    }
    v11 = *((_QWORD *)a1 + 1);
    if ( !(_DWORD)v11 || !HIDWORD(v11) || (unsigned int)v11 > 0x3FF || HIDWORD(v11) > 0x3FF )
    {
      WdLogSingleEntry4(2LL, a1[2], a1[3], a2, 7LL);
      WdLogGlobalForLineNumber = 647;
      return 3221225485LL;
    }
    v12 = *((_QWORD *)a1 + 2);
    if ( !(_DWORD)v12 || !HIDWORD(v12) || (unsigned int)v12 > 0x3FF || HIDWORD(v12) > 0x3FF )
    {
      WdLogSingleEntry4(2LL, a1[4], a1[5], a2, 8LL);
      WdLogGlobalForLineNumber = 653;
      return 3221225485LL;
    }
  }
  else
  {
    if ( *(_QWORD *)a1 )
    {
      WdLogSingleEntry4(2LL, *a1, a1[1], a2, 9LL);
      WdLogGlobalForLineNumber = 662;
      return 3221225485LL;
    }
    if ( *((_QWORD *)a1 + 1) )
    {
      WdLogSingleEntry4(2LL, a1[2], a1[3], a2, 10LL);
      WdLogGlobalForLineNumber = 668;
      return 3221225485LL;
    }
    if ( *((_QWORD *)a1 + 2) )
    {
      WdLogSingleEntry4(2LL, a1[4], a1[5], a2, 11LL);
      WdLogGlobalForLineNumber = 674;
      return 3221225485LL;
    }
  }
  v13 = a1[12];
  if ( v13 >= 8 )
  {
    WdLogSingleEntry3(2LL, (unsigned __int64)v13 >> 3, a2, 5LL);
    WdLogGlobalForLineNumber = 683;
    return 3221225485LL;
  }
  return 0LL;
}
