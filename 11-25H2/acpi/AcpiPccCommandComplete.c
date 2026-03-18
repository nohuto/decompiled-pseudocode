/*
 * XREFs of AcpiPccCommandComplete @ 0x140050C90
 * Callers:
 *     ACPIPccProcessSci @ 0x140023CF0 (ACPIPccProcessSci.c)
 *     AcpiPccWatchdog @ 0x1400513F0 (AcpiPccWatchdog.c)
 * Callees:
 *     AcpiPccLockSubspace @ 0x140051700 (AcpiPccLockSubspace.c)
 *     AcpiDiagTracePccCommandComplete @ 0x140051984 (AcpiDiagTracePccCommandComplete.c)
 *     AcpiPccUnlockSubspace @ 0x140051A9C (AcpiPccUnlockSubspace.c)
 *     AcpiPccIsCommandCompleteSet @ 0x140064150 (AcpiPccIsCommandCompleteSet.c)
 *     AcpiPccReadErrorStatus @ 0x140064260 (AcpiPccReadErrorStatus.c)
 *     AcpiPccUpdateCommandCompleteStatus @ 0x140064380 (AcpiPccUpdateCommandCompleteStatus.c)
 *     AcpiPccUpdateSciRefCount @ 0x1400643EC (AcpiPccUpdateSciRefCount.c)
 */

__int64 __fastcall AcpiPccCommandComplete(char *a1)
{
  int v1; // edx
  char v2; // r14
  __int32 v3; // r15d
  char v4; // r12
  char v5; // bp
  char v6; // r13
  int v7; // esi
  LARGE_INTEGER PerformanceCounter; // rbx
  char IsCommandCompleteSet; // bl
  __int64 ErrorStatus; // rax
  unsigned __int8 v12; // cl
  __int64 v13; // rbx
  int v14; // ecx
  void *v15; // rdx
  char *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // eax
  char v21; // [rsp+80h] [rbp+8h] BYREF
  int v22; // [rsp+88h] [rbp+10h]

  v1 = *((_DWORD *)a1 + 1);
  v21 = 0;
  v2 = 0;
  v3 = _InterlockedExchange((volatile __int32 *)a1 + 140, 0);
  v4 = 0;
  v22 = v1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( !v3 )
    goto LABEL_26;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  AcpiPccLockSubspace(a1, &v21);
  v6 = (*((_DWORD *)a1 + 2) >> 1) & 0xF;
  *((LARGE_INTEGER *)a1 + 52) = PerformanceCounter;
  AcpiPccUpdateSciRefCount(a1, 0LL);
  KeCancelTimer2(a1 + 568);
  IsCommandCompleteSet = AcpiPccIsCommandCompleteSet(a1);
  ErrorStatus = AcpiPccReadErrorStatus(a1);
  v12 = *a1;
  v4 = ErrorStatus;
  if ( *a1 == -1 )
  {
    v2 = *(_BYTE *)(*((_QWORD *)a1 + 7) + 12LL);
  }
  else if ( v12 < 3u )
  {
    v2 = *(_BYTE *)(*((_QWORD *)a1 + 7) + 4LL);
  }
  else if ( (unsigned __int8)(v12 - 3) <= 1u )
  {
    v2 = *(_BYTE *)(*((_QWORD *)a1 + 7) + 12LL);
  }
  if ( IsCommandCompleteSet )
  {
    if ( ErrorStatus )
      v7 = -1073741435;
  }
  else
  {
    v7 = -1073741643;
  }
  AcpiPccUpdateCommandCompleteStatus(a1);
  v13 = 0LL;
  v14 = *((_DWORD *)a1 + 2) & 0x1E;
  if ( v14 == 12 )
  {
    v15 = (void *)v7;
  }
  else
  {
    if ( v14 != 20 )
    {
      v17 = a1 + 360;
      v16 = (char *)*((_QWORD *)a1 + 45);
      if ( v16 == a1 + 360 )
      {
        v19 = *((_DWORD *)a1 + 2) & 0xFFFFFFE1 | 6;
      }
      else
      {
        v13 = *((_QWORD *)a1 + 45);
        if ( *((_QWORD **)v16 + 1) != v17 || (v18 = *(_QWORD *)v16, *(char **)(*(_QWORD *)v16 + 8LL) != v16) )
          __fastfail(3u);
        *v17 = v18;
        *(_QWORD *)(v18 + 8) = v17;
        v19 = *((_DWORD *)a1 + 2) & 0xFFFFFFE1 | 0xA;
      }
      *((_DWORD *)a1 + 2) = v19;
      goto LABEL_24;
    }
    v15 = 0LL;
  }
  KeInsertQueueDpc((PRKDPC)(a1 + 712), v15, 0LL);
LABEL_24:
  LOBYTE(v16) = v21;
  v5 = (*((_DWORD *)a1 + 2) >> 1) & 0xF;
  AcpiPccUnlockSubspace(a1, v16);
  if ( v13 )
  {
    *(_DWORD *)(v13 + 40) = 0;
    KeSetEvent((PRKEVENT)(v13 + 16), 0, 0);
  }
LABEL_26:
  LOBYTE(v1) = v2;
  return AcpiDiagTracePccCommandComplete(v22, v1, v3, v6, v5, v4, v7);
}
