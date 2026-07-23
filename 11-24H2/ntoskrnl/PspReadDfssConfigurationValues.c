/*
 * XREFs of PspReadDfssConfigurationValues @ 0x1405E20E0
 * Callers:
 *     PspDfssConfigurationChangeHandler @ 0x140771E40 (PspDfssConfigurationChangeHandler.c)
 *     PspIsDfssEnabled @ 0x140771FB4 (PspIsDfssEnabled.c)
 * Callees:
 *     ExSetTimerResolution @ 0x140410F10 (ExSetTimerResolution.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405C5034 (KeUpdateGroupSchedulingConstants.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwNotifyChangeKey @ 0x1406A9810 (ZwNotifyChangeKey.c)
 *     RtlQueryImageFileKeyOption @ 0x140A173C0 (RtlQueryImageFileKeyOption.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PspReadDfssConfigurationValues()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  int ImageFileKeyOption; // eax
  unsigned int *v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rbx
  PIO_APC_ROUTINE v7; // r8
  HANDLE v8; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( PspDfssConfigurationKey )
  {
    KeyHandle = PspDfssConfigurationKey;
  }
  else
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x11u, &ObjectAttributes) < 0 )
      return;
  }
  v0 = &PspDfssConfigValues;
  v1 = 5LL;
  do
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL);
    v3 = *(unsigned int **)v0;
    if ( ImageFileKeyOption >= 0 )
    {
      v4 = v0[5];
      if ( *v3 < v4 )
        *v3 = v4;
      v5 = v0[6];
      if ( **(_DWORD **)v0 > v5 )
        **(_DWORD **)v0 = v5;
    }
    else
    {
      *v3 = v0[4];
    }
    v0 += 8;
    --v1;
  }
  while ( v1 );
  if ( PspDfssConfigurationNotify )
  {
    KeUpdateGroupSchedulingConstants(0);
  }
  else
  {
    PspDfssConfigurationNotify = (PIO_APC_ROUTINE)ExAllocatePool2(0x40uLL, 0x30uLL, 0x73736644u);
    if ( !PspDfssConfigurationNotify )
    {
      ZwClose(KeyHandle);
      return;
    }
    PspDfssConfigurationKey = KeyHandle;
  }
  v6 = 10000LL * (unsigned int)PsDfssDesiredTimerResolutionMs;
  if ( v6 > 0xFFFFFFFF || (unsigned int)v6 >= KeMaximumIncrement )
    LODWORD(v6) = -1;
  if ( PsDfssActiveTimerResolution100ns != (_DWORD)v6 )
  {
    if ( PsDfssActiveTimerResolution100ns != -1 )
      ExSetTimerResolution(PsDfssActiveTimerResolution100ns, 0);
    if ( (_DWORD)v6 != -1 )
      ExSetTimerResolution(v6, 1u);
    PsDfssActiveTimerResolution100ns = v6;
  }
  v7 = PspDfssConfigurationNotify;
  v8 = PspDfssConfigurationKey;
  *((_QWORD *)PspDfssConfigurationNotify + 3) = 0LL;
  *(_QWORD *)v7 = 0LL;
  *((_QWORD *)v7 + 2) = PspDfssConfigurationChangeHandler;
  if ( ZwNotifyChangeKey(v8, 0LL, v7, (PVOID)1, (PIO_STATUS_BLOCK)v7 + 2, 4u, 0, 0LL, 0, 1u) < 0 )
  {
    ZwClose(PspDfssConfigurationKey);
    PspDfssConfigurationKey = 0LL;
    ExFreePoolWithTag(PspDfssConfigurationNotify, 0x73736644u);
    PspDfssConfigurationNotify = 0LL;
  }
}
