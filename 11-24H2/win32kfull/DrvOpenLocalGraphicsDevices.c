/*
 * XREFs of DrvOpenLocalGraphicsDevices @ 0x14021ED7C
 * Callers:
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvOpenLocalGraphicsDevices(Gre::Base *a1)
{
  unsigned int v1; // edi
  int v2; // ebp
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 v5; // rbx
  PVOID *v6; // rsi
  __int64 *v7; // r14
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v9; // rcx
  int v10; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v13; // [rsp+60h] [rbp-48h]
  __int64 v14; // [rsp+70h] [rbp-38h]
  int v15; // [rsp+B0h] [rbp+8h] BYREF

  DestinationString = 0LL;
  v1 = 0;
  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  if ( !(unsigned int)DrvUpdateGraphicsDeviceList(1LL) )
    return 3221225473LL;
  v5 = *((_QWORD *)v3 + 149);
  if ( !v5 )
    return 0LL;
  do
  {
    v6 = (PVOID *)(v5 + 224);
    v7 = (__int64 *)(v5 + 136);
    if ( *(_QWORD *)(v5 + 224) )
      goto LABEL_9;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v5);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            &DestinationString,
                            0,
                            (PFILE_OBJECT *)(v5 + 224),
                            (PDEVICE_OBJECT *)(v5 + 136));
    v1 = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
    {
      WdLogSingleEntry1(4LL, DeviceObjectPointer);
      WdLogGlobalForLineNumber = 541;
      goto LABEL_13;
    }
    if ( (unsigned int)bSetDeviceSessionUsage(v5, 1LL) )
    {
LABEL_9:
      v2 = 1;
      if ( (*(_DWORD *)(v5 + 160) & 8) == 0 )
      {
        if ( *v6 )
        {
          v9 = *v7;
          v12[1] = VideoPortCallout;
          v13 = 0LL;
          v14 = 0LL;
          v15 = 0;
          v12[0] = v5;
          v10 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD *, int, int *, int, _QWORD, PWSTR))GreGdoDeviceIoControlEx)(
                  v9,
                  2301983LL,
                  v12,
                  40LL,
                  v12,
                  40,
                  &v15,
                  1,
                  *(_QWORD *)&DestinationString.Length,
                  DestinationString.Buffer);
          v1 = v10;
          if ( v10 < 0 )
          {
            WdLogSingleEntry1(4LL, v10);
            WdLogGlobalForLineNumber = 611;
          }
        }
      }
    }
    else
    {
      ObfDereferenceObject(*v6);
      *v7 = 0LL;
      v1 = -1073741790;
      *v6 = 0LL;
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 567;
    }
LABEL_13:
    v5 = *(_QWORD *)(v5 + 128);
  }
  while ( v5 );
  if ( v2 )
    return 0;
  return v1;
}
