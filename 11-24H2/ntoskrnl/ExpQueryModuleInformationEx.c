/*
 * XREFs of ExpQueryModuleInformationEx @ 0x1407B54FC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmEnumerateSystemImagesShared @ 0x1404B09EC (MmEnumerateSystemImagesShared.c)
 */

__int64 __fastcall ExpQueryModuleInformationEx(int a1, _WORD *a2, unsigned int a3, int a4, int *a5)
{
  __int64 result; // rax
  _DWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  _WORD *v7; // [rsp+38h] [rbp-30h]
  unsigned int v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+44h] [rbp-24h]
  int *v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+54h] [rbp-14h]
  int v13; // [rsp+58h] [rbp-10h]

  v6[1] = 0;
  v11 = a1;
  v13 = a4;
  v12 = 0;
  v10 = a5;
  v9 = 2;
  if ( a3 < 2 )
  {
    if ( a5 )
      *a5 = 2;
    v6[0] = -1073741820;
  }
  else
  {
    *a2 = 0;
    v6[0] = 0;
  }
  v7 = a2;
  v8 = a3;
  result = MmEnumerateSystemImagesShared((__int64)ExpQueryModuleInformationImageEx, (__int64)v6);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741820 )
  {
    *a5 = v9;
    return v6[0];
  }
  return result;
}
