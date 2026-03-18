/*
 * XREFs of NtUserMapPointsByVisualIdentifier @ 0x1401BC710
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserGetLastError @ 0x140155E98 (UserGetLastError.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1401AAF8C (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserMapPointsByVisualIdentifier(
        void *Src,
        void *a2,
        unsigned int a3,
        const void *a4,
        volatile void *Address)
{
  char v8; // r14
  char v9; // bl
  char v10; // di
  __int64 UserSessionState; // rax
  struct _LUID *v12; // r12
  struct VisualPoint *v13; // rsi
  struct VisualPoint *v14; // rbx
  unsigned __int64 v15; // rdi
  struct _LUID *v16; // r13
  ULONG64 v17; // rcx
  struct VisualPoint *v18; // rax
  __int64 v19; // rcx
  struct VisualPoint *v20; // rax
  NTSTATUS v21; // eax
  int v22; // edi
  ULONG v23; // ecx
  __int64 CurrentProcessWow64Process; // rax
  char v25; // si
  int LastError; // ebx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v30; // [rsp+40h] [rbp-A8h]
  struct _LUID *v31; // [rsp+60h] [rbp-88h]
  struct _LUID v32; // [rsp+78h] [rbp-70h] BYREF
  struct _LUID v33; // [rsp+80h] [rbp-68h] BYREF
  __int64 v34; // [rsp+88h] [rbp-60h] BYREF
  __int64 v35; // [rsp+90h] [rbp-58h] BYREF
  struct _LUID *v36; // [rsp+98h] [rbp-50h]

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v9 = 0;
    v8 = 1;
  }
  else
  {
    v8 = 1;
    v9 = 1;
  }
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v10,
      *(_QWORD *)(UserSessionState + 69400),
      4u,
      2u,
      0x66u,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      Src,
      a2);
  }
  v31 = 0LL;
  v12 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 8LL * a3;
  if ( v15 > 0xFFFFFFFF )
    goto LABEL_28;
  if ( !(_DWORD)v15 )
  {
LABEL_27:
    v22 = 1;
    goto LABEL_30;
  }
  if ( Src )
  {
    v32 = 0LL;
    RtlCopyFromUser(&v32, Src, 8uLL);
    v33 = v32;
    v16 = &v33;
    v31 = &v33;
  }
  else
  {
    v16 = 0LL;
  }
  if ( a2 )
  {
    v34 = 0LL;
    RtlCopyFromUser(&v34, a2, 8uLL);
    v35 = v34;
    v12 = (struct _LUID *)&v35;
    v36 = (struct _LUID *)&v35;
  }
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (ULONG64)a4 + (unsigned int)v15;
  if ( v17 > MmUserProbeAddress || v17 < (unsigned __int64)a4 )
  {
    v12 = v36;
    v16 = v31;
  }
  v18 = (struct VisualPoint *)Win32AllocPoolWithQuotaZInitImpl(v17, (unsigned int)v15, 0x766E6355u);
  v13 = v18;
  if ( !v18 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v18, a4, (unsigned int)v15);
  v20 = (struct VisualPoint *)Win32AllocPoolWithQuotaZInitImpl(v19, (unsigned int)v15, 0x766E6355u);
  v14 = v20;
  if ( !v20 )
  {
LABEL_28:
    v22 = 0;
    v23 = 8;
    goto LABEL_29;
  }
  v21 = MapPointsByVisualIdentifierInternal(v16, v12, a3, v13, v20);
  if ( v21 >= 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(Address, (unsigned int)v15, CurrentProcessWow64Process != 0 ? 1 : 4);
    RtlCopyVolatileMemory((void *)Address, v14, (unsigned int)v15);
    goto LABEL_27;
  }
  v22 = 0;
  v23 = RtlNtStatusToDosError(v21);
LABEL_29:
  UserSetLastError(v23);
LABEL_30:
  if ( v13 )
    GreDeleteFastMutex((char *)v13);
  if ( v14 )
    GreDeleteFastMutex((char *)v14);
  if ( !v22 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v28 = W32GetUserSessionState(v27);
      LODWORD(v30) = LastError;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v25,
        *(_QWORD *)(v28 + 69400),
        2u,
        2u,
        0x67u,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v30);
    }
  }
  return v22;
}
