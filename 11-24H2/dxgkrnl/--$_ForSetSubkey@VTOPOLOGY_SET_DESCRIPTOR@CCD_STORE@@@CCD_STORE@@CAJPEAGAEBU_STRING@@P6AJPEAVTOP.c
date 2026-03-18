/*
 * XREFs of ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x14033E948
 * Callers:
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x14033E89C (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14031B404 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x14033E634 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x14033F138 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1403422B8 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4,
        char a5)
{
  NTSTATUS v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  ULONG *v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  int v19; // eax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Disposition; // [rsp+4Ch] [rbp-B4h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v24; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES v27; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v29[80]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v30; // [rsp+140h] [rbp+40h] BYREF
  int v31; // [rsp+148h] [rbp+48h]

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
  v8 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  LODWORD(v9) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v8,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
      a2,
      a3,
      a4);
    WdLogGlobalForLineNumber = 2379;
  }
  else
  {
    Handle = 0LL;
    v24 = 0LL;
    v10 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v24, a2);
    LODWORD(v9) = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v10,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
        a2,
        a3,
        a4);
      WdLogGlobalForLineNumber = 2401;
    }
    else
    {
      v21 = 2;
      *(_QWORD *)&v27.Length = 48LL;
      v11 = (ULONG *)((unsigned __int64)&v21 & -(__int64)(a5 != 0));
      *(_QWORD *)&v27.Attributes = 576LL;
      v27.RootDirectory = KeyHandle;
      v27.ObjectName = &v24;
      *(_OWORD *)&v27.SecurityDescriptor = 0LL;
      if ( v11 )
        v12 = ZwCreateKey(&Handle, 0xF003Fu, &v27, 0, 0LL, 0, v11);
      else
        v12 = ZwOpenKey(&Handle, 0xF003Fu, &v27);
      LODWORD(v9) = v12;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24.Buffer);
      v24 = 0LL;
      if ( (int)v9 < 0 )
      {
        WdLogSingleEntry5(
          3LL,
          (int)v9,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
          a2,
          a3,
          a4);
        WdLogGlobalForLineNumber = 2421;
      }
      else if ( v21 == 1
             && (v31 = *(_DWORD *)L"d",
                 ValueName.Buffer = (wchar_t *)&v30,
                 v30 = *(_QWORD *)L"SetId",
                 *(_QWORD *)&ValueName.Length = 786442LL,
                 v19 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2),
                 v9 = v19,
                 v19 < 0) )
      {
        ZwClose(Handle);
        WdLogSingleEntry5(
          2LL,
          v9,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
          a2,
          a3,
          a4);
        WdLogGlobalForLineNumber = 2446;
      }
      else
      {
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
          (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v29,
          Handle,
          a2);
        v9 = a3(v29, a4);
        ZwClose(Handle);
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
        v17[3] = v9;
        v17[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v17[5] = a2;
        v17[6] = a3;
        v17[7] = a4;
        if ( (int)v9 >= 0 )
          WdLogGlobalForLineNumber = 2476;
        else
          WdLogGlobalForLineNumber = 2466;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v29);
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v9;
}
