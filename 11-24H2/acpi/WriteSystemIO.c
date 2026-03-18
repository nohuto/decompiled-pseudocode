/*
 * XREFs of WriteSystemIO @ 0x140021A80
 * Callers:
 *     DebugOutPort @ 0x14006E040 (DebugOutPort.c)
 * Callees:
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void __fastcall WriteSystemIO(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // rsi
  char v6; // r15
  __int64 i; // rbx
  __int64 v8; // rdi
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD, unsigned int *); // rax
  struct _DEVICE_OBJECT *v15; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  _DWORD *Pool2; // rax
  unsigned int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v3 = a3;
  v4 = a1;
  v6 = 1;
  if ( gpBadIOAddressList )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v8 = 24 * i;
      v9 = *((_DWORD *)gpBadIOAddressList + 6 * i + 1);
      if ( !v9 )
        goto LABEL_7;
      v10 = *(_DWORD *)((char *)gpBadIOAddressList + v8);
      if ( (unsigned int)v4 >= v10 && (unsigned int)v4 < v9 + v10 )
        break;
    }
    if ( *(_DWORD *)((char *)gpBadIOAddressList + v8 + 8) > (unsigned int)gdwHighestOSVerQueried )
    {
      PrintDebugMessage(0x18u, (const void *)v4, 0LL, 0LL, 0LL);
      v14 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned int *))((char *)gpBadIOAddressList + v8 + 16);
      if ( v14 )
      {
        v6 = 0;
        v14(0LL, (unsigned int)v4, a2, &v18);
        PrintDebugMessage(0x17u, "write", (const void *)v4, "Wrote", (const void *)v18);
      }
    }
    else
    {
      v6 = 0;
      PrintDebugMessage(0x19u, (const void *)v4, 0LL, 0LL, 0LL);
    }
    if ( RootDeviceExtension && (v15 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 768)) != 0LL )
    {
      WorkItem = IoAllocateWorkItem(v15);
      if ( WorkItem )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1231842625LL);
        if ( Pool2 )
        {
          *(_BYTE *)Pool2 = 0;
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
        goto LABEL_16;
      }
      v13 = 21;
    }
    else
    {
      v13 = 22;
    }
    PrintDebugMessage(v13, 0LL, 0LL, 0LL, 0LL);
LABEL_16:
    if ( !v6 )
      return;
    v3 = v18;
  }
LABEL_7:
  v11 = a2 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 2 )
        __outdword(v4, v3);
    }
    else
    {
      __outword(v4, v3);
    }
  }
  else
  {
    __outbyte(v4, v3);
  }
}
