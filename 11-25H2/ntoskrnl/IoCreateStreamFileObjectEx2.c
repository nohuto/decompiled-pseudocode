/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x14099F4B0
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x14099F460 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObject @ 0x14099F800 (IoCreateStreamFileObject.c)
 *     IoCreateStreamFileObjectEx @ 0x140AA83C0 (IoCreateStreamFileObjectEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FED30 (IopDecrementDeviceObjectRef.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041D000 (IopIncrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x14041F710 (IopIncrementVpbRefCount.c)
 *     IopGetSetSpecificExtension @ 0x14042F260 (IopGetSetSpecificExtension.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, ULONG_PTR a3, PVOID *a4, HANDLE *a5)
{
  HANDLE *v5; // r14
  __int16 v6; // bx
  ULONG_PTR v8; // rsi
  __int64 v10; // r9
  NTSTATUS SetSpecificExtension; // r15d
  _QWORD *v12; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  _SLIST_ENTRY *v16; // rdx
  ULONG_PTR v17; // rcx
  PVOID v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-60h]
  _DWORD v20[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  int v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+6Ch] [rbp-14h]
  __int128 v25; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  v5 = a5;
  v6 = *(_WORD *)(a1 + 2) & 2;
  Object = 0LL;
  v20[1] = 0;
  v8 = a3;
  v24 = 0;
  Handle = 0LL;
  *a4 = 0LL;
  if ( v5 )
    *v5 = 0LL;
  if ( *(_WORD *)a1 == 16 )
  {
    if ( v6 && v5 )
    {
      if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
        goto LABEL_26;
    }
    else
    {
      if ( a2 )
      {
        v8 = *(_QWORD *)(a2 + 8);
LABEL_8:
        IopIncrementDeviceObjectRefCount(v8, 1);
        v20[0] = 48;
        v21 = 0LL;
        v23 = 512;
        v22 = 0LL;
        v25 = 0LL;
        LOWORD(a5) = 1;
        SetSpecificExtension = ObCreateObjectEx(0, IoFileObjectType, (int)v20, 0, v19, 216, 216, 0, &Object, &a5);
        if ( SetSpecificExtension < 0 )
        {
          IopDecrementDeviceObjectRef(v8, 0, 0LL, v10);
          if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
            RtlRaiseStatus(SetSpecificExtension);
          return (unsigned int)SetSpecificExtension;
        }
        memset_0(Object, 0, 0xD8uLL);
        *(_WORD *)Object = 5;
        *((_WORD *)Object + 1) = 216;
        *((_QWORD *)Object + 1) = v8;
        *((_DWORD *)Object + 20) = 256;
        KeInitializeEvent((PRKEVENT)((char *)Object + 152), SynchronizationEvent, 0);
        *((_QWORD *)Object + 23) = 0LL;
        v12 = (char *)Object + 192;
        *((_QWORD *)Object + 25) = (char *)Object + 192;
        *v12 = v12;
        if ( v6 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          P = CurrentPrcb->PPLookasideList[4].P;
          v16 = (_SLIST_ENTRY *)*((_QWORD *)Object - 2);
          ++P->TotalFrees;
          if ( LOWORD(P->ListHead.Alignment) < P->Depth
            || (++P->FreeMisses,
                P = CurrentPrcb->PPLookasideList[4].L,
                ++P->TotalFrees,
                LOWORD(P->ListHead.Alignment) < P->Depth) )
          {
            RtlpInterlockedPushEntrySList(&P->ListHead, v16);
          }
          else
          {
            ++P->FreeMisses;
            if ( (void (__stdcall *)(PVOID))P->FreeEx == ExFreePool )
              ExFreePool(v16);
            else
              guard_dispatch_icall_no_overrides(v16);
          }
          *((_QWORD *)Object - 2) = 0LL;
        }
        else
        {
          result = ObInsertObjectEx((char *)Object, 0LL, 1, 1, 0, &Object, (__int64)&Handle);
          SetSpecificExtension = result;
          if ( (int)result < 0 )
          {
            if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
              RtlRaiseStatus(result);
            return result;
          }
        }
        *((_DWORD *)Object + 20) |= 0x40000u;
        v17 = *(_QWORD *)(v8 + 56);
        if ( v17 )
          IopIncrementVpbRefCount(v17, 1);
        if ( !v6 )
        {
          if ( v5 )
          {
            v18 = Object;
            *v5 = Handle;
            ObfDereferenceObject(v18);
          }
          else
          {
            ObCloseHandle(Handle, 0);
          }
        }
        if ( *(_QWORD *)(a1 + 8) )
        {
          a5 = 0LL;
          SetSpecificExtension = IopGetSetSpecificExtension((__int64)Object, 1, 32LL, 1, &a5, 0LL);
          if ( SetSpecificExtension < 0 )
          {
            if ( v5 )
            {
              ObCloseHandle(*v5, 0);
              *v5 = 0LL;
            }
            else
            {
              ObfDereferenceObject(Object);
            }
            if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
              RtlRaiseStatus(SetSpecificExtension);
            return (unsigned int)SetSpecificExtension;
          }
          *a5 = *(HANDLE *)(a1 + 8);
        }
        *a4 = Object;
        return (unsigned int)SetSpecificExtension;
      }
      if ( a3 )
        goto LABEL_8;
      if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
LABEL_26:
        RtlRaiseStatus(-1073741811);
    }
    return 3221225485LL;
  }
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(-1073741637);
  return 3221225659LL;
}
