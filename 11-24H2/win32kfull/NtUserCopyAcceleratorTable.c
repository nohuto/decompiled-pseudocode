/*
 * XREFs of NtUserCopyAcceleratorTable @ 0x1401C7110
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserCopyAcceleratorTable(__int64 a1, char *a2, int a3)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 CurrentProcessWow64Process; // rax
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-58h]
  unsigned int v17; // [rsp+24h] [rbp-54h]
  _BYTE v18[16]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v19[48]; // [rsp+48h] [rbp-30h] BYREF
  int v22; // [rsp+90h] [rbp+18h]

  v4 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v18, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v19);
  LOBYTE(v5) = 8;
  v8 = HMValidateHandleWithDescriptor(a1, v5);
  if ( v8 )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a3 > 0x2AAAAAAAAAAAAAAALL )
        ExRaiseAccessViolation();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v6, v9);
      ProbeForWrite(a2, 6LL * a3, 2 - (CurrentProcessWow64Process != 0));
      v11 = a3;
      if ( a3 > *(_DWORD *)(v8 + 24) )
        v11 = *(_DWORD *)(v8 + 24);
      v22 = v11;
      v12 = v11;
      v17 = v11;
      v16 = 0;
      while ( v4 < v11 )
      {
        v13 = 3LL * v4;
        *(_BYTE *)(v8 + 2 * v13 + 29) = 0;
        *(_DWORD *)&a2[2 * v13] = *(_DWORD *)(v8 + 6LL * v4 + 28);
        *(_WORD *)&a2[2 * v13 + 4] = *(_WORD *)(v8 + 6LL * v4 + 32);
        a2[2 * v13] &= ~0x80u;
        v4 = ++v16;
        v11 = v22;
        v12 = v17;
      }
    }
    else
    {
      v12 = *(_DWORD *)(v8 + 24);
    }
  }
  else
  {
    v12 = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19);
  UserSessionSwitchLeaveCrit(v14);
  return v12;
}
