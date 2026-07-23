/*
 * XREFs of PnpGetDeviceInterfacePropertyData @ 0x1408B3704
 * Callers:
 *     IoGetDeviceInterfacePropertyData @ 0x1408B36C0 (IoGetDeviceInterfacePropertyData.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404ABF0C (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpGetDeviceInterfacePropertyData(
        unsigned __int16 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _WORD *v11; // rsi
  wchar_t *Buffer; // rbp
  __int64 v13; // r8
  _WORD *v14; // rcx
  unsigned __int64 v15; // rdx
  _WORD *Pool2; // rax
  _WORD *v17; // rbx
  unsigned int ObjectProperty; // ebx
  _WORD *v20; // rax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v22[176]; // [rsp+70h] [rbp-F8h] BYREF

  memset_0(v22, 0, 0xAAuLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  v11 = 0LL;
  if ( !a1 || !*((_QWORD *)a1 + 1) || !*a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    DestinationString.MaximumLength = 170;
    DestinationString.Buffer = (wchar_t *)v22;
    if ( a3 == 4096 )
      return (unsigned int)-1073741823;
    DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
    if ( (int)DownLevelLangIDToLanguageName(a3, word_140E623D0, 64, 2) <= 0 )
      return (unsigned int)-1073741823;
    RtlInitUnicodeString(&DestinationString, word_140E623D0);
    Buffer = DestinationString.Buffer;
  }
  else
  {
    Buffer = 0LL;
  }
  v13 = a1[1];
  if ( (unsigned __int16)v13 < 2u || (v14 = (_WORD *)*((_QWORD *)a1 + 1)) == 0LL )
  {
    v11 = 0LL;
    goto LABEL_16;
  }
  v15 = *a1;
  if ( (unsigned __int16)v15 > (unsigned __int16)v13 )
  {
    ObjectProperty = -1073741811;
  }
  else
  {
    if ( (_WORD)v15 )
    {
      if ( !*v14
        || (_WORD)v15 == (_WORD)v13 && !v14[((unsigned __int64)*a1 >> 1) - 1]
        || v15 <= v13 - 2 && (!v14[(v15 >> 1) - 1] || !v14[v15 >> 1]) )
      {
        goto LABEL_26;
      }
      Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, v15 + 2, 0x75737050u);
      v17 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, *((const void **)a1 + 1), *a1);
        v11 = v17;
        v17[(unsigned __int64)*a1 >> 1] = 0;
LABEL_16:
        ObjectProperty = PnpGetObjectProperty(PiPnpRtlCtx, (_DWORD)v11, 3, 0, (__int64)Buffer, a2, a8, a6, a5, a7, 0);
        goto LABEL_17;
      }
    }
    else
    {
      if ( !*v14 )
      {
LABEL_26:
        v11 = (_WORD *)*((_QWORD *)a1 + 1);
        goto LABEL_16;
      }
      v20 = (_WORD *)ExAllocatePool2(0x100uLL, 2uLL, 0x75737050u);
      if ( v20 )
      {
        *v20 = 0;
        v11 = v20;
        goto LABEL_16;
      }
    }
    ObjectProperty = -1073741670;
  }
LABEL_17:
  PnpUnicodeStringToWstrFree(v11, a1);
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return ObjectProperty;
}
