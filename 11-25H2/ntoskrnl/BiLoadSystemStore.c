/*
 * XREFs of BiLoadSystemStore @ 0x140A288E0
 * Callers:
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     BiLogFileOwnerProcess @ 0x14068C42C (BiLogFileOwnerProcess.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     BiMarkTreatAsSystemStore @ 0x1408022D8 (BiMarkTreatAsSystemStore.c)
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 *     BiIsSystemStore @ 0x140A24C40 (BiIsSystemStore.c)
 *     BiAddStoreFromFile @ 0x140A25948 (BiAddStoreFromFile.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BcdGetSystemStorePath @ 0x140A28A88 (BcdGetSystemStorePath.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiLoadSystemStore(_QWORD *a1)
{
  void *v2; // rdi
  NTSTATUS SystemStorePath; // eax
  void *v4; // rbp
  int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // ebx
  _DWORD *Pool2; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  HANDLE v11; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  void *Src; // [rsp+68h] [rbp+10h] BYREF
  HANDLE BcdStoreHandle; // [rsp+70h] [rbp+18h] BYREF

  BcdStoreHandle = 0LL;
  Src = 0LL;
  DestinationString = 0LL;
  v2 = 0LL;
  SystemStorePath = BcdGetSystemStorePath((PWSTR *)&Src);
  v4 = Src;
  v5 = SystemStorePath;
  if ( SystemStorePath >= 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)Src + v6) );
    v7 = v6 + 1;
    Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL);
    v2 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      Pool2[1] = 2 * v7 + 12;
      Pool2[2] = 3;
      memmove(Pool2 + 3, v4, 2LL * v7);
      v5 = BiAddStoreFromFile((__int64)v2, 0, &BcdStoreHandle);
      if ( v5 >= 0 )
      {
        v11 = BcdStoreHandle;
        v5 = BiMarkTreatAsSystemStore((__int64)BcdStoreHandle, 1);
        if ( v5 >= 0 )
        {
          if ( BiIsSystemStore((__int64)v11) )
          {
            *a1 = v11;
          }
          else
          {
            BiLogMessage();
            BcdCloseStore(v11);
            v5 = -1073741672;
          }
        }
        else
        {
          BiLogMessage();
          BcdCloseStore(v11);
        }
      }
      else
      {
        BiLogMessage();
        if ( v5 == -1073741757 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
          BiLogFileOwnerProcess((__int64)&DestinationString, v9, v10);
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return (unsigned int)v5;
}
