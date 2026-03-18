/*
 * XREFs of _CcdWriteStrValueToRegistry @ 0x1403E36F4
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x140369D2C (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x14036A0C8 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1403E34F8 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CcdWriteStrValueToRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCANSI_STRING SourceString)
{
  unsigned __int16 v6; // ax
  __int64 v7; // r9
  unsigned __int16 v8; // si
  wchar_t *v9; // rdi
  NTSTATUS v10; // ebx
  __int64 result; // rax
  NTSTATUS v12; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  v8 = v6;
  if ( v6 )
  {
    v9 = (wchar_t *)operator new[](v6 + 2LL, 0x63644356u, 256LL, v7);
    if ( v9 )
    {
      DestinationString.Length = 0;
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      DestinationString.MaximumLength = v8;
      DestinationString.Buffer = v9;
      v10 = RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      if ( v10 >= 0 )
      {
        v12 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, DestinationString.Buffer, v8 + 2);
        v10 = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry1(2LL, v12);
          WdLogGlobalForLineNumber = 639;
        }
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
      return (unsigned int)v10;
    }
    else
    {
      WdLogSingleEntry1(6LL, v8);
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
