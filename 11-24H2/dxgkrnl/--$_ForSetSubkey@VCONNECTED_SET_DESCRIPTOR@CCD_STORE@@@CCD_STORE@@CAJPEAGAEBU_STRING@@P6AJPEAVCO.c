/*
 * XREFs of ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x14033ECE4
 * Callers:
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x140340FF4 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x140341C24 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x14033E72C (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x14033F138 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1403422B8 (_CcdWriteStrValueToRegistry.c)
 *     ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x1403E5D14 (--1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4)
{
  NTSTATUS v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  int v16; // eax
  ULONG v17; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Disposition; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _OBJECT_ATTRIBUTES v25; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v26[112]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v27; // [rsp+160h] [rbp+60h] BYREF
  int v28; // [rsp+168h] [rbp+68h]

  KeyHandle = 0LL;
  Disposition = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  LODWORD(v8) = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v7,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
      a2,
      a3,
      a4);
    WdLogGlobalForLineNumber = 2379;
  }
  else
  {
    Handle = 0LL;
    v21 = 0LL;
    v9 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v21, a2);
    LODWORD(v8) = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        v9,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
        a2,
        a3,
        a4);
      WdLogGlobalForLineNumber = 2401;
    }
    else
    {
      v25.RootDirectory = KeyHandle;
      v17 = 2;
      v25.ObjectName = &v21;
      *(_QWORD *)&v25.Length = 48LL;
      *(_QWORD *)&v25.Attributes = 576LL;
      *(_OWORD *)&v25.SecurityDescriptor = 0LL;
      v8 = ZwCreateKey(&Handle, 0xF003Fu, &v25, 0, 0LL, 0, &v17);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21.Buffer);
      v21 = 0LL;
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry5(
          3LL,
          v8,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
          a2,
          a3,
          a4);
        WdLogGlobalForLineNumber = 2421;
      }
      else if ( v17 == 1
             && (v28 = *(_DWORD *)L"d",
                 ValueName.Buffer = (wchar_t *)&v27,
                 v27 = *(_QWORD *)L"SetId",
                 *(_QWORD *)&ValueName.Length = 786442LL,
                 v16 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2),
                 v8 = v16,
                 v16 < 0) )
      {
        ZwClose(Handle);
        WdLogSingleEntry5(
          2LL,
          v8,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
          a2,
          a3,
          a4);
        WdLogGlobalForLineNumber = 2446;
      }
      else
      {
        CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR(
          (CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v26,
          Handle,
          a2);
        v8 = a3(v26, a4);
        ZwClose(Handle);
        v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
        v14[3] = v8;
        v14[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
        v14[5] = a2;
        v14[6] = a3;
        v14[7] = a4;
        if ( (int)v8 >= 0 )
          WdLogGlobalForLineNumber = 2476;
        else
          WdLogGlobalForLineNumber = 2466;
        CCD_STORE::CONNECTED_SET_DESCRIPTOR::~CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v26);
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v8;
}
