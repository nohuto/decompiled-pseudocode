/*
 * XREFs of DpiFdoValidateIntegratedDisplayDescriptor @ 0x140248BB4
 * Callers:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14005D260 (DpiQueryIntegratedDescriptorWrapper.c)
 * Callees:
 *     DpiIsValidEdid @ 0x1400552B0 (DpiIsValidEdid.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1403B6284 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiFdoValidateIntegratedDisplayDescriptor(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rdi
  __int64 v5; // rbx
  int v6; // ecx
  unsigned int v7; // eax
  char v8; // al

  v3 = *(unsigned int **)(a2 + 104);
  v5 = *(unsigned int *)(a2 + 24);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 4032) + 3004LL);
  if ( *v3 < 0x10 )
  {
    v7 = v3[16];
    if ( v7 < 0x1000 )
    {
      if ( (v6 != 2300 || *(_DWORD *)(a1 + 1124) != 1297040209)
        && (int)DpiFdoValidateDxgkColorimetry(v3 + 17, (unsigned int)v5) < 0 )
      {
        return 3221225485LL;
      }
      if ( (unsigned __int8)(*((_BYTE *)v3 + 120) - 1) > 3u )
      {
        WdLogSingleEntry3(2LL, *((unsigned __int8 *)v3 + 120), v5, 3LL);
        WdLogGlobalForLineNumber = 843;
        return 3221225485LL;
      }
      if ( (unsigned __int8)(*((_BYTE *)v3 + 121) - 1) > 4u )
      {
        WdLogSingleEntry3(2LL, *((unsigned __int8 *)v3 + 121), v5, 4LL);
        WdLogGlobalForLineNumber = 853;
        return 3221225485LL;
      }
      if ( *((_BYTE *)v3 + 122) <= 0x10u )
      {
        v8 = *((_BYTE *)v3 + 123);
        if ( v8 == 1 )
        {
          if ( *(_WORD *)(a2 + 94) < 0x80u || !DpiIsValidEdid(*(__m128i **)(a2 + 112)) )
          {
            WdLogSingleEntry2(2LL, v5, 8LL);
            WdLogGlobalForLineNumber = 885;
            return 3221225485LL;
          }
        }
        else if ( v8 != 2 )
        {
          WdLogSingleEntry3(2LL, *((unsigned __int8 *)v3 + 123), v5, 6LL);
          WdLogGlobalForLineNumber = 898;
          return 3221225485LL;
        }
        if ( (v3[16] & 0x200) == 0 || *(_BYTE *)(a1 + 2719) || *(_BYTE *)(a1 + 2716) )
          return 0LL;
        WdLogSingleEntry2(2LL, v5, 10LL);
        WdLogGlobalForLineNumber = 908;
      }
      else
      {
        WdLogSingleEntry4(2LL, *((unsigned __int8 *)v3 + 122), 16LL, v5, 5LL);
        WdLogGlobalForLineNumber = 868;
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, (unsigned __int64)v7 >> 12, v5, 2LL);
      WdLogGlobalForLineNumber = 803;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, (unsigned __int64)*v3 >> 4, (unsigned int)v5, 1LL);
    WdLogGlobalForLineNumber = 794;
  }
  return 3221225485LL;
}
