/*
 * XREFs of RaidAdapterProgramCryptoKeyRoutine @ 0x14006A0A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterRequestComplete @ 0x140025020 (RaidAdapterRequestComplete.c)
 *     WPP_SF_qD @ 0x140067D68 (WPP_SF_qD.c)
 *     WPP_SF_qDD @ 0x140067DBC (WPP_SF_qDD.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x14006A2CC (RaidAdapterSendCryptoOperationSynchronously.c)
 */

void __fastcall RaidAdapterProgramCryptoKeyRoutine(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  int v3; // ebp
  PSLIST_ENTRY EntrySList; // r14
  int v5; // r15d
  unsigned __int64 v8; // rbx
  int v9; // eax
  KIRQL v10; // al
  KIRQL v11; // di
  _SLIST_ENTRY *v12; // rbx
  struct _SLIST_ENTRY *Next; // rax
  _SLIST_ENTRY *v14; // rbp
  __int64 v15; // rdi
  _SLIST_ENTRY *v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-38h]
  int v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+28h] [rbp-30h]
  int v22; // [rsp+28h] [rbp-30h]

  v3 = 0;
  EntrySList = 0LL;
  v5 = 0;
  if ( Context )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v20 = *((_DWORD *)Context + 2);
      WPP_SF_qD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x13u,
        (__int64)&WPP_cd59b0b4142e33753252084084bd022f_Traceguids,
        *Context,
        v20);
    }
    v8 = *(_QWORD *)(*Context + 5640LL) + ((unsigned __int64)*((unsigned int *)Context + 2) << 6);
    v9 = RaidAdapterSendCryptoOperationSynchronously(*Context, Context, Context + 2);
    v3 = v9;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v22 = v9;
      LODWORD(v19) = *((_DWORD *)Context + 2);
      WPP_SF_qDD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x14u,
        (__int64)&WPP_cd59b0b4142e33753252084084bd022f_Traceguids,
        *Context,
        v19,
        v22);
    }
    if ( v3 >= 0 )
    {
      v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*Context + 5648LL));
      *(_DWORD *)(v8 + 44) = 2;
      v11 = v10;
      EntrySList = FirstEntrySList((PSLIST_HEADER)(v8 + 48));
      InitializeSListHead((PSLIST_HEADER)(v8 + 48));
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(*Context + 5648LL), v11);
    }
  }
  v12 = 0LL;
  if ( EntrySList )
  {
    do
    {
      Next = EntrySList->Next;
      EntrySList->Next = v12;
      v12 = EntrySList;
      EntrySList = Next;
    }
    while ( Next );
  }
  if ( v3 >= 0 && v12 )
  {
    do
    {
      v14 = v12->Next;
      v15 = (__int64)&v12[-2];
      v12->Next = 0LL;
      v16 = v12 - 2;
      v17 = *Context;
      v12 = v14;
      if ( *(_BYTE *)(*Context + 4370LL) )
        v18 = RaidAdapterRaiseIrqlAndExecuteXrb(v17, v16);
      else
        v18 = RaidAdapterPostScatterGatherExecute(v17, (__int64)v16);
      if ( v18 < 0 )
      {
        *(_BYTE *)(*(_QWORD *)(v15 + 168) + 3LL) = 4;
        RaidAdapterRequestComplete(*Context, v15, 1);
      }
      ++v5;
    }
    while ( v14 );
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(v21) = v5;
    LODWORD(v19) = *((_DWORD *)Context + 2);
    WPP_SF_qDD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x15u,
      (__int64)&WPP_cd59b0b4142e33753252084084bd022f_Traceguids,
      *Context,
      v19,
      v21);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  if ( Context )
    ExFreePoolWithTag(Context, 0x72436152u);
}
