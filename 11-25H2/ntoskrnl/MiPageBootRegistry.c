/*
 * XREFs of MiPageBootRegistry @ 0x14065D9FC
 * Callers:
 *     MmFreeLoaderBlock @ 0x140C3D564 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiMakeTransitionPte @ 0x140339DF0 (MiMakeTransitionPte.c)
 *     MiWriteWsle @ 0x14037CA80 (MiWriteWsle.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MmFreeBootRegistry @ 0x1407D73A4 (MmFreeBootRegistry.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140C5413C (MiInsertRegistryPageInModifiedList.c)
 */

_QWORD *__fastcall MiPageBootRegistry(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  signed __int64 v5; // r15
  __int64 v6; // rbx
  __int64 *ProcessorFlushList; // rsi
  char *AnyMultiplexedVm; // r13
  unsigned __int8 v9; // al
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 i; // rdi
  __int64 v14; // r8
  unsigned __int64 v15; // rbp
  _QWORD *v16; // r14
  __int64 v17; // r15
  unsigned __int64 v18; // r12
  ULONG_PTR v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  char WsleContents; // al
  __int64 v23; // rcx
  int v24; // r9d
  _QWORD **v25; // rax
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // [rsp+30h] [rbp-68h]
  unsigned __int64 *v29; // [rsp+38h] [rbp-60h]
  unsigned __int64 v30; // [rsp+40h] [rbp-58h]
  ULONG_PTR v31; // [rsp+48h] [rbp-50h]
  _QWORD *v32; // [rsp+58h] [rbp-40h]
  unsigned __int8 v33; // [rsp+A8h] [rbp+10h]
  __int64 v34; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v35; // [rsp+B8h] [rbp+20h]

  result = (_QWORD *)MiAllocatePool(0x40uLL, 8 * a2 + 8, 1649241421);
  v32 = result;
  v5 = (signed __int64)result;
  if ( result )
  {
    *result = a2;
    v6 = 0LL;
    v28 = 0LL;
    v34 = 0LL;
    v29 = result + 1;
    ProcessorFlushList = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v9 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v11 = a1 + 352;
    v33 = v9;
    v12 = *(_QWORD *)(v11 + 8);
    if ( (v12 & 1) != 0 )
    {
      if ( v12 == 1 )
      {
LABEL_33:
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
        result = (_QWORD *)_InterlockedCompareExchange64(&qword_140E372C8, v5, 0LL);
        if ( result )
        {
          qword_140E372C8 = v5;
          return (_QWORD *)MmFreeBootRegistry();
        }
        return result;
      }
      i = v12 ^ (v11 | 1);
    }
    else
    {
      i = *(_QWORD *)(v11 + 8);
    }
    if ( i )
    {
      v14 = 0xFFFFF68000000000uLL;
      do
      {
        if ( *(_DWORD *)(i + 24) == 19 && *(_QWORD *)(i + 40) )
        {
          v35 = 0LL;
          v15 = 0LL;
          v16 = (_QWORD *)(48LL * *(_QWORD *)(i + 32) - 0x21FFFFFFFFF8LL);
          v17 = *(_QWORD *)(i + 32);
          do
          {
            v30 = *v16 | 0x8000000000000000uLL;
            v18 = (__int64)(v30 << 25) >> 16;
            *v29++ = v18;
            v19 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v31 = v19;
            if ( v15 != v19 )
            {
              if ( v15 )
              {
                if ( ProcessorFlushList )
                {
                  MiFlushTbList((__int64)ProcessorFlushList);
                  MiReleaseProcessorFlushList();
                  ProcessorFlushList = 0LL;
                }
                MiInsertRegistryPageInModifiedList(v28, v6, v14);
                MiUnlockPageTable((__int64)AnyMultiplexedVm, v15);
                v19 = v31;
              }
              v15 = v19;
              MiLockNestedPageTable((__int64)AnyMultiplexedVm, v19, v14, v10);
            }
            v20 = MI_READ_PTE_LOCK_FREE(v30);
            WsleContents = MiGetWsleContents(v21, v18);
            MiWriteWsle(v23, v18, WsleContents & 0xF0 | 0xA);
            *(_QWORD *)v30 = MiMakeTransitionPte((v20 >> 12) & 0xFFFFFFFFFFLL, 4);
            if ( ProcessorFlushList )
            {
              v6 = v34 + 1;
            }
            else
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList(
                (__int64)ProcessorFlushList,
                (__int64)AnyMultiplexedVm,
                *((_DWORD *)ProcessorFlushList + 3),
                0,
                1);
              v6 = (unsigned int)(v24 + 1);
              v28 = v17 + v35;
            }
            v34 = v6;
            MiInsertTbFlushEntry((__int64)ProcessorFlushList, v18, 1LL, 0);
            v16 += 6;
            ++v35;
            v14 = 0xFFFFF68000000000uLL;
          }
          while ( v35 < *(_QWORD *)(i + 40) );
          if ( ProcessorFlushList )
          {
            MiFlushTbList((__int64)ProcessorFlushList);
            MiReleaseProcessorFlushList();
            ProcessorFlushList = 0LL;
          }
          MiInsertRegistryPageInModifiedList(v28, v6, v14);
          MiUnlockPageTable((__int64)AnyMultiplexedVm, v15);
          v14 = 0xFFFFF68000000000uLL;
        }
        v25 = *(_QWORD ***)(i + 8);
        v26 = i;
        if ( v25 )
        {
          v27 = *v25;
          for ( i = *(_QWORD *)(i + 8); v27; v27 = (_QWORD *)*v27 )
            i = (unsigned __int64)v27;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v26 )
              break;
            v26 = i;
          }
        }
      }
      while ( i );
      v5 = (signed __int64)v32;
      v9 = v33;
    }
    goto LABEL_33;
  }
  return result;
}
