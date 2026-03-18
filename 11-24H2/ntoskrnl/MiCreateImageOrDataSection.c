/*
 * XREFs of MiCreateImageOrDataSection @ 0x140941B00
 * Callers:
 *     MmCreateSectionEx @ 0x140940C6C (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x140940F58 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x140941160 (MiCreateSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     IoAllowExecution @ 0x1402D484C (IoAllowExecution.c)
 *     MiForceSectionClosed @ 0x140315054 (MiForceSectionClosed.c)
 *     MiReferenceExistingControlArea @ 0x140315C60 (MiReferenceExistingControlArea.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectExWithTag @ 0x1403C5220 (ObDereferenceObjectExWithTag.c)
 *     MiReferenceControlArea @ 0x140415208 (MiReferenceControlArea.c)
 *     IoGetTopLevelIrp @ 0x14041CFD0 (IoGetTopLevelIrp.c)
 *     ObReferenceObjectExWithTag @ 0x14041F2E0 (ObReferenceObjectExWithTag.c)
 *     IoSetTopLevelIrp @ 0x140424450 (IoSetTopLevelIrp.c)
 *     MiGetControlAreaPartition @ 0x1404378D0 (MiGetControlAreaPartition.c)
 *     MiDereferenceControlAreaBySection @ 0x140451548 (MiDereferenceControlAreaBySection.c)
 *     CcWaitForUninitializeCacheMap @ 0x14045A120 (CcWaitForUninitializeCacheMap.c)
 *     IoGetFileMemoryPartitionInformation @ 0x14045C6C0 (IoGetFileMemoryPartitionInformation.c)
 *     MiZeroSectionObjectPointer @ 0x1404A00BC (MiZeroSectionObjectPointer.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCallCreateSectionFilters @ 0x140942138 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x1409425C0 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 *     MiDereferenceFailedControlArea @ 0x140A822F8 (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  signed int v2; // esi
  int v3; // eax
  __int64 v4; // r13
  int v5; // eax
  __int64 *v6; // r15
  int v7; // r14d
  __int64 FileMemoryPartitionInformation; // rax
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // r13
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // ebx
  int v19; // edx
  __int64 v20; // rax
  __int64 *v21; // rax
  int v22; // ecx
  bool v23; // zf
  __int64 *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  char v27; // cl
  __int64 v28; // rcx
  __int64 v29; // rdx
  signed __int64 v30; // rax
  signed __int64 v31; // rtt
  int v32; // edx
  signed __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 *v35; // [rsp+40h] [rbp-79h] BYREF
  _QWORD *v36; // [rsp+48h] [rbp-71h]
  _BYTE v37[56]; // [rsp+50h] [rbp-69h] BYREF
  int v38; // [rsp+88h] [rbp-31h]
  __int64 *v39; // [rsp+90h] [rbp-29h]
  char v40; // [rsp+120h] [rbp+67h]
  PVOID Object; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v42; // [rsp+130h] [rbp+77h] BYREF
  __int64 v43; // [rsp+138h] [rbp+7Fh]

  v35 = 0LL;
  v42 = 0LL;
  memset_0(v37, 0, 0x80uLL);
  Object = 0LL;
  v2 = 0;
  v40 = 1;
  if ( *(_BYTE *)(a1 + 192) )
    return 3221225716LL;
  v3 = *(_DWORD *)(a1 + 16);
  if ( (v3 & 0x80000) != 0 )
    return 3221225716LL;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
  {
    v6 = *(__int64 **)(a1 + 48);
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
    v6 = (__int64 *)Object;
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
      v38 = 2;
      if ( v6 )
        v39 = v6;
      else
        v39 = 0LL;
      if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
      {
        if ( (*(_DWORD *)a1 & 0x200) != 0 && !IoAllowExecution((__int64)v6) )
        {
          v7 = -1073741790;
          goto LABEL_32;
        }
        CcWaitForUninitializeCacheMap((__int64)v6);
        v27 = *(_BYTE *)(a1 + 24);
        if ( (v27 & 0x10) != 0 )
        {
          if ( (*(_DWORD *)a1 & 0x200) != 0 )
          {
            v32 = *(_DWORD *)a1 | 0x10;
            *(_DWORD *)a1 = v32;
            if ( (v27 & 0x30) == 0x30 )
              *(_DWORD *)a1 = v32 | 0x800;
          }
          *(_BYTE *)(a1 + 24) = v27 & 0xF;
        }
        v40 = 2;
      }
      CurrentThread = KeGetCurrentThread();
      v6 = (__int64 *)Object;
      --CurrentThread->KernelApcDisable;
      while ( 1 )
      {
        v7 = MiCallCreateSectionFilters(a1);
        if ( v7 < 0 )
          goto LABEL_30;
        if ( (*(_DWORD *)a1 & 0x4000) != 0 && (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 && (*(_DWORD *)a1 & 0x8000) == 0 )
        {
          v34 = (_QWORD *)v6[5];
          if ( *v34 )
            MiForceSectionClosed((__int64)v34, 1, 1);
        }
        if ( (*(_DWORD *)a1 & 1) == 0 )
        {
          *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
          IoSetTopLevelIrp((PIRP)1);
          *(_DWORD *)a1 |= 2u;
        }
        v11 = MiReferenceControlArea(a1, (__int64)v37, &v42);
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
      v12 = v42;
      v43 = v42;
      *(_QWORD *)(a1 + 64) = v42;
      if ( (*(_DWORD *)(v12 + 56) & 2) != 0 )
      {
        v7 = MiCreateNewSection(a1, &v35);
        if ( v7 < 0 )
        {
          if ( v35 )
          {
            v13 = *v35;
            v43 = v13;
            v42 = v13;
            *(_QWORD *)(a1 + 64) = v13;
          }
          else
          {
            v13 = v43;
          }
          --v2;
          v36 = (_QWORD *)MiZeroSectionObjectPointer((__int64)v6, v13, *(_DWORD *)(a1 + 16));
          if ( (_BYTE *)v43 == v37 )
          {
            ObfDereferenceObjectWithTag(v6, 0x43536D4Du);
            v16 = _InterlockedExchange64((volatile __int64 *)(v43 + 64), 0LL);
            v6 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF0uLL);
            if ( (v16 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
            {
              v17 = v16 & 0xF;
              if ( v17 )
                _InterlockedAdd64(v6 - 6, -v17);
            }
          }
          else
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v43) + 1736)) <= 1 )
              __fastfail(0xEu);
            MiDereferenceControlAreaBySection(v42, 1u);
            v6 = (__int64 *)Object;
          }
          MiReleaseControlAreaWaiters(v36, v14, v15);
        }
        else
        {
          v28 = *v35;
          *(_QWORD *)(a1 + 64) = *v35;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v28) + 1736)) <= 1 )
            __fastfail(0xEu);
          v6 = (__int64 *)Object;
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
      MiDereferenceFailedControlArea(a1);
      goto LABEL_31;
    }
    v19 = *(_DWORD *)(a1 + 16);
    if ( (v19 & 0x1000000) != 0 )
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
    v20 = *(_QWORD *)(a1 + 8);
    if ( v20 && (*(_DWORD *)(v20 + 24) & 0x200) != 0 )
      *(_BYTE *)(a1 + 72) = 0;
    v7 = -1073741823;
    v21 = (__int64 *)(*(_QWORD *)(v4 + 40) + 16LL);
    if ( (v19 & 0x1000000) == 0 )
      v21 = *(__int64 **)(v4 + 40);
    v42 = *v21;
    if ( !v42 || (v7 = MiReferenceExistingControlArea(a1), v7 < 0) )
    {
      ObReferenceObjectExWithTag((ULONG_PTR)v6, 2);
      v2 += 2;
      if ( v7 == -1073740682 )
      {
LABEL_60:
        if ( (*(_DWORD *)a1 & 1) == 0 )
          CcWaitForUninitializeCacheMap((__int64)v6);
        if ( (unsigned int)MiForceSectionClosed(v6[5], v40, 0) > 1 && (*(_DWORD *)a1 & 0x800000) != 0 )
        {
          ++dword_140E2FF90;
          v7 = -1073740277;
        }
        goto LABEL_32;
      }
      goto LABEL_10;
    }
    v22 = *(_DWORD *)a1 | 4;
    v23 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    *(_DWORD *)a1 = v22;
    v24 = *(__int64 **)(v4 + 40);
    if ( v23 )
    {
      v25 = *v24;
      v26 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 128) = v26;
      v42 = v25;
      if ( (v22 & 1) != 0 || v26 )
        goto LABEL_45;
    }
    else
    {
      v25 = v24[2];
      v42 = v25;
    }
    v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v25 + 24LL), -1LL, -1LL);
    v6 = (__int64 *)Object;
    *(_QWORD *)(a1 + 128) = v33;
    v25 = v42;
LABEL_45:
    *(_QWORD *)(a1 + 64) = v25;
    goto LABEL_32;
  }
  v29 = *(_QWORD *)FileMemoryPartitionInformation;
  _m_prefetchw((const void *)(*(_QWORD *)FileMemoryPartitionInformation + 40LL));
  v30 = *(_QWORD *)(v29 + 40);
  while ( (unsigned __int64)(v30 + 1) > 1 )
  {
    v31 = v30;
    v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 40), v30 + 1, v30);
    if ( v31 == v30 )
    {
      v6 = (__int64 *)Object;
      *(_QWORD *)(a1 + 176) = v29;
      if ( (*(_DWORD *)(v9 + 8) & 1) != 0 )
        *(_DWORD *)a1 |= 0x400000u;
      goto LABEL_8;
    }
  }
  if ( v30 )
    __fastfail(0xEu);
  v6 = (__int64 *)Object;
  v7 = -1073740640;
LABEL_32:
  if ( v2 )
LABEL_33:
    ObDereferenceObjectExWithTag((ULONG_PTR)v6, v2, 0x43536D4Du);
  return (unsigned int)v7;
}
