/*
 * XREFs of MiCreateImageOrDataSection @ 0x14098BD70
 * Callers:
 *     MmCreateSectionEx @ 0x14098AECC (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x14098B1B8 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x14098B3C0 (MiCreateSection.c)
 * Callees:
 *     MiReferenceControlArea @ 0x140271068 (MiReferenceControlArea.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     MiReferenceExistingControlArea @ 0x1402BE814 (MiReferenceExistingControlArea.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     IoAllowExecution @ 0x140355ACC (IoAllowExecution.c)
 *     ObDereferenceObjectExWithTag @ 0x1403B3DE0 (ObDereferenceObjectExWithTag.c)
 *     MiForceSectionClosed @ 0x1403F2544 (MiForceSectionClosed.c)
 *     IoGetTopLevelIrp @ 0x1404118C0 (IoGetTopLevelIrp.c)
 *     ObReferenceObjectExWithTag @ 0x140415020 (ObReferenceObjectExWithTag.c)
 *     IoSetTopLevelIrp @ 0x140418300 (IoSetTopLevelIrp.c)
 *     MiGetControlAreaPartition @ 0x14042A350 (MiGetControlAreaPartition.c)
 *     MiDereferenceControlAreaBySection @ 0x1404468F8 (MiDereferenceControlAreaBySection.c)
 *     CcWaitForUninitializeCacheMap @ 0x14044F570 (CcWaitForUninitializeCacheMap.c)
 *     IoGetFileMemoryPartitionInformation @ 0x1404518C0 (IoGetFileMemoryPartitionInformation.c)
 *     MiZeroSectionObjectPointer @ 0x14049A734 (MiZeroSectionObjectPointer.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiDereferenceFailedControlArea @ 0x140989CB0 (MiDereferenceFailedControlArea.c)
 *     MiCallCreateSectionFilters @ 0x14098C3A8 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x14098C830 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 */

