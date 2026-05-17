/*
 * XREFs of RtlQueryHeapInformation @ 0x18009A820
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x18009A090 (RtlQueryProcessHeapInformation.c)
 *     RtlpGetHeapTag @ 0x18009A7D8 (RtlpGetHeapTag.c)
 *     RtlpReadProcessHeaps @ 0x1800FE4CC (RtlpReadProcessHeaps.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180143B40 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014D350 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpQueryExtendedHeapInformation @ 0x1800983A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x1800E0980 (RtlpHpTagQueryTags.c)
 *     RtlpHpStackTraceSerialize @ 0x180120A28 (RtlpHpStackTraceSerialize.c)
 */

__int64 __fastcall RtlQueryHeapInformation(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  int v6; // eax

  if ( a2 )
  {
    if ( a2 > 4 )
    {
      if ( a2 != 7 )
      {
        if ( a2 == 5 )
          return RtlpHpStackTraceSerialize(a3, a4, a5);
        return 3221225485LL;
      }
      if ( !a1 || !a3 || *(_DWORD *)(a1 + 16) != -571548178 )
        return 3221225485LL;
      if ( a5 )
        *a5 = 8LL;
      if ( a4 == 8 )
      {
        *a3 = *(_QWORD *)(a1 + 104);
        return 0LL;
      }
      else
      {
        return 3221225485LL;
      }
    }
    else
    {
      if ( a2 == 4 )
        return RtlpHpTagQueryTags(a3);
      if ( a2 != 1 )
      {
        if ( a2 == -2147483647 )
        {
          if ( a4 >= 8 )
          {
            *a3 = &RtlpHeapFailureInfo;
            if ( a5 )
              *a5 = 8LL;
            return 0LL;
          }
          else
          {
            if ( a5 )
              *a5 = 8LL;
            return 3221225507LL;
          }
        }
        if ( a2 == 2 )
        {
          if ( a4 >= 0x58 )
            return RtlpQueryExtendedHeapInformation((__int64)a3, a4, a5);
          else
            return 3221225485LL;
        }
        return 3221225485LL;
      }
      if ( a5 )
        *a5 = 4LL;
      if ( a4 >= 4 )
      {
        *(_DWORD *)a3 = RtlpDisableBreakOnFailureCookie == 0;
        return 0LL;
      }
      else
      {
        return 3221225507LL;
      }
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 16);
    if ( v6 == -571548178 || (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      if ( a4 < 4 )
      {
        if ( a5 )
          *a5 = 4LL;
        return 3221225507LL;
      }
      else
      {
        if ( v6 == -571548178 )
          *(_DWORD *)a3 = 2;
        else
          *(_DWORD *)a3 = *(unsigned __int8 *)(a1 + 419);
        if ( a5 )
          *a5 = 4LL;
        return 0LL;
      }
    }
    else
    {
      return 3221225474LL;
    }
  }
}
