/*
 * XREFs of MiObtainSectionForDriver @ 0x140A116B4
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiUpdateDriverLoadInProgress @ 0x1402EFC50 (MiUpdateDriverLoadInProgress.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MiGetBaseLoaderPortion @ 0x1404C96FC (MiGetBaseLoaderPortion.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     MiCreateSectionForDriver @ 0x140A1199C (MiCreateSectionForDriver.c)
 *     MiAllocateTempLoaderEntry @ 0x140A11CA0 (MiAllocateTempLoaderEntry.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiObtainSectionForDriver(
        const UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5)
{
  unsigned int v5; // r15d
  __int64 v7; // rbx
  int SectionForDriver; // ebp
  __int64 TempLoaderEntry; // rdi
  unsigned __int64 v10; // r14
  __int64 *v11; // r12
  __int64 BaseLoaderPortion; // rbx
  __int64 v13; // rcx
  PVOID *i; // r8
  __int64 v15; // rcx
  __int64 *v17; // rsi
  __int64 v18; // r8
  PVOID v19; // rsi
  __int64 v20; // rax
  UNICODE_STRING v21; // xmm0
  __int64 v22; // rcx
  PVOID Object[9]; // [rsp+20h] [rbp-48h] BYREF
  const UNICODE_STRING *v24; // [rsp+70h] [rbp+8h]

  v24 = a1;
  v5 = 0;
  Object[0] = 0LL;
  v7 = 0LL;
  SectionForDriver = 0;
  TempLoaderEntry = 0LL;
  v10 = 0LL;
  *a5 = 0LL;
LABEL_2:
  v11 = (__int64 *)&PsLoadedModuleList;
  while ( 1 )
  {
    if ( v5 < 2 )
    {
      v17 = (__int64 *)qword_140E2D9C8;
      v7 = 0LL;
      if ( v5 )
        v11 = &qword_140E2D9C8;
      else
        v17 = (__int64 *)PsLoadedModuleList;
      if ( v17 != v11 )
      {
        while ( 1 )
        {
          v7 = (__int64)v17;
          if ( RtlEqualUnicodeString(a1, (PCUNICODE_STRING)(v17 + 9), 1u) )
            break;
          if ( (a4 & 0x40000000) == 0 || !v10 || (v22 = v17[14]) == 0 || v10 != MiSectionControlArea(v22) )
          {
            v17 = (__int64 *)*v17;
            a1 = v24;
            if ( v17 != v11 )
              continue;
          }
          if ( v17 == v11 )
          {
            a1 = v24;
            goto LABEL_41;
          }
          break;
        }
        if ( *(char *)(MiGetBaseLoaderPortion(v7) + 184) < 0 && (a4 & 0x40000000) == 0 )
        {
          SectionForDriver = -1073740608;
          v7 = v18;
        }
        else if ( (a4 & 8) != 0 && *(_QWORD *)(v7 + 136) != 1LL )
        {
          ++*(_WORD *)(v7 + 108);
        }
LABEL_30:
        if ( TempLoaderEntry )
        {
          ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(TempLoaderEntry + 112), 0x63536D4Du);
          ExFreePoolWithTag((PVOID)TempLoaderEntry, 0);
        }
        goto LABEL_17;
      }
LABEL_41:
      ++v5;
      goto LABEL_2;
    }
    if ( v5 != 2 )
      goto LABEL_30;
    v5 = 0;
    if ( TempLoaderEntry )
    {
      BaseLoaderPortion = MiGetBaseLoaderPortion(TempLoaderEntry);
      MiUpdateDriverLoadInProgress(v13, 0LL, 0, 0);
      if ( *(_QWORD *)((*(_QWORD *)(v10 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32)
        && (*(_DWORD *)(v10 + 56) & 0x20000000) != 0
        && *(_QWORD *)(*(_QWORD *)v10 + 32LL) )
      {
        for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
        {
          v15 = (__int64)i[14];
          if ( v15 && v10 == MiSectionControlArea(v15) )
          {
            if ( i )
              *(_DWORD *)(BaseLoaderPortion + 184) |= 4u;
            break;
          }
        }
      }
      v7 = TempLoaderEntry;
LABEL_17:
      *a5 = v7;
      return (unsigned int)SectionForDriver;
    }
    MmReleaseLoadLock(0LL);
    SectionForDriver = MiCreateSectionForDriver(a2, a3, a4, Object);
    if ( SectionForDriver < 0 )
      goto LABEL_44;
    v19 = Object[0];
    v10 = MiSectionControlArea((__int64)Object[0]);
    v20 = *(_QWORD *)(*(_QWORD *)v10 + 56LL);
    if ( *(__int16 *)(v20 + 46) < 0 && *(_DWORD *)(v20 + 32) == 1 )
    {
      ObDereferenceObjectDeferDeleteWithTag(v19, 0x63536D4Du);
      SectionForDriver = -1073741800;
LABEL_44:
      MmAcquireLoadLock();
      return (unsigned int)SectionForDriver;
    }
    TempLoaderEntry = MiAllocateTempLoaderEntry();
    if ( !TempLoaderEntry )
      break;
    v21 = *v24;
    *(_QWORD *)(TempLoaderEntry + 112) = v19;
    *(UNICODE_STRING *)(TempLoaderEntry + 72) = v21;
    MmAcquireLoadLock();
    a1 = v24;
  }
  ObDereferenceObjectDeferDeleteWithTag(v19, 0x63536D4Du);
  MmAcquireLoadLock();
  return 3221225626LL;
}
