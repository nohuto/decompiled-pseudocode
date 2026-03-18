/*
 * XREFs of NtUserGetPointerDeviceCursors @ 0x1C01D2600
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _GetPointerDeviceCursors @ 0x1C01C2FCC (_GetPointerDeviceCursors.c)
 */

__int64 __fastcall NtUserGetPointerDeviceCursors(__int64 a1, unsigned int *a2, volatile void *a3)
{
  unsigned int *v4; // rdi
  ULONG64 v6; // rdx
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rsi
  int PointerDeviceCursors; // ebx
  unsigned int *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17[7]; // [rsp+40h] [rbp-38h] BYREF
  char v18; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v17[0] = 0LL;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  if ( !a1 || !v4 )
  {
    v8 = 87;
    goto LABEL_21;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, v17, 0LL) )
  {
    v8 = 6;
LABEL_21:
    PointerDeviceCursors = 0;
    UserSetLastError(v8);
    goto LABEL_22;
  }
  v9 = *(unsigned int *)(v17[0] + 1036);
  if ( a3 )
  {
    v11 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v11 = (unsigned int *)MmUserProbeAddress;
    v19 = *v11;
    if ( v19 >= (unsigned int)v9 )
    {
      ProbeForWrite(a3, 8 * v9, 8u);
      PointerDeviceCursors = GetPointerDeviceCursors(v17[0], v9, (__int64)a3);
      if ( PointerDeviceCursors )
      {
        v6 = MmUserProbeAddress;
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (unsigned int *)MmUserProbeAddress;
        *v4 = v9;
      }
    }
    else
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (unsigned int *)MmUserProbeAddress;
      *v4 = v9;
      PointerDeviceCursors = 0;
      UserSetLastError(122);
    }
  }
  else
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    *v4 = v9;
    PointerDeviceCursors = 1;
  }
LABEL_22:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18, v6, v7);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return PointerDeviceCursors;
}
