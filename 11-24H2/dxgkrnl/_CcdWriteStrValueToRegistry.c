/*
 * XREFs of _CcdWriteStrValueToRegistry @ 0x1403422B8
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x14033E948 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x14033ECE4 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1403420BC (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CcdWriteStrValueToRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCANSI_STRING SourceString)
{
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // si
  wchar_t *v8; // rdi
  NTSTATUS v9; // ebx
  __int64 result; // rax
  NTSTATUS v11; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  v7 = v6;
  if ( v6 )
  {
    v8 = (wchar_t *)operator new[](v6 + 2LL, 0x63644356u, 256LL);
    if ( v8 )
    {
      DestinationString.Length = 0;
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      DestinationString.MaximumLength = v7;
      DestinationString.Buffer = v8;
      v9 = RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      if ( v9 >= 0 )
      {
        v11 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, DestinationString.Buffer, v7 + 2);
        v9 = v11;
        if ( v11 < 0 )
        {
          WdLogSingleEntry1(2LL, v11);
          WdLogGlobalForLineNumber = 639;
        }
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
      return (unsigned int)v9;
    }
    else
    {
      WdLogSingleEntry1(6LL, v7);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 609;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 600;
  }
  return result;
}
