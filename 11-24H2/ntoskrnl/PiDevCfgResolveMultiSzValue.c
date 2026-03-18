/*
 * XREFs of PiDevCfgResolveMultiSzValue @ 0x14099CA94
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x14099BA04 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     PnpValidateStringData @ 0x1404ACF1C (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x1404B3254 (PnpValidateMultiSzData.c)
 *     PnpMultiSzContainsString @ 0x1404B7A70 (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryMultiSz @ 0x1404D2868 (PnpValidateRegistryMultiSz.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveMultiSzValue(
        int a1,
        unsigned int a2,
        _WORD *a3,
        int a4,
        HANDLE KeyHandle,
        __int64 a6,
        unsigned int *a7,
        __int64 *a8)
{
  __int64 v8; // r15
  size_t v9; // rbx
  _WORD *v11; // r14
  unsigned int v13; // edi
  char v14; // al
  int RegistryValue; // eax
  unsigned int v16; // esi
  void *v17; // rax
  unsigned int v18; // ecx
  int v19; // r12d
  __int64 v20; // rax
  unsigned int v21; // r12d
  const WCHAR *v22; // r12
  unsigned int v23; // edi
  bool v24; // zf
  unsigned int v25; // ebx
  unsigned int v26; // eax
  void *Pool2; // rax
  int v29; // [rsp+20h] [rbp-30h]
  unsigned int v30; // [rsp+20h] [rbp-30h]
  void *Src[2]; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  v8 = 0LL;
  v9 = a2;
  v11 = a3;
  *a7 = 0;
  DestinationString = 0LL;
  *(_OWORD *)Src = 0LL;
  *a8 = 0LL;
  if ( a1 == 1 || a1 == 2 )
  {
    v14 = PnpValidateStringData((__int64)a3, a2);
LABEL_6:
    if ( !v14 )
      return (unsigned int)-1073741823;
    RegistryValue = IopGetRegistryValue(KeyHandle);
    v13 = RegistryValue;
    v29 = RegistryValue;
    if ( RegistryValue < 0 )
    {
      if ( RegistryValue != -1073741772 )
        return v13;
      v13 = 0;
      if ( (a4 & 0x40000) == 0 )
      {
        v16 = 0;
        goto LABEL_54;
      }
      v26 = v9 + 2;
      if ( a1 == 7 )
        v26 = v9;
      v16 = v26;
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v8 = (__int64)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memmove(Pool2, v11, v9);
    }
    else
    {
      if ( !PnpValidateRegistryMultiSz(0LL) )
        return (unsigned int)-1073741823;
      if ( (a4 & 0x40000) != 0 )
      {
        v16 = MEMORY[0xC];
        Src[0] = (void *)MEMORY[8];
        if ( !MEMORY[0xC] )
          v16 = 2;
        v17 = (void *)ExAllocatePool2(0x100uLL);
        v18 = 0;
        v8 = (__int64)v17;
        if ( !v17 )
          return (unsigned int)-1073741670;
        if ( v16 > 2 )
        {
          memmove(v17, Src[0], v16);
          v18 = v16 - 2;
        }
        v19 = a4 & 0x20000;
        v30 = v18;
        if ( a1 == 7 )
        {
          if ( v19 )
          {
            memmove((void *)(v8 + v18), v11, v9);
            v16 = v16 + v9 - 2;
          }
          else
          {
            for ( ; *v11; v11 += (unsigned __int64)v21 >> 1 )
            {
              v20 = -1LL;
              do
                ++v20;
              while ( v11[v20] );
              v21 = 2 * v20 + 2;
              if ( !PnpMultiSzContainsString((wchar_t *)Src[0], v11) )
              {
                memmove((void *)(v8 + v30), v11, v21);
                v30 += v21;
                v16 += v21;
              }
            }
          }
        }
        else if ( v19 || v16 == 2 || !PnpMultiSzContainsString((wchar_t *)Src[0], v11) )
        {
          memmove((void *)(v8 + v30), v11, v9);
          v16 += v9;
        }
      }
      else
      {
        v8 = ExAllocatePool2(0x100uLL);
        if ( !v8 )
          return (unsigned int)-1073741670;
        if ( a1 != 7 )
          RtlInitUnicodeString(&DestinationString, v11);
        v22 = (const WCHAR *)MEMORY[8];
        v16 = 2;
        if ( *(_WORD *)MEMORY[8] )
        {
          v23 = 0;
          do
          {
            RtlInitUnicodeString((PUNICODE_STRING)Src, v22);
            if ( a1 == 7 )
              v24 = PnpMultiSzContainsString(v11, (wchar_t *)Src[1]) == 0LL;
            else
              v24 = RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)Src, 1u) == 0;
            if ( v24 )
            {
              v25 = LOWORD(Src[0]) + 2;
              memmove((void *)(v8 + v23), Src[1], v25);
              v23 += v25;
              v16 += v25;
            }
            v22 += ((unsigned __int64)LOWORD(Src[0]) >> 1) + 1;
          }
          while ( *v22 );
          v13 = v29;
        }
      }
      if ( !v8 )
      {
LABEL_54:
        *a7 = v16;
        *a8 = v8;
        return v13;
      }
    }
    *(_WORD *)(v8 + 2 * ((unsigned __int64)v16 >> 1) - 2) = 0;
    goto LABEL_54;
  }
  if ( a1 == 7 )
  {
    v14 = PnpValidateMultiSzData(a3, a2);
    goto LABEL_6;
  }
  return (unsigned int)-1073741823;
}
