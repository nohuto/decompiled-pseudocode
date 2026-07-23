/*
 * XREFs of PiDevCfgResolveMultiSzValue @ 0x1409CF204
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PnpValidateStringData @ 0x1404A7600 (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x1404ADA64 (PnpValidateMultiSzData.c)
 *     PnpMultiSzContainsString @ 0x1404B23C0 (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryMultiSz @ 0x1404CBA24 (PnpValidateRegistryMultiSz.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveMultiSzValue(
        int a1,
        unsigned int a2,
        _WORD *a3,
        int a4,
        HANDLE KeyHandle,
        const WCHAR *a6,
        unsigned int *a7,
        __int64 *a8)
{
  __int64 v8; // r15
  size_t v9; // rbx
  _WORD *v11; // r14
  unsigned int v13; // edi
  char v14; // al
  NTSTATUS RegistryValue; // eax
  unsigned int *v16; // r13
  unsigned int v17; // esi
  void *Pool2; // rax
  unsigned int v19; // ecx
  int v20; // r12d
  wchar_t *v21; // r13
  __int64 v22; // rax
  unsigned int v23; // r12d
  const WCHAR *v24; // r12
  unsigned int v25; // edi
  bool v26; // zf
  unsigned int v27; // ebx
  unsigned int v28; // eax
  void *v29; // rax
  NTSTATUS v31; // [rsp+20h] [rbp-30h]
  unsigned int v32; // [rsp+20h] [rbp-30h]
  PVOID P; // [rsp+28h] [rbp-28h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  v8 = 0LL;
  v9 = a2;
  P = 0LL;
  v11 = a3;
  *a7 = 0;
  DestinationString = 0LL;
  *(_OWORD *)Src = 0LL;
  *a8 = 0LL;
  if ( a1 == 1 || a1 == 2 )
  {
    v14 = PnpValidateStringData((__int64)a3, a2);
  }
  else
  {
    if ( a1 != 7 )
      return (unsigned int)-1073741823;
    v14 = PnpValidateMultiSzData(a3, a2);
  }
  if ( !v14 )
    return (unsigned int)-1073741823;
  RegistryValue = IopGetRegistryValue(KeyHandle, a6, 0, &P);
  v16 = (unsigned int *)P;
  v13 = RegistryValue;
  v31 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryMultiSz(P) )
    {
      v13 = -1073741823;
      goto LABEL_57;
    }
    if ( (a4 & 0x40000) != 0 )
    {
      v17 = v16[3];
      Src[0] = (char *)v16 + v16[2];
      if ( !v17 )
        v17 = 2;
      Pool2 = (void *)ExAllocatePool2(0x100uLL, v17 + (unsigned int)v9, 0x63647050u);
      v19 = 0;
      v8 = (__int64)Pool2;
      if ( !Pool2 )
        goto LABEL_15;
      if ( v17 > 2 )
      {
        memmove(Pool2, Src[0], v17);
        v19 = v17 - 2;
      }
      v20 = a4 & 0x20000;
      v32 = v19;
      if ( a1 == 7 )
      {
        if ( v20 )
        {
          memmove((void *)(v8 + v19), v11, v9);
          v17 = v17 + v9 - 2;
          goto LABEL_46;
        }
        if ( *v11 )
        {
          v21 = (wchar_t *)Src[0];
          do
          {
            v22 = -1LL;
            do
              ++v22;
            while ( v11[v22] );
            v23 = 2 * v22 + 2;
            if ( !PnpMultiSzContainsString(v21, v11) )
            {
              memmove((void *)(v8 + v32), v11, v23);
              v32 += v23;
              v17 += v23;
            }
            v11 += (unsigned __int64)v23 >> 1;
          }
          while ( *v11 );
LABEL_45:
          v16 = (unsigned int *)P;
        }
      }
      else if ( v20 || v17 == 2 || !PnpMultiSzContainsString((wchar_t *)Src[0], v11) )
      {
        memmove((void *)(v8 + v32), v11, v9);
        v17 += v9;
      }
    }
    else
    {
      v8 = ExAllocatePool2(0x100uLL, v16[3], 0x63647050u);
      if ( !v8 )
      {
LABEL_15:
        v13 = -1073741670;
        goto LABEL_57;
      }
      if ( a1 != 7 )
        RtlInitUnicodeString(&DestinationString, v11);
      v24 = (const WCHAR *)((char *)v16 + v16[2]);
      v17 = 2;
      if ( *v24 )
      {
        v25 = 0;
        do
        {
          RtlInitUnicodeString((PUNICODE_STRING)Src, v24);
          if ( a1 == 7 )
            v26 = PnpMultiSzContainsString(v11, (wchar_t *)Src[1]) == 0LL;
          else
            v26 = RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)Src, 1u) == 0;
          if ( v26 )
          {
            v27 = LOWORD(Src[0]) + 2;
            memmove((void *)(v8 + v25), Src[1], v27);
            v25 += v27;
            v17 += v27;
          }
          v24 += ((unsigned __int64)LOWORD(Src[0]) >> 1) + 1;
        }
        while ( *v24 );
        v13 = v31;
        goto LABEL_45;
      }
    }
LABEL_46:
    if ( !v8 )
      goto LABEL_56;
    goto LABEL_54;
  }
  if ( RegistryValue != -1073741772 )
    goto LABEL_57;
  v13 = 0;
  if ( (a4 & 0x40000) == 0 )
  {
    v17 = 0;
    goto LABEL_56;
  }
  v28 = v9 + 2;
  if ( a1 == 7 )
    v28 = v9;
  v17 = v28;
  v29 = (void *)ExAllocatePool2(0x100uLL, v28, 0x63647050u);
  v8 = (__int64)v29;
  if ( !v29 )
    goto LABEL_15;
  memmove(v29, v11, v9);
LABEL_54:
  *(_WORD *)(v8 + 2 * ((unsigned __int64)v17 >> 1) - 2) = 0;
LABEL_56:
  *a7 = v17;
  *a8 = v8;
LABEL_57:
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  return v13;
}
