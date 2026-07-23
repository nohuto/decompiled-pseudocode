/*
 * XREFs of ExpQueryModuleInformation @ 0x140A7F698
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmEnumerateSystemImagesShared @ 0x1404B09EC (MmEnumerateSystemImagesShared.c)
 */

__int64 __fastcall ExpQueryModuleInformation(int a1, _DWORD *a2, unsigned int a3, int *a4)
{
  __int64 result; // rax
  unsigned int v8; // ecx
  _QWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+44h] [rbp-24h]
  int *v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]

  v9[0] = 0LL;
  v13 = a1;
  v14 = 0;
  v12 = a4;
  v11 = 8;
  v9[1] = a2 + 2;
  v10 = a3;
  result = MmEnumerateSystemImagesShared((__int64)ExpQueryModuleInformationImage, (__int64)v9);
  v8 = -1073741820;
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741820 )
  {
    *a4 = v11;
    if ( a3 >= 8 )
    {
      *a2 = v14;
      return LODWORD(v9[0]);
    }
    return v8;
  }
  return result;
}
