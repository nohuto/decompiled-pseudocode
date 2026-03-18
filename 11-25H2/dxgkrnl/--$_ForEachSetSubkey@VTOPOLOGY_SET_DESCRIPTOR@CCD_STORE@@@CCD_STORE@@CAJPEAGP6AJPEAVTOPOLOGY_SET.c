/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x14036A7AC
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x140369B50 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402CE078 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     _CcdRetrieveSubkeyInfoFromRegistry @ 0x14036AB00 (_CcdRetrieveSubkeyInfoFromRegistry.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14036ABE0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 */

__int64 __fastcall CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        __int64 a2,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a3)
{
  NTSTATUS v4; // eax
  __int64 TopologySetIdDescriptorCallback; // rbx
  ULONG i; // edi
  int SubkeyInfoFromRegistry; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _WORD v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES v25; // [rsp+98h] [rbp-68h] BYREF
  int v26; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v27; // [rsp+D8h] [rbp-28h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  __int16 v29; // [rsp+F0h] [rbp-10h]
  __int128 v30; // [rsp+F8h] [rbp-8h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  HANDLE v32; // [rsp+110h] [rbp+10h]
  void *KeyHandle; // [rsp+160h] [rbp+60h] BYREF
  ULONG Disposition; // [rsp+168h] [rbp+68h] BYREF
  int v35; // [rsp+16Ch] [rbp+6Ch]
  HANDLE Handle; // [rsp+178h] [rbp+78h] BYREF

  v35 = HIDWORD(a2);
  KeyHandle = 0LL;
  Disposition = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  LODWORD(TopologySetIdDescriptorCallback) = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry4(
      2LL,
      v4,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
      CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback,
      a3);
    WdLogGlobalForLineNumber = 2248;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      Handle = 0LL;
      SubkeyInfoFromRegistry = CcdRetrieveSubkeyInfoFromRegistry(KeyHandle, i);
      TopologySetIdDescriptorCallback = SubkeyInfoFromRegistry;
      if ( SubkeyInfoFromRegistry == -2147483622 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v16[3] = i;
        v16[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v16[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v16[6] = a3;
        WdLogGlobalForLineNumber = 2274;
        goto LABEL_13;
      }
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v20[0] = MEMORY[0xC];
      v20[1] = MEMORY[0xC];
      v21 = 0;
      v22 = 16LL;
      if ( MEMORY[0xC] != MEMORY[0xC] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2298;
      }
      v25.RootDirectory = KeyHandle;
      *(_QWORD *)&v25.Length = 48LL;
      v25.ObjectName = (PUNICODE_STRING)v20;
      *(_QWORD *)&v25.Attributes = 576LL;
      *(_OWORD *)&v25.SecurityDescriptor = 0LL;
      TopologySetIdDescriptorCallback = ZwOpenKey(&Handle, 0xF003Fu, &v25);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        WdLogSingleEntry5(
          3LL,
          TopologySetIdDescriptorCallback,
          i,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
          CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback,
          a3);
        WdLogGlobalForLineNumber = 2315;
        goto LABEL_13;
      }
      v26 = 0;
      v31 = 0LL;
      v28 = 0LL;
      v29 = 0;
      v32 = Handle;
      v27 = 0LL;
      v30 = 0LL;
      if ( !Handle )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1844;
      }
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)&v26,
                                               a3);
      ZwClose(Handle);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
        v18[4] = i;
        v18[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v18[3] = TopologySetIdDescriptorCallback;
        v18[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v18[7] = a3;
        WdLogGlobalForLineNumber = 2334;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v26);
        goto LABEL_13;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v26);
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v19[4] = i;
    v19[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v19[3] = TopologySetIdDescriptorCallback;
    v19[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v19[7] = a3;
    WdLogGlobalForLineNumber = 2286;
LABEL_13:
    ZwClose(KeyHandle);
  }
  return (unsigned int)TopologySetIdDescriptorCallback;
}
