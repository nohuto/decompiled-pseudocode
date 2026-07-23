/*
 * XREFs of RtlQueryHeapInformation @ 0x18002AB10
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x18002A340 (RtlQueryProcessHeapInformation.c)
 *     RtlpGetHeapTag @ 0x18002AAC8 (RtlpGetHeapTag.c)
 *     RtlpReadProcessHeaps @ 0x180112AC0 (RtlpReadProcessHeaps.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180140600 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014A150 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpHpTagQueryTags @ 0x1800A1A5C (RtlpHpTagQueryTags.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceSerialize @ 0x18011D388 (RtlpHpStackTraceSerialize.c)
 *     RtlpQueryMemoryUsageInformation @ 0x180140C8C (RtlpQueryMemoryUsageInformation.c)
 */

NTSTATUS __cdecl RtlQueryHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax
  int v6; // eax

  if ( HeapInformationClass > HeapCompatibilityInformation )
  {
    switch ( HeapInformationClass )
    {
      case 1:
        if ( ReturnLength )
          *ReturnLength = 4LL;
        if ( HeapInformationLength >= 4 )
        {
          *(_DWORD *)HeapInformation = RtlpDisableBreakOnFailureCookie == 0;
          result = 0;
        }
        else
        {
          result = -1073741789;
        }
        break;
      case 2:
        if ( HeapInformationLength >= 0x58 )
          result = RtlpQueryExtendedHeapInformation(HeapInformation, HeapInformationLength, ReturnLength);
        else
          result = -1073741811;
        break;
      case 4:
        result = RtlpHpTagQueryTags(HeapInformation);
        break;
      case 5:
        result = RtlpHpStackTraceSerialize(HeapInformation, HeapInformationLength, ReturnLength);
        break;
      case 7:
        if ( !HeapHandle || !HeapInformation || *((_DWORD *)HeapHandle + 4) != -571548178 )
          goto LABEL_42;
        if ( ReturnLength )
          *ReturnLength = 8LL;
        if ( HeapInformationLength == 8 )
        {
          *(_QWORD *)HeapInformation = *((_QWORD *)HeapHandle + 13);
          result = 0;
        }
        else
        {
LABEL_42:
          result = -1073741811;
        }
        break;
      case 8:
        result = RtlpQueryMemoryUsageInformation(HeapHandle, HeapInformation, HeapInformationLength, ReturnLength);
        break;
      default:
        return -1073741811;
    }
  }
  else if ( HeapInformationClass )
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
    else
    {
      return -1073741811;
    }
  }
  else
  {
    v6 = *((_DWORD *)HeapHandle + 4);
    if ( v6 == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
    {
      if ( HeapInformationLength >= 4 )
      {
        if ( v6 == -571548178 )
          *(_DWORD *)HeapInformation = 2;
        else
          *(_DWORD *)HeapInformation = *((unsigned __int8 *)HeapHandle + 419);
        if ( ReturnLength )
          *ReturnLength = 4LL;
        return 0;
      }
      else
      {
        if ( ReturnLength )
          *ReturnLength = 4LL;
        return -1073741789;
      }
    }
    else
    {
      return -1073741822;
    }
  }
  return result;
}
