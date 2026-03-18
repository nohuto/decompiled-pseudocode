/*
 * XREFs of NtUserBuildNameList @ 0x140194E30
 * Callers:
 *     <none>
 * Callees:
 *     _BuildNameList @ 0x140194F68 (_BuildNameList.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserBuildNameList(__int64 a1, unsigned int a2, volatile void *a3, _DWORD *a4)
{
  PVOID v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // rdx
  int v9; // ebx
  PVOID Object; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF
  volatile void *Address; // [rsp+80h] [rbp+18h]
  _DWORD *v15; // [rsp+88h] [rbp+20h]

  v15 = a4;
  Address = a3;
  v13 = 0;
  Object = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  if ( a2 < 0xC )
  {
    v9 = -1073741816;
  }
  else
  {
    v7 = v15;
    if ( (unsigned __int64)v15 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    ProbeForWrite(Address, a2, 4u);
    if ( a1 )
    {
      LOBYTE(v8) = 1;
      v9 = ValidateHwinsta(a1, v8, 1LL, &Object);
    }
    else
    {
      v9 = 0;
    }
    if ( v9 < 0 )
    {
      *((_WORD *)Address + 4) = 0;
      *(_DWORD *)Address = 1;
    }
    else
    {
      v9 = BuildNameList(Object, Address, a2, &v13);
      *v15 = v13;
      v6 = Object;
      if ( Object )
        ObfDereferenceObject(Object);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return (unsigned int)v9;
}
