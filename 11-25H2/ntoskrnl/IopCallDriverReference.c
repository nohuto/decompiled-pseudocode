/*
 * XREFs of IopCallDriverReference @ 0x14035D040
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall IopCallDriverReference(PDEVICE_OBJECT DeviceObject, PIRP Irp, char a3, _QWORD *a4, int a5)
{
  __int64 v9; // rax
  int v10; // edx
  struct _KTHREAD *CurrentThread; // r8
  int v12; // eax
  unsigned __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  ULONG v16; // ecx
  ULONG v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // r8
  __int64 v23; // r9
  signed __int64 v24; // rax
  bool v25; // cc
  signed __int64 BugCheckParameter4; // rax
  struct _KTHREAD *v28; // rax
  struct _LIST_ENTRY *Flink; // rbx
  int v30; // eax
  PETHREAD Thread; // rdx
  PETHREAD v32; // r8
  __int128 v33; // [rsp+30h] [rbp-48h] BYREF

  if ( !a3 )
    ObfReferenceObjectWithTag(a4, 0x746C6644u);
  v9 = a4[26];
  v10 = 2;
  if ( v9 && (v30 = *(_DWORD *)(v9 + 88)) != 0 )
  {
    v15 = v30 << 17;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v12 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
    v13 = CurrentThread->Process[1].Padding[3];
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 1084);
      if ( v12 >= v14 )
        v12 = v14;
    }
    if ( v12 < 2 && CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
      v12 = 2;
    v15 = (v12 << 17) + 0x20000;
  }
  v16 = Irp->Flags & 0xFFF1FFFF;
  v17 = v16 | v15;
  Irp->Flags = v16;
  Irp->Flags = v17;
  v18 = (v17 >> 17) & 7;
  if ( !v18
    || (v10 = v18 - 1, v18 - 1 >= 2)
    || (v32 = Irp->Tail.Overlay.Thread) == 0LL
    || !LODWORD(v32[1].Timer.TimerListEntry.Flink) )
  {
    if ( v10 < 2 )
    {
      if ( Irp->RequestorMode
        || (Thread = Irp->Tail.Overlay.Thread) != 0LL
        && ((Thread->MiscFlags & 0x400) != 0 || (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) != 0) )
      {
        if ( a5 )
        {
          if ( a5 == 1 )
            ++IoLowPriorityWriteOperationCount;
        }
        else
        {
          ++IoLowPriorityReadOperationCount;
        }
      }
      else
      {
        ++IoKernelIssuedIoBoostedCount;
        Irp->Flags = v17 & 0xFFF1FFFF | 0x60000;
      }
    }
  }
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v19 = *((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0
    && (*(_BYTE *)v19 & 2) != 0 )
  {
    v33 = 0LL;
    v33 = *(_OWORD *)(v19 + 24);
    v28 = KeGetCurrentThread();
    Flink = v28[1].WaitBlock[1].WaitListEntry.Flink;
    v28[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v33;
    v21 = IofCallDriver(DeviceObject, Irp);
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = Flink;
  }
  else
  {
    v21 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a3 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)(a4 - 6), 0, 1u, 0x746C6644u);
    v24 = _InterlockedExchangeAdd64(a4 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v25 = v24 <= 1;
    BugCheckParameter4 = v24 - 1;
    if ( v25 )
    {
      if ( *(a4 - 5) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)a4 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a4 - 48) >> 8)],
          (ULONG_PTR)a4,
          3uLL,
          *(a4 - 5));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)a4, 4uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(a4 - 6, v20, v22, v23);
    }
  }
  return v21;
}
