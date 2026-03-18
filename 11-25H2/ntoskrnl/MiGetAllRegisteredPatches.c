/*
 * XREFs of MiGetAllRegisteredPatches @ 0x1407E296C
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     MiCompareHotPatchNodes @ 0x1407E25E4 (MiCompareHotPatchNodes.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x140932190 (RtlDuplicateUnicodeString.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A1DD10 (MiFindProcessImageHotPatchRecord.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetAllRegisteredPatches(int a1, int a2, int a3, _QWORD *a4)
{
  _QWORD *v5; // r15
  struct _KTHREAD *CurrentThread; // r13
  __int64 *v8; // rbx
  _QWORD *v9; // rbx
  unsigned __int64 i; // rsi
  int v11; // eax
  __int64 Pool; // rax
  _QWORD *v13; // rdi
  NTSTATUS v14; // r14d
  unsigned __int64 v15; // rcx
  _QWORD **v16; // rax
  _QWORD *v17; // rcx
  bool v18; // zf
  void *j; // rcx
  int ProcessImageHotPatchRecord; // eax
  __int64 v21; // rax
  _QWORD *v22; // rbx
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  __int128 v25; // [rsp+48h] [rbp-38h] BYREF
  __int128 v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+68h] [rbp-18h]
  __int64 v28; // [rsp+78h] [rbp-8h]

  v28 = 0LL;
  v5 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)&v26 + 1) = __PAIR64__(a3, a2);
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((__int64)&qword_140E37250, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37250, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E37250, 0, v8, (unsigned __int64)&qword_140E37250);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = (_QWORD *)qword_140E37240;
  i = 0LL;
  while ( v9 )
  {
    v11 = MiCompareHotPatchNodes((__int64)&v25, (__int64)v9);
    if ( v11 < 0 )
      goto LABEL_10;
    if ( v11 <= 0 )
    {
      i = (unsigned __int64)v9;
LABEL_10:
      v9 = (_QWORD *)*v9;
    }
    else
    {
      v9 = (_QWORD *)v9[1];
    }
  }
  while ( i && !(unsigned int)MiCompareHotPatchNodes((__int64)&v25, i) )
  {
    Pool = MiAllocatePool(0x100uLL, 0x38uLL, 1917349197);
    v13 = (_QWORD *)Pool;
    if ( !Pool )
    {
      v14 = -1073741670;
      goto LABEL_25;
    }
    RtlInitUnicodeString((PUNICODE_STRING)(Pool + 40), 0LL);
    v9 = 0LL;
    v14 = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(i + 40), (PUNICODE_STRING)(v13 + 5));
    if ( v14 < 0 )
      goto LABEL_25;
    *v13 = v5;
    v15 = i;
    v16 = *(_QWORD ***)(i + 8);
    v5 = v13;
    if ( v16 )
    {
      v17 = *v16;
      for ( i = *(_QWORD *)(i + 8); v17; v17 = (_QWORD *)*v17 )
        i = (unsigned __int64)v17;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v15 )
          break;
        v15 = i;
      }
    }
  }
  ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord(a1, a2, a3, 1, &DestinationString);
  v14 = ProcessImageHotPatchRecord;
  if ( ProcessImageHotPatchRecord >= 0 )
  {
    v21 = MiAllocatePool(0x100uLL, 0x38uLL, 1917349197);
    v13 = (_QWORD *)v21;
    if ( v21 )
    {
      *(UNICODE_STRING *)(v21 + 40) = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      *v13 = v5;
      v5 = v13;
      v13 = v9;
      goto LABEL_38;
    }
    v14 = -1073741670;
  }
  else
  {
    v13 = v9;
    if ( ProcessImageHotPatchRecord == -1073741275 )
    {
LABEL_38:
      v14 = (int)v9;
      *a4 = v5;
      v5 = v9;
    }
  }
LABEL_25:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37250, (signed __int64)v9, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E37250);
  KeAbPostRelease((ULONG_PTR)&qword_140E37250);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !v13 )
    goto LABEL_41;
  RtlFreeAnsiString((PUNICODE_STRING)(v13 + 5));
  for ( j = v13; ; j = v22 )
  {
    ExFreePoolWithTag(j, 0);
LABEL_41:
    if ( !v5 )
      break;
    v22 = v5;
    v5 = (_QWORD *)*v5;
    RtlFreeAnsiString((PUNICODE_STRING)(v22 + 5));
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v14;
}
