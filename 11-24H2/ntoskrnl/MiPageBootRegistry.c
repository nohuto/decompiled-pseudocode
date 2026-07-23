/*
 * XREFs of MiPageBootRegistry @ 0x14066A6F8
 * Callers:
 *     MmFreeLoaderBlock @ 0x140C5097C (MmFreeLoaderBlock.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiWriteWsle @ 0x140203470 (MiWriteWsle.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MmFreeBootRegistry @ 0x1407E782C (MmFreeBootRegistry.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140C675CC (MiInsertRegistryPageInModifiedList.c)
 */

_QWORD *__fastcall MiPageBootRegistry(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  signed __int64 v5; // r15
  __int64 v6; // rbx
  __int64 *ProcessorFlushList; // rsi
  char *AnyMultiplexedVm; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // al
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 i; // rdi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rbp
  _QWORD *v18; // r14
  __int64 v19; // r15
  unsigned __int64 v20; // r12
  ULONG_PTR v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  char WsleContents; // al
  __int64 v25; // rcx
  int v26; // r9d
  _QWORD **v27; // rax
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-68h]
  unsigned __int64 *v31; // [rsp+38h] [rbp-60h]
  unsigned __int64 v32; // [rsp+40h] [rbp-58h]
  ULONG_PTR v33; // [rsp+48h] [rbp-50h]
  _QWORD *v34; // [rsp+58h] [rbp-40h]
  unsigned __int8 v35; // [rsp+A8h] [rbp+10h]
  __int64 v36; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v37; // [rsp+B8h] [rbp+20h]

  result = (_QWORD *)MiAllocatePool(0x40uLL, 8 * a2 + 8, 1649241421);
  v34 = result;
  v5 = (signed __int64)result;
  if ( result )
  {
    *result = a2;
    v6 = 0LL;
    v30 = 0LL;
    v36 = 0LL;
    v31 = result + 1;
    ProcessorFlushList = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v12 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v9, v10, v11);
    v13 = a1 + 352;
    v35 = v12;
    v14 = *(_QWORD *)(v13 + 8);
    if ( (v14 & 1) != 0 )
    {
      if ( v14 == 1 )
      {
LABEL_33:
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v12);
        result = (_QWORD *)_InterlockedCompareExchange64(&qword_140E37648, v5, 0LL);
        if ( result )
        {
          qword_140E37648 = v5;
          return (_QWORD *)MmFreeBootRegistry();
        }
        return result;
      }
      i = v14 ^ (v13 | 1);
    }
    else
    {
      i = *(_QWORD *)(v13 + 8);
    }
    if ( i )
    {
      v16 = 0xFFFFF68000000000uLL;
      do
      {
        if ( *(_DWORD *)(i + 24) == 19 && *(_QWORD *)(i + 40) )
        {
          v37 = 0LL;
          v17 = 0LL;
          v18 = (_QWORD *)(48LL * *(_QWORD *)(i + 32) - 0x21FFFFFFFFF8LL);
          v19 = *(_QWORD *)(i + 32);
          do
          {
            v32 = *v18 | 0x8000000000000000uLL;
            v20 = (__int64)(v32 << 25) >> 16;
            *v31++ = v20;
            v21 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v33 = v21;
            if ( v17 != v21 )
            {
              if ( v17 )
              {
                if ( ProcessorFlushList )
                {
                  MiFlushTbList((__int64)ProcessorFlushList);
                  MiReleaseProcessorFlushList();
                  ProcessorFlushList = 0LL;
                }
                MiInsertRegistryPageInModifiedList(v30, v6, v16);
                MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v17);
                v21 = v33;
              }
              v17 = v21;
              MiLockNestedPageTable((__int64)AnyMultiplexedVm, v21);
            }
            v22 = MI_READ_PTE_LOCK_FREE(v32);
            WsleContents = MiGetWsleContents(v23, v20);
            MiWriteWsle(v25, v20, WsleContents & 0xF0 | 0xA);
            *(_QWORD *)v32 = MiMakeTransitionPte((v22 >> 12) & 0xFFFFFFFFFFLL, 4);
            if ( ProcessorFlushList )
            {
              v6 = v36 + 1;
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
              v6 = (unsigned int)(v26 + 1);
              v30 = v19 + v37;
            }
            v36 = v6;
            MiInsertTbFlushEntry((__int64)ProcessorFlushList, v20, 1LL, 0);
            v18 += 6;
            ++v37;
            v16 = 0xFFFFF68000000000uLL;
          }
          while ( v37 < *(_QWORD *)(i + 40) );
          if ( ProcessorFlushList )
          {
            MiFlushTbList((__int64)ProcessorFlushList);
            MiReleaseProcessorFlushList();
            ProcessorFlushList = 0LL;
          }
          MiInsertRegistryPageInModifiedList(v30, v6, v16);
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v17);
          v16 = 0xFFFFF68000000000uLL;
        }
        v27 = *(_QWORD ***)(i + 8);
        v28 = i;
        if ( v27 )
        {
          v29 = *v27;
          for ( i = *(_QWORD *)(i + 8); v29; v29 = (_QWORD *)*v29 )
            i = (unsigned __int64)v29;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v28 )
              break;
            v28 = i;
          }
        }
      }
      while ( i );
      v5 = (signed __int64)v34;
      v12 = v35;
    }
    goto LABEL_33;
  }
  return result;
}
