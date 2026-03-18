/*
 * XREFs of BiLoadSystemStore @ 0x14085F450
 * Callers:
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     BiLogFileOwnerProcess @ 0x14069777C (BiLogFileOwnerProcess.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     BiMarkTreatAsSystemStore @ 0x140811E50 (BiMarkTreatAsSystemStore.c)
 *     BiIsSystemStore @ 0x14085E2C0 (BiIsSystemStore.c)
 *     BiAddStoreFromFile @ 0x14085E3B8 (BiAddStoreFromFile.c)
 *     BcdCloseStore @ 0x14085EED8 (BcdCloseStore.c)
 *     BcdGetSystemStorePath @ 0x14085F5F8 (BcdGetSystemStorePath.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiLoadSystemStore(__int64 *a1)
{
  void *v2; // rdi
  int SystemStorePath; // eax
  void *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rsi
  int v14; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  void *Src; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = 0LL;
  Src = 0LL;
  DestinationString = 0LL;
  v2 = 0LL;
  SystemStorePath = BcdGetSystemStorePath(&Src);
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
      v9 = Pool2 + 3;
      *Pool2 = 1;
      Pool2[1] = 2 * v7 + 12;
      Pool2[2] = 3;
      memmove(Pool2 + 3, v4, 2LL * v7);
      v10 = BiAddStoreFromFile((__int64)v2, 0, &v18);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v13 = v18;
        v14 = BiMarkTreatAsSystemStore(v18, 1);
        v5 = v14;
        if ( v14 >= 0 )
        {
          if ( BiIsSystemStore(v13) )
          {
            *a1 = v13;
          }
          else
          {
            BiLogMessage(4LL, L"File is not system store. File: %ws Status: %x", v9, v5);
            BcdCloseStore(v13);
            v5 = -1073741672;
          }
        }
        else
        {
          BiLogMessage(4LL, L"Failed to mark system store. File: %ws Status: %x", v9, (unsigned int)v14);
          BcdCloseStore(v13);
        }
      }
      else
      {
        BiLogMessage(4LL, L"Failed to add system store from file. File: %ws Status: %x", v9, (unsigned int)v10);
        if ( v5 == -1073741757 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
          BiLogFileOwnerProcess((__int64)&DestinationString, v11, v12);
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
  return v5;
}
