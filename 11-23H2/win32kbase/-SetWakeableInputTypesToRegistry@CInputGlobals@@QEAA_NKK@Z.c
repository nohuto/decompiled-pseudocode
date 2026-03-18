/*
 * XREFs of ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x1C01DC9AC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C0095F84 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 */

bool __fastcall CInputGlobals::SetWakeableInputTypesToRegistry(CInputGlobals *this, int a2, int a3)
{
  __int64 v3; // rdi
  NTSTATUS v6; // ebx
  void *PointerDeviceConfigurationKey; // r14
  unsigned int v8; // ebp
  char *v9; // rsi
  const WCHAR *v10; // rdx
  int v11; // ecx
  int v12; // edx
  int v13; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  CInputGlobals *Data; // [rsp+70h] [rbp+8h] BYREF

  Data = this;
  v3 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  RIMLockExclusive(*((__int64 *)&WPP_MAIN_CB.Reserved + 1));
  v6 = 0;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(8u, 0x20006u);
  if ( PointerDeviceConfigurationKey )
  {
    v8 = 0;
    v9 = (char *)&unk_1C0289850;
    do
    {
      if ( (*(_DWORD *)v9 & a2) != 0 )
      {
        v10 = (const WCHAR *)*((_QWORD *)v9 + 1);
        LODWORD(Data) = (*(_DWORD *)v9 & a3) != 0;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v10);
        v6 = ZwSetValueKey(PointerDeviceConfigurationKey, &DestinationString, 0, 4u, &Data, 4u);
        if ( v6 < 0 )
          break;
        v11 = *(_DWORD *)v9;
        v12 = *(_DWORD *)(v3 + 100);
        if ( (_DWORD)Data )
          v13 = v11 | v12;
        else
          v13 = ~v11 & v12;
        *(_DWORD *)(v3 + 100) = v13;
      }
      ++v8;
      v9 += 16;
    }
    while ( v8 < 5 );
    ZwClose(PointerDeviceConfigurationKey);
  }
  else
  {
    v6 = -1073741811;
  }
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v6 >= 0;
}
