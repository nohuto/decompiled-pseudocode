/*
 * XREFs of NtUserBuildNameList @ 0x1C008B9B0
 * Callers:
 *     <none>
 * Callees:
 *     _BuildNameList @ 0x1C008BAC0 (_BuildNameList.c)
 */

__int64 __fastcall NtUserBuildNameList(__int64 a1, __int64 a2, _WORD *a3, _DWORD *a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rdx
  PVOID v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rdx
  int v13; // ebx
  PVOID Object[7]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v6 = a2;
  v16 = 0;
  Object[0] = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( v6 < 0xC )
  {
    v13 = -1073741816;
  }
  else
  {
    v12 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    ProbeForWrite(a3, v6, 4u);
    if ( a1 )
    {
      LOBYTE(v8) = 1;
      v13 = ValidateHwinsta(a1, v8, 1LL, Object);
    }
    else
    {
      v13 = 0;
    }
    if ( v13 < 0 )
    {
      a3[4] = 0;
      *(_DWORD *)a3 = 1;
    }
    else
    {
      v13 = BuildNameList(Object[0], a3, v6, &v16);
      *a4 = v16;
      v9 = Object[0];
      if ( Object[0] )
        ObfDereferenceObject(Object[0]);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return (unsigned int)v13;
}
