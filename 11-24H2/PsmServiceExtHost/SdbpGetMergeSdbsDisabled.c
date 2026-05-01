/*
 * XREFs of SdbpGetMergeSdbsDisabled @ 0x180093DF4
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x18009321C (SdbpGetManifestedMergeStubAlloc.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbpGetMergeSdbsSupported @ 0x180093EF8 (SdbpGetMergeSdbsSupported.c)
 *     AslRegistryGetKey @ 0x18009DBE8 (AslRegistryGetKey.c)
 *     AslRegistryGetUInt32 @ 0x18009DEDC (AslRegistryGetUInt32.c)
 */

__int64 __fastcall SdbpGetMergeSdbsDisabled(_DWORD *a1)
{
  unsigned int v2; // ebx
  int Key; // eax
  char *v4; // rdi
  int UInt32; // eax
  int v7; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  Handle = 0LL;
  if ( !(unsigned int)SdbpGetMergeSdbsSupported() )
    return (unsigned int)-1073741772;
  Key = AslRegistryGetKey(
          &Handle,
          L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates",
          2147483904LL);
  v4 = (char *)Handle;
  v2 = Key;
  if ( Key < 0 )
  {
    if ( Key == -1073741772 )
      goto LABEL_10;
    goto LABEL_5;
  }
  UInt32 = AslRegistryGetUInt32(&v7, Handle, L"DisableDoubleQuerySdbs");
  v2 = UInt32;
  if ( UInt32 == -1073741772 )
  {
    v2 = 0;
    *a1 = 0;
  }
  else
  {
    if ( UInt32 < 0 )
    {
LABEL_5:
      AslLogCallPrintf(1LL);
      goto LABEL_10;
    }
    v2 = 0;
    *a1 = v7 != 0;
  }
LABEL_10:
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v4);
  return v2;
}
