/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x140114C7C
 * Callers:
 *     xxxLW_LoadFonts @ 0x140116060 (xxxLW_LoadFonts.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x140220D58 (-xxxLoadPermanentFonts@@YAHXZ.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1401163A8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ExchangeW32ThreadLock @ 0x140117394 (ExchangeW32ThreadLock.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFonts(
        unsigned int a1,
        unsigned int a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  unsigned int *v4; // r15
  ULONG v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int *v14; // rsi
  struct tagTHREADINFO *v15; // rax
  ULONG v16; // r14d
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int128 v22; // [rsp+30h] [rbp-49h] BYREF
  __int128 v23; // [rsp+40h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-29h]
  _QWORD v25[2]; // [rsp+58h] [rbp-21h] BYREF
  void (*v26)(void *); // [rsp+68h] [rbp-11h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  LOWORD(v4) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v24 = -1LL;
  v26 = 0LL;
  v7 = 544;
  v8 = 0LL;
  v22 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v23 = 0LL;
  if ( a2 == 56 )
  {
    v8 = CreateProfileUserName(&v23);
    if ( !v8 )
    {
      if ( v24 != -1 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v23, v21);
      return 0LL;
    }
  }
  v10 = (void *)OpenCacheKeyEx(v8, a2, 131097LL, 0LL);
  if ( v24 != -1 )
  {
    PopAndFreeAlwaysW32ThreadLock((__int64)&v23, v9);
    v24 = -1LL;
  }
  if ( !v10 )
    return 0LL;
  v11 = xxxbEnumerateRegistryFontsInternal(v10, a1);
  v14 = (unsigned int *)Win32AllocPoolZInit(544LL, 1919972181LL);
  if ( !v14 )
    return v11;
  v15 = PtiCurrent(v13, v12);
  v16 = 0;
  v25[0] = *((_QWORD *)v15 + 48);
  *((_QWORD *)v15 + 48) = v25;
  v26 = Win32FreePool;
  v25[1] = v14;
  while ( 1 )
  {
    v17 = ZwEnumerateKey(v10, v16, KeyBasicInformation, v14, v7 - 2, &ResultLength);
    if ( v17 != -2147483643 && v17 != -1073741789 )
      break;
    ResultLength += 2;
    v20 = Win32AllocPoolZInit(ResultLength, 1919972181LL);
    v4 = (unsigned int *)v20;
    if ( v20 )
    {
      ExchangeW32ThreadLock(v20, v25);
      v7 = ResultLength;
      v14 = v4;
      v17 = ZwEnumerateKey(v10, v16, KeyBasicInformation, v4, ResultLength - 2, &ResultLength);
      LOWORD(v4) = 0;
      if ( v17 != -2147483643 && v17 != -1073741789 )
        break;
    }
LABEL_13:
    ++v16;
  }
  if ( v17 >= 0 )
  {
    *((_WORD *)v14 + ((unsigned __int64)v14[3] >> 1) + 8) = (_WORD)v4;
    *((_QWORD *)&v22 + 1) = v14 + 4;
    LOWORD(v22) = *((_WORD *)v14 + 6);
    WORD1(v22) = v22;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v10;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v11 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, a1);
      ZwClose(KeyHandle);
    }
    goto LABEL_13;
  }
  ZwClose(v10);
  PopAndFreeW32ThreadLock((__int64)v25, v18);
  return v11;
}
