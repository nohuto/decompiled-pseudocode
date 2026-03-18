/*
 * XREFs of NtUserGetIconInfo @ 0x1400779B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140077EA8 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x140077F7C (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 */

_BOOL8 __fastcall NtUserGetIconInfo(
        __int64 a1,
        ULONG64 a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        int a6)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  struct tagCURSOR *v12; // rax
  _DWORD *v13; // rdx
  ULONG64 v14; // rcx
  __int64 v15; // r8
  struct tagCURSOR *VirtualizedDpiCursor; // r13
  ULONG64 v17; // rdx
  ULONG64 v18; // rcx
  _BYTE *v19; // rdx
  BOOL IconInfo; // ebx
  struct _UNICODE_STRING *v22; // [rsp+40h] [rbp-78h]
  struct _UNICODE_STRING *v23; // [rsp+48h] [rbp-70h]
  __int128 v24; // [rsp+60h] [rbp-58h] BYREF
  __int128 v25; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v26[16]; // [rsp+90h] [rbp-28h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v26);
  v10 = 3LL;
  LOBYTE(v11) = 3;
  v12 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(a1, v11);
  if ( v12 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v12);
    if ( a3 )
    {
      v18 = (ULONG64)a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v18 = MmUserProbeAddress;
      LODWORD(v24) = *(_DWORD *)v18;
      *((_QWORD *)&v24 + 1) = *(_QWORD *)(v18 + 8);
      ProbeForWrite(*((volatile void **)&v24 + 1), WORD1(v24), 2u);
      v23 = (struct _UNICODE_STRING *)&v24;
    }
    else
    {
      v23 = 0LL;
    }
    if ( a4 )
    {
      v17 = (ULONG64)a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v17 = MmUserProbeAddress;
      LODWORD(v25) = *(_DWORD *)v17;
      *((_QWORD *)&v25 + 1) = *(_QWORD *)(v17 + 8);
      ProbeForWrite(*((volatile void **)&v25 + 1), WORD1(v25), 2u);
      v22 = (struct _UNICODE_STRING *)&v25;
    }
    else
    {
      v22 = 0LL;
    }
    if ( a5 )
    {
      v14 = MmUserProbeAddress;
      v13 = a5;
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = *v13;
    }
    if ( PsGetCurrentProcessWow64Process(v14, v13, v15) )
      v10 = 0LL;
    if ( (v10 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v19 = (_BYTE *)MmUserProbeAddress;
    *v19 = *v19;
    v19[31] = v19[31];
    IconInfo = _InternalGetIconInfo(VirtualizedDpiCursor, (struct _ICONINFO *)a2, v23, v22, a5, a6 != 0);
    if ( a3 )
    {
      *(_DWORD *)(&v23->MaximumLength + 1) = 0;
      *a3 = *v23;
    }
    if ( a4 )
    {
      *(_DWORD *)(&v22->MaximumLength + 1) = 0;
      *a4 = *v22;
    }
  }
  else
  {
    IconInfo = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v26);
  UserSessionSwitchLeaveCrit();
  return IconInfo;
}
