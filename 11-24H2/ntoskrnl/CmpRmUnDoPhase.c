/*
 * XREFs of CmpRmUnDoPhase @ 0x1407E10E8
 * Callers:
 *     CmpStartRMLog @ 0x140AE7164 (CmpStartRMLog.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenTransaction @ 0x1406A9B10 (ZwOpenTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommit @ 0x140A008C8 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x140A013B8 (CmpTransMgrPrepare.c)
 *     CmpTransMgrRollback @ 0x140A02990 (CmpTransMgrRollback.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmListGetNextElement @ 0x140BBB940 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpRmUnDoPhase(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+28h] [rbp-39h]
  _BYTE v9[4]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v10[3]; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v11; // [rsp+48h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v10, 0, sizeof(v10));
  memset(&ObjectAttributes, 0, 44);
  v9[0] = 0;
  memset(&ApcState, 0, sizeof(ApcState));
LABEL_2:
  v11 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement(a1 + 16, &v11, 0LL);
    v4 = (_QWORD *)result;
    if ( !result )
      return result;
    if ( (*(_DWORD *)(result + 48) & 2) != 0 )
    {
      CmpTransMgrRollback(result, v10);
      CmpAttachToRegistryProcess(&ApcState);
LABEL_12:
      CmpTransMgrFreeVolatileData((ULONG_PTR)v4);
      CmpDetachFromRegistryProcess(&ApcState);
      v6 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v7 = (_QWORD *)v4[1], (_QWORD *)*v7 != v4) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_2;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction((PHANDLE)&v10[1], 0x1F003Fu, &ObjectAttributes, (LPGUID)(result + 88), (HANDLE)(v3 & v8)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, v4, v10, v9) < 0 || (int)CmpTransMgrCommit(v5, v4, v10) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_2;
      }
      CmpAttachToRegistryProcess(&ApcState);
      goto LABEL_12;
    }
    ZwClose(*(HANDLE *)&v10[1]);
  }
}
