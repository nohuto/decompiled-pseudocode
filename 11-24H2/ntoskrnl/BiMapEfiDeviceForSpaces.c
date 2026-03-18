/*
 * XREFs of BiMapEfiDeviceForSpaces @ 0x1404B6A60
 * Callers:
 *     BiUpdateBcdObject @ 0x1408157BC (BiUpdateBcdObject.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SyspartIsSpace @ 0x140815DD8 (SyspartIsSpace.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     SyspartGetSystemPartition @ 0x140A7FF8C (SyspartGetSystemPartition.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiMapEfiDeviceForSpaces(__int64 a1, const void **a2, unsigned int *a3)
{
  int v3; // eax
  int SystemPartition; // edi
  __int64 Pool2; // rax
  void *v8; // rsi
  size_t v9; // r15
  unsigned int v10; // r14d
  size_t v11; // rbx
  char *v12; // rax
  char *v13; // rbp
  size_t v14; // r8
  void *v15; // rbx
  char v17; // [rsp+60h] [rbp+8h] BYREF
  size_t Size; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  v17 = 0;
  LODWORD(Size) = 0;
  SystemPartition = 0;
  if ( (v3 & 8) == 0 )
  {
    SystemPartition = SyspartGetSystemPartition(0LL, 0LL, &Size);
    if ( (int)(SystemPartition + 0x80000000) < 0 || SystemPartition == -1073741789 )
    {
      Pool2 = ExAllocatePool2(0x102uLL);
      v8 = (void *)Pool2;
      if ( Pool2 )
      {
        SystemPartition = SyspartGetSystemPartition(Pool2, (unsigned int)Size, &Size);
        if ( SystemPartition >= 0 )
        {
          SystemPartition = SyspartIsSpace(v8, &v17);
          if ( SystemPartition >= 0 )
          {
            if ( v17 )
            {
              v9 = (unsigned int)Size;
              v10 = Size + 20;
              v11 = (unsigned int)(Size + 20);
              v12 = (char *)ExAllocatePool2(0x102uLL);
              v13 = v12;
              if ( v12 )
              {
                memset_0(v12, 0, v11);
                v14 = v10;
                v15 = (void *)*a2;
                if ( v10 >= *a3 )
                  v14 = *a3;
                memmove(v13, *a2, v14);
                memmove(v13 + 20, v8, v9);
                ExFreePoolWithTag(v15, 0x4B444342u);
                *a2 = v13;
                *a3 = v10;
              }
              else
              {
                SystemPartition = -1073741801;
              }
            }
          }
          else
          {
            BiLogMessage(4LL, L"SyspartIsSpace failed for partition path: %s", v8);
          }
        }
        ExFreePoolWithTag(v8, 0x4B444342u);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)SystemPartition;
}
