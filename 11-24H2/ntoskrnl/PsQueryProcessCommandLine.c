/*
 * XREFs of PsQueryProcessCommandLine @ 0x1402E1810
 * Callers:
 *     PnpGetProcessCommandLine @ 0x14072BCD4 (PnpGetProcessCommandLine.c)
 *     SeAuditProcessCreation @ 0x1408FD624 (SeAuditProcessCreation.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     MmCopyVirtualMemory @ 0x140993150 (MmCopyVirtualMemory.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        PRKPROCESS PROCESS,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 *ReadyTime; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  unsigned __int16 v14; // r14
  unsigned __int16 v15; // bx
  int v16; // esi
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  BOOLEAN v20; // [rsp+40h] [rbp-C8h]
  int v21; // [rsp+44h] [rbp-C4h]
  __int128 v22; // [rsp+48h] [rbp-C0h]
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v24; // [rsp+60h] [rbp-A8h]
  struct _LIST_ENTRY *Flink; // [rsp+68h] [rbp-A0h]
  PRKPROCESS v26; // [rsp+70h] [rbp-98h]
  __int64 v27; // [rsp+78h] [rbp-90h]
  __int64 v28; // [rsp+80h] [rbp-88h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+88h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-78h] BYREF

  v26 = PROCESS;
  v27 = a2;
  v24 = a5;
  memset(&ApcState, 0, sizeof(ApcState));
  v28 = 0LL;
  v23 = 0LL;
  RunRef = (PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink;
  v20 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
  if ( v20 )
  {
    v22 = 0LL;
    v21 = 0;
    KeStackAttachProcess(PROCESS, &ApcState);
    v9 = 0LL;
    ReadyTime = (__int64 *)PROCESS[1].ReadyTime;
    if ( ReadyTime )
      v9 = *ReadyTime;
    if ( v9 )
    {
      RtlCopyVolatileMemory(&v23, (const void *)(*(unsigned int *)(v9 + 16) + 64LL), 8uLL);
      v15 = v23;
      LODWORD(v22) = v23;
      v14 = WORD1(v23);
      v13 = HIDWORD(v23);
      *((_QWORD *)&v22 + 1) = HIDWORD(v23);
      v16 = 0;
    }
    else
    {
      Blink = PROCESS[1].ProcessListEntry.Blink;
      if ( Blink )
      {
        Flink = Blink[2].Flink;
        v12 = (__int64)&Flink[7];
        if ( (unsigned __int64)&Flink[7] >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        LODWORD(v22) = *(_DWORD *)v12;
        v13 = *(_QWORD *)(v12 + 8);
        *((_QWORD *)&v22 + 1) = v13;
        v14 = HIWORD(*(_DWORD *)v12);
        v15 = *(_DWORD *)v12;
        v16 = 0;
      }
      else
      {
        v16 = -1073741275;
        v21 = -1073741275;
        v13 = 0LL;
        v14 = 0;
        v15 = 0;
      }
    }
    if ( WORD1(v22) )
    {
      if ( (v13 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = v13 + v14;
      if ( v17 > 0x7FFFFFFF0000LL || v17 < v13 )
      {
        v13 = *((_QWORD *)&v22 + 1);
        v14 = WORD1(v22);
        v15 = v22;
        v16 = v21;
      }
    }
    KiUnstackDetachProcess((__int64)&ApcState, 0, v7, v8);
    if ( v16 >= 0 )
    {
      if ( !v15 || v15 > v14 || (v15 & 1) != 0 || (v14 & 1) != 0 || !v13 )
      {
        v16 = -1073741275;
      }
      else
      {
        v18 = v14 + 16;
        if ( v24 )
          *v24 = v18;
        if ( a3 < v18 )
        {
          v16 = -1073741820;
        }
        else
        {
          *(_WORD *)a2 = v15;
          *(_WORD *)(a2 + 2) = v14;
          if ( v14 )
            *(_QWORD *)(a2 + 8) = a2 + 16;
          else
            *(_QWORD *)(a2 + 8) = 0LL;
          v16 = MmCopyVirtualMemory(
                  (_DWORD)PROCESS,
                  DWORD2(v22),
                  KeGetCurrentThread()->ApcState.Process,
                  (int)a2 + 16,
                  WORD1(v22),
                  a4,
                  (__int64)&v28);
          if ( v16 >= 0 )
            v16 = 0;
        }
      }
    }
  }
  else
  {
    v16 = -1073741558;
  }
  if ( v20 )
    ExReleaseRundownProtection_0(RunRef);
  return (unsigned int)v16;
}
