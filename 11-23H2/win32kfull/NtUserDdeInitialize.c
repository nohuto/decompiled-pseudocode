/*
 * XREFs of NtUserDdeInitialize @ 0x1C008A980
 * Callers:
 *     <none>
 * Callees:
 *     xxxCsDdeInitialize @ 0x1C008AA7C (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C009ED40 (xxxDestroyThreadDDEObject.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  ULONG64 v9; // rdx
  ULONG64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v15 = 0;
  EnterCrit(0LL, 0LL);
  v11 = xxxCsDdeInitialize((unsigned int)&v16, (unsigned int)&v17, (unsigned int)&v15, a4, a5);
  if ( !v11 )
  {
    v9 = MmUserProbeAddress;
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = v16;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v17;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = v15;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
  return v11;
}