__int64 __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  signed int v2; // esi
  int v3; // eax
  __int64 v4; // r13
  int v5; // eax
  _QWORD *v6; // r15
  int v7; // r14d
  __int64 FileMemoryPartitionInformation; // rax
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // r13
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // ebx
  int v17; // edx
  __int64 v18; // rax
  __int64 *v19; // rax
  int v20; // ecx
  bool v21; // zf
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // cl
  __int64 v26; // rcx
  __int64 v27; // rdx
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  int v30; // edx
  signed __int64 v31; // rax
  _QWORD *v32; // rcx
  __int64 *v33; // [rsp+40h] [rbp-79h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-71h]
  _BYTE v35[56]; // [rsp+50h] [rbp-69h] BYREF
  int v36; // [rsp+88h] [rbp-31h]
  _QWORD *v37; // [rsp+90h] [rbp-29h]
  char v38; // [rsp+120h] [rbp+67h]
  PVOID Object; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v40; // [rsp+130h] [rbp+77h] BYREF
  __int64 v41; // [rsp+138h] [rbp+7Fh]

  v33 = 0LL;
  v40 = 0LL;
  memset_0(v35, 0, 0x80uLL);
  Object = 0LL;
  v2 = 0;
  v38 = 1;
  if ( *(_BYTE *)(a1 + 192) )
    return 3221225716LL;
  v3 = *(_DWORD *)(a1 + 16);
  if ( (v3 & 0x80000) != 0 )
    return 3221225716LL;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
  {
    v6 = *(_QWORD **)(a1 + 48);
    Object = v6;
  }
  else
  {
    if ( (v3 & 0x80020000) != 0 )
      return 3221225716LL;
    v5 = ObpReferenceObjectByHandleWithTag(
           *(_QWORD *)(a1 + 40),
           *((_DWORD *)MmMakeFileAccess + (*(_DWORD *)(a1 + 32) & 7)),
           (__int64)IoFileObjectType,
           *(_BYTE *)(a1 + 72),
           0x43536D4Du,
           &Object,
           0LL,
           0LL);
    v6 = Object;
    v7 = v5;
    if ( v5 < 0 )
    {
LABEL_31:
      if ( v7 != -1073740682 )
        goto LABEL_32;
      goto LABEL_60;
    }
    v2 = 1;
    if ( !*((_QWORD *)Object + 5) )
    {
      v7 = -1073741792;
      goto LABEL_33;
    }
  }
  FileMemoryPartitionInformation = IoGetFileMemoryPartitionInformation((__int64)v6);
  v9 = FileMemoryPartitionInformation;
  if ( !FileMemoryPartitionInformation )
  {
LABEL_8:
    if ( !v4 )
    {
      ObfReferenceObjectWithTag(v6, 0x43536D4Du);
      ++v2;
LABEL_10:
      *(_QWORD *)(a1 + 56) = v6;
      v36 = 2;
      if ( v6 )
        v37 = v6;
      else
        v37 = 0LL;
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        if ( (*(_DWORD *)a1 & 0x200) != 0 && !IoAllowExecution((__int64)v6) )
        {
          v7 = -1073741790;
          goto LABEL_32;
        }
        CcWaitForUninitializeCacheMap((__int64)v6);
        v25 = *(_BYTE *)(a1 + 24);
        if ( (v25 & 0x10) != 0 )
        {
          if ( (*(_DWORD *)a1 & 0x200) != 0 )
          {
            v30 = *(_DWORD *)a1 | 0x10;
            *(_DWORD *)a1 = v30;
            if ( (v25 & 0x30) == 0x30 )
              *(_DWORD *)a1 = v30 | 0x800;
          }
          *(_BYTE *)(a1 + 24) = v25 & 0xF;
        }
        v38 = 2;
      }
      CurrentThread = KeGetCurrentThread();
      v6 = Object;
      --CurrentThread->KernelApcDisable;
      while ( 1 )
      {
        v7 = MiCallCreateSectionFilters(a1);
        if ( v7 < 0 )
          goto LABEL_30;
        if ( (*(_DWORD *)a1 & 0x4000) != 0 && (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 && (*(_DWORD *)a1 & 0x8000) == 0 )
        {
          v32 = (_QWORD *)v6[5];
          if ( *v32 )
            MiForceSectionClosed(v32, 1, 1);
        }
        if ( (*(_DWORD *)a1 & 1) == 0 )
        {
          *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
          IoSetTopLevelIrp((PIRP)1);
          *(_DWORD *)a1 |= 2u;
        }
        v11 = MiReferenceControlArea(a1, (__int64)v35, &v40);
        v7 = v11;
        if ( v11 >= 0 )
          break;
        if ( v11 == -1073740277 )
        {
          KeLeaveCriticalRegionThread();
          goto LABEL_32;
        }
        if ( v11 == -1073740682 )
        {
          KeLeaveCriticalRegionThread();
          goto LABEL_60;
        }
      }
      v12 = v40;
      v41 = v40;
      *(_QWORD *)(a1 + 64) = v40;
      if ( (*(_DWORD *)(v12 + 56) & 2) != 0 )
      {
        v7 = MiCreateNewSection(a1, &v33);
        if ( v7 < 0 )
        {
          if ( v33 )
          {
            v13 = *v33;
            v41 = v13;
            v40 = v13;
            *(_QWORD *)(a1 + 64) = v13;
          }
          else
          {
            v13 = v41;
          }
          --v2;
          v34 = (_QWORD *)MiZeroSectionObjectPointer((__int64)v6, v13, *(_DWORD *)(a1 + 16));
          if ( (_BYTE *)v41 == v35 )
          {
            ObfDereferenceObjectWithTag(v6, 0x43536D4Du);
            v14 = _InterlockedExchange64((volatile __int64 *)(v41 + 64), 0LL);
            v6 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0uLL);
            if ( (v14 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
            {
              v15 = v14 & 0xF;
              if ( v15 )
                _InterlockedAdd64(v6 - 6, -v15);
            }
          }
          else
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v41) + 1736)) <= 1 )
              __fastfail(0xEu);
            MiDereferenceControlAreaBySection(v40, 1u);
            v6 = Object;
          }
          MiReleaseControlAreaWaiters(v34);
        }
        else
        {
          v26 = *v33;
          *(_QWORD *)(a1 + 64) = *v33;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v26) + 1736)) <= 1 )
            __fastfail(0xEu);
          v6 = Object;
          v2 -= 2;
        }
