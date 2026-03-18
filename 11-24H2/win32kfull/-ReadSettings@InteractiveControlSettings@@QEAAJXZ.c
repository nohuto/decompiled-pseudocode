/*
 * XREFs of ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x14012B65C
 * Callers:
 *     ?UpdateExternalParameters@InteractiveControlManager@@QEAAJXZ @ 0x14012B468 (-UpdateExternalParameters@InteractiveControlManager@@QEAAJXZ.c)
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x14012B558 (--0InteractiveControlManager@@AEAA@XZ.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1402DE8F0 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x14012D0B4 (-_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlSettings::ReadSettings(InteractiveControlSettings *this, __int64 a2, int a3)
{
  unsigned int *v4; // rbx
  int v5; // r15d
  __int64 v6; // rsi
  const WCHAR *v7; // rdx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  char KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+54h] [rbp-1Ch]
  int v20; // [rsp+58h] [rbp-18h]
  unsigned int v21; // [rsp+5Ch] [rbp-14h]

  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v4 = (unsigned int *)&unk_14034A008;
  v5 = InteractiveControlSettings::_OpenDeviceKey(this, 0x20019u, a3, &KeyHandle);
  v6 = 29LL;
  if ( v5 < 0 )
  {
    do
    {
      *((_DWORD *)this + 2 * *v4) = v4[1];
      v12 = *v4;
      v13 = v4[1];
      v4 += 4;
      *((_DWORD *)this + 2 * v12 + 1) = v13;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    do
    {
      v7 = (const WCHAR *)*((_QWORD *)v4 - 1);
      if ( v7 )
      {
        ResultLength = 0;
        RtlInitUnicodeString(&DestinationString, v7);
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength) < 0
          || v19 != 4
          || (v8 = v21, v20 != 4) )
        {
          v8 = v4[1];
        }
        *((_DWORD *)this + 2 * *v4) = v8;
        *((_DWORD *)this + 2 * *v4 + 1) = v4[1];
      }
      v4 += 4;
      --v6;
    }
    while ( v6 );
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  v9 = *((_DWORD *)this + 12);
  if ( v9 > 2 )
  {
    v14 = v9 << 8;
    if ( (unsigned int)(v9 - 3) > 7 )
      v10 = (v14 - 1536) / 4;
    else
      v10 = (v14 - 512) / 8;
  }
  else
  {
    v10 = 8 * v9;
  }
  *((_DWORD *)this + 14) = v10;
  return (unsigned int)v5;
}
