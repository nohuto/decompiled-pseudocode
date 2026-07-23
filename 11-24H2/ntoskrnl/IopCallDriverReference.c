/*
 * XREFs of IopCallDriverReference @ 0x14025C740
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  unsigned int v20; // edi
  signed __int64 v21; // rax
  bool v22; // cc
  signed __int64 BugCheckParameter4; // rax
  struct _KTHREAD *v25; // rax
  struct _LIST_ENTRY *Flink; // rbx
  int v27; // eax
  PETHREAD Thread; // rdx
  PETHREAD v29; // r8
  __int128 v30; // [rsp+30h] [rbp-48h] BYREF

  if ( !a3 )
    ObfReferenceObjectWithTag(a4, 0x746C6644u);
  v9 = a4[26];
  v10 = 2;
  if ( v9 && (v27 = *(_DWORD *)(v9 + 88)) != 0 )
  {
    v15 = v27 << 17;
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
    || (v29 = Irp->Tail.Overlay.Thread) == 0LL
    || !LODWORD(v29[1].Timer.TimerListEntry.Flink) )
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
    v30 = 0LL;
    v30 = *(_OWORD *)(v19 + 24);
    v25 = KeGetCurrentThread();
    Flink = v25[1].WaitBlock[1].WaitListEntry.Flink;
    v25[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v30;
    v20 = IofCallDriver(DeviceObject, Irp);
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = Flink;
  }
  else
  {
    v20 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a3 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)a4 - 48);
    v21 = _InterlockedExchangeAdd64(a4 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v22 = v21 <= 1;
    BugCheckParameter4 = v21 - 1;
    if ( v22 )
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
      ObpDeferObjectDeletion(a4 - 6);
    }
  }
  return v20;
}
