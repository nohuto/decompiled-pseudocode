/*
 * XREFs of MiCreateUserPhysicalView @ 0x140AEA2A8
 * Callers:
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 * Callees:
 *     MiGetAweInfoPartition @ 0x140266FBC (MiGetAweInfoPartition.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1404071F0 (MiCheckPurgeAndUpMapCount.c)
 *     MiPageChainCount @ 0x14045AA00 (MiPageChainCount.c)
 *     MiReferenceAweHandle @ 0x1404CF614 (MiReferenceAweHandle.c)
 *     MiInsertVadEvent @ 0x1404EF5E8 (MiInsertVadEvent.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407F9CD0 (MiCreateProcessDefaultAweInfo.c)
 *     MiCreateVadEventBitmap @ 0x1408DC8AC (MiCreateVadEventBitmap.c)
 */

int __fastcall MiCreateUserPhysicalView(__int64 a1, int a2, __int64 a3, _WORD *a4)
{
  PVOID v4; // rdi
  void *v6; // rcx
  unsigned __int64 v7; // r13
  __int64 v8; // rbx
  char v11; // r10
  unsigned int v12; // r9d
  KPROCESSOR_MODE PreviousMode; // r8
  ACCESS_MASK v14; // edx
  int result; // eax
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 *LockedVadEvent; // rsi
  __int64 Pool; // rax
  _WORD *AweInfoPartition; // rax
  unsigned __int64 *v26; // r14
  int v27; // eax
  unsigned int v28; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+38h] [rbp-30h] BYREF
  PVOID v31; // [rsp+80h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = 0LL;
  v30 = 0LL;
  v6 = *(void **)(a3 + 104);
  v7 = 0LL;
  v8 = *(_QWORD *)(a3 + 112);
  v31 = 0LL;
  v11 = a2;
  if ( v6 )
  {
    v12 = (a2 & 4 | 8u) >> 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v14 = v12 | 8;
    if ( (v11 & 2) == 0 )
      v14 = v12;
    result = MiReferenceAweHandle(v6, v14, PreviousMode, &Object, &v31);
    if ( result < 0 )
      return result;
    v4 = v31;
    if ( !v31 )
    {
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x68506D4Du);
      return -1073741816;
    }
    v7 = MiSectionControlArea((__int64)v31);
    v16 = *(_QWORD *)(v7 + 8);
    v17 = MiPageChainCount(v16);
    v18 = v17;
    if ( (v8 & 2) != 0 )
    {
      v19 = 16LL;
    }
    else if ( (v8 & 8) != 0 )
    {
      v19 = 512LL;
    }
    else
    {
      if ( (v8 & 0x10) == 0 )
      {
        v19 = v17;
LABEL_23:
        v20 = v19 << 12;
        if ( *(_QWORD *)(a3 + 16) < v19 << 12 )
          *(_QWORD *)(a3 + 16) = v20;
        v21 = *(_QWORD *)(a3 + 24);
        if ( (v21 & (v20 - 1)) != 0
          || *(_QWORD *)(a3 + 8) - *(_QWORD *)a3 + 1LL == v21 && (*(_QWORD *)a3 & (v20 - 1)) != 0 )
        {
          goto LABEL_20;
        }
        goto LABEL_34;
      }
      v19 = 0x40000LL;
    }
    if ( v19 <= v17 || v19 % v17 || ((v19 - 1) & v19) != 0 || v19 != 512 || v17 != 16 )
    {
LABEL_20:
      ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
      return -1073741811;
    }
    goto LABEL_23;
  }
  if ( (v8 & 0x1A) != 0 )
    return -1073741811;
  if ( a2 != 4 )
    return -1073741755;
  result = MiCreateProcessDefaultAweInfo(*(_BYTE *)(a3 + 57), &v30);
  if ( result < 0 )
    return result;
  v16 = v30;
  v18 = 1LL;
  v19 = 1LL;
LABEL_34:
  v22 = *(_QWORD *)(a3 + 24);
  if ( v22 < 0x200 || v19 >= 0x200 )
  {
    Pool = MiAllocatePool(0x40uLL, 0x58uLL, 1987079501);
    LockedVadEvent = (unsigned __int64 *)Pool;
    if ( Pool )
    {
      *(_DWORD *)(Pool + 80) = 256;
      goto LABEL_43;
    }
  }
  else if ( (int)MiCreateVadEventBitmap(*(_QWORD *)(a3 + 88), a1, (v22 + 0x1FFFFF) >> 21, 256) >= 0 )
  {
    LockedVadEvent = (unsigned __int64 *)MiLocateLockedVadEvent(a1, 256);
LABEL_43:
    LockedVadEvent[4] = a1;
    LockedVadEvent[5] = v16;
    AweInfoPartition = (_WORD *)MiGetAweInfoPartition(v16);
    v26 = LockedVadEvent + 6;
    *a4 = *AweInfoPartition;
    if ( v4 )
    {
      MiCheckPurgeAndUpMapCount(v7);
      *v26 = v7;
      ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
    }
    if ( v19 != v18 )
    {
      v27 = *(_DWORD *)v26;
      if ( v19 == 16 )
      {
        v28 = v27 & 0xFFFFFFFC | 1;
      }
      else if ( v19 == 0x40000 )
      {
        v28 = v27 | 3;
      }
      else
      {
        v28 = v27 & 0xFFFFFFFC | 2;
      }
      *(_DWORD *)v26 = v28;
    }
    LockedVadEvent[3] = 0LL;
    if ( !LockedVadEvent[7] )
      MiInsertVadEvent(a1, LockedVadEvent, 0);
    return 0;
  }
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x68506D4Du);
  return -1073741670;
}
