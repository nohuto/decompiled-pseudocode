/*
 * XREFs of PoThermalCounterSetCallback @ 0x1409F7180
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     wcspbrk @ 0x1404FE1E0 (wcspbrk.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x1409F7360 (PcwAddInstance.c)
 *     PopThermalReadCounters @ 0x1409F73E8 (PopThermalReadCounters.c)
 */

__int64 __fastcall PoThermalCounterSetCallback(int a1, _QWORD *a2)
{
  NTSTATUS v4; // ebp
  struct _PCW_BUFFER *v6; // r13
  bool v7; // r12
  PVOID *i; // rbx
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  void *v10; // rdi
  const UNICODE_STRING *v11; // r14
  char *v12; // rax
  signed __int64 v13; // r8
  int v14; // edx
  int v15; // ecx
  ULONG v16; // r8d
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF

  v18 = 0LL;
  v4 = 0;
  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  if ( a1 == 2 )
  {
    v6 = (struct _PCW_BUFFER *)a2[3];
    v7 = 1;
  }
  else
  {
    if ( a1 != 3 )
      goto LABEL_3;
    v6 = (struct _PCW_BUFFER *)a2[3];
    v7 = wcspbrk(*(const wchar_t **)(a2[1] + 8LL), L"*?") != 0LL;
  }
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    if ( (*((_BYTE *)i + 65) & 2) != 0 )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)i[6], 0x6D546F50u);
      v10 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag
        && (v11 = *(const UNICODE_STRING **)(DeviceAttachmentBaseRefWithTag[39] + 40LL)) != 0LL )
      {
        if ( v7 )
          goto LABEL_18;
        v12 = *(char **)(a2[1] + 8LL);
        v13 = (char *)v11[8].Buffer - v12;
        do
        {
          v14 = *(unsigned __int16 *)&v12[v13];
          v15 = *(unsigned __int16 *)v12 - v14;
          if ( v15 )
            break;
          v12 += 2;
        }
        while ( v14 );
        if ( !v15 )
        {
LABEL_18:
          v18 = 0LL;
          if ( a1 == 3 )
          {
            v4 = PopThermalReadCounters(i, *a2, &v18);
            if ( v4 < 0 )
            {
              ObfDereferenceObjectWithTag(v10, 0x6D546F50u);
              break;
            }
          }
          v16 = *((_DWORD *)i + 124);
          Data.Data = &v18;
          Data.Size = 16;
          v4 = PcwAddInstance(v6, v11 + 8, v16, 1u, &Data);
        }
        ObfDereferenceObjectWithTag(v10, 0x6D546F50u);
        if ( v4 < 0 )
          break;
      }
      else
      {
        ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x6D546F50u);
      }
    }
  }
LABEL_3:
  PopReleaseRwLock(&PopPolicyDeviceLock);
  return (unsigned int)v4;
}