LABEL_30:
        KeLeaveCriticalRegionThread();
        goto LABEL_31;
      }
      KeLeaveCriticalRegionThread();
      v7 = MiShareExistingControlArea(a1);
      if ( v7 >= 0 )
      {
        --v2;
        goto LABEL_32;
      }
      MiDereferenceFailedControlArea((int *)a1);
      goto LABEL_31;
    }
    v17 = *(_DWORD *)(a1 + 16);
    if ( (v17 & 0x1000000) != 0 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        v7 = -1073741580;
        goto LABEL_32;
      }
      if ( *(_QWORD *)(a1 + 152) )
      {
        v7 = -1073741582;
        goto LABEL_32;
      }
    }
    if ( !*(_QWORD *)(v4 + 40) )
    {
      v7 = -1073741792;
      goto LABEL_32;
    }
    v18 = *(_QWORD *)(a1 + 8);
    if ( v18 && (*(_DWORD *)(v18 + 24) & 0x200) != 0 )
      *(_BYTE *)(a1 + 72) = 0;
    v7 = -1073741823;
    v19 = (__int64 *)(*(_QWORD *)(v4 + 40) + 16LL);
    if ( (v17 & 0x1000000) == 0 )
      v19 = *(__int64 **)(v4 + 40);
    v40 = *v19;
    if ( !v40 || (v7 = MiReferenceExistingControlArea(a1), v7 < 0) )
    {
      ObReferenceObjectExWithTag((ULONG_PTR)v6, 2);
      v2 += 2;
      if ( v7 == -1073740682 )
      {
LABEL_60:
        if ( (*(_DWORD *)a1 & 1) == 0 )
          CcWaitForUninitializeCacheMap((__int64)v6);
        if ( (unsigned int)MiForceSectionClosed((_QWORD *)v6[5], v38, 0) > 1 && (*(_DWORD *)a1 & 0x800000) != 0 )
        {
          ++dword_140E300D0;
          v7 = -1073740277;
        }
        goto LABEL_32;
      }
      goto LABEL_10;
    }
    v20 = *(_DWORD *)a1 | 4;
    v21 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    *(_DWORD *)a1 = v20;
    v22 = *(__int64 **)(v4 + 40);
    if ( v21 )
    {
      v23 = *v22;
      v24 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 128) = v24;
      v40 = v23;
      if ( (v20 & 1) != 0 || v24 )
        goto LABEL_45;
    }
    else
    {
      v23 = v22[2];
      v40 = v23;
    }
    v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v23 + 24LL), -1LL, -1LL);
    v6 = Object;
    *(_QWORD *)(a1 + 128) = v31;
    v23 = v40;
LABEL_45:
    *(_QWORD *)(a1 + 64) = v23;
    goto LABEL_32;
  }
  v27 = *(_QWORD *)FileMemoryPartitionInformation;
  _m_prefetchw((const void *)(*(_QWORD *)FileMemoryPartitionInformation + 40LL));
  v28 = *(_QWORD *)(v27 + 40);
  while ( (unsigned __int64)(v28 + 1) > 1 )
  {
    v29 = v28;
    v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 40), v28 + 1, v28);
    if ( v29 == v28 )
    {
      v6 = Object;
      *(_QWORD *)(a1 + 176) = v27;
      if ( (*(_DWORD *)(v9 + 8) & 1) != 0 )
        *(_DWORD *)a1 |= 0x400000u;
      goto LABEL_8;
    }
  }
  if ( v28 )
    __fastfail(0xEu);
  v6 = Object;
  v7 = -1073740640;
LABEL_32:
  if ( v2 )
LABEL_33:
    ObDereferenceObjectExWithTag((ULONG_PTR)v6, v2, 0x43536D4Du);
  return (unsigned int)v7;
}
