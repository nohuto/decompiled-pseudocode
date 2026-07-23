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

NTSTATUS __cdecl RtlQueryHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength,
        PSIZE_T ReturnLength)
{
  int v6; // eax

  if ( HeapInformationClass )
  {
    if ( HeapInformationClass > 4 )
    {
      if ( HeapInformationClass != HeapTag )
      {
        if ( HeapInformationClass == 5 )
          return RtlpHpStackTraceSerialize(HeapInformation, HeapInformationLength, ReturnLength);
        return -1073741811;
      }
      if ( !HeapHandle || !HeapInformation || *((_DWORD *)HeapHandle + 4) != -571548178 )
        return -1073741811;
      if ( ReturnLength )
        *ReturnLength = 8LL;
      if ( HeapInformationLength == 8 )
      {
        *(_QWORD *)HeapInformation = *((_QWORD *)HeapHandle + 13);
        return 0;
      }
      else
      {
        return -1073741811;
      }
    }
    else
    {
      if ( HeapInformationClass == 4 )
        return RtlpHpTagQueryTags(HeapInformation);
      if ( HeapInformationClass != HeapEnableTerminationOnCorruption )
      {
        if ( HeapInformationClass == -2147483647 )
        {
          if ( HeapInformationLength >= 8 )
          {
            *(_QWORD *)HeapInformation = &RtlpHeapFailureInfo;
            if ( ReturnLength )
              *ReturnLength = 8LL;
            return 0;
          }
          else
          {
            if ( ReturnLength )
              *ReturnLength = 8LL;
            return -1073741789;
          }
        }
        if ( HeapInformationClass == 2 )
        {
          if ( HeapInformationLength >= 0x58 )
            return RtlpQueryExtendedHeapInformation((__int64)HeapInformation, HeapInformationLength, ReturnLength);
          else
            return -1073741811;
        }
        return -1073741811;
      }
      if ( ReturnLength )
        *ReturnLength = 4LL;
      if ( HeapInformationLength >= 4 )
      {
        *(_DWORD *)HeapInformation = RtlpDisableBreakOnFailureCookie == 0;
        return 0;
      }
      else
      {
        return -1073741789;
      }
    }
  }
  else
  {
    v6 = *((_DWORD *)HeapHandle + 4);
    if ( v6 == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
    {
      if ( HeapInformationLength < 4 )
      {
        if ( ReturnLength )
          *ReturnLength = 4LL;
        return -1073741789;
      }
      else
      {
        if ( v6 == -571548178 )
          *(_DWORD *)HeapInformation = 2;
        else
          *(_DWORD *)HeapInformation = *((unsigned __int8 *)HeapHandle + 419);
        if ( ReturnLength )
          *ReturnLength = 4LL;
        return 0;
      }
    }
    else
    {
      return -1073741822;
    }
  }
}
