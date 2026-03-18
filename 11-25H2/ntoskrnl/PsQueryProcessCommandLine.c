/*
 * XREFs of PsQueryProcessCommandLine @ 0x140461E70
 * Callers:
 *     PnpGetProcessCommandLine @ 0x140721D44 (PnpGetProcessCommandLine.c)
 *     SeAuditProcessCreation @ 0x1408F435C (SeAuditProcessCreation.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     MmCopyVirtualMemory @ 0x1409C5330 (MmCopyVirtualMemory.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        PRKPROCESS PROCESS,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  __int64 v7; // rax
  __int64 *ReadyTime; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // bx
  int v14; // esi
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  BOOLEAN v18; // [rsp+40h] [rbp-C8h]
  int v19; // [rsp+44h] [rbp-C4h]
  __int128 v20; // [rsp+48h] [rbp-C0h]
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v22; // [rsp+60h] [rbp-A8h]
  struct _LIST_ENTRY *Flink; // [rsp+68h] [rbp-A0h]
  PRKPROCESS v24; // [rsp+70h] [rbp-98h]
  __int64 v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+88h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-78h] BYREF

  v24 = PROCESS;
  v25 = a2;
  v22 = a5;
  memset(&ApcState, 0, sizeof(ApcState));
  v26 = 0LL;
  v21 = 0LL;
  RunRef = (PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink;
  v18 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
  if ( v18 )
  {
    v20 = 0LL;
    v19 = 0;
    KeStackAttachProcess(PROCESS, &ApcState);
    v7 = 0LL;
    ReadyTime = (__int64 *)PROCESS[1].ReadyTime;
    if ( ReadyTime )
      v7 = *ReadyTime;
    if ( v7 )
    {
      RtlCopyVolatileMemory(&v21, (const void *)(*(unsigned int *)(v7 + 16) + 64LL), 8uLL);
      v13 = v21;
      LODWORD(v20) = v21;
      v12 = WORD1(v21);
      v11 = HIDWORD(v21);
      *((_QWORD *)&v20 + 1) = HIDWORD(v21);
      v14 = 0;
    }
    else
    {
      Blink = PROCESS[1].ProcessListEntry.Blink;
      if ( Blink )
      {
        Flink = Blink[2].Flink;
        v10 = (__int64)&Flink[7];
        if ( (unsigned __int64)&Flink[7] >= 0x7FFFFFFF0000LL )
          v10 = 0x7FFFFFFF0000LL;
        LODWORD(v20) = *(_DWORD *)v10;
        v11 = *(_QWORD *)(v10 + 8);
        *((_QWORD *)&v20 + 1) = v11;
        v12 = HIWORD(*(_DWORD *)v10);
        v13 = *(_DWORD *)v10;
        v14 = 0;
      }
      else
      {
        v14 = -1073741275;
        v19 = -1073741275;
        v11 = 0LL;
        v12 = 0;
        v13 = 0;
      }
    }
    if ( WORD1(v20) )
    {
      if ( (v11 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v11 + v12;
      if ( v15 > 0x7FFFFFFF0000LL || v15 < v11 )
      {
        v11 = *((_QWORD *)&v20 + 1);
        v12 = WORD1(v20);
        v13 = v20;
        v14 = v19;
      }
    }
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    if ( v14 >= 0 )
    {
      if ( !v13 || v13 > v12 || (v13 & 1) != 0 || (v12 & 1) != 0 || !v11 )
      {
        v14 = -1073741275;
      }
      else
      {
        v16 = v12 + 16;
        if ( v22 )
          *v22 = v16;
        if ( a3 < v16 )
        {
          v14 = -1073741820;
        }
        else
        {
          *(_WORD *)a2 = v13;
          *(_WORD *)(a2 + 2) = v12;
          if ( v12 )
            *(_QWORD *)(a2 + 8) = a2 + 16;
          else
            *(_QWORD *)(a2 + 8) = 0LL;
          v14 = MmCopyVirtualMemory(
                  (_DWORD)PROCESS,
                  DWORD2(v20),
                  KeGetCurrentThread()->ApcState.Process,
                  (int)a2 + 16,
                  WORD1(v20),
                  a4,
                  (__int64)&v26);
          if ( v14 >= 0 )
            v14 = 0;
        }
      }
    }
  }
  else
  {
    v14 = -1073741558;
  }
  if ( v18 )
    ExReleaseRundownProtection_0(RunRef);
  return (unsigned int)v14;
}
