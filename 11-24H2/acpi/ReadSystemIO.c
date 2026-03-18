/*
 * XREFs of ReadSystemIO @ 0x140025950
 * Callers:
 *     AccessBaseField @ 0x14000C680 (AccessBaseField.c)
 *     DebugInPort @ 0x14006DD70 (DebugInPort.c)
 * Callees:
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReadSystemIO(unsigned int a1, unsigned int a2, int a3)
{
  unsigned __int32 v3; // r14d
  unsigned __int64 v4; // rsi
  char v7; // r13
  unsigned int i; // ebx
  __int64 v9; // rdi
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned __int8 v13; // al
  unsigned __int16 v15; // ax
  unsigned __int32 v16; // eax
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, _QWORD, _QWORD, unsigned __int32 *); // rax
  struct _DEVICE_OBJECT *v19; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  _DWORD *Pool2; // rax
  unsigned __int32 v22; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a1;
  v22 = 0;
  v7 = 1;
  if ( gpBadIOAddressList )
  {
    for ( i = 0; ; ++i )
    {
      v9 = 24LL * i;
      v10 = *(_DWORD *)((char *)gpBadIOAddressList + v9 + 4);
      if ( !v10 )
        goto LABEL_13;
      v11 = *(_DWORD *)((char *)gpBadIOAddressList + v9);
      if ( (unsigned int)v4 >= v11 && (unsigned int)v4 < v10 + v11 )
        break;
    }
    if ( *(_DWORD *)((char *)gpBadIOAddressList + v9 + 8) > (unsigned int)gdwHighestOSVerQueried )
    {
      PrintDebugMessage(0x18u, (const void *)v4, 0LL, 0LL, 0LL);
      v18 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int32 *))((char *)gpBadIOAddressList + v9 + 16);
      if ( v18 )
      {
        v7 = 0;
        LOBYTE(v17) = 1;
        v18(v17, (unsigned int)v4, a2, &v22);
        PrintDebugMessage(0x17u, "read", (const void *)v4, "Read", (const void *)v22);
      }
    }
    else
    {
      v7 = 0;
      PrintDebugMessage(0x19u, (const void *)v4, 0LL, 0LL, 0LL);
    }
    if ( RootDeviceExtension && (v19 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 768)) != 0LL )
    {
      WorkItem = IoAllocateWorkItem(v19);
      if ( WorkItem )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1231842625LL);
        if ( Pool2 )
        {
          *(_BYTE *)Pool2 = 1;
          Pool2[1] = v4;
          Pool2[2] = i;
          *((_QWORD *)Pool2 + 2) = WorkItem;
          IoQueueWorkItem(WorkItem, DelayedLogInErrorLog, DelayedWorkQueue, Pool2);
        }
        else
        {
          PrintDebugMessage(0x14u, 0LL, 0LL, 0LL, 0LL);
          IoFreeWorkItem(WorkItem);
        }
LABEL_12:
        v3 = v22;
        if ( !v7 )
          return a3 & v3;
        goto LABEL_13;
      }
      v12 = 21;
    }
    else
    {
      v12 = 22;
    }
    PrintDebugMessage(v12, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_12;
  }
LABEL_13:
  switch ( a2 )
  {
    case 1u:
      v13 = __inbyte(v4);
      v3 = v13;
      break;
    case 2u:
      v15 = __inword(v4);
      v3 = v15;
      break;
    case 4u:
      v16 = __indword(v4);
      v3 = v16;
      break;
  }
  return a3 & v3;
}
